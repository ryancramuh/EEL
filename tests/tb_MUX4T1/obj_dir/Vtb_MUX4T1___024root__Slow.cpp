// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_MUX4T1.h for the primary calling header

#include "Vtb_MUX4T1__pch.h"
#include "Vtb_MUX4T1__Syms.h"
#include "Vtb_MUX4T1___024root.h"

void Vtb_MUX4T1___024root___ctor_var_reset(Vtb_MUX4T1___024root* vlSelf);

Vtb_MUX4T1___024root::Vtb_MUX4T1___024root(Vtb_MUX4T1__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_MUX4T1___024root___ctor_var_reset(this);
}

void Vtb_MUX4T1___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_MUX4T1___024root::~Vtb_MUX4T1___024root() {
}
