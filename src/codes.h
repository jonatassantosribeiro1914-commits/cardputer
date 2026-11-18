// Tabelas de botoes, perfis IR e candidatos para o modo "Testar Ligar".
// Codigos tirados do banco publico Flipper-IRDB (github.com/UberGuidoZ/Flipper-IRDB).
#pragma once
#include <Arduino.h>

enum Btn : uint8_t {
  B_POWER, B_UP, B_DOWN, B_LEFT, B_RIGHT, B_OK, B_BACK, B_HOME,
  B_MENU, B_VOLUP, B_VOLDN, B_MUTE, B_PLAY, B_STOP, B_APPS, B_MOUSE,
  B_COUNT
};

// Tecla do Cardputer para cada botao. '\n' = Enter, '\b' = Del.
struct BtnInfo {
  const char* name;
  char key;
  const char* keyLabel;
  bool repeat;  // repete enquanto a tecla estiver segurada (so IR)
};

static const BtnInfo BTN[B_COUNT] = {
  {"Ligar",      'p',  "P",     false},
  {"Cima",       ';',  ";",     true },
  {"Baixo",      '.',  ".",     true },
  {"Esquerda",   ',',  ",",     true },
  {"Direita",    '/',  "/",     true },
  {"OK",         '\n', "Enter", false},
  {"Voltar",     '\b', "Del",   false},
  {"Home",       'h',  "H",     false},
  {"Menu",       'm',  "M",     false},
  {"Vol +",      '=',  "=",     true },
  {"Vol -",      '-',  "-",     true },
  {"Mudo",       '0',  "0",     false},
  {"Play/Pause", ' ',  "Espaco",false},
  {"Stop",       's',  "S",     false},
  {"Apps",       'a',  "A",     false},
  {"Mouse",      'o',  "O",     false},
};

static const int16_t NONE = -1;

struct Profile {
  const char* name;
  uint8_t a0, a1;            // endereco NEC (byte 1 e byte 2 enviados)
  int16_t cmd[B_COUNT];      // NONE = botao nao existe
};

// Ordem dos comandos: Ligar Cima Baixo Esq Dir OK Voltar Home Menu Vol+ Vol- Mudo Play Stop Apps Mouse
static const Profile PROFILES[] = {
  {"TV Box Android (MXQ/X96/H96)", 0x01, 0xFE,
   {0x40, 0x16, 0x1A, 0x51, 0x50, 0x13, 0x19, 0x11, 0x4C, 0x18, 0x10, 0x41, 0x5A, 0x52, 0x0F, 0x00}},
  {"Mecool / Amlogic KM", 0x01, 0xFE,
   {0x12, 0x02, 0x01, 0x0C, 0x05, 0x04, 0x4F, 0x48, 0x43, 0xF5, 0xF4, 0x1B, NONE, NONE, NONE, NONE}},
};
static const int NUM_PROFILES = sizeof(PROFILES) / sizeof(PROFILES[0]);

// Codigos de "Ligar" de varias TV boxes/receptores, para descobrir qual a HTV aceita.
struct PowerCandidate {
  const char* name;
  uint8_t a0, a1, cmd;
  int8_t profile;  // perfil completo associado (-1 = nenhum)
};

static const PowerCandidate CANDIDATES[] = {
  {"Android MXQ/X96/H96", 0x01, 0xFE, 0x40, 0},
  {"Mecool / Amlogic",    0x01, 0xFE, 0x12, 1},
  {"Micca / Amlogic",     0x01, 0xFE, 0x10, -1},
  {"Claro Newland",       0x87, 0x5E, 0x12, -1},
  {"Formuler",            0x02, 0xF9, 0x0A, -1},
  {"Huawei STB",          0x00, 0xBF, 0x43, -1},
  {"Thomson STB",         0x00, 0xBF, 0x59, -1},
  {"Rostelecom",          0x00, 0xFD, 0x12, -1},
  {"EVO",                 0x01, 0xFD, 0x55, -1},
  {"Octagon",             0x01, 0x04, 0x0A, -1},
  {"Lenson",              0x02, 0x02, 0x0A, -1},
  {"Mirage",              0x40, 0x40, 0x0A, -1},
  {"Starcom",             0x80, 0xFF, 0x0A, -1},
  {"Humax",               0x00, 0x10, 0x00, -1},
  {"Quasar",              0x31, 0xCE, 0x0A, -1},
};
static const int NUM_CANDIDATES = sizeof(CANDIDATES) / sizeof(CANDIDATES[0]);
