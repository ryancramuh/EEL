// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_MUX4T1.h for the primary calling header

#include "Vtb_MUX4T1__pch.h"
#include "Vtb_MUX4T1___024root.h"

VL_ATTR_COLD void Vtb_MUX4T1___024root___eval_initial__TOP(Vtb_MUX4T1___024root* vlSelf);
VlCoroutine Vtb_MUX4T1___024root___eval_initial__TOP__Vtiming__0(Vtb_MUX4T1___024root* vlSelf);

void Vtb_MUX4T1___024root___eval_initial(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___eval_initial\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_MUX4T1___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_MUX4T1___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_MUX4T1___024root___eval_initial__TOP__Vtiming__0(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_MUX4T1.sv", 
                                             35);
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__SEL__v0 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D0__v0 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D1__v0 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D2__v0 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D3__v0 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_MUX4T1.sv", 
                                             41);
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__SEL__v1 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D0__v1 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D1__v1 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D2__v1 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D3__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_MUX4T1.sv", 
                                             47);
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__SEL__v2 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D0__v2 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D1__v2 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D2__v2 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D3__v2 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_MUX4T1.sv", 
                                             53);
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__SEL__v3 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D0__v3 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D1__v3 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D2__v3 = 1U;
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D3__v3 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_MUX4T1.sv", 
                                             59);
        VL_FINISH_MT("tb_MUX4T1.sv", 59, "");
    }
}

void Vtb_MUX4T1___024root___eval_act(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___eval_act\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_MUX4T1___024root___nba_sequent__TOP__0(Vtb_MUX4T1___024root* vlSelf);

void Vtb_MUX4T1___024root___eval_nba(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___eval_nba\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_MUX4T1___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_MUX4T1___024root___nba_sequent__TOP__0(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___nba_sequent__TOP__0\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__SEL__v0) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__SEL__v0 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__SEL = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__SEL__v1) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__SEL__v1 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__SEL = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__SEL__v2) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__SEL__v2 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__SEL = 2U;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__SEL__v3) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__SEL__v3 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__SEL = 3U;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D0__v0) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D0__v0 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D0 = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D0__v1) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D0__v1 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D0 = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D0__v2) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D0__v2 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D0 = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D0__v3) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D0__v3 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D0 = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D1__v0) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D1__v0 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D1 = 0xfeedfeedU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D1__v1) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D1__v1 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D1 = 0xfeedfeedU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D1__v2) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D1__v2 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D1 = 0xfeedfeedU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D1__v3) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D1__v3 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D1 = 0xfeedfeedU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D2__v0) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D2__v0 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D2 = 0xaaaaddddU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D2__v1) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D2__v1 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D2 = 0xaaaaddddU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D2__v2) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D2__v2 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D2 = 0xaaaaddddU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D2__v3) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D2__v3 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D2 = 0xaaaaddddU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D3__v0) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D3__v0 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D3 = 0xdadadadaU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D3__v1) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D3__v1 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D3 = 0xdadadadaU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D3__v2) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D3__v2 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D3 = 0xdadadadaU;
    }
    if (vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D3__v3) {
        vlSelfRef.__VdlySet__tb_MUX4T1__DOT__D3__v3 = 0U;
        vlSelfRef.tb_MUX4T1__DOT__D3 = 0xdadadadaU;
    }
}

void Vtb_MUX4T1___024root___timing_resume(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___timing_resume\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_MUX4T1___024root___eval_triggers__act(Vtb_MUX4T1___024root* vlSelf);

bool Vtb_MUX4T1___024root___eval_phase__act(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___eval_phase__act\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_MUX4T1___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_MUX4T1___024root___timing_resume(vlSelf);
        Vtb_MUX4T1___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_MUX4T1___024root___eval_phase__nba(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___eval_phase__nba\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_MUX4T1___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_MUX4T1___024root___dump_triggers__nba(Vtb_MUX4T1___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_MUX4T1___024root___dump_triggers__act(Vtb_MUX4T1___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_MUX4T1___024root___eval(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___eval\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_MUX4T1___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_MUX4T1.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_MUX4T1___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_MUX4T1.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_MUX4T1___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_MUX4T1___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_MUX4T1___024root___eval_debug_assertions(Vtb_MUX4T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root___eval_debug_assertions\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
