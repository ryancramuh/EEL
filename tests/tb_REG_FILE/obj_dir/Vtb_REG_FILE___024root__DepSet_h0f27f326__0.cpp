// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_REG_FILE.h for the primary calling header

#include "Vtb_REG_FILE__pch.h"
#include "Vtb_REG_FILE___024root.h"

VL_ATTR_COLD void Vtb_REG_FILE___024root___eval_initial__TOP(Vtb_REG_FILE___024root* vlSelf);
VlCoroutine Vtb_REG_FILE___024root___eval_initial__TOP__Vtiming__0(Vtb_REG_FILE___024root* vlSelf);
VlCoroutine Vtb_REG_FILE___024root___eval_initial__TOP__Vtiming__1(Vtb_REG_FILE___024root* vlSelf);

void Vtb_REG_FILE___024root___eval_initial(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval_initial\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_REG_FILE___024root___eval_initial__TOP(vlSelf);
    Vtb_REG_FILE___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_REG_FILE___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_REG_FILE__DOT__CLK__0 
        = vlSelfRef.tb_REG_FILE__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vtb_REG_FILE___024root___eval_initial__TOP__Vtiming__0(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "tb_REG_FILE.sv", 
                                         32);
    vlSelfRef.tb_REG_FILE__DOT__CLK = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_REG_FILE.sv", 
                                             33);
        vlSelfRef.tb_REG_FILE__DOT__CLK = (1U & (~ (IData)(vlSelfRef.tb_REG_FILE__DOT__CLK)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_REG_FILE___024root___eval_initial__TOP__Vtiming__1(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_REG_FILE.sv", 
                                             37);
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR1__v0 = 1U;
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR2__v0 = 1U;
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_ADDR__v0 = 1U;
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_EN__v0 = 1U;
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_DATA__v0 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_REG_FILE.sv", 
                                             43);
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR1__v1 = 1U;
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR2__v1 = 1U;
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_ADDR__v1 = 1U;
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_EN__v1 = 1U;
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_DATA__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_REG_FILE.sv", 
                                             49);
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR1__v2 = 1U;
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR2__v2 = 1U;
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_ADDR__v2 = 1U;
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_EN__v2 = 1U;
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_DATA__v2 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                             nullptr, 
                                             "tb_REG_FILE.sv", 
                                             55);
        VL_FINISH_MT("tb_REG_FILE.sv", 55, "");
    }
}

void Vtb_REG_FILE___024root___eval_act(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval_act\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_REG_FILE___024root___nba_sequent__TOP__0(Vtb_REG_FILE___024root* vlSelf);
void Vtb_REG_FILE___024root___nba_sequent__TOP__1(Vtb_REG_FILE___024root* vlSelf);

void Vtb_REG_FILE___024root___eval_nba(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval_nba\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_REG_FILE___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_REG_FILE___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_REG_FILE___024root___nba_sequent__TOP__0(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___nba_sequent__TOP__0\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_REG_FILE__DOT__UUT__DOT__reg_32x32__v0;
    __VdlyVal__tb_REG_FILE__DOT__UUT__DOT__reg_32x32__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_REG_FILE__DOT__UUT__DOT__reg_32x32__v0;
    __VdlyDim0__tb_REG_FILE__DOT__UUT__DOT__reg_32x32__v0 = 0;
    // Body
    __VdlyVal__tb_REG_FILE__DOT__UUT__DOT__reg_32x32__v0 
        = ((IData)(vlSelfRef.tb_REG_FILE__DOT__W_EN)
            ? vlSelfRef.tb_REG_FILE__DOT__W_DATA : 
           vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32
           [vlSelfRef.tb_REG_FILE__DOT__W_ADDR]);
    __VdlyDim0__tb_REG_FILE__DOT__UUT__DOT__reg_32x32__v0 
        = vlSelfRef.tb_REG_FILE__DOT__W_ADDR;
    vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[__VdlyDim0__tb_REG_FILE__DOT__UUT__DOT__reg_32x32__v0] 
        = __VdlyVal__tb_REG_FILE__DOT__UUT__DOT__reg_32x32__v0;
}

VL_INLINE_OPT void Vtb_REG_FILE___024root___nba_sequent__TOP__1(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___nba_sequent__TOP__1\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR1__v0) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR1__v0 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__ADDR1 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR1__v1) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR1__v1 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__ADDR1 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR1__v2) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR1__v2 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__ADDR1 = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR2__v0) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR2__v0 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__ADDR2 = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR2__v1) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR2__v1 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__ADDR2 = 2U;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR2__v2) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__ADDR2__v2 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__ADDR2 = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_EN__v0) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_EN__v0 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__W_EN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_EN__v1) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_EN__v1 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__W_EN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_EN__v2) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_EN__v2 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__W_EN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_DATA__v0) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_DATA__v0 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__W_DATA = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_DATA__v1) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_DATA__v1 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__W_DATA = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_DATA__v2) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_DATA__v2 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__W_DATA = 0xbeeffeedU;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_ADDR__v0) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_ADDR__v0 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__W_ADDR = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_ADDR__v1) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_ADDR__v1 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__W_ADDR = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_ADDR__v2) {
        vlSelfRef.__VdlySet__tb_REG_FILE__DOT__W_ADDR__v2 = 0U;
        vlSelfRef.tb_REG_FILE__DOT__W_ADDR = 1U;
    }
}

void Vtb_REG_FILE___024root___timing_resume(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___timing_resume\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_REG_FILE___024root___eval_triggers__act(Vtb_REG_FILE___024root* vlSelf);

bool Vtb_REG_FILE___024root___eval_phase__act(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval_phase__act\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_REG_FILE___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_REG_FILE___024root___timing_resume(vlSelf);
        Vtb_REG_FILE___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_REG_FILE___024root___eval_phase__nba(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval_phase__nba\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_REG_FILE___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_REG_FILE___024root___dump_triggers__nba(Vtb_REG_FILE___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_REG_FILE___024root___dump_triggers__act(Vtb_REG_FILE___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_REG_FILE___024root___eval(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_REG_FILE___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_REG_FILE.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_REG_FILE___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_REG_FILE.sv", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_REG_FILE___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_REG_FILE___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_REG_FILE___024root___eval_debug_assertions(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval_debug_assertions\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
