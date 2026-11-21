#!/usr/bin/env python3
# Gera src/universal/builtins_data.h a partir de arquivos .ir escolhidos.
import os, sys, re

IRDB = "/home/user/uberguidoz/flipper-irdb"
OUT = "/home/user/cardputer/src/universal/builtins_data.h"

# protocolos que o firmware sabe enviar -> token do enum IrProto
PROTO = {
    "NEC": "PR_NEC", "NECext": "PR_NECEXT", "NEC42": "PR_NEC42",
    "NEC42ext": "PR_NEC42EXT", "Samsung32": "PR_SAMSUNG32",
    "RC5": "PR_RC5", "RC5X": "PR_RC5X", "RC6": "PR_RC6",
    "SIRC": "PR_SIRC", "SIRC15": "PR_SIRC15", "SIRC20": "PR_SIRC20",
    "RCA": "PR_RCA",
}

# Catalogo: categoria -> marca -> [(nome exibido, caminho relativo no IRDB)]
CATALOG = [
 ("TVs", [
   ("Samsung", [
     ("Samsung (universal)", "TVs/Samsung/Samsung_TV_Full.ir"),
     ("BN59-01179A",         "TVs/Samsung/Samsung_BN59-01179A.ir"),
     ("UN60JU6500",          "TVs/Samsung/Samsung_UN60JU6500.ir"),
     ("UE48JU6490U",         "TVs/Samsung/Samsung_UE48JU6490U.ir"),
     ("LE40R87BD",           "TVs/Samsung/Samsung_LE40R87BD.ir"),
   ]),
   ("LG", [
     ("AKB72914048",     "TVs/LG/LG_AKB72914048.ir"),
     ("AKB75375604",     "TVs/LG/LG_TV_AKB75375604.ir"),
     ("AKB75675311",     "TVs/LG/LG_AKB75675311.ir"),
     ("32LF650V",        "TVs/LG/LG_32LF650V.ir"),
     ("32LW4500",        "TVs/LG/LG_32LW4500.ir"),
   ]),
   ("Philips", [
     ("Ambilight 7956",  "TVs/Philips/Philips_TV_7956_Series.ir"),
     ("50PUT6103",       "TVs/Philips/Philips_50PUT6103_79.ir"),
     ("48OLED806",       "TVs/Philips/Philips_TV_48OLED806.ir"),
     ("32PFL4208T",      "TVs/Philips/Philips_32PFL4208T.ir"),
     ("Universal",       "TVs/Philips/Philips_TV_Universal.ir"),
   ]),
   ("TCL", [
     ("65C635K",         "TVs/TCL/TCL_65C635K.ir"),
     ("43S446",          "TVs/TCL/TCL_43S446.ir"),
     ("40S615",          "TVs/TCL/TCL_40S615.ir"),
     ("LED49D2930",      "TVs/TCL/TCL_LED49D2930.ir"),
     ("Roku TV",         "TVs/TCL/TCL_Roku_TV.ir"),
   ]),
   ("Sony", [
     ("RMT-TX100D",      "TVs/Sony/Sony_RMT_TX100D.ir"),
     ("RM-ED045",        "TVs/Sony/Sony_RM_ED045.ir"),
     ("Bravia XF80xx",   "TVs/Sony/Sony_Bravia_KD-55XF80xx-49XF80xx-43XF80xx.ir"),
   ]),
   ("Hisense", [
     ("EN3AH39H",        "TVs/Hisense/Hisense_EN3AH39H.ir"),
     ("EN3Y39H",         "TVs/Hisense/Hisense_EN3Y39H.ir"),
     ("32A4HAU",         "TVs/Hisense/Hisense_32A4HAU.ir"),
   ]),
   ("HTV", [
     ("HTV 8",           ""),
   ]),
 ]),
 ("Ar-condicionado", [
   ("LG",         [("LP1015WNR",   "ACs/LG/LG_LP1015WNR_AC.ir")]),
   ("Samsung",    [("AR13TYHZCWKN","ACs/Samsung/Samsung_AR13TYHZCWKN.ir")]),
   ("Midea",      [("MAW05R1",     "ACs/Midea/Midea_AC_MAW05R1WBL.ir")]),
   ("Gree",       [("YAPOF",       "ACs/GREE/GREE_YAPOF.ir")]),
   ("Fujitsu",    [("ASU18RLF",    "ACs/Fujitsu/Fujitsu_AC_ASU18RLF.ir")]),
   ("TCL",        [("TCL AC",      "ACs/TCL/Tcl.ir")]),
   ("Daikin",     [("ARC480A41",   "ACs/Daikin/Daikin_ARC480A41.ir")]),
   ("Panasonic",  [("CWA75C4179",  "ACs/Panasonic/Panasonic_CWA75C4179.ir")]),
   ("Electrolux", [("ESV09CRO",    "ACs/Electrolux/Electrol_ESV09CRO_B2I.ir")]),
   ("Carrier",    [("Orlen",       "ACs/Carrier/Carrier_orlen_ac.ir")]),
   ("Hisense",    [("DG11J1-99",   "ACs/Hisense/Hisense_DG11J1-99_fahrenheit.ir")]),
   ("Toshiba",    [("RG57H4",      "ACs/Toshiba/Toshiba_RG57H4.ir")]),
   ("Mitsubishi", [("SRK35ZS-W",   "ACs/Mitsubishi/Mitsubishi_SRK35ZS-W.ir")]),
   ("Haier",      [("AS18GD3HRA",  "ACs/Haier/Haier_AC_AS18GD3HRA.ir")]),
   ("Sharp",      [("CVP10MX",     "ACs/Sharp/Sharp_CVP10MX.ir")]),
 ]),
]

# Controles embutidos manuais (nao vem de arquivo): nome -> lista de botoes
MANUAL = {
  "TVs:HTV:HTV 8": [
    ("Power","PR_NECEXT",0x80,0xFF,0x0A),("Up","PR_NECEXT",0x80,0xFF,0x00),
    ("Down","PR_NECEXT",0x80,0xFF,0x01),("Left","PR_NECEXT",0x80,0xFF,0x03),
    ("Right","PR_NECEXT",0x80,0xFF,0x02),("Ok","PR_NECEXT",0x80,0xFF,0x1F),
    ("Back","PR_NECEXT",0x80,0xFF,0x40),("Home","PR_NECEXT",0x80,0xFF,0x1C),
    ("Menu","PR_NECEXT",0x80,0xFF,0x1A),("Info","PR_NECEXT",0x80,0xFF,0x0B),
    ("Vol_up","PR_NECEXT",0x80,0xFF,0x44),("Vol_dn","PR_NECEXT",0x80,0xFF,0x45),
    ("Mute","PR_NECEXT",0x80,0xFF,0x0D),("Ch_next","PR_NECEXT",0x80,0xFF,0x4B),
    ("Ch_prev","PR_NECEXT",0x80,0xFF,0x4C),("Play_pause","PR_NECEXT",0x80,0xFF,0x46),
    ("Stop","PR_NECEXT",0x80,0xFF,0x41),("Rewind","PR_NECEXT",0x80,0xFF,0x5E),
    ("Forward","PR_NECEXT",0x80,0xFF,0x4A),("Guide","PR_NECEXT",0x80,0xFF,0x1E),
    ("Audio","PR_NECEXT",0x80,0xFF,0x5F),("Favorite","PR_NECEXT",0x80,0xFF,0x1B),
    ("1","PR_NECEXT",0x80,0xFF,0x11),("2","PR_NECEXT",0x80,0xFF,0x12),
    ("3","PR_NECEXT",0x80,0xFF,0x13),("4","PR_NECEXT",0x80,0xFF,0x14),
    ("5","PR_NECEXT",0x80,0xFF,0x15),("6","PR_NECEXT",0x80,0xFF,0x16),
    ("7","PR_NECEXT",0x80,0xFF,0x17),("8","PR_NECEXT",0x80,0xFF,0x18),
    ("9","PR_NECEXT",0x80,0xFF,0x19),("0","PR_NECEXT",0x80,0xFF,0x10),
  ],
}

def h1(v):
    return int(v.split()[0], 16)
def h2(v):
    p = v.split()
    return int(p[1], 16) if len(p) > 1 else 0

RAW_MAX = 800  # limite de amostras por botao raw (igual ao firmware)

# Botao parsed -> dict(kind='parsed', name, proto, a0, a1, cmd)
# Botao raw    -> dict(kind='raw',    name, freq, raw=[...])
def manual_to_dicts(lst):
    return [{"kind": "parsed", "name": n, "proto": p, "a0": a0, "a1": a1, "cmd": c}
            for (n, p, a0, a1, c) in lst]

def parse_ir(path):
    btns = []
    cur = {}
    def flush():
        nonlocal cur
        nm = cur.get("name")
        if nm:
            if cur.get("type") == "parsed" and cur.get("protocol") in PROTO:
                btns.append({"kind": "parsed", "name": nm,
                             "proto": PROTO[cur["protocol"]],
                             "a0": h1(cur.get("address", "0")),
                             "a1": h2(cur.get("address", "0")),
                             "cmd": h1(cur.get("command", "0"))})
            elif cur.get("type") == "raw" and cur.get("data"):
                vals = []
                for x in cur["data"].split():
                    try:
                        vals.append(max(1, min(60000, abs(int(x)))))
                    except ValueError:
                        pass
                vals = vals[:RAW_MAX]
                if vals:
                    freq = 38000
                    try:
                        freq = int(cur.get("frequency", "38000"))
                    except ValueError:
                        pass
                    btns.append({"kind": "raw", "name": nm, "freq": freq, "raw": vals})
        cur = {}
    for ln in open(path, encoding="utf-8", errors="ignore"):
        ln = ln.strip()
        if not ln or ln.startswith("#") or ":" not in ln:
            continue
        k, _, v = ln.partition(":")
        k = k.strip(); v = v.strip()
        if k == "name":
            flush(); cur = {"name": v}
        elif k in ("type", "protocol", "address", "command", "frequency", "data"):
            cur[k] = v
    flush()
    return btns

def cname(s):  # string C segura
    return s.replace("\\", "").replace('"', "'")

out = []
out.append("// GERADO AUTOMATICAMENTE por gen_builtins.py - nao edite a mao.")
out.append("// Controles embutidos a partir do banco Flipper-IRDB.")
out.append("#pragma once")
out.append('#include "ir_core.h"')
out.append("")
out.append("struct BBtn { const char* name; IrProto proto; uint8_t a0, a1, cmd;")
out.append("              uint16_t freq; const uint16_t* raw; uint16_t rn; };")
out.append("struct BRemote { const char* name; const BBtn* btn; uint16_t n; };")
out.append("struct BBrand { const char* name; const BRemote* rem; uint8_t n; };")
out.append("struct BCat { const char* name; const BBrand* brand; uint8_t n; };")
out.append("")

rid = 0
cat_blocks = []
total_btn = 0

def emit_btn_array(var, btns):
    global total_btn
    # arrays raw primeiro
    for i, b in enumerate(btns):
        if b["kind"] == "raw":
            out.append(f"static const uint16_t {var}_r{i}[] = {{" +
                       ",".join(str(x) for x in b["raw"]) + "};")
    out.append(f"static const BBtn {var}[] = {{")
    for i, b in enumerate(btns):
        nm = cname(b["name"])[:18]
        if b["kind"] == "parsed":
            out.append(f'  {{"{nm}", {b["proto"]}, 0x{b["a0"]:02X}, 0x{b["a1"]:02X}, '
                       f'0x{b["cmd"]:02X}, 0, nullptr, 0}},')
        else:
            out.append(f'  {{"{nm}", PR_RAW, 0, 0, 0, {b["freq"]}, '
                       f'{var}_r{i}, {len(b["raw"])}}},')
    out.append("};")
    total_btn += len(btns)

for cat, brands in CATALOG:
    brand_arr = []
    for brand, models in brands:
        rem_arr = []
        for disp, rel in models:
            path = os.path.join(IRDB, rel)
            key = f"{cat}:{brand}:{disp}"
            if key in MANUAL:
                btns = manual_to_dicts(MANUAL[key])
            elif os.path.exists(path):
                btns = parse_ir(path)
            else:
                sys.stderr.write(f"FALTA: {rel}\n"); continue
            if not btns:
                sys.stderr.write(f"VAZIO: {rel}\n"); continue
            var = f"b_{rid}"; rid += 1
            emit_btn_array(var, btns)
            rem_arr.append((disp, var, len(btns)))
        rvar = f"rem_{rid}"; rid += 1
        out.append(f"static const BRemote {rvar}[] = {{")
        for disp, var, n in rem_arr:
            out.append(f'  {{"{cname(disp)}", {var}, {n}}},')
        out.append("};")
        brand_arr.append((brand, rvar, len(rem_arr)))
    bvar = f"brand_{rid}"; rid += 1
    out.append(f"static const BBrand {bvar}[] = {{")
    for brand, rvar, n in brand_arr:
        out.append(f'  {{"{cname(brand)}", {rvar}, {n}}},')
    out.append("};")
    cat_blocks.append((cat, bvar, len(brand_arr)))

out.append("")
out.append("static const BCat BUILTIN_CATS[] = {")
for cat, bvar, n in cat_blocks:
    out.append(f'  {{"{cname(cat)}", {bvar}, {n}}},')
out.append("};")
out.append("static const int NUM_BUILTIN_CATS = sizeof(BUILTIN_CATS) / sizeof(BUILTIN_CATS[0]);")

open(OUT, "w").write("\n".join(out) + "\n")
sys.stderr.write(f"OK: {rid} arrays, {total_btn} botoes -> {OUT}\n")
