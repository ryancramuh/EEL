// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_PC.h for the primary calling header

#include "Vtb_PC__pch.h"
#include "Vtb_PC__Syms.h"
#include "Vtb_PC___024root.h"

VL_ATTR_COLD void Vtb_PC___024root___eval_initial__TOP(Vtb_PC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PC___024root___eval_initial__TOP\n"); );
    Vtb_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x625f5043U;
    __Vtemp_1[2U] = 0x74U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
