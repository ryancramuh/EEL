// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_IMEM.h for the primary calling header

#include "Vtb_IMEM__pch.h"
#include "Vtb_IMEM__Syms.h"
#include "Vtb_IMEM___024unit.h"

void Vtb_IMEM___024unit___ctor_var_reset(Vtb_IMEM___024unit* vlSelf);

Vtb_IMEM___024unit::Vtb_IMEM___024unit(Vtb_IMEM__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_IMEM___024unit___ctor_var_reset(this);
}

void Vtb_IMEM___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_IMEM___024unit::~Vtb_IMEM___024unit() {
}
