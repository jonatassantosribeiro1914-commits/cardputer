// Controles embutidos, para funcionar sem cartao SD.
// Codigos conferidos no Flipper-IRDB.
#pragma once
#include "ir_core.h"

struct BInfo {
  const char* name;
  IrProto proto;
  uint8_t a0, a1, cmd;
};

// Philips Ambilight (RC6, end 00) - linha 7900/OLED/7956
static const BInfo PHILIPS[] = {
  {"Power", PR_RC6, 0x00, 0, 0x0C}, {"Up", PR_RC6, 0x00, 0, 0x58},
  {"Down", PR_RC6, 0x00, 0, 0x59}, {"Left", PR_RC6, 0x00, 0, 0x5A},
  {"Right", PR_RC6, 0x00, 0, 0x5B}, {"Ok", PR_RC6, 0x00, 0, 0x5C},
  {"Back", PR_RC6, 0x00, 0, 0x0A}, {"Home", PR_RC6, 0x00, 0, 0x54},
  {"Menu", PR_RC6, 0x00, 0, 0xBF}, {"Options", PR_RC6, 0x00, 0, 0x40},
  {"Source", PR_RC6, 0x00, 0, 0x38}, {"Vol_up", PR_RC6, 0x00, 0, 0x10},
  {"Vol_dn", PR_RC6, 0x00, 0, 0x11}, {"Mute", PR_RC6, 0x00, 0, 0x0D},
  {"Ch_next", PR_RC6, 0x00, 0, 0x20}, {"Ch_prev", PR_RC6, 0x00, 0, 0x21},
  {"Play_pause", PR_RC6, 0x00, 0, 0x2C}, {"Stop", PR_RC6, 0x00, 0, 0x31},
  {"Rewind", PR_RC6, 0x00, 0, 0x2B}, {"Forward", PR_RC6, 0x00, 0, 0x28},
  {"Guide", PR_RC6, 0x00, 0, 0xCC}, {"Info", PR_RC6, 0x00, 0, 0x0F},
  {"Ambilight", PR_RC6, 0x00, 0, 0x8F}, {"Netflix", PR_RC6, 0x00, 0, 0x76},
  {"1", PR_RC6, 0x00, 0, 0x01}, {"2", PR_RC6, 0x00, 0, 0x02},
  {"3", PR_RC6, 0x00, 0, 0x03}, {"4", PR_RC6, 0x00, 0, 0x04},
  {"5", PR_RC6, 0x00, 0, 0x05}, {"6", PR_RC6, 0x00, 0, 0x06},
  {"7", PR_RC6, 0x00, 0, 0x07}, {"8", PR_RC6, 0x00, 0, 0x08},
  {"9", PR_RC6, 0x00, 0, 0x09}, {"0", PR_RC6, 0x00, 0, 0x00},
};

// HTV 8 (NEC estendido, end 80 FF) - codigos do controle Starcom 9947 HD
static const BInfo HTV[] = {
  {"Power", PR_NECEXT, 0x80, 0xFF, 0x0A}, {"Up", PR_NECEXT, 0x80, 0xFF, 0x00},
  {"Down", PR_NECEXT, 0x80, 0xFF, 0x01}, {"Left", PR_NECEXT, 0x80, 0xFF, 0x03},
  {"Right", PR_NECEXT, 0x80, 0xFF, 0x02}, {"Ok", PR_NECEXT, 0x80, 0xFF, 0x1F},
  {"Back", PR_NECEXT, 0x80, 0xFF, 0x40}, {"Home", PR_NECEXT, 0x80, 0xFF, 0x1C},
  {"Menu", PR_NECEXT, 0x80, 0xFF, 0x1A}, {"Info", PR_NECEXT, 0x80, 0xFF, 0x0B},
  {"Vol_up", PR_NECEXT, 0x80, 0xFF, 0x44}, {"Vol_dn", PR_NECEXT, 0x80, 0xFF, 0x45},
  {"Mute", PR_NECEXT, 0x80, 0xFF, 0x0D}, {"Ch_next", PR_NECEXT, 0x80, 0xFF, 0x4B},
  {"Ch_prev", PR_NECEXT, 0x80, 0xFF, 0x4C}, {"Play_pause", PR_NECEXT, 0x80, 0xFF, 0x46},
  {"Stop", PR_NECEXT, 0x80, 0xFF, 0x41}, {"Rewind", PR_NECEXT, 0x80, 0xFF, 0x5E},
  {"Forward", PR_NECEXT, 0x80, 0xFF, 0x4A}, {"Guide", PR_NECEXT, 0x80, 0xFF, 0x1E},
  {"TV_radio", PR_NECEXT, 0x80, 0xFF, 0x5A}, {"Favorite", PR_NECEXT, 0x80, 0xFF, 0x1B},
  {"Audio", PR_NECEXT, 0x80, 0xFF, 0x5F},
  {"1", PR_NECEXT, 0x80, 0xFF, 0x11}, {"2", PR_NECEXT, 0x80, 0xFF, 0x12},
  {"3", PR_NECEXT, 0x80, 0xFF, 0x13}, {"4", PR_NECEXT, 0x80, 0xFF, 0x14},
  {"5", PR_NECEXT, 0x80, 0xFF, 0x15}, {"6", PR_NECEXT, 0x80, 0xFF, 0x16},
  {"7", PR_NECEXT, 0x80, 0xFF, 0x17}, {"8", PR_NECEXT, 0x80, 0xFF, 0x18},
  {"9", PR_NECEXT, 0x80, 0xFF, 0x19}, {"0", PR_NECEXT, 0x80, 0xFF, 0x10},
};

struct BuiltIn {
  const char* name;
  const BInfo* b;
  int n;
};
static const BuiltIn BUILTINS[] = {
  {"Philips Ambilight", PHILIPS, sizeof(PHILIPS) / sizeof(BInfo)},
  {"HTV 8", HTV, sizeof(HTV) / sizeof(BInfo)},
};
static const int NUM_BUILTINS = sizeof(BUILTINS) / sizeof(BUILTINS[0]);

static void loadBuiltin(int i, Remote& out) {
  const BuiltIn& bi = BUILTINS[i];
  out.name = bi.name;
  out.btn.clear();
  for (int k = 0; k < bi.n; k++) {
    Button b;
    b.name = bi.b[k].name;
    b.proto = bi.b[k].proto;
    b.a0 = bi.b[k].a0;
    b.a1 = bi.b[k].a1;
    b.cmd = bi.b[k].cmd;
    out.btn.push_back(b);
  }
}
