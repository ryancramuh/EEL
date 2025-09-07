// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ALU.h for the primary calling header

#include "Vtb_ALU__pch.h"
#include "Vtb_ALU__Syms.h"
#include "Vtb_ALU___024unit.h"

void Vtb_ALU___024unit___ctor_var_reset(Vtb_ALU___024unit* vlSelf);

Vtb_ALU___024unit::Vtb_ALU___024unit(Vtb_ALU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_ALU___024unit___ctor_var_reset(this);
}

void Vtb_ALU___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_ALU___024unit::~Vtb_ALU___024unit() {
}
