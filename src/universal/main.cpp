// Controle IR Universal para M5Stack Cardputer / Cardputer ADV (S3A)
//
// Le os arquivos .ir do Flipper Zero direto do cartao SD e distribui os
// botoes nas teclas do Cardputer automaticamente, pelo nome. Tambem traz
// Philips e HTV 8 embutidos, para funcionar sem cartao.
//
// Como usar: copie a pasta Flipper-IRDB (ou seus arquivos .ir) para o SD.

#include <M5Cardputer.h>
#include <SD.h>
#include <SPI.h>
#include <Preferences.h>
#include <algorithm>
#include <functional>
#include "i18n.h"
#include "ir_core.h"
#include "keymap.h"
#include "builtins.h"
#include "../brand/splash.h"

static const uint8_t IR_PIN = 44;
static const uint8_t SD_SCK = 40, SD_MISO = 39, SD_MOSI = 14, SD_CS = 12;
static const char KEY_EXIT = '`';

IrCore ir(IR_PIN);
Preferences prefs;
M5Canvas canvas(&M5Cardputer.Display);
int W = 240, H = 135;
bool sdOk = false;

// ---------- Estado ----------
enum Mode { M_MENU, M_BROWSE, M_CAT, M_BRAND, M_MODEL, M_REMOTE, M_ABOUT, M_LANG };
Mode mode = M_MENU;

Remote remote;      // controle aberto
KeyMap km;
bool listMode = false;
int listSel = 0;
String remoteSource;  // "sd:/caminho" ou "builtin:n" (para recentes)

String statusMsg;
uint32_t statusAt = 0, lastSendAt = 0;
void setStatus(const String& s) { statusMsg = s; statusAt = millis(); }
bool statusFresh() { return statusMsg.length() && millis() - statusAt < 4000; }

// ---------- Desenho basico ----------
void header(const char* title, uint16_t color) {
  canvas.fillRect(0, 0, W, 18, color);
  canvas.setTextColor(TFT_BLACK, color);
  canvas.setFont(&fonts::FreeSansBold9pt7b);
  canvas.setCursor(4, 2);
  canvas.print(title);
  canvas.setFont(&fonts::Font0);
  if (millis() - lastSendAt < 200) canvas.fillCircle(W - 12, 9, 5, TFT_RED);
}
void line(int y, const String& s, uint16_t c = TFT_WHITE) {
  canvas.setFont(&fonts::Font0);
  canvas.setTextColor(c, TFT_BLACK);
  canvas.setCursor(4, y);
  canvas.print(s);
}
void footer(const char* t) {
  if (statusFresh()) line(H - 9, statusMsg, TFT_YELLOW);
  else line(H - 9, t, TFT_DARKGREY);
}

// ---------- Menu ----------
const int MENU_N = 4;
int menuSel = 0;

void drawMenu() {
  header(T(S_TITLE_MAIN), TFT_CYAN);
  const StrId items[MENU_N] = {S_MENU_SD, S_MENU_BUILTIN, S_MENU_ABOUT, S_MENU_LANG};
  canvas.setFont(&fonts::FreeSans9pt7b);
  for (int i = 0; i < MENU_N; i++) {
    int y = 22 + i * 20;
    if (i == menuSel) {
      canvas.fillRoundRect(2, y, W - 4, 18, 4, TFT_DARKCYAN);
      canvas.setTextColor(TFT_WHITE, TFT_DARKCYAN);
    } else {
      canvas.setTextColor(TFT_LIGHTGREY, TFT_BLACK);
    }
    canvas.setCursor(8, y + 2);
    canvas.print(T(items[i]));
  }
  line(H - 20, sdOk ? T(S_SD_OK) : T(S_SD_NO), sdOk ? TFT_GREEN : TFT_ORANGE);
  footer(T(S_FOOT_MENU));
}

// ---------- Navegador do SD ----------
struct Entry {
  String name;
  bool dir;
};
std::vector<Entry> entries;
String curPath = "/";
int browseSel = 0;

void readDir(const String& path) {
  entries.clear();
  File d = SD.open(path);
  if (d && d.isDirectory()) {
    File e;
    while ((e = d.openNextFile()) && entries.size() < 1000) {
      String nm = e.name();
      int s = nm.lastIndexOf('/');
      if (s >= 0) nm = nm.substring(s + 1);
      bool isdir = e.isDirectory();
      e.close();
      if (nm.length() == 0 || nm[0] == '.') continue;
      if (!isdir && !nm.endsWith(".ir") && !nm.endsWith(".IR")) continue;
      entries.push_back({nm, isdir});
    }
    d.close();
  }
  std::sort(entries.begin(), entries.end(), [](const Entry& a, const Entry& b) {
    if (a.dir != b.dir) return a.dir > b.dir;
    String la = a.name; la.toLowerCase();
    String lb = b.name; lb.toLowerCase();
    return la < lb;
  });
  browseSel = 0;
}

String joinPath(const String& base, const String& name) {
  if (base == "/") return "/" + name;
  return base + "/" + name;
}

void openRemoteFromSd(const String& path);

void drawBrowse() {
  header(T(S_TITLE_SD), TFT_ORANGE);
  line(20, curPath, TFT_SKYBLUE);
  if (entries.empty()) {
    line(44, T(S_EMPTY1));
    line(58, T(S_EMPTY2));
    footer(T(S_FOOT_BACK));
    return;
  }
  int rows = 8, y0 = 32;
  int first = browseSel - rows + 1;
  if (first < 0) first = 0;
  for (int r = 0; r < rows && first + r < (int)entries.size(); r++) {
    int i = first + r, y = y0 + r * 12;
    bool on = i == browseSel;
    if (on) canvas.fillRect(0, y - 1, W, 12, TFT_DARKCYAN);
    const Entry& e = entries[i];
    uint16_t c = on ? TFT_WHITE : (e.dir ? TFT_GOLD : TFT_LIGHTGREY);
    canvas.setTextColor(c, on ? TFT_DARKCYAN : TFT_BLACK);
    canvas.setFont(&fonts::Font0);
    canvas.setCursor(4, y);
    canvas.print(e.dir ? "[+] " : "    ");
    canvas.print(e.name.substring(0, 36));
  }
  char ft[56];
  snprintf(ft, sizeof(ft), "%d/%d  %s", browseSel + 1, (int)entries.size(), T(S_SUF_BROWSE));
  footer(ft);
}

void browseEnter() {
  if (entries.empty()) return;
  const Entry& e = entries[browseSel];
  String full = joinPath(curPath, e.name);
  if (e.dir) {
    curPath = full;
    readDir(curPath);
  } else {
    openRemoteFromSd(full);
  }
}

void browseUp() {
  if (curPath == "/") {
    mode = M_MENU;
    return;
  }
  int s = curPath.lastIndexOf('/');
  curPath = s <= 0 ? "/" : curPath.substring(0, s);
  readDir(curPath);
}

// ---------- Controles embutidos (categoria > marca > modelo) ----------
int catSel = 0, brandSel = 0, modelSel = 0;

// Lista generica com rolagem e contador.
void drawPick(const char* title, uint16_t color, int count,
              int sel, std::function<String(int)> item, const char* hint) {
  header(title, color);
  if (count == 0) { line(40, T(S_EMPTY)); footer(hint); return; }
  int rows = 8, y0 = 24;
  int first = sel - rows + 1;
  if (first < 0) first = 0;
  for (int r = 0; r < rows && first + r < count; r++) {
    int i = first + r, y = y0 + r * 12;
    bool on = i == sel;
    if (on) canvas.fillRect(0, y - 1, W, 12, TFT_PURPLE);
    canvas.setFont(&fonts::Font0);
    canvas.setTextColor(on ? TFT_WHITE : TFT_LIGHTGREY, on ? TFT_PURPLE : TFT_BLACK);
    canvas.setCursor(6, y);
    canvas.print(item(i).substring(0, 38));
  }
  char ft[56];
  snprintf(ft, sizeof(ft), "%d/%d  %s", sel + 1, count, hint);
  footer(ft);
}

void drawCat() {
  drawPick(T(S_TITLE_CAT), TFT_VIOLET, NUM_BUILTIN_CATS, catSel,
           [](int i) { return String(catName(BUILTIN_CATS[i].name)); },
           T(S_FOOT_OPEN_MENU));
}
void drawBrand() {
  const BCat& c = BUILTIN_CATS[catSel];
  drawPick(catName(c.name), TFT_VIOLET, c.n, brandSel,
           [&](int i) { return String(c.brand[i].name); },
           T(S_FOOT_OPEN_BACK));
}
void drawModel() {
  const BBrand& b = BUILTIN_CATS[catSel].brand[brandSel];
  drawPick(b.name, TFT_VIOLET, b.n, modelSel,
           [&](int i) { return String(b.rem[i].name); },
           T(S_FOOT_OPEN_BACK));
}

// ---------- Tela do controle ----------
bool isRepeatKey(char c) {
  return c == ';' || c == '.' || c == ',' || c == '/' ||
         c == '=' || c == '-' || c == ']' || c == '[';
}

void openRemote() {
  buildKeyMap(remote, km);
  listMode = false;
  listSel = 0;
  mode = M_REMOTE;
  setStatus(String(remote.btn.size()) + " " + T(S_SUF_BTNS));
}

void openRemoteFromSd(const String& path) {
  setStatus(T(S_READING));
  if (!loadIrFile(SD, path, remote)) {
    setStatus(T(S_ERR_READ));
    return;
  }
  if (remote.btn.empty()) {
    setStatus(T(S_ERR_NOBTN));
    return;
  }
  remoteSource = "sd:" + path;
  prefs.putString("last", remoteSource);
  openRemote();
}

void sendBtnIdx(int i, bool newPress) {
  if (i < 0 || i >= (int)remote.btn.size()) return;
  const Button& b = remote.btn[i];
  if (b.proto == PR_UNSUPPORTED && b.raw.empty()) {
    setStatus(b.name + T(S_ST_UNSUP));
    return;
  }
  if (newPress || !b.raw.empty()) ir.sendButton(b);
  else ir.sendParsed(b.proto, b.a0, b.a1, b.cmd, false);
  lastSendAt = millis();
  setStatus(String("> ") + b.name + "  [" + protoLabel(b.proto) + "]");
}

void chip(int x, int y, int w, const char* key, const char* label, uint16_t color) {
  canvas.fillRoundRect(x, y, w, 14, 3, color);
  canvas.setFont(&fonts::Font0);
  canvas.setTextColor(TFT_BLACK, color);
  canvas.setCursor(x + 3, y + 3);
  canvas.print(key);
  canvas.print(" ");
  canvas.print(label);
}

void drawRemoteGrid() {
  header(remote.name.c_str(), TFT_ORANGE);
  // grade de teclas presentes
  int x = 2, y = 22, colW = 78;
  int maxY = H - 12;
  bool any = false;
  for (int s = 0; s < NUM_SLOTS; s++) {
    if (km.slotBtn[s] < 0) continue;
    any = true;
    chip(x, y, colW - 3, SLOTS[s].keyLabel, SLOTS[s].shortName[curLang], TFT_DARKCYAN);
    y += 16;
    if (y + 14 > maxY) {
      y = 22;
      x += colW;
      if (x + colW > W) break;
    }
  }
  // numeros
  bool hasDigit = false;
  for (int d = 0; d < 10; d++) if (km.digit[d] >= 0) hasDigit = true;
  if (hasDigit && x + colW <= W) {
    if (y + 14 > maxY) { y = 22; x += colW; }
    if (x < W) chip(x, y, colW - 3, "0-9", T(S_LBL_NUMBERS), TFT_DARKGREEN);
  }
  if (!any && !hasDigit)
    line(40, T(S_NOKEYS));
  footer(T(S_FOOT_REMOTE));
}

void drawRemoteList() {
  header(remote.name.c_str(), TFT_ORANGE);
  int rows = 8, y0 = 22, n = remote.btn.size();
  int first = listSel - rows + 1;
  if (first < 0) first = 0;
  for (int r = 0; r < rows && first + r < n; r++) {
    int i = first + r, y = y0 + r * 12;
    bool on = i == listSel;
    if (on) canvas.fillRect(0, y - 1, W, 12, TFT_DARKCYAN);
    canvas.setFont(&fonts::Font0);
    canvas.setTextColor(on ? TFT_WHITE : TFT_LIGHTGREY, on ? TFT_DARKCYAN : TFT_BLACK);
    canvas.setCursor(4, y);
    canvas.print(remote.btn[i].name.substring(0, 28));
    canvas.setCursor(170, y);
    canvas.setTextColor(on ? TFT_WHITE : TFT_DARKGREY, on ? TFT_DARKCYAN : TFT_BLACK);
    canvas.print(protoLabel(remote.btn[i].proto));
  }
  char ft[56];
  snprintf(ft, sizeof(ft), "%d/%d  %s", listSel + 1, n, T(S_SUF_LIST));
  footer(ft);
}

void drawRemote() {
  if (listMode) drawRemoteList();
  else drawRemoteGrid();
}

// ---------- Sobre ----------
void drawAbout() {
  header(T(S_TITLE_ABOUT), TFT_GOLD);
  line(24, T(S_ABOUT1));
  line(36, T(S_ABOUT2));
  line(52, T(S_ABOUT3));
  line(62, T(S_ABOUT4));
  line(72, T(S_ABOUT5));
  line(82, T(S_ABOUT6));
  line(92, T(S_ABOUT7));
  line(104, T(S_ABOUT8), TFT_CYAN);
  line(114, T(S_ABOUT9), TFT_CYAN);
  footer(T(S_FOOT_MENUBACK));
}

// ---------- Idioma ----------
int langSel = 0;
void drawLang() {
  header(T(S_TITLE_LANG), TFT_GREENYELLOW);
  canvas.setFont(&fonts::FreeSans9pt7b);
  for (int i = 0; i < LANG_COUNT; i++) {
    int y = 28 + i * 24;
    bool on = i == langSel;
    if (on) {
      canvas.fillRoundRect(2, y, W - 4, 22, 4, TFT_DARKGREEN);
      canvas.setTextColor(TFT_WHITE, TFT_DARKGREEN);
    } else {
      canvas.setTextColor(TFT_LIGHTGREY, TFT_BLACK);
    }
    canvas.setCursor(10, y + 4);
    canvas.print(LANG_NAME[i]);
    if (i == curLang) {
      canvas.setCursor(W - 20, y + 4);
      canvas.print("*");
    }
  }
  footer(T(S_FOOT_LANG));
}

// ---------- Teclado ----------
char keyFromState() {
  auto st = M5Cardputer.Keyboard.keysState();
  if (st.enter) return '\n';
  if (st.backspace || st.del) return '\b';
  if (st.tab) return '\t';
  if (st.esc) return KEY_EXIT;
  if (st.up) return ';';
  if (st.down) return '.';
  if (st.left) return ',';
  if (st.right) return '/';
  if (!st.word.empty()) return st.word.back();
  if (st.space) return ' ';
  return 0;
}

void onRemoteKey(char c) {
  if (c == KEY_EXIT) {
    mode = remoteSource.startsWith("sd:") ? M_BROWSE : M_MODEL;
    return;
  }
  if (c == '\t') {
    listMode = !listMode;
    return;
  }
  if (listMode) {
    int n = remote.btn.size();
    if (c == ';') listSel = (listSel + n - 1) % n;
    else if (c == '.') listSel = (listSel + 1) % n;
    else if (c == '\n') sendBtnIdx(listSel, true);
    return;
  }
  // grade: numeros
  if (c >= '0' && c <= '9') {
    int d = km.digit[c - '0'];
    if (d >= 0) sendBtnIdx(d, true);
    else setStatus(T(S_ST_NONUM));
    return;
  }
  int s = slotForKey(c);
  if (s >= 0) {
    if (km.slotBtn[s] >= 0) sendBtnIdx(km.slotBtn[s], true);
    else setStatus(String(T(S_ST_NOBTN)) + SLOTS[s].shortName[curLang]);
  }
}

void onKey(char c) {
  switch (mode) {
    case M_MENU:
      if (c == ';') menuSel = (menuSel + MENU_N - 1) % MENU_N;
      else if (c == '.') menuSel = (menuSel + 1) % MENU_N;
      else if (c == '\n' || (c >= '1' && c <= '4')) {
        if (c >= '1' && c <= '4') menuSel = c - '1';
        if (menuSel == 0) {
          if (!sdOk) { setStatus(T(S_SD_NOTDET)); return; }
          curPath = "/";
          readDir(curPath);
          mode = M_BROWSE;
        } else if (menuSel == 1) {
          mode = M_CAT;
        } else if (menuSel == 2) {
          mode = M_ABOUT;
        } else {
          langSel = curLang;
          mode = M_LANG;
        }
      }
      return;

    case M_BROWSE:
      if (c == KEY_EXIT) browseUp();
      else if (c == ';') browseSel = (browseSel + entries.size() - 1) % max((size_t)1, entries.size());
      else if (c == '.') browseSel = (browseSel + 1) % max((size_t)1, entries.size());
      else if (c == '\n') browseEnter();
      return;

    case M_CAT: {
      int n = NUM_BUILTIN_CATS;
      if (c == KEY_EXIT) mode = M_MENU;
      else if (c == ';') catSel = (catSel + n - 1) % n;
      else if (c == '.') catSel = (catSel + 1) % n;
      else if (c == '\n') { brandSel = 0; mode = M_BRAND; }
      return;
    }
    case M_BRAND: {
      int n = BUILTIN_CATS[catSel].n;
      if (c == KEY_EXIT) mode = M_CAT;
      else if (c == ';') brandSel = (brandSel + n - 1) % n;
      else if (c == '.') brandSel = (brandSel + 1) % n;
      else if (c == '\n') { modelSel = 0; mode = M_MODEL; }
      return;
    }
    case M_MODEL: {
      const BBrand& b = BUILTIN_CATS[catSel].brand[brandSel];
      if (c == KEY_EXIT) mode = M_BRAND;
      else if (c == ';') modelSel = (modelSel + b.n - 1) % b.n;
      else if (c == '.') modelSel = (modelSel + 1) % b.n;
      else if (c == '\n') {
        loadBuiltinRemote(b.rem[modelSel], remote);
        remoteSource = "builtin";
        openRemote();
      }
      return;
    }

    case M_REMOTE: onRemoteKey(c); return;

    case M_ABOUT:
      if (c == KEY_EXIT) mode = M_MENU;
      return;

    case M_LANG:
      if (c == KEY_EXIT) mode = M_MENU;
      else if (c == ';') langSel = (langSel + LANG_COUNT - 1) % LANG_COUNT;
      else if (c == '.') langSel = (langSel + 1) % LANG_COUNT;
      else if (c == '\n') {
        curLang = langSel;
        prefs.putUChar("lang", curLang);
        setStatus(T(S_LANG_SAVED));
        mode = M_MENU;
      }
      return;
  }
}

// ---------- Setup / Loop ----------
char heldKey = 0;
uint32_t heldSince = 0, lastRepeat = 0;

void setup() {
  auto cfg = M5.config();
  M5Cardputer.begin(cfg, true);
  if (M5Cardputer.Display.width() < M5Cardputer.Display.height())
    M5Cardputer.Display.setRotation((M5Cardputer.Display.getRotation() + 1) % 4);
  W = M5Cardputer.Display.width();
  H = M5Cardputer.Display.height();
  M5Cardputer.Display.setBrightness(120);
  canvas.createSprite(W, H);
  drawSplashJSR(canvas, W, H);
  ir.begin();
  prefs.begin("iruniv", false);
  curLang = prefs.getUChar("lang", LANG_PT);
  if (curLang >= LANG_COUNT) curLang = LANG_PT;

  SPI.begin(SD_SCK, SD_MISO, SD_MOSI, SD_CS);
  sdOk = SD.begin(SD_CS, SPI, 25000000);
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
    }
  }

  // repeticao ao segurar (setas, volume, canal) no controle
  if (mode == M_REMOTE && !listMode && heldKey && isRepeatKey(heldKey) &&
      M5Cardputer.Keyboard.isPressed()) {
    int s = slotForKey(heldKey);
    uint32_t now = millis();
    if (s >= 0 && km.slotBtn[s] >= 0 && now - heldSince > 400 && now - lastRepeat > 130) {
      sendBtnIdx(km.slotBtn[s], false);
      lastRepeat = now;
    }
  }

  canvas.fillSprite(TFT_BLACK);
  switch (mode) {
    case M_MENU: drawMenu(); break;
    case M_BROWSE: drawBrowse(); break;
    case M_CAT: drawCat(); break;
    case M_BRAND: drawBrand(); break;
    case M_MODEL: drawModel(); break;
    case M_REMOTE: drawRemote(); break;
    case M_ABOUT: drawAbout(); break;
    case M_LANG: drawLang(); break;
  }
  canvas.pushSprite(0, 0);
  delay(15);
}
