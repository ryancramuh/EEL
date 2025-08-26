// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ALU.h for the primary calling header

#include "Vtb_ALU__pch.h"
#include "Vtb_ALU___024root.h"

VL_ATTR_COLD void Vtb_ALU___024root___eval_initial__TOP(Vtb_ALU___024root* vlSelf);
VlCoroutine Vtb_ALU___024root___eval_initial__TOP__Vtiming__0(Vtb_ALU___024root* vlSelf);

void Vtb_ALU___024root___eval_initial(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval_initial\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ALU___024root___eval_initial__TOP(vlSelf);
    Vtb_ALU___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__ALU_FUN__0 
        = vlSelfRef.tb_ALU__DOT__ALU_FUN;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__OP_A__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__OP_B__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__UUT__DOT__RESULT__0 
        = vlSelfRef.tb_ALU__DOT__UUT__DOT__RESULT;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__UUT__DOT__ZERO__0 
        = vlSelfRef.tb_ALU__DOT__UUT__DOT__ZERO;
}

void Vtb_ALU___024root___act_sequent__TOP__0(Vtb_ALU___024root* vlSelf);

void Vtb_ALU___024root___eval_act(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval_act\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_ALU___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ALU___024root___act_sequent__TOP__0(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___act_sequent__TOP__0\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ALU__DOT__UUT__DOT__RESULT = ((8U 
                                                & (IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN))
                                                      ? 
                                                     VL_SHIFTR_III(32,32,32, vlSelfRef.tb_ALU__DOT__OP_A, vlSelfRef.tb_ALU__DOT__OP_B)
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN))
                                                      ? vlSelfRef.tb_ALU__DOT__OP_A
                                                      : 
                                                     (vlSelfRef.tb_ALU__DOT__OP_A 
                                                      - vlSelfRef.tb_ALU__DOT__OP_B))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN))
                                                      ? 
                                                     (vlSelfRef.tb_ALU__DOT__OP_A 
                                                      & vlSelfRef.tb_ALU__DOT__OP_B)
                                                      : 
                                                     (vlSelfRef.tb_ALU__DOT__OP_A 
                                                      | vlSelfRef.tb_ALU__DOT__OP_B))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN))
                                                      ? 
                                                     VL_SHIFTR_III(32,32,32, vlSelfRef.tb_ALU__DOT__OP_A, vlSelfRef.tb_ALU__DOT__OP_B)
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN))
                                                      ? 
                                                     (vlSelfRef.tb_ALU__DOT__OP_A 
                                                      < vlSelfRef.tb_ALU__DOT__OP_B)
                                                      : 
                                                     VL_LTS_III(32, vlSelfRef.tb_ALU__DOT__OP_A, vlSelfRef.tb_ALU__DOT__OP_B))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN))
                                                      ? 
                                                     VL_SHIFTL_III(32,32,32, vlSelfRef.tb_ALU__DOT__OP_A, vlSelfRef.tb_ALU__DOT__OP_B)
                                                      : 
                                                     (vlSelfRef.tb_ALU__DOT__OP_A 
                                                      + vlSelfRef.tb_ALU__DOT__OP_B)))));
    vlSelfRef.tb_ALU__DOT__UUT__DOT__ZERO = (0U == vlSelfRef.tb_ALU__DOT__UUT__DOT__RESULT);
}

void Vtb_ALU___024root___nba_sequent__TOP__0(Vtb_ALU___024root* vlSelf);

void Vtb_ALU___024root___eval_nba(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval_nba\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ALU___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_ALU___024root___timing_resume(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___timing_resume\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_ALU___024root___eval_triggers__act(Vtb_ALU___024root* vlSelf);

bool Vtb_ALU___024root___eval_phase__act(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval_phase__act\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ALU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_ALU___024root___timing_resume(vlSelf);
        Vtb_ALU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ALU___024root___eval_phase__nba(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval_phase__nba\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ALU___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ALU___024root___dump_triggers__nba(Vtb_ALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ALU___024root___dump_triggers__act(Vtb_ALU___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ALU___024root___eval(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_ALU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_ALU.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_ALU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_ALU.sv", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_ALU___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_ALU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ALU___024root___eval_debug_assertions(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval_debug_assertions\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
