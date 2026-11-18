// Botoes e codigos IR da Smart TV Philips Ambilight (PUG7908/78 e linha Ambilight).
// Protocolo RC6 modo 0, endereco 0x00, 36 kHz.
// Codigos conferidos no banco publico Flipper-IRDB (github.com/UberGuidoZ/Flipper-IRDB):
// Philips_TV_7956_Series, Philips_TV_48OLED806 e Philips_50PUT6103_79 usam os mesmos valores.
#pragma once
#include <Arduino.h>

enum Btn : uint8_t {
  B_POWER, B_UP, B_DOWN, B_LEFT, B_RIGHT, B_OK, B_BACK, B_HOME,
  B_MENU, B_OPTIONS, B_AMBILIGHT, B_VOLUP, B_VOLDN, B_MUTE, B_CHUP, B_CHDN,
  B_PLAY, B_STOP, B_REW, B_FF, B_SOURCE, B_GUIDE, B_TV,
  B_NETFLIX, B_YOUTUBE, B_PRIME,
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

static const BtnInfo BTN[B_COUNT] = {
  {"Ligar",       'p',  "P",      0x0C, false},
  {"Cima",        ';',  ";",      0x58, true },
  {"Baixo",       '.',  ".",      0x59, true },
  {"Esquerda",    ',',  ",",      0x5A, true },
  {"Direita",     '/',  "/",      0x5B, true },
  {"OK",          '\n', "Enter",  0x5C, false},
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
  {"Fontes",      'i',  "I",      0x38, false},
  {"Guia TV",     'g',  "G",      0xCC, false},
  {"TV",          't',  "T",      0x9F, false},
  {"Netflix",     'n',  "N",      0x76, false},
  {"YouTube",     'y',  "Y",      0x79, false},
  {"Prime Video", 'v',  "V",      0xBA, false},
};
