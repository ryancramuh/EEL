// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_PC.h for the primary calling header

#include "Vtb_PC__pch.h"
#include "Vtb_PC__Syms.h"
#include "Vtb_PC___024root.h"

void Vtb_PC___024root___ctor_var_reset(Vtb_PC___024root* vlSelf);

Vtb_PC___024root::Vtb_PC___024root(Vtb_PC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_PC___024root___ctor_var_reset(this);
}

void Vtb_PC___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_PC___024root::~Vtb_PC___024root() {
}
