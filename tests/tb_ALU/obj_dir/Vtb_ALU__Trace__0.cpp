// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_ALU__Syms.h"


void Vtb_ALU___024root__trace_chg_0_sub_0(Vtb_ALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_ALU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root__trace_chg_0\n"); );
    // Init
    Vtb_ALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ALU___024root*>(voidSelf);
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_ALU___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_ALU___024root__trace_chg_0_sub_0(Vtb_ALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root__trace_chg_0_sub_0\n"); );
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelfRef.tb_ALU__DOT__OP_A),32);
    bufp->chgIData(oldp+1,(vlSelfRef.tb_ALU__DOT__OP_B),32);
    bufp->chgCData(oldp+2,(vlSelfRef.tb_ALU__DOT__ALU_FUN),4);
    bufp->chgBit(oldp+3,(vlSelfRef.tb_ALU__DOT__UUT__DOT__ZERO));
    bufp->chgIData(oldp+4,(vlSelfRef.tb_ALU__DOT__UUT__DOT__RESULT),32);
}

void Vtb_ALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ALU___024root__trace_cleanup\n"); );
    // Init
    Vtb_ALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ALU___024root*>(voidSelf);
    Vtb_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
