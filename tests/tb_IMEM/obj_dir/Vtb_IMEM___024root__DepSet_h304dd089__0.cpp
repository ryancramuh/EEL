// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_IMEM.h for the primary calling header

#include "Vtb_IMEM__pch.h"
#include "Vtb_IMEM___024root.h"

VL_ATTR_COLD void Vtb_IMEM___024root___eval_initial__TOP(Vtb_IMEM___024root* vlSelf);
VlCoroutine Vtb_IMEM___024root___eval_initial__TOP__Vtiming__0(Vtb_IMEM___024root* vlSelf);
VlCoroutine Vtb_IMEM___024root___eval_initial__TOP__Vtiming__1(Vtb_IMEM___024root* vlSelf);

void Vtb_IMEM___024root___eval_initial(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval_initial\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_IMEM___024root___eval_initial__TOP(vlSelf);
    Vtb_IMEM___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_IMEM___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_IMEM__DOT__UUT__DOT__MEM_OUT__0 
        = vlSelfRef.tb_IMEM__DOT__UUT__DOT__MEM_OUT;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_IMEM__DOT__CLK__0 
        = vlSelfRef.tb_IMEM__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vtb_IMEM___024root___eval_initial__TOP__Vtiming__0(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "tb_IMEM.sv", 
                                         25);
    vlSelfRef.tb_IMEM__DOT__CLK = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_IMEM.sv", 
                                             26);
        vlSelfRef.tb_IMEM__DOT__CLK = (1U & (~ (IData)(vlSelfRef.tb_IMEM__DOT__CLK)));
    }
}

void Vtb_IMEM___024root___eval_act(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval_act\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_IMEM___024root___nba_sequent__TOP__0(Vtb_IMEM___024root* vlSelf);
void Vtb_IMEM___024root___nba_sequent__TOP__1(Vtb_IMEM___024root* vlSelf);
void Vtb_IMEM___024root___nba_sequent__TOP__2(Vtb_IMEM___024root* vlSelf);

void Vtb_IMEM___024root___eval_nba(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval_nba\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_IMEM___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_IMEM___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_IMEM___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_IMEM___024root___nba_sequent__TOP__1(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___nba_sequent__TOP__1\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_IMEM__DOT__UUT__DOT__MEM_OUT = ((IData)(vlSelfRef.tb_IMEM__DOT__RDEN)
                                                  ? 
                                                 vlSelfRef.tb_IMEM__DOT__UUT__DOT__rom_64kb
                                                 [(0x3fffU 
                                                   & (vlSelfRef.tb_IMEM__DOT__PC_OUT 
                                                      >> 2U))]
                                                  : 0U);
}

VL_INLINE_OPT void Vtb_IMEM___024root___nba_sequent__TOP__2(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___nba_sequent__TOP__2\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v0) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v0 = 0U;
        vlSelfRef.tb_IMEM__DOT__RDEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v1) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v1 = 0U;
        vlSelfRef.tb_IMEM__DOT__RDEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v2) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v2 = 0U;
        vlSelfRef.tb_IMEM__DOT__RDEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v3) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v3 = 0U;
        vlSelfRef.tb_IMEM__DOT__RDEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v4) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v4 = 0U;
        vlSelfRef.tb_IMEM__DOT__RDEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v5) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v5 = 0U;
        vlSelfRef.tb_IMEM__DOT__RDEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v6) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v6 = 0U;
        vlSelfRef.tb_IMEM__DOT__RDEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v7) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v7 = 0U;
        vlSelfRef.tb_IMEM__DOT__RDEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v0) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v0 = 0U;
        vlSelfRef.tb_IMEM__DOT__PC_OUT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v1) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v1 = 0U;
        vlSelfRef.tb_IMEM__DOT__PC_OUT = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v2) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v2 = 0U;
        vlSelfRef.tb_IMEM__DOT__PC_OUT = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v3) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v3 = 0U;
        vlSelfRef.tb_IMEM__DOT__PC_OUT = 8U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v4) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v4 = 0U;
        vlSelfRef.tb_IMEM__DOT__PC_OUT = 0xcU;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v5) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v5 = 0U;
        vlSelfRef.tb_IMEM__DOT__PC_OUT = 0x10U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v6) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v6 = 0U;
        vlSelfRef.tb_IMEM__DOT__PC_OUT = 0x14U;
    }
    if (vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v7) {
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v7 = 0U;
        vlSelfRef.tb_IMEM__DOT__PC_OUT = 0x18U;
    }
}

void Vtb_IMEM___024root___timing_resume(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___timing_resume\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_IMEM___024root___eval_triggers__act(Vtb_IMEM___024root* vlSelf);

bool Vtb_IMEM___024root___eval_phase__act(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval_phase__act\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_IMEM___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_IMEM___024root___timing_resume(vlSelf);
        Vtb_IMEM___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_IMEM___024root___eval_phase__nba(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval_phase__nba\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_IMEM___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_IMEM___024root___dump_triggers__nba(Vtb_IMEM___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_IMEM___024root___dump_triggers__act(Vtb_IMEM___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_IMEM___024root___eval(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_IMEM___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_IMEM.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_IMEM___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_IMEM.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_IMEM___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_IMEM___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_IMEM___024root___eval_debug_assertions(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval_debug_assertions\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
