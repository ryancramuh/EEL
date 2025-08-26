// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_MUX4T1.h for the primary calling header

#include "Vtb_MUX4T1__pch.h"
#include "Vtb_MUX4T1___024root.h"

VL_ATTR_COLD void Vtb_MUX4T1___024root___eval_static(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___eval_static\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_MUX4T1___024root___eval_final(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___eval_final\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_MUX4T1___024root___eval_settle(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___eval_settle\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_MUX4T1___024root___dump_triggers__act(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___dump_triggers__act\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_MUX4T1___024root___dump_triggers__nba(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___dump_triggers__nba\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_MUX4T1___024root___ctor_var_reset(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___ctor_var_reset\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_MUX4T1__DOT__D0 = VL_RAND_RESET_I(32);
    vlSelf->tb_MUX4T1__DOT__D1 = VL_RAND_RESET_I(32);
    vlSelf->tb_MUX4T1__DOT__D2 = VL_RAND_RESET_I(32);
    vlSelf->tb_MUX4T1__DOT__D3 = VL_RAND_RESET_I(32);
    vlSelf->tb_MUX4T1__DOT__SEL = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__tb_MUX4T1__DOT__SEL__v0 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D0__v0 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D1__v0 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D2__v0 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D3__v0 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__SEL__v1 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D0__v1 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D1__v1 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D2__v1 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D3__v1 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__SEL__v2 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D0__v2 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D1__v2 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D2__v2 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D3__v2 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__SEL__v3 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D0__v3 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D1__v3 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D2__v3 = 0;
    vlSelf->__VdlySet__tb_MUX4T1__DOT__D3__v3 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
