// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_REG_FILE.h for the primary calling header

#include "Vtb_REG_FILE__pch.h"
#include "Vtb_REG_FILE__Syms.h"
#include "Vtb_REG_FILE___024root.h"

void Vtb_REG_FILE___024root___ctor_var_reset(Vtb_REG_FILE___024root* vlSelf);

Vtb_REG_FILE___024root::Vtb_REG_FILE___024root(Vtb_REG_FILE__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_REG_FILE___024root___ctor_var_reset(this);
}

void Vtb_REG_FILE___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_REG_FILE___024root::~Vtb_REG_FILE___024root() {
}
