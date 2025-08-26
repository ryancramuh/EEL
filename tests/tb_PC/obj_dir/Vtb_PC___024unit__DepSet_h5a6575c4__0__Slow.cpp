// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_PC.h for the primary calling header

#include "Vtb_PC__pch.h"
#include "Vtb_PC___024unit.h"

VL_ATTR_COLD void Vtb_PC___024unit___ctor_var_reset(Vtb_PC___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_PC___024unit___ctor_var_reset\n"); );
    Vtb_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
