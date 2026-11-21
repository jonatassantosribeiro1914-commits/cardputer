# Publicar no M5Burner (loja oficial da M5Stack)

O **M5Burner** é o aplicativo oficial da M5Stack para gravar firmwares no Cardputer.
Ele tem uma **loja** onde qualquer pessoa encontra e grava firmwares com um clique.
Este guia mostra como gravar o firmware e como enviá-lo para a loja.

> Observação: a interface do M5Burner muda de tempos em tempos. Os nomes dos botões
> podem variar um pouco; o essencial (arquivo, endereço e chip) continua igual.

## Arquivo e parâmetros corretos
- **Arquivo:** `onetap-ir-cardputer.bin` (o `-cardputer.bin`, que já inclui
  bootloader + partições + app).
- **Endereço de gravação:** `0x0`
- **Chip:** ESP32-S3
- **Baud:** 1500000 (ou 921600 se der erro)

Baixe o arquivo na página de releases do repositório:
`https://github.com/jonatassantosribeiro1914-commits/cardputer/releases`

## Passo 1 — Instalar o M5Burner
1. Baixe em: https://docs.m5stack.com/en/download
2. Instale e abra. Crie/entre numa conta M5Stack (necessária para a loja).

## Passo 2 — Gravar o firmware no seu Cardputer (teste local)
1. Conecte o Cardputer no USB.
2. No M5Burner, use a opção de **firmware personalizado / Burn custom** (ícone de
   adicionar `.bin` ou aba "User Custom", conforme a versão).
3. Selecione `onetap-ir-cardputer.bin`, endereço **0x0**, chip ESP32-S3.
4. Clique **Burn**. Se o aparelho não for detectado, segure o botão **G0** ao conectar.

## Passo 3 — Enviar para a loja do M5Burner
A M5Stack revisa firmwares de terceiros antes de listar. O caminho atual:
1. No M5Burner, procure a opção de **publicar / Upload firmware** (fica na sua conta,
   em "My Firmware" ou similar). Se a sua versão do app não tiver, envie pelo site da
   comunidade M5Stack (https://community.m5stack.com) ou pelo suporte, anexando o
   `.bin` e os dados abaixo.
2. Preencha os campos com o texto pronto a seguir.

### Dados sugeridos para o cadastro
- **Nome:** OneTap IR (Cardputer)
- **Versão:** 1.0.0
- **Categoria:** Tools / Remote
- **Dispositivo:** Cardputer (ESP32-S3)
- **Endereço:** 0x0
- **Autor:** JSR

### Descrição (Português)
```
Transforma o Cardputer num controle remoto infravermelho universal.
Le arquivos .ir do Flipper Zero no cartao SD e vira controle de quase qualquer
TV, som, projetor, receptor ou ar-condicionado. Tras varias TVs e ar-condicionados
ja embutidos (Samsung, LG, Philips, TCL, Sony, Hisense, HTV 8, e 15 marcas de AC).
Os botoes sao distribuidos nas teclas do Cardputer automaticamente (Ligar=P, volume,
setas, OK, canais, numeros...). Interface em Portugues, Espanhol e Ingles.
Compativel com Cardputer e Cardputer ADV (S3A). Codigos do banco Flipper-IRDB.
```

### Descrição (English)
```
Turns the Cardputer into a universal infrared remote. Reads Flipper Zero .ir files
from the SD card to control almost any TV, audio system, projector, set-top box or
air conditioner. Ships with many built-in TVs and ACs (Samsung, LG, Philips, TCL,
Sony, Hisense, HTV 8, and 15 AC brands). Buttons are auto-mapped to the Cardputer keys
(Power=P, volume, arrows, OK, channels, numbers...). UI in Portuguese, Spanish and
English. Works on Cardputer and Cardputer ADV (S3A). IR codes from the Flipper-IRDB.
```

## Alternativa sem loja (compartilhar direto)
Se não quiser passar pela revisão da loja, basta compartilhar:
- o link da **release** do GitHub (os `.bin` + o `controles-ir-sd.zip`), e
- o gravador no navegador: https://espressif.github.io/esptool-js/ (gravar o
  `*-cardputer.bin` em **0x0**).
