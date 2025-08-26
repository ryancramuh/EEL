// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_DMEM.h for the primary calling header

#include "Vtb_DMEM__pch.h"
#include "Vtb_DMEM__Syms.h"
#include "Vtb_DMEM___024root.h"

void Vtb_DMEM___024root___ctor_var_reset(Vtb_DMEM___024root* vlSelf);

Vtb_DMEM___024root::Vtb_DMEM___024root(Vtb_DMEM__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_DMEM___024root___ctor_var_reset(this);
}

void Vtb_DMEM___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_DMEM___024root::~Vtb_DMEM___024root() {
}
