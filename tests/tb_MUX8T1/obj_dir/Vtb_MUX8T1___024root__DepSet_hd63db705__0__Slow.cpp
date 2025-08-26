// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_MUX8T1.h for the primary calling header

#include "Vtb_MUX8T1__pch.h"
#include "Vtb_MUX8T1__Syms.h"
#include "Vtb_MUX8T1___024root.h"

VL_ATTR_COLD void Vtb_MUX8T1___024root___eval_initial__TOP(Vtb_MUX8T1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX8T1___024root___eval_initial__TOP\n"); );
    Vtb_MUX8T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x58385431U;
    __Vtemp_1[2U] = 0x625f4d55U;
    __Vtemp_1[3U] = 0x74U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_MUX8T1__DOT__D0 = 0U;
    vlSelfRef.tb_MUX8T1__DOT__D1 = 0U;
    vlSelfRef.tb_MUX8T1__DOT__D2 = 0U;
    vlSelfRef.tb_MUX8T1__DOT__D3 = 0U;
    vlSelfRef.tb_MUX8T1__DOT__D4 = 0U;
    vlSelfRef.tb_MUX8T1__DOT__D5 = 0U;
    vlSelfRef.tb_MUX8T1__DOT__D6 = 0U;
    vlSelfRef.tb_MUX8T1__DOT__D7 = 0U;
    vlSelfRef.tb_MUX8T1__DOT__SEL = 0U;
}
