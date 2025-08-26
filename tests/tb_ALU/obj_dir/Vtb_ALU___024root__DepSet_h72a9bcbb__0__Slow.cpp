// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ALU.h for the primary calling header

#include "Vtb_ALU__pch.h"
#include "Vtb_ALU___024root.h"

VL_ATTR_COLD void Vtb_ALU___024root___eval_static(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval_static\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_ALU___024root___eval_final(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval_final\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ALU___024root___dump_triggers__stl(Vtb_ALU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_ALU___024root___eval_phase__stl(Vtb_ALU___024root* vlSelf);

VL_ATTR_COLD void Vtb_ALU___024root___eval_settle(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval_settle\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_ALU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_ALU.sv", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_ALU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ALU___024root___dump_triggers__stl(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___dump_triggers__stl\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_ALU___024root___act_sequent__TOP__0(Vtb_ALU___024root* vlSelf);

VL_ATTR_COLD void Vtb_ALU___024root___eval_stl(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval_stl\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_ALU___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_ALU___024root___eval_triggers__stl(Vtb_ALU___024root* vlSelf);

VL_ATTR_COLD bool Vtb_ALU___024root___eval_phase__stl(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval_phase__stl\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_ALU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_ALU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ALU___024root___dump_triggers__act(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___dump_triggers__act\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( tb_ALU.ALU_FUN)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( tb_ALU.OP_A)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( tb_ALU.OP_B)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( tb_ALU.UUT.RESULT)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( tb_ALU.UUT.ZERO)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ALU___024root___dump_triggers__nba(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___dump_triggers__nba\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( tb_ALU.ALU_FUN)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( tb_ALU.OP_A)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( tb_ALU.OP_B)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( tb_ALU.UUT.RESULT)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( tb_ALU.UUT.ZERO)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ALU___024root___ctor_var_reset(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___ctor_var_reset\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_ALU__DOT__OP_A = VL_RAND_RESET_I(32);
    vlSelf->tb_ALU__DOT__OP_B = VL_RAND_RESET_I(32);
    vlSelf->tb_ALU__DOT__ALU_FUN = VL_RAND_RESET_I(4);
    vlSelf->tb_ALU__DOT__UUT__DOT__ZERO = VL_RAND_RESET_I(1);
    vlSelf->tb_ALU__DOT__UUT__DOT__RESULT = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_ALU__DOT__ALU_FUN__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_ALU__DOT__OP_A__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_ALU__DOT__OP_B__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_ALU__DOT__UUT__DOT__RESULT__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_ALU__DOT__UUT__DOT__ZERO__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
