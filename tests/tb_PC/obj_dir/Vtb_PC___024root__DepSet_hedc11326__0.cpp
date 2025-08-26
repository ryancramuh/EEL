// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_PC.h for the primary calling header

#include "Vtb_PC__pch.h"
#include "Vtb_PC__Syms.h"
#include "Vtb_PC___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_PC___024root___eval_initial__TOP__Vtiming__1(Vtb_PC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PC___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSymsp->TOP____024unit.__VmonitorNum = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_PC.sv", 
                                             32);
        vlSelfRef.__VdlySet__tb_PC__DOT__RST__v0 = 1U;
        vlSelfRef.__VdlySet__tb_PC__DOT__PC_EN__v0 = 1U;
        vlSelfRef.__VdlySet__tb_PC__DOT__PC_IN__v0 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_PC.sv", 
                                             36);
        vlSelfRef.__VdlySet__tb_PC__DOT__RST__v1 = 1U;
        vlSelfRef.__VdlySet__tb_PC__DOT__PC_EN__v1 = 1U;
        vlSelfRef.__VdlySet__tb_PC__DOT__PC_IN__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_PC.sv", 
                                             40);
        vlSelfRef.__VdlySet__tb_PC__DOT__RST__v2 = 1U;
        vlSelfRef.__VdlySet__tb_PC__DOT__PC_EN__v2 = 1U;
        vlSelfRef.__VdlySet__tb_PC__DOT__PC_IN__v2 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_PC.sv", 
                                             44);
        vlSelfRef.__VdlySet__tb_PC__DOT__RST__v3 = 1U;
        vlSelfRef.__VdlySet__tb_PC__DOT__PC_EN__v3 = 1U;
        vlSelfRef.__VdlySet__tb_PC__DOT__PC_IN__v3 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_PC.sv", 
                                             48);
        vlSelfRef.__VdlySet__tb_PC__DOT__RST__v4 = 1U;
        vlSelfRef.__VdlySet__tb_PC__DOT__PC_EN__v4 = 1U;
        vlSelfRef.__VdlySet__tb_PC__DOT__PC_IN__v4 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                             nullptr, 
                                             "tb_PC.sv", 
                                             52);
        VL_FINISH_MT("tb_PC.sv", 52, "");
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_PC___024root___dump_triggers__act(Vtb_PC___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_PC___024root___eval_triggers__act(Vtb_PC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PC___024root___eval_triggers__act\n"); );
    Vtb_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (vlSelfRef.tb_PC__DOT__UUT__DOT__PC_OUT 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_PC__DOT__UUT__DOT__PC_OUT__0));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_PC__DOT__CLK) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_PC__DOT__CLK__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_PC__DOT__UUT__DOT__PC_OUT__0 
        = vlSelfRef.tb_PC__DOT__UUT__DOT__PC_OUT;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_PC__DOT__CLK__0 
        = vlSelfRef.tb_PC__DOT__CLK;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_PC___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_PC___024root___nba_sequent__TOP__0(Vtb_PC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PC___024root___nba_sequent__TOP__0\n"); );
    Vtb_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("pc_out = %x\n",0,32,vlSelfRef.tb_PC__DOT__UUT__DOT__PC_OUT);
    }
}
