// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_REG_FILE.h for the primary calling header

#include "Vtb_REG_FILE__pch.h"
#include "Vtb_REG_FILE__Syms.h"
#include "Vtb_REG_FILE___024root.h"

VL_ATTR_COLD void Vtb_REG_FILE___024root___eval_initial__TOP(Vtb_REG_FILE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root___eval_initial__TOP\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x46494c45U;
    __Vtemp_1[2U] = 0x5245475fU;
    __Vtemp_1[3U] = 0x74625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
