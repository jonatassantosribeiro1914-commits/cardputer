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
    const BBtn& s = br.btn[i];
    Button b;
    b.name = s.name;
    b.proto = s.proto;
    b.a0 = s.a0;
    b.a1 = s.a1;
    b.cmd = s.cmd;
    b.freq = s.freq ? s.freq : 38000;
    if (s.raw && s.rn) b.raw.assign(s.raw, s.raw + s.rn);
    out.btn.push_back(b);
  }
}
