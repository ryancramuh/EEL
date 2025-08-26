// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_PC.h for the primary calling header

#include "Vtb_PC__pch.h"
#include "Vtb_PC___024root.h"

VL_ATTR_COLD void Vtb_PC___024root___eval_static(Vtb_PC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PC___024root___eval_static\n"); );
    Vtb_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_PC___024root___eval_final(Vtb_PC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PC___024root___eval_final\n"); );
    Vtb_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_PC___024root___eval_settle(Vtb_PC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PC___024root___eval_settle\n"); );
    Vtb_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_PC___024root___dump_triggers__act(Vtb_PC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PC___024root___dump_triggers__act\n"); );
    Vtb_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( tb_PC.UUT.PC_OUT)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_PC.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_PC___024root___dump_triggers__nba(Vtb_PC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PC___024root___dump_triggers__nba\n"); );
    Vtb_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( tb_PC.UUT.PC_OUT)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_PC.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_PC___024root___ctor_var_reset(Vtb_PC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PC___024root___ctor_var_reset\n"); );
    Vtb_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_PC__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_PC__DOT__RST = VL_RAND_RESET_I(1);
    vlSelf->tb_PC__DOT__PC_EN = VL_RAND_RESET_I(1);
    vlSelf->tb_PC__DOT__PC_IN = VL_RAND_RESET_I(32);
    vlSelf->tb_PC__DOT__UUT__DOT__PC_OUT = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tb_PC__DOT__RST__v0 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__PC_EN__v0 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__PC_IN__v0 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__RST__v1 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__PC_EN__v1 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__PC_IN__v1 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__RST__v2 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__PC_EN__v2 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__PC_IN__v2 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__RST__v3 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__PC_EN__v3 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__PC_IN__v3 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__RST__v4 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__PC_EN__v4 = 0;
    vlSelf->__VdlySet__tb_PC__DOT__PC_IN__v4 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_PC__DOT__UUT__DOT__PC_OUT__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_PC__DOT__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
