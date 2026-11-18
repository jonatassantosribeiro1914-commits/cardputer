// Controle HTV para M5Stack Cardputer
// - Controle IR (LED infravermelho interno, GPIO 44) com codigos de TV box Android
// - Controle Bluetooth (Cardputer vira teclado BLE para o Android da HTV)
// - Testar Ligar: dispara codigos de "Ligar" de varias TV boxes para descobrir o certo
// - Explorar: varre enderecos/comandos NEC e grava o que funcionar em cada tecla

// BleKeyboard.h precisa vir antes de M5Cardputer.h: o M5Cardputer define
// macros (KEY_BACKSPACE, KEY_TAB...) com os mesmos nomes das constantes BLE.
#include <BleKeyboard.h>
static const uint8_t BLE_BACKSPACE = 0xB2;  // valor do BleKeyboard
#include <M5Cardputer.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <Preferences.h>
#include "codes.h"

static const uint8_t IR_PIN = 44;
static const char KEY_EXIT = '`';  // tecla "esc" do Cardputer

IRsend irsend(IR_PIN);
BleKeyboard ble("Cardputer HTV", "M5Stack", 100);
bool bleStarted = false;
Preferences prefs;
M5Canvas canvas(&M5Cardputer.Display);

// ---------- Configuracao salva ----------
struct BtnCode {
  uint8_t a0, a1, cmd, valid;
};
struct Config {
  uint32_t magic;
  BtnCode b[B_COUNT];
};
static const uint32_t CFG_MAGIC = 0x48545631;  // "HTV1"
Config cfg;

void loadProfile(int p) {
  const Profile& pr = PROFILES[p];
  for (int i = 0; i < B_COUNT; i++) {
    cfg.b[i].a0 = pr.a0;
    cfg.b[i].a1 = pr.a1;
    cfg.b[i].cmd = pr.cmd[i] == NONE ? 0 : (uint8_t)pr.cmd[i];
    cfg.b[i].valid = pr.cmd[i] != NONE;
  }
}

void saveConfig() {
  cfg.magic = CFG_MAGIC;
  prefs.putBytes("cfg", &cfg, sizeof(cfg));
}

void loadConfig() {
  size_t n = prefs.getBytes("cfg", &cfg, sizeof(cfg));
  if (n != sizeof(cfg) || cfg.magic != CFG_MAGIC) {
    loadProfile(0);
    saveConfig();
  }
}

// ---------- IR ----------
static uint8_t rev8(uint8_t v) {
  uint8_t r = 0;
  for (int i = 0; i < 8; i++) {
    r = (r << 1) | (v & 1);
    v >>= 1;
  }
  return r;
}

// NEC: endereco (2 bytes) + comando + comando invertido, cada byte LSB primeiro.
uint32_t necData(uint8_t a0, uint8_t a1, uint8_t cmd) {
  return ((uint32_t)rev8(a0) << 24) | ((uint32_t)rev8(a1) << 16) |
         ((uint32_t)rev8(cmd) << 8) | rev8((uint8_t)~cmd);
}

void sendNec(uint8_t a0, uint8_t a1, uint8_t cmd) {
  irsend.sendNEC(necData(a0, a1, cmd), 32);
}

// ---------- Interface ----------
enum Mode { M_MENU, M_IR, M_BT, M_TEST, M_EXPLORE, M_PROFILES };
Mode mode = M_MENU;

String statusMsg;
uint32_t statusAt = 0;

void setStatus(const String& s) {
  statusMsg = s;
  statusAt = millis();
}

String hex2(uint8_t v) {
  char b[3];
  snprintf(b, sizeof(b), "%02X", v);
  return String(b);
}

String codeStr(uint8_t a0, uint8_t a1, uint8_t cmd) {
  return "NEC " + hex2(a0) + " " + hex2(a1) + " cmd " + hex2(cmd);
}

void header(const char* title, uint16_t color) {
  canvas.fillRect(0, 0, 240, 18, color);
  canvas.setTextColor(TFT_BLACK, color);
  canvas.setTextSize(1);
  canvas.setFont(&fonts::FreeSansBold9pt7b);
  canvas.setCursor(4, 2);
  canvas.print(title);
  canvas.setFont(&fonts::Font0);
}

void footer(const char* text) {
  canvas.setFont(&fonts::Font0);
  canvas.setTextSize(1);
  canvas.setTextColor(TFT_DARKGREY, TFT_BLACK);
  canvas.setCursor(4, 126);
  canvas.print(text);
}

void statusLine(int y) {
  if (statusMsg.length() && millis() - statusAt < 4000) {
    canvas.setFont(&fonts::Font0);
    canvas.setTextColor(TFT_YELLOW, TFT_BLACK);
    canvas.setCursor(4, y);
    canvas.print(statusMsg);
  }
}

void line(int y, const String& s, uint16_t color = TFT_WHITE) {
  canvas.setFont(&fonts::Font0);
  canvas.setTextSize(1);
  canvas.setTextColor(color, TFT_BLACK);
  canvas.setCursor(4, y);
  canvas.print(s);
}

// ---------- Menu ----------
const char* MENU_ITEMS[] = {
  "1 Controle IR",
  "2 Controle Bluetooth",
  "3 Testar Ligar (descobrir)",
  "4 Explorar codigos",
  "5 Perfis IR",
};
const int MENU_COUNT = 5;
int menuSel = 0;

void drawMenu() {
  header("Controle HTV", TFT_CYAN);
  canvas.setFont(&fonts::FreeSans9pt7b);
  for (int i = 0; i < MENU_COUNT; i++) {
    int y = 22 + i * 20;
    if (i == menuSel) {
      canvas.fillRoundRect(2, y, 236, 19, 4, TFT_DARKCYAN);
      canvas.setTextColor(TFT_WHITE, TFT_DARKCYAN);
    } else {
      canvas.setTextColor(TFT_LIGHTGREY, TFT_BLACK);
    }
    canvas.setCursor(8, y + 3);
    canvas.print(MENU_ITEMS[i]);
  }
  footer("; . mover   Enter abrir   ` voltar");
}

// ---------- Controle IR ----------
int lastBtn = -1;
uint32_t lastSendAt = 0;

int btnForKey(char c) {
  if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
  for (int i = 0; i < B_COUNT; i++)
    if (BTN[i].key == c) return i;
  return -1;
}

void irButton(int b) {
  lastBtn = b;
  const BtnCode& bc = cfg.b[b];
  if (!bc.valid) {
    setStatus(String(BTN[b].name) + ": sem codigo (use Explorar)");
    return;
  }
  sendNec(bc.a0, bc.a1, bc.cmd);
  lastSendAt = millis();
  setStatus(String(BTN[b].name) + "  " + codeStr(bc.a0, bc.a1, bc.cmd));
}

void drawKeyHints() {
  line(70, "P Ligar   H Home    M Menu   A Apps");
  line(80, "; . , / setas      Enter OK");
  line(90, "Del Voltar  = Vol+  - Vol-  0 Mudo");
  line(100, "Espaco Play/Pause   S Stop  O Mouse");
}

void drawIR() {
  header("Controle IR", TFT_ORANGE);
  canvas.setFont(&fonts::FreeSansBold12pt7b);
  canvas.setTextColor(TFT_WHITE, TFT_BLACK);
  canvas.setCursor(6, 26);
  canvas.print(lastBtn >= 0 ? BTN[lastBtn].name : "Pronto");
  if (millis() - lastSendAt < 250) canvas.fillCircle(226, 34, 7, TFT_RED);
  canvas.setFont(&fonts::Font0);
  statusLine(54);
  drawKeyHints();
  footer("Aponte para a HTV          ` menu");
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
  lastBtn = b;
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
    case B_BACK: ble.press(KEY_ESC); break;              // Android: Voltar
    case B_MENU: ble.press((uint8_t)(0x65 + 136)); break;  // tecla Application -> Menu
    case B_HOME: ble.press(KEY_MEDIA_WWW_HOME); break;   // Android: Home
    case B_VOLUP: ble.press(KEY_MEDIA_VOLUME_UP); break;
    case B_VOLDN: ble.press(KEY_MEDIA_VOLUME_DOWN); break;
    case B_MUTE: ble.press(KEY_MEDIA_MUTE); break;
    case B_PLAY: ble.press(KEY_MEDIA_PLAY_PAUSE); break;
    case B_STOP: ble.press(KEY_MEDIA_STOP); break;
    default:
      setStatus(String(BTN[b].name) + ": so por IR");
      return;
  }
  setStatus(String("Enviado: ") + BTN[b].name);
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
  header(textMode ? "Bluetooth - Texto" : "Controle Bluetooth", TFT_SKYBLUE);
  bool con = ble.isConnected();
  canvas.setFont(&fonts::FreeSansBold9pt7b);
  canvas.setTextColor(con ? TFT_GREEN : TFT_YELLOW, TFT_BLACK);
  canvas.setCursor(6, 24);
  canvas.print(con ? "Conectado" : "Aguardando pareamento");
  canvas.setFont(&fonts::Font0);
  if (!con) {
    line(44, "Na HTV: Configuracoes > Controles e");
    line(54, "acessorios (ou Bluetooth) > Adicionar");
    line(64, "e escolha \"Cardputer HTV\".");
  } else if (textMode) {
    line(44, "Digite: as letras vao para a HTV.");
    line(54, "Enter confirma, Del apaga.");
    line(64, "Tab volta ao modo controle.");
  } else {
    statusLine(44);
  }
  if (!textMode) {
    drawKeyHints();
    footer("Tab digitar texto          ` menu");
  } else {
    footer("Tab modo controle");
  }
}

// ---------- Testar Ligar ----------
int candIdx = 0;
bool candAuto = false;
uint32_t candAt = 0;
static const uint32_t CAND_INTERVAL = 3000;

void sendCandidate() {
  const PowerCandidate& c = CANDIDATES[candIdx];
  sendNec(c.a0, c.a1, c.cmd);
  lastSendAt = millis();
}

void drawTest() {
  header("Testar Ligar", TFT_MAGENTA);
  const PowerCandidate& c = CANDIDATES[candIdx];
  canvas.setFont(&fonts::FreeSansBold12pt7b);
  canvas.setTextColor(TFT_WHITE, TFT_BLACK);
  canvas.setCursor(6, 24);
  canvas.printf("%d/%d", candIdx + 1, NUM_CANDIDATES);
  if (millis() - lastSendAt < 250) canvas.fillCircle(226, 34, 7, TFT_RED);
  canvas.setFont(&fonts::FreeSans9pt7b);
  canvas.setCursor(6, 50);
  canvas.print(c.name);
  canvas.setFont(&fonts::Font0);
  line(70, codeStr(c.a0, c.a1, c.cmd), TFT_CYAN);
  if (candAuto) line(82, "AUTO: testando... aperte qualquer tecla", TFT_ORANGE);
  else statusLine(82);
  line(96, "Enter enviar  , / anterior/proximo");
  line(106, "A auto   S salvar este endereco");
  footer("A HTV ligou/desligou? aperte S   ` menu");
}

void saveCandidate() {
  const PowerCandidate& c = CANDIDATES[candIdx];
  if (c.profile >= 0) {
    loadProfile(c.profile);
  } else {
    for (int i = 0; i < B_COUNT; i++) {
      cfg.b[i].a0 = c.a0;
      cfg.b[i].a1 = c.a1;
    }
    cfg.b[B_POWER] = {c.a0, c.a1, c.cmd, 1};
  }
  saveConfig();
  setStatus(c.profile >= 0 ? "Salvo! Perfil completo carregado"
                           : "Salvo! Use Explorar p/ outros botoes");
}

// ---------- Explorar ----------
uint8_t exA0 = 0x01, exA1 = 0xFE, exCmd = 0x00;
int exField = 0;  // 0 = cmd, 1 = a0, 2 = a1
bool exAuto = false, exBinding = false;
uint32_t exAt = 0;
static const uint32_t EX_INTERVAL = 1200;

void exSend() {
  sendNec(exA0, exA1, exCmd);
  lastSendAt = millis();
}

void exAdjust(int d) {
  uint8_t* f = exField == 0 ? &exCmd : exField == 1 ? &exA0 : &exA1;
  *f = (uint8_t)(*f + d);
}

void drawExplore() {
  header("Explorar codigos", TFT_GREENYELLOW);
  const char* labels[3] = {"Comando", "End. 1", "End. 2"};
  uint8_t vals[3] = {exCmd, exA0, exA1};
  for (int i = 0; i < 3; i++) {
    int x = 4 + i * 79;
    bool sel = exField == i;
    canvas.fillRoundRect(x, 22, 75, 38, 4, sel ? TFT_DARKGREEN : 0x2104);
    canvas.setTextColor(TFT_LIGHTGREY, sel ? TFT_DARKGREEN : 0x2104);
    canvas.setFont(&fonts::Font0);
    canvas.setCursor(x + 4, 25);
    canvas.print(labels[i]);
    canvas.setFont(&fonts::FreeSansBold12pt7b);
    canvas.setTextColor(TFT_WHITE, sel ? TFT_DARKGREEN : 0x2104);
    canvas.setCursor(x + 18, 36);
    canvas.print(hex2(vals[i]));
  }
  if (millis() - lastSendAt < 250) canvas.fillCircle(232, 66, 5, TFT_RED);
  canvas.setFont(&fonts::Font0);
  if (exBinding) line(66, "Aperte a tecla do botao p/ gravar (` cancela)", TFT_ORANGE);
  else if (exAuto) line(66, "AUTO: varrendo comandos... qualquer tecla para", TFT_ORANGE);
  else statusLine(66);
  line(80, "Enter enviar   Tab trocar campo");
  line(90, ", / -1 +1     ; . +16 -16");
  line(100, "A auto   N End2 = inverso do End1");
  line(110, "B gravar em uma tecla do controle");
  footer("` menu");
}

void exBind(char c) {
  exBinding = false;
  int b = btnForKey(c);
  if (b < 0) {
    setStatus("Tecla sem botao associado");
    return;
  }
  cfg.b[b] = {exA0, exA1, exCmd, 1};
  saveConfig();
  setStatus(String("Gravado em ") + BTN[b].name + " (" + BTN[b].keyLabel + ")");
}

// ---------- Perfis ----------
int profSel = 0;

void drawProfiles() {
  header("Perfis IR", TFT_GOLD);
  canvas.setFont(&fonts::FreeSans9pt7b);
  for (int i = 0; i < NUM_PROFILES; i++) {
    int y = 22 + i * 20;
    if (i == profSel) {
      canvas.fillRoundRect(2, y, 236, 19, 4, TFT_BROWN);
      canvas.setTextColor(TFT_WHITE, TFT_BROWN);
    } else {
      canvas.setTextColor(TFT_LIGHTGREY, TFT_BLACK);
    }
    canvas.setCursor(8, y + 3);
    canvas.print(PROFILES[i].name);
  }
  canvas.setFont(&fonts::Font0);
  const BtnCode& p = cfg.b[B_POWER];
  line(90, "Ligar atual: " + codeStr(p.a0, p.a1, p.cmd), TFT_CYAN);
  statusLine(104);
  footer("Enter carregar (substitui tudo)  ` menu");
}

// ---------- Teclado ----------
char keyFromState() {
  auto st = M5Cardputer.Keyboard.keysState();
  if (st.enter) return '\n';
  if (st.del) return '\b';
  if (st.tab) return '\t';
  if (!st.word.empty()) return st.word.back();
  if (st.space) return ' ';
  return 0;
}

void goMenu() {
  candAuto = exAuto = exBinding = false;
  textMode = false;
  if (bleStarted && ble.isConnected()) ble.releaseAll();
  mode = M_MENU;
}

void openMenuItem(int i) {
  lastBtn = -1;
  statusMsg = "";
  switch (i) {
    case 0: mode = M_IR; break;
    case 1: mode = M_BT; startBle(); break;
    case 2: mode = M_TEST; break;
    case 3:
      exA0 = cfg.b[B_POWER].a0;
      exA1 = cfg.b[B_POWER].a1;
      mode = M_EXPLORE;
      break;
    case 4: mode = M_PROFILES; break;
  }
}

void onKey(char c) {
  switch (mode) {
    case M_MENU:
      if (c == ';') menuSel = (menuSel + MENU_COUNT - 1) % MENU_COUNT;
      else if (c == '.') menuSel = (menuSel + 1) % MENU_COUNT;
      else if (c == '\n') openMenuItem(menuSel);
      else if (c >= '1' && c < '1' + MENU_COUNT) openMenuItem(menuSel = c - '1');
      return;

    case M_IR: {
      if (c == KEY_EXIT) return goMenu();
      int b = btnForKey(c);
      if (b >= 0) irButton(b);
      return;
    }

    case M_BT:
      if (c == '\t') {
        textMode = !textMode;
        return;
      }
      if (textMode) return btText(c);
      if (c == KEY_EXIT) return goMenu();
      if (btnForKey(c) >= 0) btButton(btnForKey(c));
      return;

    case M_TEST:
      if (candAuto) {
        candAuto = false;
        setStatus("Parado. Use , / para voltar e conferir");
        return;
      }
      if (c == KEY_EXIT) return goMenu();
      if (c == ',') candIdx = (candIdx + NUM_CANDIDATES - 1) % NUM_CANDIDATES;
      else if (c == '/') candIdx = (candIdx + 1) % NUM_CANDIDATES;
      else if (c == '\n') sendCandidate();
      else if (c == 'a' || c == 'A') {
        candAuto = true;
        sendCandidate();
        candAt = millis();
      } else if (c == 's' || c == 'S') saveCandidate();
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
      if (c == '\t') exField = (exField + 1) % 3;
      else if (c == ',') exAdjust(-1);
      else if (c == '/') exAdjust(1);
      else if (c == ';') exAdjust(16);
      else if (c == '.') exAdjust(-16);
      else if (c == '\n') exSend();
      else if (c == 'n' || c == 'N') exA1 = (uint8_t)~exA0;
      else if (c == 'a' || c == 'A') {
        exAuto = true;
        exSend();
        exAt = millis();
      } else if (c == 'b' || c == 'B') exBinding = true;
      return;

    case M_PROFILES:
      if (c == KEY_EXIT) return goMenu();
      if (c == ';') profSel = (profSel + NUM_PROFILES - 1) % NUM_PROFILES;
      else if (c == '.') profSel = (profSel + 1) % NUM_PROFILES;
      else if (c == '\n') {
        loadProfile(profSel);
        saveConfig();
        setStatus("Perfil carregado e salvo");
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
  M5Cardputer.Display.setRotation(1);
  M5Cardputer.Display.setBrightness(120);
  canvas.createSprite(240, 135);
  irsend.begin();
  prefs.begin("htv", false);
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

  // Repeticao ao segurar (setas e volume) no controle IR
  if (mode == M_IR && heldKey && M5Cardputer.Keyboard.isPressed()) {
    int b = btnForKey(heldKey);
    uint32_t now = millis();
    if (b >= 0 && BTN[b].repeat && now - heldSince > 450 && now - lastRepeat > 130) {
      irButton(b);
      lastRepeat = now;
    }
  }

  if (mode == M_TEST && candAuto && millis() - candAt > CAND_INTERVAL) {
    candIdx = (candIdx + 1) % NUM_CANDIDATES;
    sendCandidate();
    candAt = millis();
  }

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
    case M_TEST: drawTest(); break;
    case M_EXPLORE: drawExplore(); break;
    case M_PROFILES: drawProfiles(); break;
  }
  canvas.pushSprite(0, 0);
  delay(15);
}
