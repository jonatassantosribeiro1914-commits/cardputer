// Controles embutidos (funcionam sem cartao SD).
// Os dados vem de builtins_data.h, gerado do banco Flipper-IRDB.
#pragma once
#include "ir_core.h"
#include "builtins_data.h"

// Monta um Remote a partir de um BRemote embutido.
static void loadBuiltinRemote(const BRemote& br, Remote& out) {
  out.name = br.name;
  out.btn.clear();
  out.btn.reserve(br.n);
  for (int i = 0; i < br.n; i++) {
    Button b;
    b.name = br.btn[i].name;
    b.proto = br.btn[i].proto;
    b.a0 = br.btn[i].a0;
    b.a1 = br.btn[i].a1;
    b.cmd = br.btn[i].cmd;
    out.btn.push_back(b);
  }
}
