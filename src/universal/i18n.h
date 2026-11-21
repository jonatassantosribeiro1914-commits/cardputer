// Idiomas da interface: Portugues, Espanol, Ingles.
#pragma once
#include <Arduino.h>

enum Lang : uint8_t { LANG_PT, LANG_ES, LANG_EN, LANG_COUNT };
static uint8_t curLang = LANG_PT;

static const char* const LANG_NAME[LANG_COUNT] = {"Portugues", "Espanol", "English"};

enum StrId {
  S_MENU_SD, S_MENU_BUILTIN, S_MENU_ABOUT, S_MENU_LANG,
  S_TITLE_MAIN, S_SD_OK, S_SD_NO, S_FOOT_MENU,
  S_TITLE_SD, S_EMPTY1, S_EMPTY2, S_FOOT_BACK, S_SUF_BROWSE,
  S_TITLE_CAT, S_FOOT_OPEN_MENU, S_FOOT_OPEN_BACK, S_EMPTY,
  S_SUF_BTNS, S_LBL_NUMBERS, S_NOKEYS, S_FOOT_REMOTE, S_SUF_LIST,
  S_ST_UNSUP, S_ST_NONUM, S_ST_NOBTN, S_READING, S_ERR_READ, S_ERR_NOBTN, S_SD_NOTDET,
  S_FOOT_MENUBACK, S_TITLE_ABOUT,
  S_ABOUT1, S_ABOUT2, S_ABOUT3, S_ABOUT4, S_ABOUT5, S_ABOUT6, S_ABOUT7, S_ABOUT8, S_ABOUT9,
  S_TITLE_LANG, S_FOOT_LANG, S_LANG_SAVED,
  S_COUNT
};

// [StrId][idioma]
static const char* const STR[S_COUNT][LANG_COUNT] = {
  /*MENU_SD*/      {"1  Abrir do cartao SD", "1  Abrir de la tarjeta SD", "1  Open from SD card"},
  /*MENU_BUILTIN*/ {"2  Controles embutidos", "2  Controles integrados", "2  Built-in remotes"},
  /*MENU_ABOUT*/   {"3  Sobre / ajuda", "3  Acerca / ayuda", "3  About / help"},
  /*MENU_LANG*/    {"4  Idioma / Language", "4  Idioma / Language", "4  Language / Idioma"},
  /*TITLE_MAIN*/   {"OneTap IR", "OneTap IR", "OneTap IR"},
  /*SD_OK*/        {"Cartao SD: OK", "Tarjeta SD: OK", "SD card: OK"},
  /*SD_NO*/        {"Cartao SD: nao detectado", "Tarjeta SD: no detectada", "SD card: not detected"},
  /*FOOT_MENU*/    {"; . mover   Enter abrir", "; . mover   Enter abrir", "; . move   Enter open"},
  /*TITLE_SD*/     {"Cartao SD", "Tarjeta SD", "SD card"},
  /*EMPTY1*/       {"Pasta vazia ou sem arquivos .ir.", "Carpeta vacia o sin archivos .ir.", "Empty folder or no .ir files."},
  /*EMPTY2*/       {"Copie a pasta Flipper-IRDB para o SD.", "Copie la carpeta Flipper-IRDB al SD.", "Copy the Flipper-IRDB folder to SD."},
  /*FOOT_BACK*/    {"` voltar", "` volver", "` back"},
  /*SUF_BROWSE*/   {"Enter abrir  ` subir", "Enter abrir  ` subir", "Enter open  ` up"},
  /*TITLE_CAT*/    {"Embutidos: categoria", "Integrados: categoria", "Built-in: category"},
  /*FOOT_OPEN_MENU*/ {"Enter abrir  ` menu", "Enter abrir  ` menu", "Enter open  ` menu"},
  /*FOOT_OPEN_BACK*/ {"Enter abrir  ` voltar", "Enter abrir  ` volver", "Enter open  ` back"},
  /*EMPTY*/        {"(vazio)", "(vacio)", "(empty)"},
  /*SUF_BTNS*/     {"botoes", "botones", "buttons"},
  /*LBL_NUMBERS*/  {"Numeros", "Numeros", "Numbers"},
  /*NOKEYS*/       {"Nenhuma tecla reconhecida. Tab = lista.", "Ninguna tecla reconocida. Tab = lista.", "No keys recognized. Tab = list."},
  /*FOOT_REMOTE*/  {"Tab lista completa          ` voltar", "Tab lista completa         ` volver", "Tab full list               ` back"},
  /*SUF_LIST*/     {"Enter enviar  Tab grade", "Enter enviar  Tab cuadro", "Enter send  Tab grid"},
  /*ST_UNSUP*/     {": protocolo nao suportado", ": protocolo no soportado", ": protocol not supported"},
  /*ST_NONUM*/     {"Sem numero nesse controle", "Sin numero en este control", "No number on this remote"},
  /*ST_NOBTN*/     {"Sem botao ", "Sin boton ", "No button "},
  /*READING*/      {"Lendo...", "Leyendo...", "Reading..."},
  /*ERR_READ*/     {"Erro ao ler o arquivo", "Error al leer el archivo", "Error reading file"},
  /*ERR_NOBTN*/    {"Arquivo sem botoes", "Archivo sin botones", "File has no buttons"},
  /*SD_NOTDET*/    {"Cartao SD nao detectado", "Tarjeta SD no detectada", "SD card not detected"},
  /*FOOT_MENUBACK*/{"` menu", "` menu", "` menu"},
  /*TITLE_ABOUT*/  {"Sobre / ajuda", "Acerca / ayuda", "About / help"},
  /*ABOUT1*/       {"OneTap IR - um toque por botao.", "OneTap IR - un toque por boton.", "OneTap IR - one key per button."},
  /*ABOUT2*/       {"Le arquivos .ir do Flipper Zero no SD.", "Lee archivos .ir de Flipper Zero del SD.", "Reads Flipper Zero .ir files from SD."},
  /*ABOUT3*/       {"1. Formate o SD em FAT32.", "1. Formatee el SD en FAT32.", "1. Format the SD as FAT32."},
  /*ABOUT4*/       {"2. Copie a pasta Flipper-IRDB (ou seus", "2. Copie la carpeta Flipper-IRDB (o sus", "2. Copy the Flipper-IRDB folder (or your"},
  /*ABOUT5*/       {"   proprios arquivos .ir) para o SD.", "   propios archivos .ir) al SD.", "   own .ir files) to the SD."},
  /*ABOUT6*/       {"3. Menu > Abrir do cartao SD > escolha", "3. Menu > Abrir de la tarjeta SD > elija", "3. Menu > Open from SD card > pick"},
  /*ABOUT7*/       {"   a marca e o aparelho.", "   la marca y el aparato.", "   the brand and device."},
  /*ABOUT8*/       {"As teclas sao distribuidas pelo nome do", "Las teclas se asignan por el nombre del", "Keys are mapped by the button"},
  /*ABOUT9*/       {"botao. Tab mostra a lista completa.", "boton. Tab muestra la lista completa.", "name. Tab shows the full list."},
  /*TITLE_LANG*/   {"Idioma / Language", "Idioma / Language", "Language / Idioma"},
  /*FOOT_LANG*/    {"; . escolher   Enter ok   ` menu", "; . elegir   Enter ok   ` menu", "; . choose   Enter ok   ` menu"},
  /*LANG_SAVED*/   {"Idioma salvo", "Idioma guardado", "Language saved"},
};

static const char* T(StrId id) { return STR[id][curLang]; }

// Traduz nomes de categoria dos embutidos (marcas/modelos ficam como estao).
static const char* catName(const char* n) {
  if (strcmp(n, "Ar-condicionado") == 0) {
    static const char* const v[LANG_COUNT] = {"Ar-condicionado", "Aire acond.", "Air conditioner"};
    return v[curLang];
  }
  return n;  // "TVs" e outros permanecem
}
