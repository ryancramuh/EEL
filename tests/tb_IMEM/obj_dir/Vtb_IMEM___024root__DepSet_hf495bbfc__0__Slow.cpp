// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_IMEM.h for the primary calling header

#include "Vtb_IMEM__pch.h"
#include "Vtb_IMEM__Syms.h"
#include "Vtb_IMEM___024root.h"

VL_ATTR_COLD void Vtb_IMEM___024root___eval_initial__TOP(Vtb_IMEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root___eval_initial__TOP\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x494d454dU;
    __Vtemp_1[2U] = 0x74625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    __Vtemp_2[0U] = 0x2e6d656dU;
    __Vtemp_2[1U] = 0x6772616dU;
    __Vtemp_2[2U] = 0x5f70726fU;
    __Vtemp_2[3U] = 0x65656cU;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelfRef.tb_IMEM__DOT__UUT__DOT__rom_64kb)
                 , 0, ~0ULL);
}
