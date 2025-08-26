// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_EXTENDER.h for the primary calling header

#include "Vtb_EXTENDER__pch.h"
#include "Vtb_EXTENDER___024root.h"

VL_ATTR_COLD void Vtb_EXTENDER___024root___eval_initial__TOP(Vtb_EXTENDER___024root* vlSelf);
VlCoroutine Vtb_EXTENDER___024root___eval_initial__TOP__Vtiming__0(Vtb_EXTENDER___024root* vlSelf);

void Vtb_EXTENDER___024root___eval_initial(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___eval_initial\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_EXTENDER___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_EXTENDER___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_EXTENDER___024root___eval_initial__TOP__Vtiming__0(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_EXTENDER.sv", 
                                             30);
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v0 = 1U;
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v0 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_EXTENDER.sv", 
                                             33);
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v1 = 1U;
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_EXTENDER.sv", 
                                             36);
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v2 = 1U;
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v2 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_EXTENDER.sv", 
                                             39);
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v3 = 1U;
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v3 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_EXTENDER.sv", 
                                             42);
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v4 = 1U;
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v4 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_EXTENDER.sv", 
                                             45);
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v5 = 1U;
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v5 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_EXTENDER.sv", 
                                             49);
        VL_FINISH_MT("tb_EXTENDER.sv", 49, "");
    }
}

void Vtb_EXTENDER___024root___eval_act(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___eval_act\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_EXTENDER___024root___nba_sequent__TOP__0(Vtb_EXTENDER___024root* vlSelf);

void Vtb_EXTENDER___024root___eval_nba(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___eval_nba\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_EXTENDER___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_EXTENDER___024root___nba_sequent__TOP__0(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___nba_sequent__TOP__0\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v0) {
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v0 = 0U;
        vlSelfRef.tb_EXTENDER__DOT__IMM_SEL = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v1) {
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v1 = 0U;
        vlSelfRef.tb_EXTENDER__DOT__IMM_SEL = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v2) {
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v2 = 0U;
        vlSelfRef.tb_EXTENDER__DOT__IMM_SEL = 2U;
    }
    if (vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v3) {
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v3 = 0U;
        vlSelfRef.tb_EXTENDER__DOT__IMM_SEL = 3U;
    }
    if (vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v4) {
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v4 = 0U;
        vlSelfRef.tb_EXTENDER__DOT__IMM_SEL = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v5) {
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v5 = 0U;
        vlSelfRef.tb_EXTENDER__DOT__IMM_SEL = 5U;
    }
    if (vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v0) {
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v0 = 0U;
        vlSelfRef.tb_EXTENDER__DOT__IMM_IN = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v1) {
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v1 = 0U;
        vlSelfRef.tb_EXTENDER__DOT__IMM_IN = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v2) {
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v2 = 0U;
        vlSelfRef.tb_EXTENDER__DOT__IMM_IN = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v3) {
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v3 = 0U;
        vlSelfRef.tb_EXTENDER__DOT__IMM_IN = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v4) {
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v4 = 0U;
        vlSelfRef.tb_EXTENDER__DOT__IMM_IN = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v5) {
        vlSelfRef.__VdlySet__tb_EXTENDER__DOT__IMM_IN__v5 = 0U;
        vlSelfRef.tb_EXTENDER__DOT__IMM_IN = 0xdeadbeefU;
    }
    vlSelfRef.tb_EXTENDER__DOT__UUT__DOT__I_TYPE = 
        (((- (IData)((vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                      >> 0x1fU))) << 0xbU) | (0x7ffU 
                                              & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                 >> 0x14U)));
    vlSelfRef.tb_EXTENDER__DOT__UUT__DOT__IMM = ((4U 
                                                  & (IData)(vlSelfRef.tb_EXTENDER__DOT__IMM_SEL))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.tb_EXTENDER__DOT__IMM_SEL))
                                                   ? vlSelfRef.tb_EXTENDER__DOT__UUT__DOT__I_TYPE
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_EXTENDER__DOT__IMM_SEL))
                                                    ? vlSelfRef.tb_EXTENDER__DOT__UUT__DOT__I_TYPE
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                                 >> 0x1fU))) 
                                                     << 0x14U) 
                                                    | (((0xff000U 
                                                         & vlSelfRef.tb_EXTENDER__DOT__IMM_IN) 
                                                        | (0x800U 
                                                           & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                              >> 9U))) 
                                                       | (0x7feU 
                                                          & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                             >> 0x14U))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.tb_EXTENDER__DOT__IMM_SEL))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_EXTENDER__DOT__IMM_SEL))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelfRef.tb_EXTENDER__DOT__IMM_IN)
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                                >> 7U))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_EXTENDER__DOT__IMM_SEL))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                                 >> 0x1fU))) 
                                                     << 0xbU) 
                                                    | ((0x7e0U 
                                                        & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                             >> 7U))))
                                                    : vlSelfRef.tb_EXTENDER__DOT__UUT__DOT__I_TYPE)));
}

void Vtb_EXTENDER___024root___timing_resume(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___timing_resume\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_EXTENDER___024root___eval_triggers__act(Vtb_EXTENDER___024root* vlSelf);

bool Vtb_EXTENDER___024root___eval_phase__act(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___eval_phase__act\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_EXTENDER___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_EXTENDER___024root___timing_resume(vlSelf);
        Vtb_EXTENDER___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_EXTENDER___024root___eval_phase__nba(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___eval_phase__nba\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_EXTENDER___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_EXTENDER___024root___dump_triggers__nba(Vtb_EXTENDER___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_EXTENDER___024root___dump_triggers__act(Vtb_EXTENDER___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_EXTENDER___024root___eval(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___eval\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_EXTENDER___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_EXTENDER.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_EXTENDER___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_EXTENDER.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_EXTENDER___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_EXTENDER___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_EXTENDER___024root___eval_debug_assertions(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___eval_debug_assertions\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
