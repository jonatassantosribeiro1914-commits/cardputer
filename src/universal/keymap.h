// Distribui os botoes de um controle nas teclas do Cardputer, pelo nome.
#pragma once
#include <Arduino.h>
#include "ir_core.h"

struct Slot {
  char key;
  const char* keyLabel;
  const char* shortName[3];  // PT, ES, EN
  const char* aliases;       // termos separados por '|', em minusculo
};

// Ordem = prioridade. A tecla aparece na tela se o controle tiver o botao.
static const Slot SLOTS[] = {
  {'p',  "P",     {"Ligar","Encender","Power"}, "power|pwr|standby|on_off|on/off|liga|ligar|poweroff|power_off"},
  {';',  ";",     {"Cima","Arriba","Up"},       "up|cima|arrib|north"},
  {'.',  ".",     {"Baixo","Abajo","Down"},     "down|baixo|south"},
  {',',  ",",     {"Esq","Izq","Left"},         "left|esq|west"},
  {'/',  "/",     {"Dir","Der","Right"},        "right|dir|east"},
  {'\n', "Enter", {"OK","OK","OK"},             "ok|enter|select|confirm|center"},
  {'\b', "Del",   {"Voltar","Volver","Back"},   "back|return|exit|voltar|sair|escape"},
  {'h',  "H",     {"Home","Inicio","Home"},     "home|inicio|smart|smarthub"},
  {'m',  "M",     {"Menu","Menu","Menu"},       "menu|main"},
  {'=',  "=",     {"Vol+/T+","Vol+/T+","Vol+/T+"}, "vol_up|vol+|volume_up|volup|vol up|volum+|temp+|temp_up|temp up|t+"},
  {'-',  "-",     {"Vol-/T-","Vol-/T-","Vol-/T-"}, "vol_dn|vol-|volume_down|voldn|vol dn|vol down|volum-|temp-|temp_down|temp dn|t-"},
  {'x',  "X",     {"Mudo","Silencio","Mute"},   "mute|mudo|silenc"},
  {']',  "]",     {"Ch+","Can+","Ch+"},         "ch+|ch_up|ch_next|channel_up|chup|ch up|prog+|p_up"},
  {'[',  "[",     {"Ch-","Can-","Ch-"},         "ch-|ch_dn|ch_prev|channel_down|chdn|ch dn|prog-|p_dn"},
  {' ',  "Espaco",{"Play","Play","Play"},       "play_pause|play/pause|play|pause"},
  {'s',  "S",     {"Stop","Stop","Stop"},       "stop|parar"},
  {'r',  "R",     {"<<","<<","<<"},             "rewind|rew|backward|previous|prev|replay"},
  {'f',  "F",     {">>",">>",">>"},             "forward|fast_f|fforward|next|avanc"},
  {'e',  "E",     {"Fontes","Fuentes","Source"},"source|input|av|hdmi|tv/av|ant|signal|fonte"},
  {'g',  "G",     {"Guia","Guia","Guide"},      "guide|epg|guia"},
  {'i',  "I",     {"Info","Info","Info"},       "info|display|status"},
  {'o',  "O",     {"Opcoes","Opciones","Options"}, "option|tools|settings|config|setup|opcoes"},
  {'a',  "A",     {"Apps","Apps","Apps"},       "apps|app|netflix|smart_tv|application"},
  {'t',  "T",     {"TV","TV","TV"},             "tv|antenna|live|dtv|atv"},
  {'u',  "U",     {"Audio","Audio","Audio"},    "audio|sound|sap|language"},
  {'v',  "V",     {"Fav","Fav","Fav"},          "fav|favorite|favorito|list"},
  // Ar-condicionado (teclas livres; um controle e TV ou AC, nunca os dois)
  {'d',  "D",     {"Modo","Modo","Mode"},       "mode|modo|cool|heat|dry|auto"},
  {'n',  "N",     {"Vent","Vent","Fan"},        "fan|fan_speed|fan speed|vent|wind|speed"},
  {'w',  "W",     {"Swing","Swing","Swing"},    "swing|oscil|verti_wind|horiz_wind|louver|air_direction|wind_direction"},
  {'k',  "K",     {"Timer","Timer","Timer"},    "timer|sleep_timer"},
  {'c',  "C",     {"Eco","Eco","Eco"},          "eco|econo|energy|quiet|silen"},
  {'b',  "B",     {"Turbo","Turbo","Turbo"},    "turbo|jet|boost|powerful|high"},
  {'z',  "Z",     {"Sleep","Sleep","Sleep"},    "sleep|dormir"},
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
