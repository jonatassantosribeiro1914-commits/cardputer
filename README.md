# Controle HTV para Cardputer

Firmware para o **M5Stack Cardputer** que transforma ele em controle remoto da **HTV 8** (ou de outra TV box Android). Funciona sem receptor infravermelho.

## Duas formas de controlar

| Modo | Como funciona | Liga a HTV? |
|---|---|---|
| **Controle IR** | Usa o LED infravermelho do Cardputer com códigos de TV box Android | Sim, se os códigos baterem |
| **Controle Bluetooth** | O Cardputer vira um teclado Bluetooth e o Android da HTV obedece | Não (só navega quando ela já está ligada) |

O modo Bluetooth funciona em qualquer Android, então ele serve de garantia se o IR não funcionar.

## Teclas

| Tecla | Botão | Tecla | Botão |
|---|---|---|---|
| `P` | Ligar | `H` | Home |
| `;` | Cima | `M` | Menu |
| `.` | Baixo | `=` | Volume + |
| `,` | Esquerda | `-` | Volume − |
| `/` | Direita | `0` | Mudo |
| `Enter` | OK | `Espaço` | Play/Pause |
| `Del` | Voltar | `S` | Stop |
| `A` | Apps (só IR) | `O` | Mouse (só IR) |

A tecla `` ` `` (canto superior esquerdo, "esc") volta ao menu.

## Menu

1. **Controle IR**: aponte o Cardputer para a frente da HTV. As setas e o volume repetem enquanto a tecla está segurada.
2. **Controle Bluetooth**: na HTV, abra *Configurações → Controles e acessórios* (ou *Bluetooth*) → *Adicionar* e escolha **Cardputer HTV**. A tecla `Tab` liga o **modo texto**, para digitar em buscas (YouTube, Netflix etc.).
3. **Testar Ligar (descobrir)**: envia o código de "Ligar" de várias TV boxes, um por vez.
   - `Enter` envia, `,` e `/` trocam de código, `A` testa todos sozinho (um a cada 3 s).
   - Quando a HTV ligar ou desligar, aperte qualquer tecla para parar, volte com `,` se precisar e confirme com `Enter`.
   - Aperte `S` para salvar aquele endereço.
4. **Explorar códigos**: para descobrir os botões que faltarem.
   - `Tab` troca o campo (comando, endereço 1, endereço 2), `,` e `/` mudam o valor de 1 em 1, `;` e `.` de 16 em 16.
   - `Enter` envia, `A` varre os comandos sozinho, `N` faz o endereço 2 ser o inverso do 1 (padrão NEC).
   - Quando achar um comando que funciona, aperte `B` e depois a tecla onde quer gravar (por exemplo `;` para Cima).
5. **Perfis IR**: recarrega um conjunto de códigos pronto. Isso apaga o que você gravou.

Tudo que você salva fica guardado mesmo depois de desligar o Cardputer.

## Códigos incluídos

O perfil padrão é o da TV box Android genérica (MXQ / X96 / H96 / Bqeel): protocolo NEC, endereço `0x01`, 38 kHz. Esse é o padrão mais comum nas TV boxes com chip Amlogic. Também tem o perfil Mecool. Os códigos vêm do banco público [Flipper-IRDB](https://github.com/UberGuidoZ/Flipper-IRDB).

Não existe código publicado da HTV 8, então os códigos IR podem não funcionar nela. Use o **Testar Ligar** e o **Explorar** para descobrir.

## Como gravar

Os arquivos ficam na Release **ultima-versao**:
<https://github.com/jonatassantosribeiro1914-commits/cardputer/releases/tag/ultima-versao>

| Arquivo | Para quê |
|---|---|
| `controle-htv-launcher.bin` | Instalar pelo **cartão SD** com o Launcher |
| `controle-htv-cardputer.bin` | Gravar pelo **USB** no endereço 0x0 |

### Pelo cartão SD (Launcher)
1. Copie `controle-htv-launcher.bin` para o cartão SD do Cardputer.
2. No Cardputer, abra o **Launcher** → **SD** → escolha o arquivo → **Install**.

Se o seu Cardputer ainda não tem o Launcher, grave ele uma vez pelo navegador em <https://bmorcelli.github.io/Launcher/> (Chrome ou Edge, Cardputer no USB).

### Pelo USB
Grave `controle-htv-cardputer.bin` no endereço **0x0** pelo navegador em <https://espressif.github.io/esptool-js/>, ou com:
```bash
esptool.py --chip esp32s3 write_flash 0x0 controle-htv-cardputer.bin
```
Se o Cardputer não for detectado, segure o botão **G0** enquanto conecta o cabo USB.

### Compilar no PC
Instale o [PlatformIO](https://platformio.org/) e rode:
```bash
pio run -t upload
```

## Dicas
- O LED IR do Cardputer tem alcance curto. Fique a 1–2 m e aponte direto para a HTV.
- O modo Bluetooth não liga a HTV quando ela está em standby. Para isso só o IR funciona.
