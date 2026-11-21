# Controles IR para Cardputer

Este repositório tem **dois firmwares** para o **M5Stack Cardputer** e o **Cardputer ADV (S3A)**:

| Firmware | Para quê | Arquivos na release |
|---|---|---|
| **Controle IR Universal** | Lê os arquivos `.ir` do Flipper Zero do **cartão SD** e vira controle de **qualquer aparelho** do banco. Traz Philips e HTV embutidos. | `controle-ir-universal-*` |
| **Controle Philips + HTV 8** | Controle fixo e enxuto só da Philips Ambilight e da HTV 8, com os atalhos T/I e Bluetooth. | `controle-tv-*` |

Os dois usam a mesma ideia: **cada botão numa tecla do Cardputer**, sem ficar navegando menu.

---

# Controle IR Universal

Copie a pasta **Flipper-IRDB** (ou seus próprios arquivos `.ir`) para um cartão SD em FAT32 e o Cardputer vira controle de quase qualquer TV, som, projetor, receptor ou ar-condicionado do banco de códigos.

**Como funciona:**
1. **Menu → Abrir do cartão SD**: navegue por categoria → marca → aparelho (`;` `.` para mover, `Enter` para abrir, `` ` `` para subir).
2. Ao abrir um controle, o firmware **distribui os botões nas teclas** pelo nome: `P` Ligar, setas `;` `.` `,` `/`, `Enter` OK, `Del` Voltar, `=` `-` Volume, `[` `]` Canal, `0`–`9` números, `H` Home, `M` Menu, `E` Fontes, `G` Guia, e outros.
3. O que não for reconhecido aparece na **lista completa** (`Tab`): `;` `.` para mover e `Enter` para enviar.
4. **Menu → Controles embutidos**: Philips e HTV 8, para usar sem cartão.

Protocolos suportados: NEC, NECext, Samsung32, RC5, RC5X, RC6, Sony (SIRC) e replay de sinais `raw`. Os códigos vêm do banco público [Flipper-IRDB](https://github.com/UberGuidoZ/Flipper-IRDB).

---

# Controle Philips Ambilight + HTV 8

Firmware fixo e enxuto para dois aparelhos:
- Smart TV **Philips Ambilight PUG7908/78** (Google TV), e provavelmente outras Philips Ambilight recentes
- TV box **HTV 8**

No menu, escolha **1 Philips** ou **2 HTV 8**. As teclas são as mesmas nos dois.

## Duas formas de controlar

| Modo | Como funciona | Liga a TV? |
|---|---|---|
| **Controle IR** | LED infravermelho do Cardputer, protocolo **RC6** da Philips | Sim |
| **Controle Bluetooth** | O Cardputer vira teclado Bluetooth do Google TV, e também serve para digitar em buscas | Não |

## Philips: atalhos principais

| Tecla | Atalho |
|---|---|
| `T` | **TV aberta** (antena) |
| `I` | **HDMI** |
| `H` | **Home** |

Não existe código infravermelho direto para "TV aberta" ou "HDMI" nessas Philips: a tecla TV (`9F`) leva para a proteção de tela. Por isso o `T` e o `I` são **sequências**: o Cardputer abre o menu **Fontes** e navega sozinho até o item certo. Por padrão:
- `T`: Fontes → sobe até o 1º item → OK
- `I`: Fontes → sobe até o 1º item → desce 1 (HDMI 1) → OK

Se não cair no lugar certo na sua TV, ajuste em **Menu → 3 Configurar atalhos T e I**:
- Escolha o atalho e teste as opções prontas com `Enter`. Quando uma funcionar, aperte `S` para salvar.
- Ou escolha **Gravar minha sequência** e faça o caminho com as teclas normais: `E` abre Fontes, depois as setas e `Enter`. Cada tecla já vai para a TV e o tempo entre elas é gravado. Aperte `Tab` para salvar.

Qualquer tecla interrompe um atalho no meio.

## Philips: outras teclas

| Tecla | Botão | Tecla | Botão |
|---|---|---|---|
| `P` | Ligar / desligar | `A` | Ambilight |
| `;` `.` `,` `/` | Setas | `Enter` | OK |
| `Del` | Voltar | `E` | Fontes (menu) |
| `M` | Menu (configurações) | `O` | Opções |
| `=` / `-` | Volume + / − | `X` | Mudo |
| `]` / `[` | Canal + / − | `0`–`9` | Números |
| `Espaço` | Play / Pause | `S` | Stop |
| `R` / `F` | << / >> | `G` | Guia de TV |
| `Y` | YouTube | `` ` `` | Volta ao menu |

## HTV 8

A HTV 8 ligou com o código de Ligar do controle **Starcom** (NEC, endereço `80 FF`, comando `0A`) no modo de teste do firmware antigo. Os outros botões vêm do mesmo controle Starcom.

| Tecla | Botão | Tecla | Botão |
|---|---|---|---|
| `P` | Ligar / desligar | `H` | Home / Sair |
| `;` `.` `,` `/` | Setas | `Enter` | OK |
| `Del` | Voltar | `M` | Menu |
| `=` / `-` | Volume + / − | `X` | Mudo |
| `]` / `[` | Canal + / − | `0`–`9` | Números |
| `Espaço` | Play / Pause | `S` | Stop |
| `R` / `F` | << / >> | `G` | Guia (EPG) |
| `O` | Info | `V` | Favoritos |
| `U` | Áudio | `T` | TV / Rádio |

O controle Starcom é de um receptor e o da HTV é de uma TV box, então alguns botões podem ter outra função ou não fazer nada, principalmente **Home**, **Voltar** e **Menu**. Para corrigir, use **5 Explorar códigos**: aperte `D` até aparecer **HTV 8 (NEC)**, procure o comando e grave na tecla com `B`.

## Menu

1. **Philips - controle IR**: aponte o Cardputer para a TV, a 1–2 m.
2. **HTV 8 - controle IR**: aponte para a HTV.
3. **Bluetooth (TV ou HTV)**: o Cardputer vira teclado Bluetooth. Funciona nos dois, porque os dois são Android. No aparelho, abra *Configurações → Controles e acessórios* (ou *Bluetooth*) → *Parear* e escolha **Cardputer TV**. A tecla `Tab` liga o modo de digitar. O Bluetooth não liga o aparelho.
4. **Atalhos T e I (Philips)**: veja acima.
5. **Explorar códigos**: testa outros comandos IR e grava numa tecla.
   - `D` troca o aparelho (Philips RC6 ou HTV NEC).
   - `Tab` troca o campo, `,` e `/` mudam de 1 em 1, `;` e `.` de 16 em 16.
   - `Enter` envia, `A` testa sozinho, `B` e depois uma tecla grava.
6. **Restaurar padrão**: volta as teclas dos dois aparelhos e os atalhos para o padrão.

## Códigos

Todos os códigos vêm do banco público [Flipper-IRDB](https://github.com/UberGuidoZ/Flipper-IRDB).
- **Philips**: RC6 modo 0, endereço `0x00`, 36 kHz. São iguais em toda a linha Ambilight; conferi nos arquivos `Philips_TV_7956_Series`, `Philips_TV_48OLED806` e `Philips_50PUT6103_79`.
- **HTV 8**: NEC estendido, endereço `80 FF`, 38 kHz, do arquivo `Cable_Boxes/Starcom/Starcom_9947_HD.ir`.

---

# Como gravar

Os arquivos ficam na Release **ultima-versao**:
<https://github.com/jonatassantosribeiro1914-commits/cardputer/releases/tag/ultima-versao>

Escolha o firmware:

| Firmware | Pelo cartão SD (Launcher) | Pelo USB (endereço 0x0) |
|---|---|---|
| Controle IR Universal | `controle-ir-universal-launcher.bin` | `controle-ir-universal-cardputer.bin` |
| Controle Philips + HTV 8 | `controle-tv-launcher.bin` | `controle-tv-cardputer.bin` |

### Pelo cartão SD (Launcher)
1. Copie o arquivo `*-launcher.bin` para o cartão SD.
2. No Cardputer, abra o **Launcher** → **SD** → escolha o arquivo → **Install**.

### Pelo USB
Grave o arquivo `*-cardputer.bin` no endereço **0x0** pelo navegador em <https://espressif.github.io/esptool-js/>, ou com:
```bash
esptool.py --chip esp32s3 write_flash 0x0 controle-ir-universal-cardputer.bin
```

### Compilar no PC
```bash
pio run -e universal -t upload   # controle IR universal
pio run -e cardputer -t upload   # controle Philips + HTV 8
```
