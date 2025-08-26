// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_EXTENDER.h for the primary calling header

#include "Vtb_EXTENDER__pch.h"
#include "Vtb_EXTENDER___024root.h"

VL_ATTR_COLD void Vtb_EXTENDER___024root___eval_static(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___eval_static\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_EXTENDER___024root___eval_final(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___eval_final\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_EXTENDER___024root___dump_triggers__stl(Vtb_EXTENDER___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_EXTENDER___024root___eval_phase__stl(Vtb_EXTENDER___024root* vlSelf);

VL_ATTR_COLD void Vtb_EXTENDER___024root___eval_settle(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___eval_settle\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_EXTENDER___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_EXTENDER.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_EXTENDER___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_EXTENDER___024root___dump_triggers__stl(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___dump_triggers__stl\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_EXTENDER___024root___stl_sequent__TOP__0(Vtb_EXTENDER___024root* vlSelf);

VL_ATTR_COLD void Vtb_EXTENDER___024root___eval_stl(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___eval_stl\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_EXTENDER___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_EXTENDER___024root___stl_sequent__TOP__0(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___stl_sequent__TOP__0\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vtb_EXTENDER___024root___eval_triggers__stl(Vtb_EXTENDER___024root* vlSelf);

VL_ATTR_COLD bool Vtb_EXTENDER___024root___eval_phase__stl(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___eval_phase__stl\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_EXTENDER___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_EXTENDER___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_EXTENDER___024root___dump_triggers__act(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___dump_triggers__act\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vtb_EXTENDER___024root___dump_triggers__nba(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___dump_triggers__nba\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_EXTENDER___024root___ctor_var_reset(Vtb_EXTENDER___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root___ctor_var_reset\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_EXTENDER__DOT__IMM_SEL = VL_RAND_RESET_I(3);
    vlSelf->tb_EXTENDER__DOT__IMM_IN = VL_RAND_RESET_I(32);
    vlSelf->tb_EXTENDER__DOT__UUT__DOT__IMM = VL_RAND_RESET_I(32);
    vlSelf->tb_EXTENDER__DOT__UUT__DOT__I_TYPE = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v0 = 0;
    vlSelf->__VdlySet__tb_EXTENDER__DOT__IMM_IN__v0 = 0;
    vlSelf->__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v1 = 0;
    vlSelf->__VdlySet__tb_EXTENDER__DOT__IMM_IN__v1 = 0;
    vlSelf->__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v2 = 0;
    vlSelf->__VdlySet__tb_EXTENDER__DOT__IMM_IN__v2 = 0;
    vlSelf->__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v3 = 0;
    vlSelf->__VdlySet__tb_EXTENDER__DOT__IMM_IN__v3 = 0;
    vlSelf->__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v4 = 0;
    vlSelf->__VdlySet__tb_EXTENDER__DOT__IMM_IN__v4 = 0;
    vlSelf->__VdlySet__tb_EXTENDER__DOT__IMM_SEL__v5 = 0;
    vlSelf->__VdlySet__tb_EXTENDER__DOT__IMM_IN__v5 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
