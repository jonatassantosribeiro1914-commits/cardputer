// Nucleo de infravermelho: estrutura dos botoes, envio por protocolo e
// leitor do formato .ir do Flipper Zero.
#pragma once
#include <Arduino.h>
#include <IRsend.h>
#include <vector>
#include <FS.h>

// ---------- Protocolos ----------
enum IrProto : uint8_t {
  PR_RAW, PR_NEC, PR_NECEXT, PR_NEC42, PR_NEC42EXT,
  PR_SAMSUNG32, PR_RC5, PR_RC5X, PR_RC6, PR_SIRC, PR_SIRC15, PR_SIRC20,
  PR_UNSUPPORTED
};

static IrProto protoFromName(const String& s) {
  if (s == "NEC") return PR_NEC;
  if (s == "NECext") return PR_NECEXT;
  if (s == "NEC42") return PR_NEC42;
  if (s == "NEC42ext") return PR_NEC42EXT;
  if (s == "Samsung32") return PR_SAMSUNG32;
  if (s == "RC5") return PR_RC5;
  if (s == "RC5X") return PR_RC5X;
  if (s == "RC6") return PR_RC6;
  if (s == "SIRC") return PR_SIRC;
  if (s == "SIRC15") return PR_SIRC15;
  if (s == "SIRC20") return PR_SIRC20;
  return PR_UNSUPPORTED;
}

static const char* protoLabel(IrProto p) {
  switch (p) {
    case PR_RAW: return "RAW";
    case PR_NEC: return "NEC";
    case PR_NECEXT: return "NECext";
    case PR_NEC42: return "NEC42";
    case PR_NEC42EXT: return "NEC42ext";
    case PR_SAMSUNG32: return "Samsung";
    case PR_RC5: return "RC5";
    case PR_RC5X: return "RC5X";
    case PR_RC6: return "RC6";
    case PR_SIRC: return "SIRC";
    case PR_SIRC15: return "SIRC15";
    case PR_SIRC20: return "SIRC20";
    default: return "?";
  }
}

// ---------- Botao ----------
static const int RAW_MAX = 800;  // limite de amostras por botao raw

struct Button {
  String name;
  IrProto proto = PR_RAW;
  uint8_t a0 = 0, a1 = 0, cmd = 0;  // parsed
  uint16_t freq = 38000;            // raw
  std::vector<uint16_t> raw;        // raw timings (vazio se parsed)
};

struct Remote {
  String name;
  std::vector<Button> btn;
};

// ---------- Envio ----------
class IrCore {
 public:
  explicit IrCore(uint8_t pin) : _send(pin) {}
  void begin() { _send.begin(); }

  void sendButton(const Button& b) {
    if (!b.raw.empty()) {
      _send.sendRaw((uint16_t*)b.raw.data(), b.raw.size(), b.freq / 1000);
      return;
    }
    sendParsed(b.proto, b.a0, b.a1, b.cmd, true);
  }

  // newPress controla o bit toggle (RC5/RC6)
  void sendParsed(IrProto p, uint8_t a0, uint8_t a1, uint8_t cmd, bool newPress) {
    switch (p) {
      case PR_NEC:      _send.sendNEC(necData(a0, (uint8_t)~a0, cmd), 32); break;
      case PR_NEC42:    _send.sendNEC(necData(a0, (uint8_t)~a0, cmd), 32); break;
      case PR_NECEXT:   _send.sendNEC(necData(a0, a1, cmd), 32); break;
      case PR_NEC42EXT: _send.sendNEC(necData(a0, a1, cmd), 32); break;
      case PR_SAMSUNG32: _send.sendSAMSUNG(_send.encodeSAMSUNG(a0, cmd), 32); break;
      case PR_RC5:  rc5send(a0, cmd, false, newPress); break;
      case PR_RC5X: rc5send(a0, cmd, true, newPress); break;
      case PR_RC6:  rc6send(a0, cmd, newPress); break;
      case PR_SIRC:   sony(12, a0, cmd); break;
      case PR_SIRC15: sony(15, a0, cmd); break;
      case PR_SIRC20: sony(20, a0, cmd); break;
      default: break;
    }
  }

 private:
  IRsend _send;
  bool _rc5t = false, _rc6t = false;

  static uint8_t rev8(uint8_t v) {
    uint8_t r = 0;
    for (int i = 0; i < 8; i++) { r = (r << 1) | (v & 1); v >>= 1; }
    return r;
  }
  static uint32_t necData(uint8_t a0, uint8_t a1, uint8_t cmd) {
    return ((uint32_t)rev8(a0) << 24) | ((uint32_t)rev8(a1) << 16) |
           ((uint32_t)rev8(cmd) << 8) | rev8((uint8_t)~cmd);
  }
  void rc5send(uint8_t a, uint8_t c, bool x, bool newPress) {
    if (newPress) _rc5t = !_rc5t;
    uint64_t d = x ? _send.encodeRC5X(a, c, false) : _send.encodeRC5(a, c, false);
    if (_rc5t) d = _send.toggleRC5(d);
    _send.sendRC5(d, x ? kRC5XBits : kRC5Bits);
  }
  void rc6send(uint8_t a, uint8_t c, bool newPress) {
    if (newPress) _rc6t = !_rc6t;
    uint64_t d = _send.encodeRC6(a, c, kRC6Mode0Bits);
    if (_rc6t) d = _send.toggleRC6(d, kRC6Mode0Bits);
    _send.sendRC6(d, kRC6Mode0Bits);
  }
  void sony(uint16_t nbits, uint8_t addr, uint8_t cmd) {
    uint64_t d = _send.encodeSony(nbits, cmd, addr, 0);
    _send.sendSony(d, nbits, 2);
  }
};

// ---------- Leitor .ir (formato Flipper) ----------
// Primeiro byte de uma lista hex "07 00 00 00".
static uint8_t firstHex(const String& v) {
  return (uint8_t)strtol(v.c_str(), nullptr, 16);
}
static uint8_t secondHex(const String& v) {
  int sp = v.indexOf(' ');
  if (sp < 0) return 0;
  return (uint8_t)strtol(v.c_str() + sp + 1, nullptr, 16);
}

// Le um arquivo .ir inteiro para um Remote. Retorna false se nao abrir.
// maxBtn limita os botoes para nao estourar a memoria.
static bool loadIrFile(fs::FS& fs, const String& path, Remote& out, int maxBtn = 160) {
  File f = fs.open(path);
  if (!f) return false;
  out.btn.clear();
  int slash = path.lastIndexOf('/');
  out.name = slash >= 0 ? path.substring(slash + 1) : path;
  out.name.replace(".ir", "");

  Button cur;
  bool have = false;
  auto flush = [&]() {
    if (have && cur.name.length()) {
      out.btn.push_back(cur);
    }
    cur = Button();
    have = false;
  };

  static char line[4096];  // grande para as linhas "data" dos codigos raw
  while (f.available() && (int)out.btn.size() < maxBtn) {
    int n = f.readBytesUntil('\n', line, sizeof(line) - 1);
    line[n] = 0;
    if (n && line[n - 1] == '\r') line[n - 1] = 0;
    char* p = line;
    while (*p == ' ') p++;
    if (*p == '#' || *p == 0) continue;
    char* colon = strchr(p, ':');
    if (!colon) continue;
    *colon = 0;
    String key = p;
    char* v = colon + 1;
    while (*v == ' ') v++;
    String val = v;

    if (key == "name") {
      flush();
      cur.name = val;
      have = true;
    } else if (!have) {
      continue;  // cabecalho (Filetype/Version)
    } else if (key == "type") {
      cur.proto = (val == "raw") ? PR_RAW : PR_UNSUPPORTED;
    } else if (key == "protocol") {
      cur.proto = protoFromName(val);
    } else if (key == "address") {
      cur.a0 = firstHex(val);
      cur.a1 = secondHex(val);
    } else if (key == "command") {
      cur.cmd = firstHex(val);
    } else if (key == "frequency") {
      cur.freq = val.toInt();
    } else if (key == "data") {
      cur.raw.clear();
      char* tok = strtok(v, " ");
      while (tok && (int)cur.raw.size() < RAW_MAX) {
        long t = atol(tok);
        if (t > 0) cur.raw.push_back((uint16_t)min(t, 60000L));
        tok = strtok(nullptr, " ");
      }
    }
  }
  flush();
  f.close();
  return true;
}
