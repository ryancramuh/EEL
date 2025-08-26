// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_EXTENDER.h for the primary calling header

#include "Vtb_EXTENDER__pch.h"
#include "Vtb_EXTENDER__Syms.h"
#include "Vtb_EXTENDER___024root.h"

void Vtb_EXTENDER___024root___ctor_var_reset(Vtb_EXTENDER___024root* vlSelf);

Vtb_EXTENDER___024root::Vtb_EXTENDER___024root(Vtb_EXTENDER__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_EXTENDER___024root___ctor_var_reset(this);
}

void Vtb_EXTENDER___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_EXTENDER___024root::~Vtb_EXTENDER___024root() {
}
