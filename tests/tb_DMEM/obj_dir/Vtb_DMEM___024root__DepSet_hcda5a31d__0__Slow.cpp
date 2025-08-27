// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_DMEM.h for the primary calling header

#include "Vtb_DMEM__pch.h"
#include "Vtb_DMEM__Syms.h"
#include "Vtb_DMEM___024root.h"

VL_ATTR_COLD void Vtb_DMEM___024root___eval_initial__TOP(Vtb_DMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root___eval_initial__TOP\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x444d454dU;
    __Vtemp_1[2U] = 0x74625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
