// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_DMEM.h for the primary calling header

#include "Vtb_DMEM__pch.h"
#include "Vtb_DMEM___024root.h"

VL_ATTR_COLD void Vtb_DMEM___024root___eval_initial__TOP(Vtb_DMEM___024root* vlSelf);
VlCoroutine Vtb_DMEM___024root___eval_initial__TOP__Vtiming__0(Vtb_DMEM___024root* vlSelf);
VlCoroutine Vtb_DMEM___024root___eval_initial__TOP__Vtiming__1(Vtb_DMEM___024root* vlSelf);

void Vtb_DMEM___024root___eval_initial(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___eval_initial\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_DMEM___024root___eval_initial__TOP(vlSelf);
    Vtb_DMEM___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_DMEM___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_DMEM__DOT__CLK__0 
        = vlSelfRef.tb_DMEM__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vtb_DMEM___024root___eval_initial__TOP__Vtiming__0(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "tb_DMEM.sv", 
                                         28);
    vlSelfRef.tb_DMEM__DOT__CLK = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_DMEM.sv", 
                                             29);
        vlSelfRef.tb_DMEM__DOT__CLK = (1U & (~ (IData)(vlSelfRef.tb_DMEM__DOT__CLK)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_DMEM___024root___eval_initial__TOP__Vtiming__1(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_DMEM.sv", 
                                             35);
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v0 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v0 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v0 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v0 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v0 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v0 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_DMEM.sv", 
                                             43);
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v1 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v1 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v1 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v1 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v1 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_DMEM.sv", 
                                             51);
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v2 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v2 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v2 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v2 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v2 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v2 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_DMEM.sv", 
                                             59);
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v3 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v3 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v3 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v3 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v3 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v3 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_DMEM.sv", 
                                             67);
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v4 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v4 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v4 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v4 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v4 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v4 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_DMEM.sv", 
                                             75);
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v5 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v5 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v5 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v5 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v5 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v5 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_DMEM.sv", 
                                             83);
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v6 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v6 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v6 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v6 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v6 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v6 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_DMEM.sv", 
                                             91);
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v7 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v7 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v7 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v7 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v7 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v7 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_DMEM.sv", 
                                             99);
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v8 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v8 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v8 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v8 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v8 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v8 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_DMEM.sv", 
                                             107);
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v9 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v9 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v9 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v9 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v9 = 1U;
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v9 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                             nullptr, 
                                             "tb_DMEM.sv", 
                                             116);
        VL_FINISH_MT("tb_DMEM.sv", 116, "");
    }
}

void Vtb_DMEM___024root___eval_act(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___eval_act\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_DMEM___024root___nba_sequent__TOP__0(Vtb_DMEM___024root* vlSelf);
void Vtb_DMEM___024root___nba_sequent__TOP__1(Vtb_DMEM___024root* vlSelf);

void Vtb_DMEM___024root___eval_nba(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___eval_nba\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_DMEM___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_DMEM___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_DMEM___024root___nba_sequent__TOP__0(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___nba_sequent__TOP__0\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_DMEM__DOT__UUT__DOT__ram_64kb__v0;
    __VdlyVal__tb_DMEM__DOT__UUT__DOT__ram_64kb__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_DMEM__DOT__UUT__DOT__ram_64kb__v0;
    __VdlyDim0__tb_DMEM__DOT__UUT__DOT__ram_64kb__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_DMEM__DOT__UUT__DOT__ram_64kb__v0;
    __VdlySet__tb_DMEM__DOT__UUT__DOT__ram_64kb__v0 = 0;
    // Body
    __VdlySet__tb_DMEM__DOT__UUT__DOT__ram_64kb__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_DMEM__DOT__RDEN)))) {
        if (vlSelfRef.tb_DMEM__DOT__WEN) {
            __VdlyVal__tb_DMEM__DOT__UUT__DOT__ram_64kb__v0 
                = ((0U == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                    ? ((IData)(vlSelfRef.tb_DMEM__DOT__SIGN)
                        ? (0xffffff00U | (0xffU & vlSelfRef.tb_DMEM__DOT__DATA_IN))
                        : (0xffU & vlSelfRef.tb_DMEM__DOT__DATA_IN))
                    : ((1U == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                        ? ((IData)(vlSelfRef.tb_DMEM__DOT__SIGN)
                            ? (0xffff0000U | (0xffffU 
                                              & vlSelfRef.tb_DMEM__DOT__DATA_IN))
                            : (0xffffU & vlSelfRef.tb_DMEM__DOT__DATA_IN))
                        : vlSelfRef.tb_DMEM__DOT__DATA_IN));
            __VdlyDim0__tb_DMEM__DOT__UUT__DOT__ram_64kb__v0 
                = vlSelfRef.tb_DMEM__DOT__ADDR;
            __VdlySet__tb_DMEM__DOT__UUT__DOT__ram_64kb__v0 = 1U;
        }
    }
    vlSelfRef.tb_DMEM__DOT__UUT__DOT__DATA_OUT = ((IData)(vlSelfRef.tb_DMEM__DOT__RDEN)
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                                                    ? 
                                                   ((IData)(vlSelfRef.tb_DMEM__DOT__SIGN)
                                                     ? 
                                                    (0xffffff00U 
                                                     | (0xffU 
                                                        & vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                                        [vlSelfRef.tb_DMEM__DOT__ADDR]))
                                                     : 
                                                    (0xffU 
                                                     & vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                                     [vlSelfRef.tb_DMEM__DOT__ADDR]))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_DMEM__DOT__SIGN)
                                                      ? 
                                                     (0xffff0000U 
                                                      | (0xffffU 
                                                         & vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                                         [vlSelfRef.tb_DMEM__DOT__ADDR]))
                                                      : 
                                                     (0xffffU 
                                                      & vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                                      [vlSelfRef.tb_DMEM__DOT__ADDR]))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                                                      ? 
                                                     vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                                     [vlSelfRef.tb_DMEM__DOT__ADDR]
                                                      : 
                                                     vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                                     [vlSelfRef.tb_DMEM__DOT__ADDR])))
                                                   : 0U);
    if (__VdlySet__tb_DMEM__DOT__UUT__DOT__ram_64kb__v0) {
        vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb[__VdlyDim0__tb_DMEM__DOT__UUT__DOT__ram_64kb__v0] 
            = __VdlyVal__tb_DMEM__DOT__UUT__DOT__ram_64kb__v0;
    }
}

VL_INLINE_OPT void Vtb_DMEM___024root___nba_sequent__TOP__1(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___nba_sequent__TOP__1\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v0) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v0 = 0U;
        vlSelfRef.tb_DMEM__DOT__WEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v1) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v1 = 0U;
        vlSelfRef.tb_DMEM__DOT__WEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v2) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v2 = 0U;
        vlSelfRef.tb_DMEM__DOT__WEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v3) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v3 = 0U;
        vlSelfRef.tb_DMEM__DOT__WEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v4) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v4 = 0U;
        vlSelfRef.tb_DMEM__DOT__WEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v5) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v5 = 0U;
        vlSelfRef.tb_DMEM__DOT__WEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v6) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v6 = 0U;
        vlSelfRef.tb_DMEM__DOT__WEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v7) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v7 = 0U;
        vlSelfRef.tb_DMEM__DOT__WEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v8) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v8 = 0U;
        vlSelfRef.tb_DMEM__DOT__WEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v9) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__WEN__v9 = 0U;
        vlSelfRef.tb_DMEM__DOT__WEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v0) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v0 = 0U;
        vlSelfRef.tb_DMEM__DOT__DATA_IN = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v1) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v1 = 0U;
        vlSelfRef.tb_DMEM__DOT__DATA_IN = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v2) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v2 = 0U;
        vlSelfRef.tb_DMEM__DOT__DATA_IN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v3) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v3 = 0U;
        vlSelfRef.tb_DMEM__DOT__DATA_IN = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v4) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v4 = 0U;
        vlSelfRef.tb_DMEM__DOT__DATA_IN = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v5) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v5 = 0U;
        vlSelfRef.tb_DMEM__DOT__DATA_IN = 0xdeadbeefU;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v6) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v6 = 0U;
        vlSelfRef.tb_DMEM__DOT__DATA_IN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v7) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v7 = 0U;
        vlSelfRef.tb_DMEM__DOT__DATA_IN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v8) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v8 = 0U;
        vlSelfRef.tb_DMEM__DOT__DATA_IN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v9) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__DATA_IN__v9 = 0U;
        vlSelfRef.tb_DMEM__DOT__DATA_IN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v0) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v0 = 0U;
        vlSelfRef.tb_DMEM__DOT__RDEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v1) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v1 = 0U;
        vlSelfRef.tb_DMEM__DOT__RDEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v2) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v2 = 0U;
        vlSelfRef.tb_DMEM__DOT__RDEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v3) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v3 = 0U;
        vlSelfRef.tb_DMEM__DOT__RDEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v4) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v4 = 0U;
        vlSelfRef.tb_DMEM__DOT__RDEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v5) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v5 = 0U;
        vlSelfRef.tb_DMEM__DOT__RDEN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v6) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v6 = 0U;
        vlSelfRef.tb_DMEM__DOT__RDEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v7) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v7 = 0U;
        vlSelfRef.tb_DMEM__DOT__RDEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v8) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v8 = 0U;
        vlSelfRef.tb_DMEM__DOT__RDEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v9) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__RDEN__v9 = 0U;
        vlSelfRef.tb_DMEM__DOT__RDEN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v0) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v0 = 0U;
        vlSelfRef.tb_DMEM__DOT__BYTE_SEL = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v1) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v1 = 0U;
        vlSelfRef.tb_DMEM__DOT__BYTE_SEL = 2U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v2) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v2 = 0U;
        vlSelfRef.tb_DMEM__DOT__BYTE_SEL = 2U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v3) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v3 = 0U;
        vlSelfRef.tb_DMEM__DOT__BYTE_SEL = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v4) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v4 = 0U;
        vlSelfRef.tb_DMEM__DOT__BYTE_SEL = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v5) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v5 = 0U;
        vlSelfRef.tb_DMEM__DOT__BYTE_SEL = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v6) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v6 = 0U;
        vlSelfRef.tb_DMEM__DOT__BYTE_SEL = 2U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v7) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v7 = 0U;
        vlSelfRef.tb_DMEM__DOT__BYTE_SEL = 2U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v8) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v8 = 0U;
        vlSelfRef.tb_DMEM__DOT__BYTE_SEL = 2U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v9) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__BYTE_SEL__v9 = 0U;
        vlSelfRef.tb_DMEM__DOT__BYTE_SEL = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v0) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v0 = 0U;
        vlSelfRef.tb_DMEM__DOT__SIGN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v1) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v1 = 0U;
        vlSelfRef.tb_DMEM__DOT__SIGN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v2) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v2 = 0U;
        vlSelfRef.tb_DMEM__DOT__SIGN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v3) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v3 = 0U;
        vlSelfRef.tb_DMEM__DOT__SIGN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v4) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v4 = 0U;
        vlSelfRef.tb_DMEM__DOT__SIGN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v5) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v5 = 0U;
        vlSelfRef.tb_DMEM__DOT__SIGN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v6) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v6 = 0U;
        vlSelfRef.tb_DMEM__DOT__SIGN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v7) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v7 = 0U;
        vlSelfRef.tb_DMEM__DOT__SIGN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v8) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v8 = 0U;
        vlSelfRef.tb_DMEM__DOT__SIGN = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v9) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__SIGN__v9 = 0U;
        vlSelfRef.tb_DMEM__DOT__SIGN = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v0) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v0 = 0U;
        vlSelfRef.tb_DMEM__DOT__ADDR = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v1) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v1 = 0U;
        vlSelfRef.tb_DMEM__DOT__ADDR = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v2) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v2 = 0U;
        vlSelfRef.tb_DMEM__DOT__ADDR = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v3) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v3 = 0U;
        vlSelfRef.tb_DMEM__DOT__ADDR = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v4) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v4 = 0U;
        vlSelfRef.tb_DMEM__DOT__ADDR = 8U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v5) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v5 = 0U;
        vlSelfRef.tb_DMEM__DOT__ADDR = 0xcU;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v6) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v6 = 0U;
        vlSelfRef.tb_DMEM__DOT__ADDR = 4U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v7) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v7 = 0U;
        vlSelfRef.tb_DMEM__DOT__ADDR = 8U;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v8) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v8 = 0U;
        vlSelfRef.tb_DMEM__DOT__ADDR = 0xcU;
    }
    if (vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v9) {
        vlSelfRef.__VdlySet__tb_DMEM__DOT__ADDR__v9 = 0U;
        vlSelfRef.tb_DMEM__DOT__ADDR = 8U;
    }
}

void Vtb_DMEM___024root___timing_resume(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___timing_resume\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_DMEM___024root___eval_triggers__act(Vtb_DMEM___024root* vlSelf);

bool Vtb_DMEM___024root___eval_phase__act(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___eval_phase__act\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_DMEM___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_DMEM___024root___timing_resume(vlSelf);
        Vtb_DMEM___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_DMEM___024root___eval_phase__nba(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___eval_phase__nba\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_DMEM___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_DMEM___024root___dump_triggers__nba(Vtb_DMEM___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_DMEM___024root___dump_triggers__act(Vtb_DMEM___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_DMEM___024root___eval(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___eval\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_DMEM___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_DMEM.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_DMEM___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_DMEM.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_DMEM___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_DMEM___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_DMEM___024root___eval_debug_assertions(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___eval_debug_assertions\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
