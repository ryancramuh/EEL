// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_IMEM.h for the primary calling header

#include "Vtb_IMEM__pch.h"
#include "Vtb_IMEM__Syms.h"
#include "Vtb_IMEM___024root.h"

void Vtb_IMEM___024root___ctor_var_reset(Vtb_IMEM___024root* vlSelf);

Vtb_IMEM___024root::Vtb_IMEM___024root(Vtb_IMEM__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_IMEM___024root___ctor_var_reset(this);
}

void Vtb_IMEM___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_IMEM___024root::~Vtb_IMEM___024root() {
}
