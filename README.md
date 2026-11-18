# Controle Philips Ambilight para Cardputer

Firmware para o **M5Stack Cardputer** e o **Cardputer ADV (S3A)** que transforma ele em controle remoto da Smart TV **Philips Ambilight PUG7908/78** (Google TV). Ele também deve funcionar nas outras TVs Philips Ambilight recentes.

## Duas formas de controlar

| Modo | Como funciona | Liga a TV? |
|---|---|---|
| **Controle IR** | LED infravermelho do Cardputer, protocolo **RC6** da Philips | Sim |
| **Controle Bluetooth** | O Cardputer vira teclado Bluetooth do Google TV, e também serve para digitar em buscas | Não |

## Teclas do Controle IR

| Tecla | Botão | Tecla | Botão |
|---|---|---|---|
| `P` | Ligar / desligar | `A` | **Ambilight** |
| `;` `.` `,` `/` | Cima, baixo, esquerda, direita | `Enter` | OK |
| `Del` | Voltar | `H` | Home |
| `M` | Menu (configurações) | `O` | Opções |
| `=` / `-` | Volume + / − | `X` | Mudo |
| `]` / `[` | Canal + / − | `0`–`9` | Números |
| `Espaço` | Play / Pause (alterna) | `S` | Stop |
| `R` / `F` | Voltar (<<) / Avançar (>>) | `I` | Fontes (HDMI etc.) |
| `G` | Guia de TV | `T` | TV |
| `N` | Netflix | `Y` | YouTube |
| `V` | Prime Video | `` ` `` | Volta ao menu |

As setas, o volume, os canais e o `<<`/`>>` repetem enquanto a tecla está segurada. Com `Fn`, as setas do teclado também funcionam.

## Menu

1. **Controle IR**: aponte o Cardputer para a frente da TV, a 1–2 m.
2. **Controle Bluetooth**: na TV, abra *Configurações → Controles e acessórios → Parear controle ou acessório* e escolha **Cardputer TV**. A tecla `Tab` liga o modo de digitar texto. Ligar, Ambilight e os botões de apps funcionam só no IR.
3. **Explorar códigos**: testa outros comandos RC6 e grava o que funcionar numa tecla.
   - `Tab` troca entre comando e endereço. `,` e `/` mudam o valor de 1 em 1, `;` e `.` de 16 em 16.
   - `Enter` envia e `A` testa os comandos sozinho, um a cada 1,5 s.
   - `B` e depois uma tecla grava o comando nela. Por exemplo, `B` e depois `Y` troca o que o `Y` faz.
4. **Restaurar teclas**: volta tudo para os códigos originais da Philips.

## Códigos

Philips RC6 modo 0, endereço `0x00`, 36 kHz. Os códigos são iguais em toda a linha Ambilight. Eu conferi nos arquivos `Philips_TV_7956_Series`, `Philips_TV_48OLED806` e `Philips_50PUT6103_79` do banco público [Flipper-IRDB](https://github.com/UberGuidoZ/Flipper-IRDB).

## Como gravar

Os arquivos ficam na Release **ultima-versao**:
<https://github.com/jonatassantosribeiro1914-commits/cardputer/releases/tag/ultima-versao>

| Arquivo | Para quê |
|---|---|
| `controle-philips-launcher.bin` | Instalar pelo **cartão SD** com o Launcher |
| `controle-philips-cardputer.bin` | Gravar pelo **USB** no endereço 0x0 |

### Pelo cartão SD (Launcher)
1. Copie `controle-philips-launcher.bin` para o cartão SD.
2. No Cardputer, abra o **Launcher** → **SD** → escolha o arquivo → **Install**.

### Pelo USB
Grave `controle-philips-cardputer.bin` no endereço **0x0** pelo navegador em <https://espressif.github.io/esptool-js/>, ou com:
```bash
esptool.py --chip esp32s3 write_flash 0x0 controle-philips-cardputer.bin
```

### Compilar no PC
```bash
pio run -t upload
```
