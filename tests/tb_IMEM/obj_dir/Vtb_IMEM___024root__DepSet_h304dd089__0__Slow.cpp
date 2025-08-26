// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_IMEM.h for the primary calling header

#include "Vtb_IMEM__pch.h"
#include "Vtb_IMEM___024root.h"

VL_ATTR_COLD void Vtb_IMEM___024root___eval_static(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval_static\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_IMEM___024root___eval_final(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval_final\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_IMEM___024root___eval_settle(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval_settle\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_IMEM___024root___dump_triggers__act(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___dump_triggers__act\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( tb_IMEM.UUT.MEM_OUT)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_IMEM.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_IMEM___024root___dump_triggers__nba(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___dump_triggers__nba\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( tb_IMEM.UUT.MEM_OUT)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_IMEM.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_IMEM___024root___ctor_var_reset(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___ctor_var_reset\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_IMEM__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_IMEM__DOT__RDEN = VL_RAND_RESET_I(1);
    vlSelf->tb_IMEM__DOT__PC_OUT = VL_RAND_RESET_I(32);
    vlSelf->tb_IMEM__DOT__UUT__DOT__MEM_OUT = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_IMEM__DOT__UUT__DOT__rom_64kb[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdlySet__tb_IMEM__DOT__RDEN__v0 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__PC_OUT__v0 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__RDEN__v1 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__PC_OUT__v1 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__RDEN__v2 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__PC_OUT__v2 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__RDEN__v3 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__PC_OUT__v3 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__RDEN__v4 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__PC_OUT__v4 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__RDEN__v5 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__PC_OUT__v5 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__RDEN__v6 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__PC_OUT__v6 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__RDEN__v7 = 0;
    vlSelf->__VdlySet__tb_IMEM__DOT__PC_OUT__v7 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_IMEM__DOT__UUT__DOT__MEM_OUT__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_IMEM__DOT__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
