// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_PC.h for the primary calling header

#include "Vtb_PC__pch.h"
#include "Vtb_PC__Syms.h"
#include "Vtb_PC___024unit.h"

void Vtb_PC___024unit___ctor_var_reset(Vtb_PC___024unit* vlSelf);

Vtb_PC___024unit::Vtb_PC___024unit(Vtb_PC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_PC___024unit___ctor_var_reset(this);
}

void Vtb_PC___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_PC___024unit::~Vtb_PC___024unit() {
}
