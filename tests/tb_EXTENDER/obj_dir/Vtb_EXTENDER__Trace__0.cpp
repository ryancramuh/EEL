// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_EXTENDER__Syms.h"


void Vtb_EXTENDER___024root__trace_chg_0_sub_0(Vtb_EXTENDER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_EXTENDER___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root__trace_chg_0\n"); );
    // Init
    Vtb_EXTENDER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_EXTENDER___024root*>(voidSelf);
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_EXTENDER___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_EXTENDER___024root__trace_chg_0_sub_0(Vtb_EXTENDER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root__trace_chg_0_sub_0\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_EXTENDER__DOT__IMM_SEL),3);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_EXTENDER__DOT__IMM_IN),32);
        bufp->chgIData(oldp+2,((vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                >> 7U)),25);
        bufp->chgIData(oldp+3,((0xfffff000U & vlSelfRef.tb_EXTENDER__DOT__IMM_IN)),32);
        bufp->chgIData(oldp+4,((((- (IData)((vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                             >> 0x1fU))) 
                                 << 0xbU) | ((0x7e0U 
                                              & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                   >> 7U))))),32);
        bufp->chgIData(oldp+5,((((- (IData)((vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                      >> 7U)))))),32);
        bufp->chgIData(oldp+6,((((- (IData)((vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                             >> 0x1fU))) 
                                 << 0x14U) | (((0xff000U 
                                                & vlSelfRef.tb_EXTENDER__DOT__IMM_IN) 
                                               | (0x800U 
                                                  & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                     >> 9U))) 
                                              | (0x7feU 
                                                 & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                    >> 0x14U))))),32);
    }
    bufp->chgIData(oldp+7,(vlSelfRef.tb_EXTENDER__DOT__UUT__DOT__IMM),32);
    bufp->chgIData(oldp+8,(vlSelfRef.tb_EXTENDER__DOT__UUT__DOT__I_TYPE),32);
}

void Vtb_EXTENDER___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root__trace_cleanup\n"); );
    // Init
    Vtb_EXTENDER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_EXTENDER___024root*>(voidSelf);
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
