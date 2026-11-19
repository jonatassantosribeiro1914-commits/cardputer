// Controle Philips Ambilight para M5Stack Cardputer / Cardputer ADV (S3A)
// - Controle IR: LED infravermelho interno (GPIO 44), protocolo RC6 da Philips
// - Atalhos T (TV aberta) e I (HDMI): sequencias de teclas configuraveis
// - Controle Bluetooth: o Cardputer vira teclado BLE para o Google TV
// - Explorar: testa comandos RC6 e grava o que funcionar em qualquer tecla

// BleKeyboard.h precisa vir antes de M5Cardputer.h: o M5Cardputer define
// macros (KEY_BACKSPACE, KEY_TAB...) com os mesmos nomes das constantes BLE.
#include <BleKeyboard.h>
static const uint8_t BLE_BACKSPACE = 0xB2;  // valor do BleKeyboard
#include <M5Cardputer.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <Preferences.h>
#include "codes.h"

static const uint8_t IR_PIN = 44;  // igual no Cardputer e no Cardputer ADV
static const char KEY_EXIT = '`';  // tecla "esc" do Cardputer

IRsend irsend(IR_PIN);
BleKeyboard ble("Cardputer TV", "M5Stack", 100);
bool bleStarted = false;
Preferences prefs;
M5Canvas canvas(&M5Cardputer.Display);
int W = 240, H = 135;

// ---------- Configuracao salva ----------
struct BtnCode {
  uint8_t addr, cmd, valid;
};
struct Config {
  uint32_t magic;
  BtnCode b[B_COUNT];
  Macro m[MC_COUNT];
};
static const uint32_t CFG_MAGIC = 0x50484C33;  // "PHL3"
Config cfg;

void loadDefaults() {
  for (int i = 0; i < B_COUNT; i++) cfg.b[i] = {PHILIPS_ADDR, BTN[i].cmd, 1};
  buildPreset(MC_TV, 0, cfg.m[MC_TV]);
  buildPreset(MC_HDMI, 0, cfg.m[MC_HDMI]);
}

void saveConfig() {
  cfg.magic = CFG_MAGIC;
  prefs.putBytes("cfg", &cfg, sizeof(cfg));
}

void loadConfig() {
  size_t n = prefs.getBytes("cfg", &cfg, sizeof(cfg));
  if (n != sizeof(cfg) || cfg.magic != CFG_MAGIC) {
    loadDefaults();
    saveConfig();
  }
}

// ---------- IR (RC6 modo 0) ----------
// O bit "toggle" muda a cada nova tecla apertada; enquanto a tecla fica
// segurada ele se mantem, e a TV entende como repeticao.
bool rc6Toggle = false;
uint32_t lastSendAt = 0;

void sendRC6(uint8_t addr, uint8_t cmd, bool newPress) {
  if (newPress) rc6Toggle = !rc6Toggle;
  uint64_t data = irsend.encodeRC6(addr, cmd, kRC6Mode0Bits);
  if (rc6Toggle) data = irsend.toggleRC6(data, kRC6Mode0Bits);
  irsend.sendRC6(data, kRC6Mode0Bits);
  lastSendAt = millis();
}

// ---------- Nomes ----------
String hex2(uint8_t v) {
  char b[3];
  snprintf(b, sizeof(b), "%02X", v);
  return String(b);
}

String cmdName(uint8_t cmd) {
  if (cmd <= 9) return String("Num ") + cmd;
  if (cmd == CMD_PAUSE) return "Pause";
  for (int i = 0; i < B_COUNT; i++)
    if (BTN[i].cmd == cmd) return BTN[i].name;
  return "cmd " + hex2(cmd);
}

// Resumo de uma sequencia, ex.: "Fontes > Cima x8 > OK"
String macroSummary(const Macro& m, size_t maxLen = 38) {
  if (m.n == 0) return "(vazio)";
  String s;
  for (int i = 0; i < m.n;) {
    int j = i;
    while (j < m.n && m.cmd[j] == m.cmd[i]) j++;
    if (s.length()) s += " > ";
    s += cmdName(m.cmd[i]);
    if (j - i > 1) s += " x" + String(j - i);
    i = j;
  }
  if (s.length() > maxLen) s = s.substring(0, maxLen - 2) + "..";
  return s;
}

// ---------- Execucao dos atalhos ----------
Macro runM;
bool runActive = false;
int runIdx = 0;
uint32_t runNextAt = 0;
String runName;

void startMacro(const Macro& m, const String& name) {
  if (m.n == 0) return;
  runM = m;
  runIdx = 0;
  runNextAt = millis();
  runName = name;
  runActive = true;
}

void macroTick() {
  if (!runActive || (int32_t)(millis() - runNextAt) < 0) return;
  sendRC6(runM.addr, runM.cmd[runIdx], true);
  runNextAt = millis() + runM.wait[runIdx];
  if (++runIdx >= runM.n) runActive = false;
}

// ---------- Interface ----------
enum Mode { M_MENU, M_IR, M_BT, M_SHORTCUTS, M_SC_EDIT, M_RECORD, M_EXPLORE, M_RESET };
Mode mode = M_MENU;

String statusMsg;
uint32_t statusAt = 0;

void setStatus(const String& s) {
  statusMsg = s;
  statusAt = millis();
}

bool statusFresh() { return statusMsg.length() && millis() - statusAt < 4000; }

void header(const char* title, uint16_t color) {
  canvas.fillRect(0, 0, W, 18, color);
  canvas.setTextColor(TFT_BLACK, color);
  canvas.setFont(&fonts::FreeSansBold9pt7b);
  canvas.setCursor(4, 2);
  canvas.print(title);
  canvas.setFont(&fonts::Font0);
  if (millis() - lastSendAt < 200) canvas.fillCircle(W - 12, 9, 5, TFT_RED);
}

void line(int y, const String& s, uint16_t color = TFT_WHITE) {
  canvas.setFont(&fonts::Font0);
  canvas.setTextColor(color, TFT_BLACK);
  canvas.setCursor(4, y);
  canvas.print(s);
}

void footer(const char* text) {
  if (statusFresh()) line(H - 9, statusMsg, TFT_YELLOW);
  else line(H - 9, text, TFT_DARKGREY);
}

// Lista com selecao e rolagem
void drawList(int y0, int rows, const char* const* items, int count, int sel, uint16_t selColor) {
  int first = sel - rows + 1;
  if (first < 0) first = 0;
  for (int r = 0; r < rows && first + r < count; r++) {
    int i = first + r, y = y0 + r * 12;
    bool on = i == sel;
    if (on) canvas.fillRect(0, y - 2, W, 12, selColor);
    canvas.setFont(&fonts::Font0);
    canvas.setTextColor(on ? TFT_WHITE : TFT_LIGHTGREY, on ? selColor : TFT_BLACK);
    canvas.setCursor(4, y);
    canvas.print(items[i]);
  }
}

// ---------- Menu ----------
const char* MENU_ITEMS[] = {
  "1  Controle IR",
  "2  Controle Bluetooth",
  "3  Configurar atalhos T e I",
  "4  Explorar codigos",
  "5  Restaurar padrao",
};
const int MENU_COUNT = 5;
int menuSel = 0;

void drawMenu() {
  header("Controle Philips", TFT_CYAN);
  canvas.setFont(&fonts::FreeSans9pt7b);
  for (int i = 0; i < MENU_COUNT; i++) {
    int y = 21 + i * 20;
    if (i == menuSel) {
      canvas.fillRoundRect(2, y, W - 4, 19, 4, TFT_DARKCYAN);
      canvas.setTextColor(TFT_WHITE, TFT_DARKCYAN);
    } else {
      canvas.setTextColor(TFT_LIGHTGREY, TFT_BLACK);
    }
    canvas.setCursor(8, y + 2);
    canvas.print(MENU_ITEMS[i]);
  }
  footer("; . mover   Enter abrir   1-5 atalho");
}

// ---------- Controle IR ----------
String lastName = "Pronto";
bool playNext = true;  // Espaco: true = manda Play, false = manda Pause

int btnForKey(char c) {
  if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
  for (int i = 0; i < B_COUNT; i++)
    if (BTN[i].key == c) return i;
  return -1;
}

int macroForKey(char c) {
  if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
  for (int i = 0; i < MC_COUNT; i++)
    if (MACRO_KEY[i] == c) return i;
  return -1;
}

void irButton(int b, bool newPress) {
  const BtnCode& bc = cfg.b[b];
  uint8_t cmd = bc.cmd;
  String name = BTN[b].name;
  if (b == B_PLAY && bc.cmd == BTN[B_PLAY].cmd) {
    if (!playNext) cmd = CMD_PAUSE;
    name = playNext ? "Play" : "Pause";
    if (newPress) playNext = !playNext;
  }
  sendRC6(bc.addr, cmd, newPress);
  lastName = name;
  setStatus("RC6 end " + hex2(bc.addr) + " cmd " + hex2(cmd));
}

void irDigit(char c) {
  uint8_t cmd = c - '0';  // 0..9 = comandos 0x00..0x09
  sendRC6(PHILIPS_ADDR, cmd, true);
  lastName = String("Numero ") + c;
  setStatus("RC6 end 00 cmd " + hex2(cmd));
}

void chip(int x, int w, const char* key, const char* label, uint16_t color) {
  canvas.fillRoundRect(x, 44, w, 15, 4, color);
  canvas.setFont(&fonts::Font0);
  canvas.setTextColor(TFT_BLACK, color);
  canvas.setCursor(x + 5, 48);
  canvas.print(key);
  canvas.print(" ");
  canvas.print(label);
}

void drawIR() {
  header("Philips Ambilight - IR", TFT_ORANGE);
  canvas.setFont(&fonts::FreeSansBold12pt7b);
  canvas.setTextColor(TFT_WHITE, TFT_BLACK);
  canvas.setCursor(6, 21);
  if (runActive) canvas.printf("%s %d/%d", runName.c_str(), runIdx, runM.n);
  else canvas.print(lastName);
  chip(2, 82, "T", "TV aberta", TFT_GREENYELLOW);
  chip(88, 66, "I", "HDMI", TFT_SKYBLUE);
  chip(158, 80, "H", "Home", TFT_GOLD);
  line(64, "P Ligar  A Ambilight  E Fontes  M Menu");
  line(74, "; . , / setas  Enter OK  Del Voltar");
  line(84, "= - Volume  X Mudo  [ ] Canal  0-9");
  line(94, "Espaco Play/Pause  S Stop  R F << >>");
  line(104, "G Guia  O Opcoes  Y YouTube");
  footer("Aponte para a TV            ` menu");
}

// ---------- Controle Bluetooth ----------
bool textMode = false;

void startBle() {
  if (!bleStarted) {
    ble.begin();
    bleStarted = true;
  }
}

void btButton(int b) {
  if (!ble.isConnected()) {
    setStatus("Nao conectado - pareie primeiro");
    return;
  }
  switch (b) {
    case B_UP: ble.press(KEY_UP_ARROW); break;
    case B_DOWN: ble.press(KEY_DOWN_ARROW); break;
    case B_LEFT: ble.press(KEY_LEFT_ARROW); break;
    case B_RIGHT: ble.press(KEY_RIGHT_ARROW); break;
    case B_OK: ble.press(KEY_RETURN); break;
    case B_BACK: ble.press(KEY_ESC); break;                // Android: Voltar
    case B_MENU: ble.press((uint8_t)(0x65 + 136)); break;  // tecla Application
    case B_HOME: ble.press(KEY_MEDIA_WWW_HOME); break;     // Android: Home
    case B_VOLUP: ble.press(KEY_MEDIA_VOLUME_UP); break;
    case B_VOLDN: ble.press(KEY_MEDIA_VOLUME_DOWN); break;
    case B_MUTE: ble.press(KEY_MEDIA_MUTE); break;
    case B_PLAY: ble.press(KEY_MEDIA_PLAY_PAUSE); break;
    case B_STOP: ble.press(KEY_MEDIA_STOP); break;
    case B_FF: ble.press(KEY_MEDIA_NEXT_TRACK); break;
    case B_REW: ble.press(KEY_MEDIA_PREVIOUS_TRACK); break;
    default:
      setStatus(String(BTN[b].name) + ": so funciona por IR");
      return;
  }
  lastName = BTN[b].name;
  setStatus("Enviado por Bluetooth");
}

void btText(char c) {
  if (!ble.isConnected()) {
    setStatus("Nao conectado - pareie primeiro");
    return;
  }
  if (c == '\n') ble.write(KEY_RETURN);
  else if (c == '\b') ble.write(BLE_BACKSPACE);
  else ble.write((uint8_t)c);
}

void drawBT() {
  header(textMode ? "Bluetooth - Digitar" : "Philips - Bluetooth", TFT_SKYBLUE);
  bool con = ble.isConnected();
  canvas.setFont(&fonts::FreeSansBold9pt7b);
  canvas.setTextColor(con ? TFT_GREEN : TFT_YELLOW, TFT_BLACK);
  canvas.setCursor(6, 22);
  canvas.print(con ? "Conectado" : "Aguardando pareamento");
  if (!con) {
    line(44, "Na TV: Configuracoes > Controles e");
    line(54, "acessorios > Parear controle ou");
    line(64, "acessorio > \"Cardputer TV\".");
    line(80, "O Bluetooth nao liga a TV: use o IR.");
    footer("` menu");
    return;
  }
  if (textMode) {
    line(44, "Digite: as letras vao para a TV");
    line(54, "(busca do YouTube etc).");
    line(64, "Enter confirma, Del apaga.");
    footer("Tab volta ao controle");
    return;
  }
  line(50, "; . , / setas  Enter OK  Del Voltar");
  line(60, "H Home  M Menu  = - Volume  X Mudo");
  line(70, "Espaco Play/Pause  S Stop  R F << >>");
  line(86, "T, I, Ligar e Ambilight: so no IR", TFT_DARKGREY);
  footer("Tab digitar texto           ` menu");
}

// ---------- Configurar atalhos ----------
int scSel = 0;    // qual atalho (MC_TV / MC_HDMI)
int scItem = 0;   // item selecionado na lista de opcoes
const char* scItems[8];
int scCount = 0;

void buildScItems() {
  const char* const* p = scSel == MC_TV ? TV_PRESETS : HDMI_PRESETS;
  int n = scSel == MC_TV ? NUM_TV_PRESETS : NUM_HDMI_PRESETS;
  for (int i = 0; i < n; i++) scItems[i] = p[i];
  scItems[n] = "* Gravar minha sequencia";
  scCount = n + 1;
}

void drawShortcuts() {
  header("Configurar atalhos", TFT_GREENYELLOW);
  for (int i = 0; i < MC_COUNT; i++) {
    int y = 24 + i * 34;
    bool on = i == scSel;
    if (on) canvas.fillRoundRect(2, y - 3, W - 4, 32, 4, TFT_DARKGREEN);
    uint16_t bg = on ? TFT_DARKGREEN : TFT_BLACK;
    canvas.setFont(&fonts::FreeSansBold9pt7b);
    canvas.setTextColor(TFT_WHITE, bg);
    canvas.setCursor(8, y);
    canvas.printf("%c  %s", MACRO_KEY[i] - 32, MACRO_NAME[i]);
    canvas.setFont(&fonts::Font0);
    canvas.setTextColor(TFT_LIGHTGREY, bg);
    canvas.setCursor(8, y + 18);
    canvas.print(macroSummary(cfg.m[i]));
  }
  line(96, "Enter: testar opcoes ou gravar a sua");
  footer("; . escolher  Enter abrir  ` menu");
}

void drawScEdit() {
  String t = String("Atalho ") + (char)(MACRO_KEY[scSel] - 32) + " - " + MACRO_NAME[scSel];
  header(t.c_str(), TFT_GREENYELLOW);
  line(22, "Atual: " + macroSummary(cfg.m[scSel], 31), TFT_CYAN);
  drawList(36, 6, scItems, scCount, scItem, TFT_DARKGREEN);
  if (runActive) footer("Testando... qualquer tecla para");
  else footer("Enter testar   S salvar   ` voltar");
}

Macro rec;
uint32_t recLast = 0;

void startRecord() {
  rec.n = 0;
  rec.addr = PHILIPS_ADDR;
  mode = M_RECORD;
}

void recordKey(char c) {
  uint8_t cmd;
  if (c >= '0' && c <= '9') {
    cmd = c - '0';
  } else {
    int b = btnForKey(c);
    if (b < 0) return;
    cmd = (b == B_PLAY) ? BTN[B_PLAY].cmd : cfg.b[b].cmd;
  }
  if (rec.n >= MACRO_MAX) {
    setStatus("Limite de 24 passos");
    return;
  }
  uint32_t now = millis();
  if (rec.n > 0) {
    uint32_t d = now - recLast;
    rec.wait[rec.n - 1] = d < 150 ? 150 : d > 4000 ? 4000 : d;
  }
  rec.cmd[rec.n] = cmd;
  rec.wait[rec.n] = 0;
  rec.n++;
  recLast = now;
  sendRC6(rec.addr, cmd, true);
}

void drawRecord() {
  String t = String("Gravando atalho ") + (char)(MACRO_KEY[scSel] - 32);
  header(t.c_str(), TFT_RED);
  line(24, "Use as teclas normais do controle");
  line(34, "(Fontes = E, setas, Enter = OK...).");
  line(44, "Cada tecla ja vai para a TV e entra");
  line(54, "na sequencia, com o mesmo tempo.");
  line(72, String("Passos: ") + rec.n, TFT_YELLOW);
  line(84, macroSummary(rec), TFT_CYAN);
  footer("Tab salvar            ` cancelar");
}

// ---------- Explorar ----------
uint8_t exAddr = PHILIPS_ADDR, exCmd = 0x00;
int exField = 0;  // 0 = comando, 1 = endereco
bool exAuto = false, exBinding = false;
uint32_t exAt = 0;
static const uint32_t EX_INTERVAL = 1500;

void exSend() { sendRC6(exAddr, exCmd, true); }

void exAdjust(int d) {
  uint8_t* f = exField == 0 ? &exCmd : &exAddr;
  *f = (uint8_t)(*f + d);
}

void drawExplore() {
  header("Explorar codigos RC6", TFT_GREENYELLOW);
  const char* labels[2] = {"Comando", "Endereco"};
  uint8_t vals[2] = {exCmd, exAddr};
  for (int i = 0; i < 2; i++) {
    int x = 4 + i * 118;
    bool sel = exField == i;
    uint16_t bg = sel ? TFT_DARKGREEN : 0x2104;
    canvas.fillRoundRect(x, 22, 114, 36, 4, bg);
    canvas.setFont(&fonts::Font0);
    canvas.setTextColor(TFT_LIGHTGREY, bg);
    canvas.setCursor(x + 4, 25);
    canvas.print(labels[i]);
    canvas.setFont(&fonts::FreeSansBold12pt7b);
    canvas.setTextColor(TFT_WHITE, bg);
    canvas.setCursor(x + 40, 35);
    canvas.print(hex2(vals[i]));
  }
  if (exBinding) line(64, "Aperte a tecla p/ gravar (` cancela)", TFT_ORANGE);
  else if (exAuto) line(64, "AUTO: testando... aperte uma tecla", TFT_ORANGE);
  line(78, "Enter enviar     Tab trocar campo");
  line(88, ", / -1 +1        ; . +16 -16");
  line(98, "A testar sozinho (1 a cada 1,5 s)");
  line(108, "B gravar numa tecla (vale T e I)");
  footer("` menu");
}

void exBind(char c) {
  exBinding = false;
  int mc = macroForKey(c);
  if (mc >= 0) {
    Macro& m = cfg.m[mc];
    m.n = 0;
    m.addr = exAddr;
    macroAdd(m, exCmd);
    saveConfig();
    setStatus(String("Gravado no atalho ") + MACRO_NAME[mc]);
    return;
  }
  int b = btnForKey(c);
  if (b < 0) {
    setStatus("Essa tecla nao tem botao");
    return;
  }
  cfg.b[b] = {exAddr, exCmd, 1};
  saveConfig();
  setStatus(String("Gravado em ") + BTN[b].name + " (" + BTN[b].keyLabel + ")");
}

// ---------- Restaurar ----------
void drawReset() {
  header("Restaurar padrao", TFT_GOLD);
  line(30, "Volta todas as teclas e os atalhos");
  line(40, "T e I para o padrao (apaga o que foi");
  line(50, "gravado).");
  line(70, "Enter confirmar", TFT_GREEN);
  footer("` menu");
}

// ---------- Teclado ----------
char keyFromState() {
  auto st = M5Cardputer.Keyboard.keysState();
  if (st.enter) return '\n';
  if (st.backspace || st.del) return '\b';
  if (st.tab) return '\t';
  if (st.esc) return KEY_EXIT;
  if (st.up) return ';';  // Fn + setas
  if (st.down) return '.';
  if (st.left) return ',';
  if (st.right) return '/';
  if (!st.word.empty()) return st.word.back();
  if (st.space) return ' ';
  return 0;
}

void goMenu() {
  exAuto = exBinding = false;
  runActive = false;
  textMode = false;
  if (bleStarted && ble.isConnected()) ble.releaseAll();
  mode = M_MENU;
}

void openMenuItem(int i) {
  lastName = "Pronto";
  statusMsg = "";
  switch (i) {
    case 0: mode = M_IR; break;
    case 1: mode = M_BT; startBle(); break;
    case 2: mode = M_SHORTCUTS; break;
    case 3: mode = M_EXPLORE; break;
    case 4: mode = M_RESET; break;
  }
}

void onKey(char c) {
  // Qualquer tecla interrompe um atalho em andamento
  if (runActive) {
    runActive = false;
    setStatus("Atalho interrompido");
    return;
  }

  switch (mode) {
    case M_MENU:
      if (c == ';') menuSel = (menuSel + MENU_COUNT - 1) % MENU_COUNT;
      else if (c == '.') menuSel = (menuSel + 1) % MENU_COUNT;
      else if (c == '\n') openMenuItem(menuSel);
      else if (c >= '1' && c < '1' + MENU_COUNT) openMenuItem(menuSel = c - '1');
      return;

    case M_IR: {
      if (c == KEY_EXIT) return goMenu();
      if (c >= '0' && c <= '9') return irDigit(c);
      int mc = macroForKey(c);
      if (mc >= 0) {
        lastName = MACRO_NAME[mc];
        startMacro(cfg.m[mc], MACRO_NAME[mc]);
        return;
      }
      int b = btnForKey(c);
      if (b >= 0) irButton(b, true);
      return;
    }

    case M_BT:
      if (c == '\t') {
        textMode = !textMode;
        return;
      }
      if (textMode) return btText(c);
      if (c == KEY_EXIT) return goMenu();
      if (c >= '0' && c <= '9') return btText(c);
      if (macroForKey(c) >= 0) return setStatus("Atalhos T e I: so no modo IR");
      if (btnForKey(c) >= 0) btButton(btnForKey(c));
      return;

    case M_SHORTCUTS:
      if (c == KEY_EXIT) return goMenu();
      if (c == ';' || c == '.') scSel = (scSel + 1) % MC_COUNT;
      else if (c == 't' || c == 'T') scSel = MC_TV;
      else if (c == 'i' || c == 'I') scSel = MC_HDMI;
      if (c == '\n' || c == 't' || c == 'T' || c == 'i' || c == 'I') {
        buildScItems();
        scItem = 0;
        mode = M_SC_EDIT;
      }
      return;

    case M_SC_EDIT: {
      if (c == KEY_EXIT) {
        mode = M_SHORTCUTS;
        return;
      }
      bool isRec = scItem == scCount - 1;
      if (c == ';') scItem = (scItem + scCount - 1) % scCount;
      else if (c == '.') scItem = (scItem + 1) % scCount;
      else if (c == '\n') {
        if (isRec) return startRecord();
        Macro m;
        buildPreset(scSel, scItem, m);
        startMacro(m, "Teste");
      } else if (c == 's' || c == 'S') {
        if (isRec) return startRecord();
        buildPreset(scSel, scItem, cfg.m[scSel]);
        saveConfig();
        setStatus(String("Salvo no atalho ") + MACRO_NAME[scSel]);
      }
      return;
    }

    case M_RECORD:
      if (c == KEY_EXIT) {
        setStatus("Gravacao cancelada");
        mode = M_SC_EDIT;
      } else if (c == '\t') {
        if (rec.n == 0) {
          setStatus("Nada gravado");
        } else {
          cfg.m[scSel] = rec;
          saveConfig();
          setStatus(String("Salvo no atalho ") + MACRO_NAME[scSel]);
        }
        mode = M_SC_EDIT;
      } else {
        recordKey(c);
      }
      return;

    case M_EXPLORE:
      if (exBinding) {
        if (c == KEY_EXIT) {
          exBinding = false;
          setStatus("Cancelado");
        } else {
          exBind(c);
        }
        return;
      }
      if (exAuto) {
        exAuto = false;
        setStatus("Parado no comando " + hex2(exCmd));
        return;
      }
      if (c == KEY_EXIT) return goMenu();
      if (c == '\t') exField = (exField + 1) % 2;
      else if (c == ',') exAdjust(-1);
      else if (c == '/') exAdjust(1);
      else if (c == ';') exAdjust(16);
      else if (c == '.') exAdjust(-16);
      else if (c == '\n') exSend();
      else if (c == 'a' || c == 'A') {
        exAuto = true;
        exSend();
        exAt = millis();
      } else if (c == 'b' || c == 'B') exBinding = true;
      return;

    case M_RESET:
      if (c == KEY_EXIT) return goMenu();
      if (c == '\n') {
        loadDefaults();
        saveConfig();
        setStatus("Pronto! Padrao restaurado");
      }
      return;
  }
}

void onRelease() {
  if (mode == M_BT && bleStarted && ble.isConnected() && !textMode) ble.releaseAll();
}

// ---------- Setup / Loop ----------
char heldKey = 0;
uint32_t heldSince = 0, lastRepeat = 0;

void setup() {
  auto c = M5.config();
  M5Cardputer.begin(c, true);
  // A biblioteca ja deixa a tela na horizontal (Cardputer e ADV).
  // Se por algum motivo ela vier em pe, gira 90 graus.
  if (M5Cardputer.Display.width() < M5Cardputer.Display.height())
    M5Cardputer.Display.setRotation((M5Cardputer.Display.getRotation() + 1) % 4);
  W = M5Cardputer.Display.width();
  H = M5Cardputer.Display.height();
  M5Cardputer.Display.setBrightness(120);
  canvas.createSprite(W, H);
  irsend.begin();
  prefs.begin("philips", false);
  loadConfig();
}

void loop() {
  M5Cardputer.update();

  if (M5Cardputer.Keyboard.isChange()) {
    if (M5Cardputer.Keyboard.isPressed()) {
      char c = keyFromState();
      if (c) {
        onKey(c);
        heldKey = c;
        heldSince = lastRepeat = millis();
      }
    } else {
      heldKey = 0;
      onRelease();
    }
  }

  // Repeticao ao segurar (setas, volume, canal, << >>) no controle IR
  if (mode == M_IR && !runActive && heldKey && M5Cardputer.Keyboard.isPressed()) {
    int b = btnForKey(heldKey);
    uint32_t now = millis();
    if (b >= 0 && BTN[b].repeat && now - heldSince > 400 && now - lastRepeat > 120) {
      irButton(b, false);
      lastRepeat = now;
    }
  }

  macroTick();

  if (mode == M_EXPLORE && exAuto && millis() - exAt > EX_INTERVAL) {
    exCmd++;
    exSend();
    exAt = millis();
  }

  canvas.fillSprite(TFT_BLACK);
  switch (mode) {
    case M_MENU: drawMenu(); break;
    case M_IR: drawIR(); break;
    case M_BT: drawBT(); break;
    case M_SHORTCUTS: drawShortcuts(); break;
    case M_SC_EDIT: drawScEdit(); break;
    case M_RECORD: drawRecord(); break;
    case M_EXPLORE: drawExplore(); break;
    case M_RESET: drawReset(); break;
  }
  canvas.pushSprite(0, 0);
  delay(15);
}
