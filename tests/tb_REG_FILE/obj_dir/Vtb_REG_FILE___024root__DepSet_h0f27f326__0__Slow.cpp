// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_REG_FILE.h for the primary calling header

#include "Vtb_REG_FILE__pch.h"
#include "Vtb_REG_FILE___024root.h"

VL_ATTR_COLD void Vtb_REG_FILE___024root___eval_static(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval_static\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_REG_FILE___024root___eval_final(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval_final\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_REG_FILE___024root___eval_settle(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval_settle\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_REG_FILE___024root___dump_triggers__act(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___dump_triggers__act\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_REG_FILE.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_REG_FILE___024root___dump_triggers__nba(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___dump_triggers__nba\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_REG_FILE.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_REG_FILE___024root___ctor_var_reset(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___ctor_var_reset\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_REG_FILE__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_REG_FILE__DOT__ADDR1 = VL_RAND_RESET_I(5);
    vlSelf->tb_REG_FILE__DOT__ADDR2 = VL_RAND_RESET_I(5);
    vlSelf->tb_REG_FILE__DOT__W_ADDR = VL_RAND_RESET_I(5);
    vlSelf->tb_REG_FILE__DOT__W_EN = VL_RAND_RESET_I(1);
    vlSelf->tb_REG_FILE__DOT__W_DATA = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_REG_FILE__DOT__UUT__DOT__reg_32x32[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdlySet__tb_REG_FILE__DOT__ADDR1__v0 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__ADDR2__v0 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__W_ADDR__v0 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__W_EN__v0 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__W_DATA__v0 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__ADDR1__v1 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__ADDR2__v1 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__W_ADDR__v1 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__W_EN__v1 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__W_DATA__v1 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__ADDR1__v2 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__ADDR2__v2 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__W_ADDR__v2 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__W_EN__v2 = 0;
    vlSelf->__VdlySet__tb_REG_FILE__DOT__W_DATA__v2 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_REG_FILE__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
