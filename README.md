# Controle Philips Ambilight para Cardputer

Firmware para o **M5Stack Cardputer** e o **Cardputer ADV (S3A)** que transforma ele em controle remoto da Smart TV **Philips Ambilight PUG7908/78** (Google TV). Ele também deve funcionar nas outras TVs Philips Ambilight recentes.

## Duas formas de controlar

| Modo | Como funciona | Liga a TV? |
|---|---|---|
| **Controle IR** | LED infravermelho do Cardputer, protocolo **RC6** da Philips | Sim |
| **Controle Bluetooth** | O Cardputer vira teclado Bluetooth do Google TV, e também serve para digitar em buscas | Não |

## Atalhos principais

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

## Outras teclas do Controle IR

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

## Menu

1. **Controle IR**: aponte o Cardputer para a TV, a 1–2 m.
2. **Controle Bluetooth**: na TV, abra *Configurações → Controles e acessórios → Parear controle ou acessório* e escolha **Cardputer TV**. A tecla `Tab` liga o modo de digitar. `T`, `I`, Ligar e Ambilight funcionam só no IR.
3. **Configurar atalhos T e I**: veja acima.
4. **Explorar códigos**: testa outros comandos RC6 e grava numa tecla, inclusive no `T` e no `I`.
   - `Tab` troca o campo, `,` e `/` mudam de 1 em 1, `;` e `.` de 16 em 16.
   - `Enter` envia, `A` testa sozinho, `B` e depois uma tecla grava.
5. **Restaurar padrão**: volta as teclas e os atalhos para o padrão.

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
