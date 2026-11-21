# Histórico de versões

## v1.0.0

Primeira versão oficial. Dois firmwares para M5Stack Cardputer e Cardputer ADV (S3A).

### Controle IR Universal
- Lê arquivos `.ir` (formato Flipper Zero) do **cartão SD** e vira controle de quase
  qualquer aparelho, navegando por pastas → marca → modelo.
- Distribui os botões nas **teclas do Cardputer pelo nome** (Ligar=P, volume, setas,
  OK, canais, números, etc.); o que não é reconhecido fica na lista completa (`Tab`).
- **Controles embutidos** (sem cartão): 27 TVs/HTV (Samsung, LG, Philips, TCL, Sony,
  Hisense + HTV 8) e 15 marcas de ar-condicionado.
- Protocolos: NEC, NECext, Samsung32, RC5, RC5X, RC6, Sony (SIRC), RCA e replay `raw`.
- **Idiomas da interface:** Português, Español, English (escolha salva).
- Tela de abertura com a marca JSR.

### Controle Philips + HTV 8
- Controle fixo da Philips Ambilight (RC6) e da HTV 8 (NEC), com atalhos T (TV aberta)
  e I (HDMI) por sequência e modo Bluetooth.

### Extras
- Pacote `controles-ir-sd.zip`: seleção de controles (TVs + ar-condicionado) pronta
  para o cartão SD.

Códigos IR do banco público [Flipper-IRDB](https://github.com/UberGuidoZ/Flipper-IRDB).
