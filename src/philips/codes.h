// Botoes e codigos IR dos aparelhos suportados.
//
// Philips Ambilight (PUG7908/78 e linha Ambilight): RC6 modo 0, endereco 0x00.
//   Conferido no Flipper-IRDB: Philips_TV_7956_Series, Philips_TV_48OLED806,
//   Philips_50PUT6103_79 (todos com os mesmos valores).
//
// HTV 8: NEC estendido, endereco 80 FF. A HTV ligou com o codigo de Ligar do
//   controle Starcom 9947 HD (Flipper-IRDB: Cable_Boxes/Starcom/Starcom_9947_HD.ir),
//   entao o resto dos botoes vem desse mesmo arquivo.
#pragma once
#include <Arduino.h>

enum Dev : uint8_t { DEV_PHILIPS, DEV_HTV, DEV_COUNT };
enum Proto : uint8_t { P_RC6, P_NEC };

struct Device {
  const char* name;
  Proto proto;
  uint8_t a0, a1;      // endereco (RC6 usa so a0)
  uint8_t digitBase;   // comando do numero 0 (1..9 vem em seguida)
};

static const Device DEVICES[DEV_COUNT] = {
  {"Philips", P_RC6, 0x00, 0x00, 0x00},
  {"HTV 8",   P_NEC, 0x80, 0xFF, 0x10},
};

static const int16_t NONE = -1;

enum Btn : uint8_t {
  B_POWER, B_UP, B_DOWN, B_LEFT, B_RIGHT, B_OK, B_BACK, B_HOME,
  B_MENU, B_OPTIONS, B_AMBILIGHT, B_VOLUP, B_VOLDN, B_MUTE, B_CHUP, B_CHDN,
  B_PLAY, B_STOP, B_REW, B_FF, B_SOURCE, B_GUIDE, B_YOUTUBE,
  B_TVRADIO, B_FAV, B_AUDIO,
  B_COUNT
};

// key: tecla do Cardputer. '\n' = Enter, '\b' = Del (apagar).
struct BtnInfo {
  const char* name[DEV_COUNT];
  char key;
  const char* keyLabel;
  int16_t cmd[DEV_COUNT];  // NONE = o aparelho nao tem esse botao
  bool repeat;             // repete enquanto a tecla estiver segurada
};

// Comandos Philips usados nos atalhos de sequencia
static const uint8_t C_SOURCES = 0x38, C_UP = 0x58, C_DOWN = 0x59, C_LEFT = 0x5A,
                     C_RIGHT = 0x5B, C_OK = 0x5C;
static const uint8_t CMD_PAUSE = 0x30;  // Philips: Espaco alterna Play (2C) / Pause (30)

static const BtnInfo BTN[B_COUNT] = {
  //  nome Philips / HTV            tecla  rotulo     Philips    HTV     repete
  {{"Ligar", "Ligar"},              'p',  "P",      {0x0C,     0x0A}, false},
  {{"Cima", "Cima"},                ';',  ";",      {C_UP,     0x00}, true },
  {{"Baixo", "Baixo"},              '.',  ".",      {C_DOWN,   0x01}, true },
  {{"Esquerda", "Esquerda"},        ',',  ",",      {C_LEFT,   0x03}, true },
  {{"Direita", "Direita"},          '/',  "/",      {C_RIGHT,  0x02}, true },
  {{"OK", "OK"},                    '\n', "Enter",  {C_OK,     0x1F}, false},
  {{"Voltar", "Voltar"},            '\b', "Del",    {0x0A,     0x40}, false},
  {{"Home", "Home/Sair"},           'h',  "H",      {0x54,     0x1C}, false},
  {{"Menu", "Menu"},                'm',  "M",      {0xBF,     0x1A}, false},
  {{"Opcoes", "Info"},              'o',  "O",      {0x40,     0x0B}, false},
  {{"Ambilight", "-"},              'a',  "A",      {0x8F,     NONE}, false},
  {{"Vol +", "Vol +"},              '=',  "=",      {0x10,     0x44}, true },
  {{"Vol -", "Vol -"},              '-',  "-",      {0x11,     0x45}, true },
  {{"Mudo", "Mudo"},                'x',  "X",      {0x0D,     0x0D}, false},
  {{"Canal +", "Canal +"},          ']',  "]",      {0x20,     0x4B}, true },
  {{"Canal -", "Canal -"},          '[',  "[",      {0x21,     0x4C}, true },
  {{"Play/Pause", "Play/Pause"},    ' ',  "Espaco", {0x2C,     0x46}, false},
  {{"Stop", "Stop"},                's',  "S",      {0x31,     0x41}, false},
  {{"Voltar <<", "Voltar <<"},      'r',  "R",      {0x2B,     0x5E}, true },
  {{"Avancar >>", "Avancar >>"},    'f',  "F",      {0x28,     0x4A}, true },
  {{"Fontes", "-"},                 'e',  "E",      {C_SOURCES, NONE}, false},
  {{"Guia TV", "Guia (EPG)"},       'g',  "G",      {0xCC,     0x1E}, false},
  {{"YouTube", "-"},                'y',  "Y",      {0x79,     NONE}, false},
  {{"-", "TV/Radio"},               't',  "T",      {NONE,     0x5A}, false},
  {{"-", "Favoritos"},              'v',  "V",      {NONE,     0x1B}, false},
  {{"-", "Audio"},                  'u',  "U",      {NONE,     0x5F}, false},
};

// ---------- Atalhos de sequencia da Philips (T = TV aberta, I = HDMI) ----------
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
  m.addr = 0x00;
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
