// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_MUX8T1.h for the primary calling header

#include "Vtb_MUX8T1__pch.h"
#include "Vtb_MUX8T1__Syms.h"
#include "Vtb_MUX8T1___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_MUX8T1___024root___dump_triggers__act(Vtb_MUX8T1___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_MUX8T1___024root___eval_triggers__act(Vtb_MUX8T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX8T1___024root___eval_triggers__act\n"); );
    Vtb_MUX8T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_MUX8T1___024root___dump_triggers__act(vlSelf);
    }
#endif
}
