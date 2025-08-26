// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_IMEM__Syms.h"


void Vtb_IMEM___024root__trace_chg_0_sub_0(Vtb_IMEM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_IMEM___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root__trace_chg_0\n"); );
    // Init
    Vtb_IMEM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_IMEM___024root*>(voidSelf);
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_IMEM___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_IMEM___024root__trace_chg_0_sub_0(Vtb_IMEM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root__trace_chg_0_sub_0\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_IMEM__DOT__RDEN));
        bufp->chgIData(oldp+1,(vlSelfRef.tb_IMEM__DOT__PC_OUT),32);
        bufp->chgSData(oldp+2,((0x3fffU & (vlSelfRef.tb_IMEM__DOT__PC_OUT 
                                           >> 2U))),14);
    }
    bufp->chgBit(oldp+3,(vlSelfRef.tb_IMEM__DOT__CLK));
    bufp->chgIData(oldp+4,(vlSelfRef.tb_IMEM__DOT__UUT__DOT__MEM_OUT),32);
}

void Vtb_IMEM___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root__trace_cleanup\n"); );
    // Init
    Vtb_IMEM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_IMEM___024root*>(voidSelf);
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
