// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_REG_FILE.h for the primary calling header

#include "Vtb_REG_FILE__pch.h"
#include "Vtb_REG_FILE__Syms.h"
#include "Vtb_REG_FILE___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_REG_FILE___024root___dump_triggers__act(Vtb_REG_FILE___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_REG_FILE___024root___eval_triggers__act(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval_triggers__act\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_REG_FILE__DOT__CLK) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_REG_FILE__DOT__CLK__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_REG_FILE__DOT__CLK__0 
        = vlSelfRef.tb_REG_FILE__DOT__CLK;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_REG_FILE___024root___dump_triggers__act(vlSelf);
    }
#endif
}
