// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ALU.h for the primary calling header

#include "Vtb_ALU__pch.h"
#include "Vtb_ALU__Syms.h"
#include "Vtb_ALU___024root.h"

void Vtb_ALU___024root___ctor_var_reset(Vtb_ALU___024root* vlSelf);

Vtb_ALU___024root::Vtb_ALU___024root(Vtb_ALU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_ALU___024root___ctor_var_reset(this);
}

void Vtb_ALU___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_ALU___024root::~Vtb_ALU___024root() {
}
