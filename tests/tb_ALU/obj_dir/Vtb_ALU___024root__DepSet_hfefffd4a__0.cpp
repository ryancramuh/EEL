// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ALU.h for the primary calling header

#include "Vtb_ALU__pch.h"
#include "Vtb_ALU__Syms.h"
#include "Vtb_ALU___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_ALU___024root___eval_initial__TOP__Vtiming__0(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSymsp->TOP____024unit.__VmonitorNum = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             53);
        vlSelfRef.tb_ALU__DOT__OP_A = 0U;
        vlSelfRef.tb_ALU__DOT__OP_B = 0U;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             58);
        vlSelfRef.tb_ALU__DOT__OP_A = 0x10000000U;
        vlSelfRef.tb_ALU__DOT__OP_B = 0x10000000U;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             63);
        vlSelfRef.tb_ALU__DOT__OP_A = 0x10000000U;
        vlSelfRef.tb_ALU__DOT__OP_B = 0x10000000U;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 8U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             67);
        vlSelfRef.tb_ALU__DOT__OP_A = 0x1000ffffU;
        vlSelfRef.tb_ALU__DOT__OP_B = 0x10000000U;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 6U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             71);
        vlSelfRef.tb_ALU__DOT__OP_A = 0x1000ffffU;
        vlSelfRef.tb_ALU__DOT__OP_B = 0x10000000U;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 7U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             75);
        vlSelfRef.tb_ALU__DOT__OP_A = 0xf0f0f0f0U;
        vlSelfRef.tb_ALU__DOT__OP_B = 0xffffffffU;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 4U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             79);
        vlSelfRef.tb_ALU__DOT__OP_A = 4U;
        vlSelfRef.tb_ALU__DOT__OP_B = 2U;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 5U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             83);
        vlSelfRef.tb_ALU__DOT__OP_A = 4U;
        vlSelfRef.tb_ALU__DOT__OP_B = 2U;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             87);
        vlSelfRef.tb_ALU__DOT__OP_A = 0xfU;
        vlSelfRef.tb_ALU__DOT__OP_B = 1U;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 0xdU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             91);
        vlSelfRef.tb_ALU__DOT__OP_A = 0x80000001U;
        vlSelfRef.tb_ALU__DOT__OP_B = 0x80000010U;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             95);
        vlSelfRef.tb_ALU__DOT__OP_A = 0x11U;
        vlSelfRef.tb_ALU__DOT__OP_B = 0x10U;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             99);
        vlSelfRef.tb_ALU__DOT__OP_A = 1U;
        vlSelfRef.tb_ALU__DOT__OP_B = 0x10U;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             103);
        vlSelfRef.tb_ALU__DOT__OP_A = 0x11U;
        vlSelfRef.tb_ALU__DOT__OP_B = 0x10U;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 3U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             107);
        vlSelfRef.tb_ALU__DOT__OP_A = 0xffff0000U;
        vlSelfRef.tb_ALU__DOT__OP_B = 0xffffU;
        vlSelfRef.tb_ALU__DOT__ALU_FUN = 9U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_ALU.sv", 
                                             111);
        VL_FINISH_MT("tb_ALU.sv", 111, "");
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ALU___024root___dump_triggers__act(Vtb_ALU___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ALU___024root___eval_triggers__act(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___eval_triggers__act\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__ALU_FUN__0)));
    vlSelfRef.__VactTriggered.set(1U, (vlSelfRef.tb_ALU__DOT__OP_A 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__OP_A__0));
    vlSelfRef.__VactTriggered.set(2U, (vlSelfRef.tb_ALU__DOT__OP_B 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__OP_B__0));
    vlSelfRef.__VactTriggered.set(3U, (vlSelfRef.tb_ALU__DOT__UUT__DOT__RESULT 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__UUT__DOT__RESULT__0));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tb_ALU__DOT__UUT__DOT__ZERO) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__UUT__DOT__ZERO__0)));
    vlSelfRef.__VactTriggered.set(5U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__ALU_FUN__0 
        = vlSelfRef.tb_ALU__DOT__ALU_FUN;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__OP_A__0 
        = vlSelfRef.tb_ALU__DOT__OP_A;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__OP_B__0 
        = vlSelfRef.tb_ALU__DOT__OP_B;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__UUT__DOT__RESULT__0 
        = vlSelfRef.tb_ALU__DOT__UUT__DOT__RESULT;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ALU__DOT__UUT__DOT__ZERO__0 
        = vlSelfRef.tb_ALU__DOT__UUT__DOT__ZERO;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ALU___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_ALU___024root___nba_sequent__TOP__0(Vtb_ALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root___nba_sequent__TOP__0\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("OP_A =%x\tOP_B =%x\tALU_FUN = %x\n RESULT = %x\t ZERO = %x\n",0,
                     32,vlSelfRef.tb_ALU__DOT__OP_A,
                     32,vlSelfRef.tb_ALU__DOT__OP_B,
                     4,(IData)(vlSelfRef.tb_ALU__DOT__ALU_FUN),
                     32,vlSelfRef.tb_ALU__DOT__UUT__DOT__RESULT,
                     1,(IData)(vlSelfRef.tb_ALU__DOT__UUT__DOT__ZERO));
    }
}
