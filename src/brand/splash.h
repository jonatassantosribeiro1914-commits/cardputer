// Tela de abertura (splash) com a marca do criador: JSR.
// Desenhada com primitivas do M5GFX (sem bitmap), branca em fundo preto,
// imitando o logo "JSR" com um anel/orbita em volta.
#pragma once
#include <M5Cardputer.h>

// Desenha o anel inclinado (orbita) como varias elipses concentricas finas.
static void jsrRing(M5Canvas& cv, int cx, int cy, int rx, int ry, uint16_t color) {
  for (int d = -1; d <= 1; d++) {
    cv.drawEllipse(cx, cy, rx + d, ry + d, color);
    cv.drawEllipse(cx + 1, cy, rx + d, ry + d, color);
  }
}

// Mostra o splash por ~durMs milissegundos; sai antes se apertarem uma tecla.
static void drawSplashJSR(M5Canvas& cv, int W, int H, uint32_t durMs = 1500) {
  int cx = W / 2, cy = H / 2;

  cv.fillSprite(TFT_BLACK);

  // Anel/orbita atras do texto (elipse larga, levemente acima do centro).
  jsrRing(cv, cx, cy - 6, W / 2 - 16, H / 2 - 18, TFT_WHITE);

  // "JSR" em negrito grande, centralizado.
  cv.setTextColor(TFT_WHITE, TFT_BLACK);
  cv.setTextDatum(middle_center);
  cv.setFont(&fonts::FreeSansBold24pt7b);
  cv.setTextSize(1);
  // apaga um retangulo atras do texto para o anel nao cruzar as letras
  int bw = 150, bh = 56;
  cv.fillRect(cx - bw / 2, cy - bh / 2, bw, bh, TFT_BLACK);
  cv.drawString("JSR", cx, cy);

  // nome do produto e assinatura embaixo
  cv.setFont(&fonts::Font0);
  cv.setTextColor(TFT_WHITE, TFT_BLACK);
  cv.drawString("OneTap IR", cx, H - 18);
  cv.setTextColor(TFT_DARKGREY, TFT_BLACK);
  cv.drawString("by JSR", cx, H - 9);
  cv.setTextDatum(top_left);

  cv.pushSprite(0, 0);

  // espera, com opcao de pular apertando qualquer tecla
  uint32_t t0 = millis();
  while (millis() - t0 < durMs) {
    M5Cardputer.update();
    if (M5Cardputer.Keyboard.isChange() && M5Cardputer.Keyboard.isPressed()) break;
    delay(15);
  }
}
