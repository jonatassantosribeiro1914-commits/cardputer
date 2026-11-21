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

def parse_ir(path):
    btns = []
    name = proto = addr = cmd = None
    typ = None
    def flush():
        nonlocal name, proto, addr, cmd, typ
        if name and typ == "parsed" and proto in PROTO:
            a0 = h1(addr) if addr else 0
            a1 = h2(addr) if addr else 0
            c = h1(cmd) if cmd else 0
            btns.append((name, PROTO[proto], a0, a1, c))
        name = proto = addr = cmd = typ = None
    for ln in open(path, encoding="utf-8", errors="ignore"):
        ln = ln.strip()
        if not ln or ln.startswith("#"):
            continue
        if ":" not in ln:
            continue
        k, _, v = ln.partition(":")
        k = k.strip(); v = v.strip()
        if k == "name":
            flush(); name = v
        elif k == "type": typ = v
        elif k == "protocol": proto = v
        elif k == "address": addr = v
        elif k == "command": cmd = v
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
out.append("struct BBtn { const char* name; IrProto proto; uint8_t a0, a1, cmd; };")
out.append("struct BRemote { const char* name; const BBtn* btn; uint16_t n; };")
out.append("struct BBrand { const char* name; const BRemote* rem; uint8_t n; };")
out.append("struct BCat { const char* name; const BBrand* brand; uint8_t n; };")
out.append("")

rid = 0
brand_blocks = []
cat_blocks = []
total_btn = 0
for cat, brands in CATALOG:
    brand_arr = []
    for brand, models in brands:
        rem_arr = []
        for disp, rel in models:
            path = os.path.join(IRDB, rel)
            key = f"{cat}:{brand}:{disp}"
            if key in MANUAL:
                btns = MANUAL[key]
            elif os.path.exists(path):
                btns = parse_ir(path)
            else:
                sys.stderr.write(f"FALTA: {rel}\n"); continue
            if not btns:
                sys.stderr.write(f"VAZIO: {rel}\n"); continue
            total_btn += len(btns)
            var = f"b_{rid}"; rid += 1
            out.append(f"static const BBtn {var}[] = {{")
            for nm, pr, a0, a1, c in btns:
                out.append(f'  {{"{cname(nm)[:18]}", {pr}, 0x{a0:02X}, 0x{a1:02X}, 0x{c:02X}}},')
            out.append("};")
            rem_arr.append((disp, var, len(btns)))
        # brand tem entradas manuais?
        for key, btns in MANUAL.items():
            c2, b2, d2 = key.split(":")
            if c2 == cat and b2 == brand and not any(r[0]==d2 for r in rem_arr):
                var = f"b_{rid}"; rid += 1
                total_btn += len(btns)
                out.append(f"static const BBtn {var}[] = {{")
                for nm, pr, a0, a1, c in btns:
                    out.append(f'  {{"{cname(nm)[:18]}", {pr}, 0x{a0:02X}, 0x{a1:02X}, 0x{c:02X}}},')
                out.append("};")
                rem_arr.append((d2, var, len(btns)))
        rvar = f"r_{len(brand_arr)}_{cat}".replace(" ", "")
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
