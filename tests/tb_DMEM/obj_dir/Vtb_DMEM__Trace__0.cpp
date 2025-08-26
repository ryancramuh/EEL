// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_DMEM__Syms.h"


void Vtb_DMEM___024root__trace_chg_0_sub_0(Vtb_DMEM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_DMEM___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root__trace_chg_0\n"); );
    // Init
    Vtb_DMEM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_DMEM___024root*>(voidSelf);
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_DMEM___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_DMEM___024root__trace_chg_0_sub_0(Vtb_DMEM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root__trace_chg_0_sub_0\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_DMEM__DOT__RDEN));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_DMEM__DOT__WEN));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_DMEM__DOT__SIGN));
        bufp->chgCData(oldp+3,(vlSelfRef.tb_DMEM__DOT__BYTE_SEL),2);
        bufp->chgSData(oldp+4,(vlSelfRef.tb_DMEM__DOT__ADDR),14);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_DMEM__DOT__DATA_IN),32);
        bufp->chgIData(oldp+6,(((0U == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                                 ? ((IData)(vlSelfRef.tb_DMEM__DOT__SIGN)
                                     ? (0xffffff00U 
                                        | (0xffU & vlSelfRef.tb_DMEM__DOT__DATA_IN))
                                     : (0xffU & vlSelfRef.tb_DMEM__DOT__DATA_IN))
                                 : ((1U == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                                     ? ((IData)(vlSelfRef.tb_DMEM__DOT__SIGN)
                                         ? (0xffff0000U 
                                            | (0xffffU 
                                               & vlSelfRef.tb_DMEM__DOT__DATA_IN))
                                         : (0xffffU 
                                            & vlSelfRef.tb_DMEM__DOT__DATA_IN))
                                     : vlSelfRef.tb_DMEM__DOT__DATA_IN))),32);
    }
    bufp->chgBit(oldp+7,(vlSelfRef.tb_DMEM__DOT__CLK));
    bufp->chgIData(oldp+8,(vlSelfRef.tb_DMEM__DOT__UUT__DOT__DATA_OUT),32);
    bufp->chgIData(oldp+9,(((0U == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                             ? ((IData)(vlSelfRef.tb_DMEM__DOT__SIGN)
                                 ? (0xffffff00U | (0xffU 
                                                   & vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                                   [vlSelfRef.tb_DMEM__DOT__ADDR]))
                                 : (0xffU & vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                    [vlSelfRef.tb_DMEM__DOT__ADDR]))
                             : ((1U == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                                 ? ((IData)(vlSelfRef.tb_DMEM__DOT__SIGN)
                                     ? (0xffff0000U 
                                        | (0xffffU 
                                           & vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                           [vlSelfRef.tb_DMEM__DOT__ADDR]))
                                     : (0xffffU & vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                        [vlSelfRef.tb_DMEM__DOT__ADDR]))
                                 : ((2U == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                                     ? vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                    [vlSelfRef.tb_DMEM__DOT__ADDR]
                                     : vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                    [vlSelfRef.tb_DMEM__DOT__ADDR])))),32);
}

void Vtb_DMEM___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root__trace_cleanup\n"); );
    // Init
    Vtb_DMEM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_DMEM___024root*>(voidSelf);
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
