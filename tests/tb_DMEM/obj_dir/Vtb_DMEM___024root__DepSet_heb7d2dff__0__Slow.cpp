// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_DMEM.h for the primary calling header

#include "Vtb_DMEM__pch.h"
#include "Vtb_DMEM___024root.h"

VL_ATTR_COLD void Vtb_DMEM___024root___eval_static(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___eval_static\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_DMEM___024root___eval_final(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___eval_final\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_DMEM___024root___eval_settle(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___eval_settle\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_DMEM___024root___dump_triggers__act(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___dump_triggers__act\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_DMEM.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_DMEM___024root___dump_triggers__nba(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___dump_triggers__nba\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_DMEM.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_DMEM___024root___ctor_var_reset(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___ctor_var_reset\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_DMEM__DOT__RDEN = VL_RAND_RESET_I(1);
    vlSelf->tb_DMEM__DOT__WEN = VL_RAND_RESET_I(1);
    vlSelf->tb_DMEM__DOT__SIGN = VL_RAND_RESET_I(1);
    vlSelf->tb_DMEM__DOT__BYTE_SEL = VL_RAND_RESET_I(2);
    vlSelf->tb_DMEM__DOT__ADDR = VL_RAND_RESET_I(14);
    vlSelf->tb_DMEM__DOT__DATA_IN = VL_RAND_RESET_I(32);
    vlSelf->tb_DMEM__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_DMEM__DOT__UUT__DOT__DATA_OUT = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_DMEM__DOT__UUT__DOT__ram_64kb[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdlySet__tb_DMEM__DOT__RDEN__v0 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__WEN__v0 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__BYTE_SEL__v0 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__SIGN__v0 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__ADDR__v0 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__DATA_IN__v0 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__RDEN__v1 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__WEN__v1 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__BYTE_SEL__v1 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__SIGN__v1 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__ADDR__v1 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__DATA_IN__v1 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__RDEN__v2 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__WEN__v2 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__BYTE_SEL__v2 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__SIGN__v2 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__ADDR__v2 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__DATA_IN__v2 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__RDEN__v3 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__WEN__v3 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__BYTE_SEL__v3 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__SIGN__v3 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__ADDR__v3 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__DATA_IN__v3 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__RDEN__v4 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__WEN__v4 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__BYTE_SEL__v4 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__SIGN__v4 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__ADDR__v4 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__DATA_IN__v4 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__RDEN__v5 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__WEN__v5 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__BYTE_SEL__v5 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__SIGN__v5 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__ADDR__v5 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__DATA_IN__v5 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__RDEN__v6 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__WEN__v6 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__BYTE_SEL__v6 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__SIGN__v6 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__ADDR__v6 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__DATA_IN__v6 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__RDEN__v7 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__WEN__v7 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__BYTE_SEL__v7 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__SIGN__v7 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__ADDR__v7 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__DATA_IN__v7 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__RDEN__v8 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__WEN__v8 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__BYTE_SEL__v8 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__SIGN__v8 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__ADDR__v8 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__DATA_IN__v8 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__RDEN__v9 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__WEN__v9 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__BYTE_SEL__v9 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__SIGN__v9 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__ADDR__v9 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__DATA_IN__v9 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__RDEN__v10 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__WEN__v10 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__BYTE_SEL__v10 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__SIGN__v10 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__ADDR__v10 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__DATA_IN__v10 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__RDEN__v11 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__WEN__v11 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__BYTE_SEL__v11 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__SIGN__v11 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__ADDR__v11 = 0;
    vlSelf->__VdlySet__tb_DMEM__DOT__DATA_IN__v11 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_DMEM__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
