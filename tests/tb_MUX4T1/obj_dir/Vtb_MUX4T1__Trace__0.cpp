// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_MUX4T1__Syms.h"


void Vtb_MUX4T1___024root__trace_chg_0_sub_0(Vtb_MUX4T1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_MUX4T1___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root__trace_chg_0\n"); );
    // Init
    Vtb_MUX4T1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_MUX4T1___024root*>(voidSelf);
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_MUX4T1___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_MUX4T1___024root__trace_chg_0_sub_0(Vtb_MUX4T1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root__trace_chg_0_sub_0\n"); );
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_MUX4T1__DOT__D0),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_MUX4T1__DOT__D1),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_MUX4T1__DOT__D2),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_MUX4T1__DOT__D3),32);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_MUX4T1__DOT__SEL),2);
        bufp->chgIData(oldp+5,(((2U & (IData)(vlSelfRef.tb_MUX4T1__DOT__SEL))
                                 ? ((1U & (IData)(vlSelfRef.tb_MUX4T1__DOT__SEL))
                                     ? vlSelfRef.tb_MUX4T1__DOT__D3
                                     : vlSelfRef.tb_MUX4T1__DOT__D2)
                                 : ((1U & (IData)(vlSelfRef.tb_MUX4T1__DOT__SEL))
                                     ? vlSelfRef.tb_MUX4T1__DOT__D1
                                     : vlSelfRef.tb_MUX4T1__DOT__D0))),32);
    }
}

void Vtb_MUX4T1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX4T1___024root__trace_cleanup\n"); );
    // Init
    Vtb_MUX4T1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_MUX4T1___024root*>(voidSelf);
    Vtb_MUX4T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
