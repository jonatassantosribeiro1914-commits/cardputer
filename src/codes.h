// Botoes e codigos IR da Smart TV Philips Ambilight (PUG7908/78 e linha Ambilight).
// Protocolo RC6 modo 0, endereco 0x00, 36 kHz.
// Codigos conferidos no banco publico Flipper-IRDB (github.com/UberGuidoZ/Flipper-IRDB):
// Philips_TV_7956_Series, Philips_TV_48OLED806 e Philips_50PUT6103_79 usam os mesmos valores.
#pragma once
#include <Arduino.h>

enum Btn : uint8_t {
  B_POWER, B_UP, B_DOWN, B_LEFT, B_RIGHT, B_OK, B_BACK, B_HOME,
  B_MENU, B_OPTIONS, B_AMBILIGHT, B_VOLUP, B_VOLDN, B_MUTE, B_CHUP, B_CHDN,
  B_PLAY, B_STOP, B_REW, B_FF, B_SOURCE, B_GUIDE, B_YOUTUBE,
  B_COUNT
};

// key: tecla do Cardputer. '\n' = Enter, '\b' = Del (apagar).
struct BtnInfo {
  const char* name;
  char key;
  const char* keyLabel;
  uint8_t cmd;     // comando RC6 padrao
  bool repeat;     // repete enquanto a tecla estiver segurada
};

static const uint8_t PHILIPS_ADDR = 0x00;
static const uint8_t CMD_PAUSE = 0x30;  // Espaco alterna Play (0x2C) / Pause (0x30)

// Comandos usados nos atalhos de sequencia
static const uint8_t C_SOURCES = 0x38, C_UP = 0x58, C_DOWN = 0x59, C_LEFT = 0x5A,
                     C_RIGHT = 0x5B, C_OK = 0x5C;

static const BtnInfo BTN[B_COUNT] = {
  {"Ligar",       'p',  "P",      0x0C, false},
  {"Cima",        ';',  ";",      C_UP, true },
  {"Baixo",       '.',  ".",      C_DOWN, true },
  {"Esquerda",    ',',  ",",      C_LEFT, true },
  {"Direita",     '/',  "/",      C_RIGHT, true },
  {"OK",          '\n', "Enter",  C_OK, false},
  {"Voltar",      '\b', "Del",    0x0A, false},
  {"Home",        'h',  "H",      0x54, false},
  {"Menu",        'm',  "M",      0xBF, false},
  {"Opcoes",      'o',  "O",      0x40, false},
  {"Ambilight",   'a',  "A",      0x8F, false},
  {"Vol +",       '=',  "=",      0x10, true },
  {"Vol -",       '-',  "-",      0x11, true },
  {"Mudo",        'x',  "X",      0x0D, false},
  {"Canal +",     ']',  "]",      0x20, true },
  {"Canal -",     '[',  "[",      0x21, true },
  {"Play/Pause",  ' ',  "Espaco", 0x2C, false},
  {"Stop",        's',  "S",      0x31, false},
  {"Voltar <<",   'r',  "R",      0x2B, true },
  {"Avancar >>",  'f',  "F",      0x28, true },
  {"Fontes",      'e',  "E",      C_SOURCES, false},
  {"Guia TV",     'g',  "G",      0xCC, false},
  {"YouTube",     'y',  "Y",      0x79, false},
};

// ---------- Atalhos de sequencia (T = TV aberta, I = HDMI) ----------
static const int MACRO_MAX = 24;

struct Macro {
  uint8_t n;
  uint8_t addr;
  uint8_t cmd[MACRO_MAX];
  uint16_t wait[MACRO_MAX];  // espera (ms) depois de cada comando
};

enum MacroSlot : uint8_t { MC_TV, MC_HDMI, MC_COUNT };
static const char MACRO_KEY[MC_COUNT] = {'t', 'i'};
static const char* MACRO_NAME[MC_COUNT] = {"TV aberta", "HDMI"};

static void macroAdd(Macro& m, uint8_t cmd, uint16_t wait = 250, int times = 1) {
  for (int i = 0; i < times && m.n < MACRO_MAX; i++) {
    m.cmd[m.n] = cmd;
    m.wait[m.n] = wait;
    m.n++;
  }
}

// Espera depois de abrir o menu Fontes, para ele aparecer na tela
static const uint16_t WAIT_MENU = 1800;
static const uint16_t WAIT_NAV = 200;

// Opcoes prontas de cada atalho, para testar na TV
static const char* TV_PRESETS[] = {
  "Fontes > 1o item da lista",
  "Fontes > 1o item (lista na horizontal)",
  "Guia de TV",
  "Canal +",
  "Numero 1",
  "Tecla TV/Sair (9F)",
};
static const int NUM_TV_PRESETS = 6;

static const char* HDMI_PRESETS[] = {
  "Fontes > 2o item (HDMI 1)",
  "Fontes > 3o item (HDMI 2)",
  "Fontes > 4o item (HDMI 3)",
  "Fontes > 2o item (horizontal)",
  "Fontes > 3o item (horizontal)",
  "So abrir Fontes",
};
static const int NUM_HDMI_PRESETS = 6;

static void buildPreset(int slot, int idx, Macro& m) {
  m.n = 0;
  m.addr = PHILIPS_ADDR;
  if (slot == MC_TV) {
    switch (idx) {
      case 0: macroAdd(m, C_SOURCES, WAIT_MENU); macroAdd(m, C_UP, WAIT_NAV, 8); macroAdd(m, C_OK); break;
      case 1: macroAdd(m, C_SOURCES, WAIT_MENU); macroAdd(m, C_LEFT, WAIT_NAV, 8); macroAdd(m, C_OK); break;
      case 2: macroAdd(m, 0xCC); break;
      case 3: macroAdd(m, 0x20); break;
      case 4: macroAdd(m, 0x01); break;
      case 5: macroAdd(m, 0x9F); break;
    }
  } else {
    switch (idx) {
      case 0: case 1: case 2:
        macroAdd(m, C_SOURCES, WAIT_MENU);
        macroAdd(m, C_UP, WAIT_NAV, 8);
        macroAdd(m, C_DOWN, 300, idx + 1);
        macroAdd(m, C_OK);
        break;
      case 3: case 4:
        macroAdd(m, C_SOURCES, WAIT_MENU);
        macroAdd(m, C_LEFT, WAIT_NAV, 8);
        macroAdd(m, C_RIGHT, 300, idx - 2);
        macroAdd(m, C_OK);
        break;
      case 5: macroAdd(m, C_SOURCES); break;
    }
  }
}
