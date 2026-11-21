// Distribui os botoes de um controle nas teclas do Cardputer, pelo nome.
#pragma once
#include <Arduino.h>
#include "ir_core.h"

struct Slot {
  char key;
  const char* keyLabel;
  const char* shortName;
  const char* aliases;  // termos separados por '|', em minusculo
};

// Ordem = prioridade. A tecla aparece na tela se o controle tiver o botao.
static const Slot SLOTS[] = {
  {'p',  "P",     "Ligar",  "power|pwr|standby|on_off|on/off|liga|ligar|poweroff|power_off"},
  {';',  ";",     "Cima",   "up|cima|arrib|north"},
  {'.',  ".",     "Baixo",  "down|baixo|south"},
  {',',  ",",     "Esq",    "left|esq|west"},
  {'/',  "/",     "Dir",    "right|dir|east"},
  {'\n', "Enter", "OK",     "ok|enter|select|confirm|center"},
  {'\b', "Del",   "Voltar", "back|return|exit|voltar|sair|escape"},
  {'h',  "H",     "Home",   "home|inicio|smart|smarthub"},
  {'m',  "M",     "Menu",   "menu|main"},
  {'=',  "=",     "Vol+",   "vol_up|vol+|volume_up|volup|vol up|volum+"},
  {'-',  "-",     "Vol-",   "vol_dn|vol-|volume_down|voldn|vol dn|vol down|volum-"},
  {'x',  "X",     "Mudo",   "mute|mudo|silenc"},
  {']',  "]",     "Ch+",    "ch+|ch_up|ch_next|channel_up|chup|ch up|prog+|p_up"},
  {'[',  "[",     "Ch-",    "ch-|ch_dn|ch_prev|channel_down|chdn|ch dn|prog-|p_dn"},
  {' ',  "Espaco","Play",   "play_pause|play/pause|play|pause"},
  {'s',  "S",     "Stop",   "stop|parar"},
  {'r',  "R",     "<<",     "rewind|rew|backward|previous|prev|replay"},
  {'f',  "F",     ">>",     "forward|fast_f|fforward|next|avanc"},
  {'e',  "E",     "Fontes", "source|input|av|hdmi|tv/av|ant|signal|fonte"},
  {'g',  "G",     "Guia",   "guide|epg|guia"},
  {'i',  "I",     "Info",   "info|display|status"},
  {'o',  "O",     "Opcoes", "option|tools|settings|config|setup|opcoes"},
  {'a',  "A",     "Apps",   "apps|app|netflix|smart_tv|application"},
  {'t',  "T",     "TV",     "tv|antenna|live|dtv|atv"},
  {'u',  "U",     "Audio",  "audio|sound|sap|language"},
  {'v',  "V",     "Fav",    "fav|favorite|favorito|list"},
};
static const int NUM_SLOTS = sizeof(SLOTS) / sizeof(SLOTS[0]);

static String lower(const String& s) {
  String r = s;
  r.toLowerCase();
  return r;
}

// Verdadeiro se algum termo de 'aliases' aparece em 'name' (ja minusculo).
static bool matchAlias(const String& name, const char* aliases) {
  String a = aliases;
  int start = 0;
  while (start < (int)a.length()) {
    int bar = a.indexOf('|', start);
    if (bar < 0) bar = a.length();
    String term = a.substring(start, bar);
    if (term.length() && name.indexOf(term) >= 0) return true;
    start = bar + 1;
  }
  return false;
}

// Preenche slotBtn[s] com o indice do botao do controle (ou -1).
// Preenche digit[0..9] com o indice do botao numerico (ou -1).
struct KeyMap {
  int8_t slotBtn[NUM_SLOTS];
  int16_t digit[10];
};

static void buildKeyMap(const Remote& r, KeyMap& km) {
  bool used[256];
  for (int i = 0; i < 256; i++) used[i] = false;
  for (int s = 0; s < NUM_SLOTS; s++) km.slotBtn[s] = -1;
  for (int d = 0; d < 10; d++) km.digit[d] = -1;

  // Numeros: nome exatamente "0".."9"
  for (int i = 0; i < (int)r.btn.size() && i < 256; i++) {
    const String& nm = r.btn[i].name;
    if (nm.length() == 1 && nm[0] >= '0' && nm[0] <= '9') {
      int d = nm[0] - '0';
      if (km.digit[d] < 0) { km.digit[d] = i; used[i] = true; }
    }
  }
  // Slots por prioridade
  for (int s = 0; s < NUM_SLOTS; s++) {
    for (int i = 0; i < (int)r.btn.size() && i < 256; i++) {
      if (used[i]) continue;
      if (matchAlias(lower(r.btn[i].name), SLOTS[s].aliases)) {
        km.slotBtn[s] = i;
        used[i] = true;
        break;
      }
    }
  }
}

static int slotForKey(char c) {
  if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
  for (int s = 0; s < NUM_SLOTS; s++)
    if (SLOTS[s].key == c) return s;
  return -1;
}
