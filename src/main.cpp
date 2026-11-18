// Controle Philips Ambilight para M5Stack Cardputer / Cardputer ADV (S3A)
// - Controle IR: LED infravermelho interno (GPIO 44), protocolo RC6 da Philips
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

// ---------- Configuracao salva (teclas regravadas pelo Explorar) ----------
struct BtnCode {
  uint8_t addr, cmd, valid;
};
struct Config {
  uint32_t magic;
  BtnCode b[B_COUNT];
};
static const uint32_t CFG_MAGIC = 0x50484C32;  // "PHL2"
Config cfg;

void loadDefaults() {
  for (int i = 0; i < B_COUNT; i++) cfg.b[i] = {PHILIPS_ADDR, BTN[i].cmd, 1};
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

void sendRC6(uint8_t addr, uint8_t cmd, bool newPress) {
  if (newPress) rc6Toggle = !rc6Toggle;
  uint64_t data = irsend.encodeRC6(addr, cmd, kRC6Mode0Bits);
  if (rc6Toggle) data = irsend.toggleRC6(data, kRC6Mode0Bits);
  irsend.sendRC6(data, kRC6Mode0Bits);
}

// ---------- Interface ----------
enum Mode { M_MENU, M_IR, M_BT, M_EXPLORE, M_RESET };
Mode mode = M_MENU;

String statusMsg;
uint32_t statusAt = 0;
uint32_t lastSendAt = 0;

void setStatus(const String& s) {
  statusMsg = s;
  statusAt = millis();
}

String hex2(uint8_t v) {
  char b[3];
  snprintf(b, sizeof(b), "%02X", v);
  return String(b);
}

void header(const char* title, uint16_t color) {
  canvas.fillRect(0, 0, W, 18, color);
  canvas.setTextColor(TFT_BLACK, color);
  canvas.setFont(&fonts::FreeSansBold9pt7b);
  canvas.setCursor(4, 2);
  canvas.print(title);
  canvas.setFont(&fonts::Font0);
}

void line(int y, const String& s, uint16_t color = TFT_WHITE) {
  canvas.setFont(&fonts::Font0);
  canvas.setTextColor(color, TFT_BLACK);
  canvas.setCursor(4, y);
  canvas.print(s);
}

void footer(const char* text) { line(H - 9, text, TFT_DARKGREY); }

void statusLine(int y) {
  if (statusMsg.length() && millis() - statusAt < 4000) line(y, statusMsg, TFT_YELLOW);
}

void sendDot() {
  if (millis() - lastSendAt < 200) canvas.fillCircle(W - 12, 9, 5, TFT_RED);
}

// ---------- Menu ----------
const char* MENU_ITEMS[] = {
  "1  Controle IR",
  "2  Controle Bluetooth",
  "3  Explorar codigos",
  "4  Restaurar teclas",
};
const int MENU_COUNT = 4;
int menuSel = 0;

void drawMenu() {
  header("Controle Philips", TFT_CYAN);
  canvas.setFont(&fonts::FreeSans9pt7b);
  for (int i = 0; i < MENU_COUNT; i++) {
    int y = 23 + i * 22;
    if (i == menuSel) {
      canvas.fillRoundRect(2, y, W - 4, 20, 4, TFT_DARKCYAN);
      canvas.setTextColor(TFT_WHITE, TFT_DARKCYAN);
    } else {
      canvas.setTextColor(TFT_LIGHTGREY, TFT_BLACK);
    }
    canvas.setCursor(8, y + 3);
    canvas.print(MENU_ITEMS[i]);
  }
  footer("; . mover   Enter abrir   1-4 atalho");
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

void irButton(int b, bool newPress) {
  const BtnCode& bc = cfg.b[b];
  uint8_t cmd = bc.cmd;
  String name = BTN[b].name;
  if (b == B_PLAY && cfg.b[b].cmd == BTN[B_PLAY].cmd) {
    if (!playNext) cmd = CMD_PAUSE;
    name = playNext ? "Play" : "Pause";
    if (newPress) playNext = !playNext;
  }
  sendRC6(bc.addr, cmd, newPress);
  lastSendAt = millis();
  lastName = name;
  setStatus("RC6 end " + hex2(bc.addr) + " cmd " + hex2(cmd));
}

void irDigit(char c) {
  uint8_t cmd = c - '0';  // 0..9 = comandos 0x00..0x09
  sendRC6(PHILIPS_ADDR, cmd, true);
  lastSendAt = millis();
  lastName = String("Numero ") + c;
  setStatus("RC6 end 00 cmd " + hex2(cmd));
}

void drawHints() {
  line(60, "P Ligar  A Ambilight  H Home  M Menu");
  line(70, "; . , / setas  Enter OK  Del Voltar");
  line(80, "= - Volume  X Mudo  [ ] Canal  0-9");
  line(90, "Espaco Play/Pause  S Stop  R F << >>");
  line(100, "I Fontes  G Guia  O Opcoes  T TV");
  line(110, "N Netflix  Y YouTube  V Prime Video");
}

void drawIR() {
  header("Philips Ambilight - IR", TFT_ORANGE);
  sendDot();
  canvas.setFont(&fonts::FreeSansBold12pt7b);
  canvas.setTextColor(TFT_WHITE, TFT_BLACK);
  canvas.setCursor(6, 22);
  canvas.print(lastName);
  statusLine(47);
  drawHints();
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
  canvas.setFont(&fonts::Font0);
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
    line(54, "(busca do YouTube, Netflix etc).");
    line(64, "Enter confirma, Del apaga.");
    footer("Tab volta ao controle");
    return;
  }
  statusLine(44);
  line(60, "; . , / setas  Enter OK  Del Voltar");
  line(70, "H Home  M Menu  = - Volume  X Mudo");
  line(80, "Espaco Play/Pause  S Stop  R F << >>");
  line(90, "Ligar, Ambilight e apps: so no IR");
  footer("Tab digitar texto           ` menu");
}

// ---------- Explorar ----------
uint8_t exAddr = PHILIPS_ADDR, exCmd = 0x00;
int exField = 0;  // 0 = comando, 1 = endereco
bool exAuto = false, exBinding = false;
uint32_t exAt = 0;
static const uint32_t EX_INTERVAL = 1500;

void exSend() {
  sendRC6(exAddr, exCmd, true);
  lastSendAt = millis();
}

void exAdjust(int d) {
  uint8_t* f = exField == 0 ? &exCmd : &exAddr;
  *f = (uint8_t)(*f + d);
}

void drawExplore() {
  header("Explorar codigos RC6", TFT_GREENYELLOW);
  sendDot();
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
  canvas.setFont(&fonts::Font0);
  if (exBinding) line(64, "Aperte a tecla p/ gravar (` cancela)", TFT_ORANGE);
  else if (exAuto) line(64, "AUTO: testando... aperte uma tecla", TFT_ORANGE);
  else statusLine(64);
  line(78, "Enter enviar     Tab trocar campo");
  line(88, ", / -1 +1        ; . +16 -16");
  line(98, "A testar sozinho (1 a cada 1,5 s)");
  line(108, "B gravar numa tecla do controle");
  footer("` menu");
}

void exBind(char c) {
  exBinding = false;
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
  header("Restaurar teclas", TFT_GOLD);
  line(30, "Volta todas as teclas para os codigos");
  line(40, "originais da Philips (apaga o que foi");
  line(50, "gravado no Explorar).");
  line(70, "Enter confirmar", TFT_GREEN);
  statusLine(90);
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
    case 2: mode = M_EXPLORE; break;
    case 3: mode = M_RESET; break;
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
      if (c >= '0' && c <= '9') return irDigit(c);
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
      if (btnForKey(c) >= 0) btButton(btnForKey(c));
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
        setStatus("Pronto! Teclas restauradas");
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
  if (mode == M_IR && heldKey && M5Cardputer.Keyboard.isPressed()) {
    int b = btnForKey(heldKey);
    uint32_t now = millis();
    if (b >= 0 && BTN[b].repeat && now - heldSince > 400 && now - lastRepeat > 120) {
      irButton(b, false);
      lastRepeat = now;
    }
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
    case M_EXPLORE: drawExplore(); break;
    case M_RESET: drawReset(); break;
  }
  canvas.pushSprite(0, 0);
  delay(15);
}
