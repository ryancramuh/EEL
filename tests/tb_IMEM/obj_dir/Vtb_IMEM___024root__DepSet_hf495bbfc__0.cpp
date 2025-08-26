// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_IMEM.h for the primary calling header

#include "Vtb_IMEM__pch.h"
#include "Vtb_IMEM__Syms.h"
#include "Vtb_IMEM___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_IMEM___024root___eval_initial__TOP__Vtiming__1(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSymsp->TOP____024unit.__VmonitorNum = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_IMEM.sv", 
                                             33);
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v0 = 1U;
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v0 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_IMEM.sv", 
                                             36);
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v1 = 1U;
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_IMEM.sv", 
                                             39);
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v2 = 1U;
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v2 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_IMEM.sv", 
                                             42);
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v3 = 1U;
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v3 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_IMEM.sv", 
                                             45);
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v4 = 1U;
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v4 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_IMEM.sv", 
                                             48);
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v5 = 1U;
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v5 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_IMEM.sv", 
                                             51);
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v6 = 1U;
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v6 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_IMEM.sv", 
                                             54);
        vlSelfRef.__VdlySet__tb_IMEM__DOT__RDEN__v7 = 1U;
        vlSelfRef.__VdlySet__tb_IMEM__DOT__PC_OUT__v7 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                             nullptr, 
                                             "tb_IMEM.sv", 
                                             58);
        VL_FINISH_MT("tb_IMEM.sv", 58, "");
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_IMEM___024root___dump_triggers__act(Vtb_IMEM___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_IMEM___024root___eval_triggers__act(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval_triggers__act\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (vlSelfRef.tb_IMEM__DOT__UUT__DOT__MEM_OUT 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_IMEM__DOT__UUT__DOT__MEM_OUT__0));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_IMEM__DOT__CLK) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_IMEM__DOT__CLK__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_IMEM__DOT__UUT__DOT__MEM_OUT__0 
        = vlSelfRef.tb_IMEM__DOT__UUT__DOT__MEM_OUT;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_IMEM__DOT__CLK__0 
        = vlSelfRef.tb_IMEM__DOT__CLK;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_IMEM___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_IMEM___024root___nba_sequent__TOP__0(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___nba_sequent__TOP__0\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("instruction: %x\n",0,32,vlSelfRef.tb_IMEM__DOT__UUT__DOT__MEM_OUT);
    }
}
