// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_EEL.h for the primary calling header

#include "Vtb_EEL__pch.h"
#include "Vtb_EEL__Syms.h"
#include "Vtb_EEL___024unit.h"

void Vtb_EEL___024unit___ctor_var_reset(Vtb_EEL___024unit* vlSelf);

Vtb_EEL___024unit::Vtb_EEL___024unit(Vtb_EEL__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_EEL___024unit___ctor_var_reset(this);
}

void Vtb_EEL___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_EEL___024unit::~Vtb_EEL___024unit() {
}
