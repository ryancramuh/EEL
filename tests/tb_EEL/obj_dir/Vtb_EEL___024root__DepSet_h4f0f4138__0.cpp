// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_EEL.h for the primary calling header

#include "Vtb_EEL__pch.h"
#include "Vtb_EEL___024root.h"

VL_ATTR_COLD void Vtb_EEL___024root___eval_initial__TOP(Vtb_EEL___024root* vlSelf);
VlCoroutine Vtb_EEL___024root___eval_initial__TOP__Vtiming__0(Vtb_EEL___024root* vlSelf);
VlCoroutine Vtb_EEL___024root___eval_initial__TOP__Vtiming__1(Vtb_EEL___024root* vlSelf);

void Vtb_EEL___024root___eval_initial(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval_initial\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_EEL___024root___eval_initial__TOP(vlSelf);
    Vtb_EEL___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_EEL___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_EEL__DOT__CLK__0 
        = vlSelfRef.tb_EEL__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vtb_EEL___024root___eval_initial__TOP__Vtiming__0(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "tb_EEL.sv", 
                                         22);
    vlSelfRef.tb_EEL__DOT__CLK = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_EEL.sv", 
                                             23);
        vlSelfRef.tb_EEL__DOT__CLK = (1U & (~ (IData)(vlSelfRef.tb_EEL__DOT__CLK)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_EEL___024root___eval_initial__TOP__Vtiming__1(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_EEL.sv", 
                                             27);
        vlSelfRef.__VdlySet__tb_EEL__DOT__RST__v0 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x493e0ULL, 
                                             nullptr, 
                                             "tb_EEL.sv", 
                                             28);
        vlSelfRef.__VdlySet__tb_EEL__DOT__RST__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_EEL.sv", 
                                             29);
        VL_FINISH_MT("tb_EEL.sv", 29, "");
    }
}

void Vtb_EEL___024root___eval_act(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval_act\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_EEL___024root___nba_sequent__TOP__0(Vtb_EEL___024root* vlSelf);
void Vtb_EEL___024root___nba_sequent__TOP__1(Vtb_EEL___024root* vlSelf);

void Vtb_EEL___024root___eval_nba(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval_nba\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_EEL___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_EEL___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_EEL___024root___nba_sequent__TOP__0(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___nba_sequent__TOP__0\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32__v0;
    __VdlyVal__tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32__v0;
    __VdlyDim0__tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb__v0;
    __VdlyVal__tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb__v0;
    __VdlyDim0__tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb__v0;
    __VdlySet__tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb__v0 = 0;
    // Body
    __VdlySet__tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb__v0 = 0U;
    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                  >> 0xaU)))) {
        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])) {
            __VdlyVal__tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb__v0 
                = ((0U == (3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                 >> 8U))) ? ((0x80U 
                                              & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])
                                              ? (0xffffff00U 
                                                 | (0xffU 
                                                    & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U] 
                                                       >> 9U)))
                                              : (0xffU 
                                                 & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U] 
                                                    >> 9U)))
                    : ((1U == (3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                     >> 8U))) ? ((0x80U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])
                                                  ? 
                                                 (0xffff0000U 
                                                  | (0xffffU 
                                                     & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U] 
                                                        >> 9U)))
                                                  : 
                                                 (0xffffU 
                                                  & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U] 
                                                     >> 9U)))
                        : ((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[4U] 
                            << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U] 
                                         >> 9U))));
            __VdlyDim0__tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb__v0 
                = (0x3fffU & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                << 0x11U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                             >> 0xfU)) 
                              - (IData)(0x2000U)));
            __VdlySet__tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb__v0 = 1U;
        }
    }
    __VdlyVal__tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32__v0 
        = ((0x800000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U])
            ? ((0x2000000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U])
                ? ((0x1000000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U])
                    ? ((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                        << 0x13U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                     >> 0xdU)) : vlSelfRef.tb_EEL__DOT__UUT__DOT__dout)
                : ((0x1000000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U])
                    ? vlSelfRef.tb_EEL__DOT__UUT__DOT__RF_MUX__DOT__D1
                    : ((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[7U] 
                        << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[6U] 
                                     >> 0xbU)))) : 
           vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32
           [(0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                      >> 0x1aU))]);
    __VdlyDim0__tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32__v0 
        = (0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                    >> 0x1aU));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[6U] = ((0x7ffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[6U]) 
                                               | ((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelfRef.tb_EEL__DOT__UUT__DOT__em[8U])) 
                                                            << 0x35U) 
                                                           | (((QData)((IData)(
                                                                               vlSelfRef.tb_EEL__DOT__UUT__DOT__em[7U])) 
                                                               << 0x15U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U])) 
                                                                 >> 0xbU)))) 
                                                  << 0xbU));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[7U] = (((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.tb_EEL__DOT__UUT__DOT__em[8U])) 
                                                          << 0x35U) 
                                                         | (((QData)((IData)(
                                                                             vlSelfRef.tb_EEL__DOT__UUT__DOT__em[7U])) 
                                                             << 0x15U) 
                                                            | ((QData)((IData)(
                                                                               vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U])) 
                                                               >> 0xbU)))) 
                                                >> 0x15U) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelfRef.tb_EEL__DOT__UUT__DOT__em[8U])) 
                                                             << 0x35U) 
                                                            | (((QData)((IData)(
                                                                                vlSelfRef.tb_EEL__DOT__UUT__DOT__em[7U])) 
                                                                << 0x15U) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U])) 
                                                                  >> 0xbU))) 
                                                           >> 0x20U)) 
                                                  << 0xbU));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[8U] = ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelfRef.tb_EEL__DOT__UUT__DOT__em[8U])) 
                                                          << 0x35U) 
                                                         | (((QData)((IData)(
                                                                             vlSelfRef.tb_EEL__DOT__UUT__DOT__em[7U])) 
                                                             << 0x15U) 
                                                            | ((QData)((IData)(
                                                                               vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U])) 
                                                               >> 0xbU))) 
                                                        >> 0x20U)) 
                                               >> 0x15U);
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[3U] = ((0x1ffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[3U]) 
                                               | ((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U])) 
                                                            << 0x37U) 
                                                           | (((QData)((IData)(
                                                                               vlSelfRef.tb_EEL__DOT__UUT__DOT__em[4U])) 
                                                               << 0x17U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U])) 
                                                                 >> 9U)))) 
                                                  << 9U));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[4U] = (((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U])) 
                                                          << 0x37U) 
                                                         | (((QData)((IData)(
                                                                             vlSelfRef.tb_EEL__DOT__UUT__DOT__em[4U])) 
                                                             << 0x17U) 
                                                            | ((QData)((IData)(
                                                                               vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U])) 
                                                               >> 9U)))) 
                                                >> 0x17U) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U])) 
                                                             << 0x37U) 
                                                            | (((QData)((IData)(
                                                                                vlSelfRef.tb_EEL__DOT__UUT__DOT__em[4U])) 
                                                                << 0x17U) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U])) 
                                                                  >> 9U))) 
                                                           >> 0x20U)) 
                                                  << 9U));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] = ((0xfffffe00U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U]) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U])) 
                                                             << 0x37U) 
                                                            | (((QData)((IData)(
                                                                                vlSelfRef.tb_EEL__DOT__UUT__DOT__em[4U])) 
                                                                << 0x17U) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U])) 
                                                                  >> 9U))) 
                                                           >> 0x20U)) 
                                                  >> 0x17U));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] = ((0x7ffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U]) 
                                               | (0xfffff800U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[6U] = ((0xfffff800U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[6U]) 
                                               | (0x7ffU 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] = ((0x7fffffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U]) 
                                               | (0xff800000U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[3U] = ((0xfffffe00U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[3U]) 
                                               | (0x1ffU 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] = ((0x1fffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U]) 
                                               | (0xffffe000U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] = ((0xffffe000U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U]) 
                                               | (0x1fffU 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__dout = ((0x400U 
                                              & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                      >> 8U)))
                                                  ? 
                                                 ((0x80U 
                                                   & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])
                                                   ? 
                                                  (0xffffff00U 
                                                   | (0xffU 
                                                      & vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                                      [
                                                      (0x3fffU 
                                                       & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                            << 0x11U) 
                                                           | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                              >> 0xfU)) 
                                                          - (IData)(0x2000U)))]))
                                                   : 
                                                  (0xffU 
                                                   & vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                                   [
                                                   (0x3fffU 
                                                    & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                         << 0x11U) 
                                                        | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                           >> 0xfU)) 
                                                       - (IData)(0x2000U)))]))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                       >> 8U)))
                                                   ? 
                                                  ((0x80U 
                                                    & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])
                                                    ? 
                                                   (0xffff0000U 
                                                    | (0xffffU 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                                       [
                                                       (0x3fffU 
                                                        & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                             << 0x11U) 
                                                            | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                               >> 0xfU)) 
                                                           - (IData)(0x2000U)))]))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                                    [
                                                    (0x3fffU 
                                                     & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                          << 0x11U) 
                                                         | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                            >> 0xfU)) 
                                                        - (IData)(0x2000U)))]))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                        >> 8U)))
                                                    ? 
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                                   [
                                                   (0x3fffU 
                                                    & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                         << 0x11U) 
                                                        | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                           >> 0xfU)) 
                                                       - (IData)(0x2000U)))]
                                                    : 
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                                   [
                                                   (0x3fffU 
                                                    & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                         << 0x11U) 
                                                        | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                           >> 0xfU)) 
                                                       - (IData)(0x2000U)))])))
                                              : 0U);
    if (__VdlySet__tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb__v0) {
        vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb[__VdlyDim0__tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb__v0] 
            = __VdlyVal__tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb__v0;
    }
    vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] = ((0x7ffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U]) 
                                               | (0xfffff800U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U] = ((0x7ffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[6U]) 
                                               | (0xfffff800U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[6U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__em[7U] = ((0x7ffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[7U]) 
                                               | (0xfffff800U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[7U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__em[8U] = (0x7ffU 
                                               & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[8U]);
    vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U] = ((0x7fffffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U]) 
                                               | (0xff800000U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U] = ((0x7fffffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U]) 
                                               | (0xff800000U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__em[4U] = ((0x7fffffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U]) 
                                               | (0xff800000U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] = ((0xfffffe00U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U]) 
                                               | (0x1ffU 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] = ((0x7fU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U]) 
                                               | ((IData)(
                                                          (((QData)((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result)) 
                                                            << 6U) 
                                                           | (QData)((IData)(
                                                                             (((0U 
                                                                                == vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result) 
                                                                               << 5U) 
                                                                              | (0x1fU 
                                                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                                                                >> 7U))))))) 
                                                  << 7U));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] = ((0xffffe000U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U]) 
                                               | (((IData)(
                                                           (((QData)((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result)) 
                                                             << 6U) 
                                                            | (QData)((IData)(
                                                                              (((0U 
                                                                                == vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result) 
                                                                                << 5U) 
                                                                               | (0x1fU 
                                                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                                                                >> 7U))))))) 
                                                   >> 0x19U) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result)) 
                                                                << 6U) 
                                                               | (QData)((IData)(
                                                                                (((0U 
                                                                                == vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                                                                >> 7U)))))) 
                                                              >> 0x20U)) 
                                                     << 7U)));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] = ((0x7ffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U]) 
                                               | (0xfffff800U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[6U] = ((0x7ffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U]) 
                                               | (0xfffff800U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[7U] = ((0x7ffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[7U]) 
                                               | (0xfffff800U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[7U]));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[8U] = (0x7ffU 
                                               & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[8U]);
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] = ((0x7fffffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U]) 
                                               | ((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32
                                                                            [
                                                                            (0x1fU 
                                                                             & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                                                                << 1U) 
                                                                                | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                                                                >> 0x1fU)))])) 
                                                            << 0x12U) 
                                                           | (QData)((IData)(
                                                                             ((0x3fff8U 
                                                                               & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                                                                << 9U) 
                                                                                | (0x1f8U 
                                                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                                                                >> 0x17U)))) 
                                                                              | (((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write))))))) 
                                                  << 0x17U));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U] = (((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32
                                                                          [
                                                                          (0x1fU 
                                                                           & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                                                               << 1U) 
                                                                              | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                                                                >> 0x1fU)))])) 
                                                          << 0x12U) 
                                                         | (QData)((IData)(
                                                                           ((0x3fff8U 
                                                                             & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                                                                << 9U) 
                                                                                | (0x1f8U 
                                                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                                                                >> 0x17U)))) 
                                                                            | (((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write))))))) 
                                                >> 9U) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32
                                                                             [
                                                                             (0x1fU 
                                                                              & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                                                                << 1U) 
                                                                                | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                                                                >> 0x1fU)))])) 
                                                             << 0x12U) 
                                                            | (QData)((IData)(
                                                                              ((0x3fff8U 
                                                                                & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                                                                << 9U) 
                                                                                | (0x1f8U 
                                                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                                                                >> 0x17U)))) 
                                                                               | (((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write)))))) 
                                                           >> 0x20U)) 
                                                  << 0x17U));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] = ((0xfffffe00U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U]) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32
                                                                             [
                                                                             (0x1fU 
                                                                              & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                                                                << 1U) 
                                                                                | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                                                                >> 0x1fU)))])) 
                                                             << 0x12U) 
                                                            | (QData)((IData)(
                                                                              ((0x3fff8U 
                                                                                & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                                                                << 9U) 
                                                                                | (0x1f8U 
                                                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                                                                >> 0x17U)))) 
                                                                               | (((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write)))))) 
                                                           >> 0x20U)) 
                                                  >> 9U));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] = ((0x1ffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U]) 
                                               | (vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32
                                                  [
                                                  (0x1fU 
                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                                      >> 4U))] 
                                                  << 9U));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] = ((0xfffffe00U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U]) 
                                               | (vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32
                                                  [
                                                  (0x1fU 
                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                                      >> 4U))] 
                                                  >> 0x17U));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] = ((0xfffff9ffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U]) 
                                               | ((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_sel) 
                                                  << 9U));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] = ((0xfffff3ffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U]) 
                                               | (0xfffffc00U 
                                                  & (((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write) 
                                                      << 0xbU) 
                                                     | ((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_read) 
                                                        << 0xaU))));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] = ((0xfffffc07U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U]) 
                                               | (0xfffffff8U 
                                                  & (((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__byte_sel) 
                                                      << 8U) 
                                                     | (((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__sign) 
                                                         << 7U) 
                                                        | (((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__branch) 
                                                            << 6U) 
                                                           | ((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__br_type) 
                                                              << 3U))))));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] = ((0xfffffffbU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U]) 
                                               | ((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__jump) 
                                                  << 2U));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] = ((0xfff01fffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U]) 
                                               | (0xffffe000U 
                                                  & (((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_fun) 
                                                      << 0x10U) 
                                                     | (((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__src_a_sel) 
                                                         << 0xfU) 
                                                        | ((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel) 
                                                           << 0xdU)))));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] = ((0xfffffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U]) 
                                               | (((4U 
                                                    & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                                     ? vlSelfRef.tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                                      ? vlSelfRef.tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                                      >> 0xaU)))) 
                                                       << 0x14U) 
                                                      | (((0xff000U 
                                                           & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                              >> 0xbU)) 
                                                          | (0x800U 
                                                             & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                                >> 0x14U))) 
                                                         | (0x7feU 
                                                            & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                               << 1U))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                                      ? 
                                                     (0xfffff000U 
                                                      & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                          << 0x15U) 
                                                         | (0x1ff000U 
                                                            & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                               >> 0xbU))))
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                                      >> 0xaU)))) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                             >> 7U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                                << 1U)) 
                                                            | (0x1eU 
                                                               & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                                  >> 0x12U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                                      >> 0xaU)))) 
                                                       << 0xbU) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                             << 1U)) 
                                                         | (0x1fU 
                                                            & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                               >> 0x12U))))
                                                      : vlSelfRef.tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE))) 
                                                  << 0x14U));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] = ((0xfff00000U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U]) 
                                               | (((4U 
                                                    & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                                     ? vlSelfRef.tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                                      ? vlSelfRef.tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                                      >> 0xaU)))) 
                                                       << 0x14U) 
                                                      | (((0xff000U 
                                                           & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                              >> 0xbU)) 
                                                          | (0x800U 
                                                             & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                                >> 0x14U))) 
                                                         | (0x7feU 
                                                            & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                               << 1U))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                                      ? 
                                                     (0xfffff000U 
                                                      & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                          << 0x15U) 
                                                         | (0x1ff000U 
                                                            & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                               >> 0xbU))))
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                                      >> 0xaU)))) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                             >> 7U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                                << 1U)) 
                                                            | (0x1eU 
                                                               & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                                  >> 0x12U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                                      >> 0xaU)))) 
                                                       << 0xbU) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                             << 1U)) 
                                                         | (0x1fU 
                                                            & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                               >> 0x12U))))
                                                      : vlSelfRef.tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE))) 
                                                  >> 0xcU));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] = ((0xff8fffffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U]) 
                                               | ((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel) 
                                                  << 0x14U));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[__VdlyDim0__tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32__v0] 
        = __VdlyVal__tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32__v0;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a = ((0x8000U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                  ? 
                                                 ((0x8000U 
                                                   & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                   ? 
                                                  ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                                    << 0xcU) 
                                                   | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                                                      >> 0x14U))
                                                   : 
                                                  ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                                    << 0x17U) 
                                                   | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                                                      >> 9U)))
                                                  : 
                                                 ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                                   << 0x17U) 
                                                  | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                                                     >> 9U)));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b = ((0x4000U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                   ? 0U
                                                   : 
                                                  ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[8U] 
                                                    << 0x15U) 
                                                   | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[7U] 
                                                      >> 0xbU)))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                   ? 
                                                  ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                                    << 0xcU) 
                                                   | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                                                      >> 0x14U))
                                                   : 
                                                  ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                                                    << 0x17U) 
                                                   | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U] 
                                                      >> 9U))));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] = ((0x7ffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U]) 
                                               | (vlSelfRef.tb_EEL__DOT__UUT__DOT__ir 
                                                  << 0xbU));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] = ((vlSelfRef.tb_EEL__DOT__UUT__DOT__ir 
                                                >> 0x15U) 
                                               | ((IData)(
                                                          (((QData)((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((IData)(4U) 
                                                                              + vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out))))) 
                                                  << 0xbU));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[7U] = (((IData)(
                                                        (((QData)((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((IData)(4U) 
                                                                            + vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out))))) 
                                                >> 0x15U) 
                                               | ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((IData)(4U) 
                                                                               + vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out)))) 
                                                           >> 0x20U)) 
                                                  << 0xbU));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[8U] = ((IData)(
                                                       ((((QData)((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((IData)(4U) 
                                                                            + vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out)))) 
                                                        >> 0x20U)) 
                                               >> 0x15U);
    vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] = ((0x3ffffffU 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U]) 
                                               | (0xfc000000U 
                                                  & ((0x80000000U 
                                                      & (vlSelfRef.tb_EEL__DOT__UUT__DOT__ir 
                                                         << 0xbU)) 
                                                     | (0x7c000000U 
                                                        & (vlSelfRef.tb_EEL__DOT__UUT__DOT__ir 
                                                           << 0x13U)))));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] = ((0xfffffe00U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U]) 
                                               | (0x3ffffffU 
                                                  & ((0x1f0U 
                                                      & (vlSelfRef.tb_EEL__DOT__UUT__DOT__ir 
                                                         >> 0xbU)) 
                                                     | (0xfU 
                                                        & (vlSelfRef.tb_EEL__DOT__UUT__DOT__ir 
                                                           >> 0x15U)))));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result = (
                                                   (0x80000U 
                                                    & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                    ? 
                                                   ((0x40000U 
                                                     & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                     ? 
                                                    ((0x20000U 
                                                      & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                       ? 
                                                      VL_SHIFTR_III(32,32,32, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b)
                                                       : 0U))
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                       ? vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a
                                                       : 
                                                      (vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a 
                                                       - vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b))))
                                                    : 
                                                   ((0x40000U 
                                                     & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                     ? 
                                                    ((0x20000U 
                                                      & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                       ? 
                                                      (vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b)
                                                       : 
                                                      (vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a 
                                                       | vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b))
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                       ? 
                                                      VL_SHIFTR_III(32,32,32, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b)
                                                       : 0U))
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                       ? 
                                                      (vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a 
                                                       < vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b)
                                                       : 
                                                      VL_LTS_III(32, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b))
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                       ? 
                                                      VL_SHIFTL_III(32,32,32, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b)
                                                       : 
                                                      (vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a 
                                                       + vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b)))));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__sign = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__byte_sel = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__src_a_sel = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_fun = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_read = 0U;
    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                  >> 0x11U)))) {
        if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                      >> 0x10U)))) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xfU)))) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__sign 
                                    = ((0x2000000U 
                                        & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                        ? ((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                  >> 0x18U)) 
                                           || (1U & 
                                               (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                >> 0x17U)))
                                        : ((1U & (~ 
                                                  (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0x18U))) 
                                           || (1U & 
                                               (~ (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0x17U)))));
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_read = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x10000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xfU)))) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__byte_sel 
                                    = ((0U == (7U & 
                                               (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                >> 0x17U)))
                                        ? 0U : ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                     >> 0x17U)))
                                                 ? 1U
                                                 : 2U));
                            }
                        }
                    }
                }
            }
            if ((0x8000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xeU)))) {
                    if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__src_a_sel = 1U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_fun = 9U;
                            }
                        }
                    } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__src_a_sel = 0U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_fun 
                                = ((8U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                          >> 6U)) | 
                                   (7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                          >> 0x17U)));
                        }
                    }
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                 >> 0xeU)))) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xdU)))) {
                    if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel = 1U;
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xfU)))) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__byte_sel 
                                    = ((0x2000000U 
                                        & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                        ? ((0x1000000U 
                                            & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                            ? 2U : 
                                           ((0x800000U 
                                             & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                             ? 2U : 1U))
                                        : ((0x1000000U 
                                            & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                            ? ((0x800000U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                                ? 0U
                                                : 2U)
                                            : ((0x800000U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                                ? 1U
                                                : 0U)));
                            }
                        }
                    }
                }
            }
            if ((0x8000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xeU)))) {
                    if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__src_a_sel = 1U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel = 2U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_fun = 0U;
                            }
                        }
                    } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel = 1U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_fun 
                                = ((0x2000000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                    ? ((0x1000000U 
                                        & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                        ? ((0x800000U 
                                            & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                            ? 7U : 6U)
                                        : ((0x800000U 
                                            & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                            ? ((0x200U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U])
                                                ? 0xdU
                                                : 5U)
                                            : 4U)) : 
                                   ((0x1000000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                     ? ((0x800000U 
                                         & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                         ? 3U : 2U)
                                     : ((0x800000U 
                                         & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                         ? 1U : 0U)));
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                 >> 0xeU)))) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xdU)))) {
                    if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__src_a_sel = 0U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__branch = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__br_type = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__jump = 0U;
    if ((0x20000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
        if ((0x10000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xfU)))) {
                if ((0x4000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_sel = 1U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 0U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 4U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__jump = 1U;
                            }
                        }
                    }
                } else if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_sel = 2U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 0U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 4U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__jump = 1U;
                        }
                    }
                } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_sel = 1U;
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 2U;
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__branch = 1U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__br_type 
                                    = ((0x2000000U 
                                        & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                        ? ((0x1000000U 
                                            & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                            ? ((0x800000U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                                ? 5U
                                                : 4U)
                                            : ((0x800000U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                                ? 3U
                                                : 2U))
                                        : ((0x1000000U 
                                            & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                            ? 0U : 
                                           ((0x800000U 
                                             & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                             ? 1U : 0U)));
                            }
                        }
                    }
                }
            }
            if ((0x8000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            } else if ((0x4000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write 
                    = ((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xdU)) && ((1U & (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xcU)) 
                                            && (1U 
                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xbU))));
                if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                      >> 0xbU)))) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                        }
                    } else {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                    }
                } else {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                }
            } else if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write 
                    = ((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xcU)) && (1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                  >> 0xbU)));
                if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xbU)))) {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                    }
                } else {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                }
            } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xbU)))) {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                }
            } else {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            }
        } else {
            vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
        }
    } else if ((0x10000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
        if ((0x8000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 3U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 3U;
                        }
                    }
                } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 3U;
                    }
                }
            }
            vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write 
                = ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                             >> 0xeU))) && ((0x2000U 
                                             & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                             ? ((1U 
                                                 & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                    >> 0xcU)) 
                                                && (1U 
                                                    & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                       >> 0xbU)))
                                             : ((1U 
                                                 & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                    >> 0xcU)) 
                                                && (1U 
                                                    & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                       >> 0xbU)))));
            if ((0x4000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            } else if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xbU)))) {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                    }
                } else {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                }
            } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xbU)))) {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                }
            } else {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            }
        } else {
            if ((0x4000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
            } else if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
            } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xbU)))) {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
                }
            } else {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
            }
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write 
                = ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                             >> 0xeU))) && ((1U & (~ 
                                                   (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                    >> 0xdU))) 
                                            && ((1U 
                                                 & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                    >> 0xcU)) 
                                                && (1U 
                                                    & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                       >> 0xbU)))));
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xdU)))) {
                    if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x8000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
        if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                      >> 0xeU)))) {
            if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 3U;
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 3U;
                    }
                }
            } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 3U;
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 0U;
                }
            }
        }
        vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write 
            = ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                         >> 0xeU))) && ((0x2000U & 
                                         vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                         ? ((1U & (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xcU)) 
                                            && (1U 
                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xbU)))
                                         : ((1U & (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xcU)) 
                                            && (1U 
                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xbU)))));
        if ((0x4000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
        } else if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xbU)))) {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                }
            } else {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            }
        } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xbU)))) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            }
        } else {
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
        }
    } else {
        if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                      >> 0xeU)))) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xdU)))) {
                if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 2U;
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 0U;
                    }
                }
            }
        }
        vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write 
            = ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                         >> 0xeU))) && ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                  >> 0xdU))) 
                                        && ((1U & (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xcU)) 
                                            && (1U 
                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xbU)))));
        if ((0x4000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
        } else if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
        } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xbU)))) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            }
        } else {
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
        }
    }
    vlSelfRef.tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE 
        = (((- (IData)((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                              >> 0xaU)))) << 0xbU) 
           | (0x7ffU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                         << 1U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                   >> 0x1fU))));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__ir = vlSelfRef.tb_EEL__DOT__UUT__DOT__PROG_MEMORY__DOT__rom_64kb
        [(0x3fffU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out 
                     >> 2U))];
    vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out = ((IData)(vlSelfRef.tb_EEL__DOT__RST)
                                                ? 0U
                                                : vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_in);
    vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_in = ((IData)(4U) 
                                              + vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out);
}

VL_INLINE_OPT void Vtb_EEL___024root___nba_sequent__TOP__1(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___nba_sequent__TOP__1\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_EEL__DOT__RST__v0) {
        vlSelfRef.__VdlySet__tb_EEL__DOT__RST__v0 = 0U;
        vlSelfRef.tb_EEL__DOT__RST = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_EEL__DOT__RST__v1) {
        vlSelfRef.__VdlySet__tb_EEL__DOT__RST__v1 = 0U;
        vlSelfRef.tb_EEL__DOT__RST = 1U;
    }
}

void Vtb_EEL___024root___timing_resume(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___timing_resume\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_EEL___024root___eval_triggers__act(Vtb_EEL___024root* vlSelf);

bool Vtb_EEL___024root___eval_phase__act(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval_phase__act\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_EEL___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_EEL___024root___timing_resume(vlSelf);
        Vtb_EEL___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_EEL___024root___eval_phase__nba(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval_phase__nba\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_EEL___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_EEL___024root___dump_triggers__nba(Vtb_EEL___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_EEL___024root___dump_triggers__act(Vtb_EEL___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_EEL___024root___eval(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_EEL___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_EEL.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_EEL___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_EEL.sv", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_EEL___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_EEL___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_EEL___024root___eval_debug_assertions(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval_debug_assertions\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
