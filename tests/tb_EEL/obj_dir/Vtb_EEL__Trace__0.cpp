// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_EEL__Syms.h"


void Vtb_EEL___024root__trace_chg_0_sub_0(Vtb_EEL___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_EEL___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root__trace_chg_0\n"); );
    // Init
    Vtb_EEL___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_EEL___024root*>(voidSelf);
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_EEL___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_EEL___024root__trace_chg_0_sub_0(Vtb_EEL___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root__trace_chg_0_sub_0\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[8U] 
                                 << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[7U] 
                                              >> 0xbU))),32);
        bufp->chgIData(oldp+1,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[7U] 
                                 << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                              >> 0xbU))),32);
        bufp->chgIData(oldp+2,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                 << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                              >> 0xbU))),32);
        bufp->chgCData(oldp+3,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                      >> 9U))),2);
        bufp->chgIData(oldp+4,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                 << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[4U] 
                                              >> 9U))),32);
        bufp->chgIData(oldp+5,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[4U] 
                                 << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                              >> 9U))),32);
        bufp->chgCData(oldp+6,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                         >> 4U))),5);
        bufp->chgCData(oldp+7,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                          << 1U) | 
                                         (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                          >> 0x1fU)))),5);
        bufp->chgCData(oldp+8,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                         >> 0x1aU))),5);
        bufp->chgCData(oldp+9,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                      >> 0x18U))),2);
        bufp->chgBit(oldp+10,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                     >> 0x17U))));
        bufp->chgCData(oldp+11,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                       >> 0x14U))),3);
        bufp->chgIData(oldp+12,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                  << 0xcU) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[1U] 
                                              >> 0x14U))),32);
        bufp->chgCData(oldp+13,((0xfU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[1U] 
                                         >> 0x10U))),4);
        bufp->chgBit(oldp+14,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[1U] 
                                     >> 0xfU))));
        bufp->chgCData(oldp+15,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[1U] 
                                       >> 0xdU))),2);
        bufp->chgIData(oldp+16,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[1U] 
                                  << 0x13U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                               >> 0xdU))),32);
        bufp->chgBit(oldp+17,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+18,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+19,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                     >> 0xaU))));
        bufp->chgCData(oldp+20,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                       >> 8U))),2);
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                     >> 7U))));
        bufp->chgBit(oldp+22,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                     >> 6U))));
        bufp->chgCData(oldp+23,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                       >> 3U))),3);
        bufp->chgBit(oldp+24,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+25,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+26,((1U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U])));
        bufp->chgIData(oldp+27,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[8U] 
                                  << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[7U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+28,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[7U] 
                                  << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[6U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+29,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[6U] 
                                  << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                               >> 0xbU))),32);
        bufp->chgCData(oldp+30,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                       >> 9U))),2);
        bufp->chgIData(oldp+31,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                  << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+32,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                                  << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U] 
                                               >> 9U))),32);
        bufp->chgCData(oldp+33,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U] 
                                          >> 4U))),5);
        bufp->chgCData(oldp+34,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                           >> 0x1fU)))),5);
        bufp->chgCData(oldp+35,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                          >> 0x1aU))),5);
        bufp->chgCData(oldp+36,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                       >> 0x18U))),2);
        bufp->chgBit(oldp+37,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                     >> 0x17U))));
        bufp->chgCData(oldp+38,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                       >> 0x14U))),3);
        bufp->chgIData(oldp+39,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                  << 0xcU) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                                              >> 0x14U))),32);
        bufp->chgCData(oldp+40,((0xfU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                                         >> 0x10U))),4);
        bufp->chgBit(oldp+41,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                                     >> 0xfU))));
        bufp->chgCData(oldp+42,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                                       >> 0xdU))),2);
        bufp->chgIData(oldp+43,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                                  << 0x13U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                               >> 0xdU))),32);
        bufp->chgBit(oldp+44,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+45,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+46,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                     >> 0xaU))));
        bufp->chgCData(oldp+47,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                       >> 8U))),2);
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                     >> 7U))));
        bufp->chgBit(oldp+49,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                     >> 6U))));
        bufp->chgCData(oldp+50,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                       >> 3U))),3);
        bufp->chgBit(oldp+51,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+52,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+53,((1U & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U])));
        bufp->chgIData(oldp+54,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[8U] 
                                  << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[7U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+55,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[7U] 
                                  << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+56,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U] 
                                  << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                               >> 0xbU))),32);
        bufp->chgCData(oldp+57,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                       >> 9U))),2);
        bufp->chgIData(oldp+58,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                  << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[4U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+59,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[4U] 
                                  << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U] 
                                               >> 9U))),32);
        bufp->chgCData(oldp+60,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U] 
                                          >> 4U))),5);
        bufp->chgCData(oldp+61,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U] 
                                           >> 0x1fU)))),5);
        bufp->chgCData(oldp+62,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U] 
                                          >> 0x1aU))),5);
        bufp->chgCData(oldp+63,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U] 
                                       >> 0x18U))),2);
        bufp->chgBit(oldp+64,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U] 
                                     >> 0x17U))));
        bufp->chgCData(oldp+65,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U] 
                                       >> 0x14U))),3);
        bufp->chgIData(oldp+66,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U] 
                                  << 0xcU) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                                              >> 0x14U))),32);
        bufp->chgCData(oldp+67,((0xfU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                                         >> 0x10U))),4);
        bufp->chgBit(oldp+68,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                                     >> 0xfU))));
        bufp->chgCData(oldp+69,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                                       >> 0xdU))),2);
        bufp->chgIData(oldp+70,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                                  << 0x13U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                               >> 0xdU))),32);
        bufp->chgBit(oldp+71,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+73,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                     >> 0xaU))));
        bufp->chgCData(oldp+74,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                       >> 8U))),2);
        bufp->chgBit(oldp+75,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                     >> 7U))));
        bufp->chgBit(oldp+76,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                     >> 6U))));
        bufp->chgCData(oldp+77,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                       >> 3U))),3);
        bufp->chgBit(oldp+78,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+79,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+80,((1U & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])));
        bufp->chgIData(oldp+81,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[8U] 
                                  << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[7U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+82,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[7U] 
                                  << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[6U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+83,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[6U] 
                                  << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                               >> 0xbU))),32);
        bufp->chgCData(oldp+84,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                       >> 9U))),2);
        bufp->chgIData(oldp+85,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                  << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[4U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+86,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[4U] 
                                  << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[3U] 
                                               >> 9U))),32);
        bufp->chgCData(oldp+87,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[3U] 
                                          >> 4U))),5);
        bufp->chgCData(oldp+88,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[3U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                                           >> 0x1fU)))),5);
        bufp->chgCData(oldp+89,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                                          >> 0x1aU))),5);
        bufp->chgCData(oldp+90,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                                       >> 0x18U))),2);
        bufp->chgBit(oldp+91,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                                     >> 0x17U))));
        bufp->chgCData(oldp+92,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                                       >> 0x14U))),3);
        bufp->chgIData(oldp+93,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                                  << 0xcU) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                                              >> 0x14U))),32);
        bufp->chgCData(oldp+94,((0xfU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                                         >> 0x10U))),4);
        bufp->chgBit(oldp+95,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                                     >> 0xfU))));
        bufp->chgCData(oldp+96,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                                       >> 0xdU))),2);
        bufp->chgIData(oldp+97,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                                  << 0x13U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                               >> 0xdU))),32);
        bufp->chgBit(oldp+98,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+99,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+100,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                      >> 0xaU))));
        bufp->chgCData(oldp+101,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                        >> 8U))),2);
        bufp->chgBit(oldp+102,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+103,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                      >> 6U))));
        bufp->chgCData(oldp+104,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                        >> 3U))),3);
        bufp->chgBit(oldp+105,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+106,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+107,((1U & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U])));
        bufp->chgBit(oldp+108,(vlSelfRef.tb_EEL__DOT__UUT__DOT__stall));
        bufp->chgBit(oldp+109,(vlSelfRef.tb_EEL__DOT__UUT__DOT__flush));
        bufp->chgCData(oldp+110,(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs1),2);
        bufp->chgCData(oldp+111,(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs2),2);
        bufp->chgBit(oldp+112,(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_srca));
        bufp->chgBit(oldp+113,(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_srcb));
        bufp->chgBit(oldp+114,(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_din));
        bufp->chgIData(oldp+115,(((2U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs1))
                                   ? ((1U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs1))
                                       ? ((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                                           << 0x13U) 
                                          | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                             >> 0xdU))
                                       : ((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                                           << 0x13U) 
                                          | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                             >> 0xdU)))
                                   : ((1U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs1))
                                       ? vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result
                                       : vlSelfRef.tb_EEL__DOT__UUT__DOT__rs1))),32);
        bufp->chgIData(oldp+116,(((2U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs2))
                                   ? ((1U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs2))
                                       ? ((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                                           << 0x13U) 
                                          | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                             >> 0xdU))
                                       : ((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                                           << 0x13U) 
                                          | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                             >> 0xdU)))
                                   : ((1U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs2))
                                       ? vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result
                                       : vlSelfRef.tb_EEL__DOT__UUT__DOT__rs1))),32);
        bufp->chgIData(oldp+117,(vlSelfRef.tb_EEL__DOT__UUT__DOT__srca_fwd),32);
        bufp->chgIData(oldp+118,(((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_srca)
                                   ? ((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_srca)
                                       ? vlSelfRef.tb_EEL__DOT__UUT__DOT__w_data
                                       : ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                                           << 0x17U) 
                                          | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U] 
                                             >> 9U)))
                                   : ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                                       << 0x17U) | 
                                      (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U] 
                                       >> 9U)))),32);
        bufp->chgIData(oldp+119,(vlSelfRef.tb_EEL__DOT__UUT__DOT__din_fwd),32);
        bufp->chgIData(oldp+120,(((IData)(4U) + vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out)),32);
        bufp->chgIData(oldp+121,(vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out),32);
        bufp->chgIData(oldp+122,(vlSelfRef.tb_EEL__DOT__UUT__DOT__ir),32);
        bufp->chgIData(oldp+123,(vlSelfRef.tb_EEL__DOT__UUT__DOT__rs1),32);
        bufp->chgIData(oldp+124,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32
                                 [(0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                             << 1U) 
                                            | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                               >> 0x1fU)))]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.tb_EEL__DOT__UUT__DOT__w_data),32);
        bufp->chgCData(oldp+126,(vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_sel),2);
        bufp->chgCData(oldp+127,(vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel),2);
        bufp->chgBit(oldp+128,(vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write));
        bufp->chgBit(oldp+129,(vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write));
        bufp->chgBit(oldp+130,(vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_read));
        bufp->chgCData(oldp+131,(vlSelfRef.tb_EEL__DOT__UUT__DOT__byte_sel),2);
        bufp->chgBit(oldp+132,(vlSelfRef.tb_EEL__DOT__UUT__DOT__sign));
        bufp->chgBit(oldp+133,(vlSelfRef.tb_EEL__DOT__UUT__DOT__branch));
        bufp->chgCData(oldp+134,(vlSelfRef.tb_EEL__DOT__UUT__DOT__br_type),3);
        bufp->chgBit(oldp+135,(vlSelfRef.tb_EEL__DOT__UUT__DOT__jump));
        bufp->chgCData(oldp+136,(vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_fun),4);
        bufp->chgBit(oldp+137,(vlSelfRef.tb_EEL__DOT__UUT__DOT__src_a_sel));
        bufp->chgCData(oldp+138,(vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel),2);
        bufp->chgCData(oldp+139,(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel),3);
        bufp->chgIData(oldp+140,(((4U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                   ? ((2U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                       ? vlSelfRef.tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE
                                       : ((1U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                           ? vlSelfRef.tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                              >> 0xaU)))) 
                                               << 0x14U) 
                                              | (((0xff000U 
                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                      >> 0xbU)) 
                                                  | (0x800U 
                                                     & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                        >> 0x14U))) 
                                                 | (0x7feU 
                                                    & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                       << 1U))))))
                                   : ((2U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                       ? ((1U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                           ? (0xfffff000U 
                                              & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                  << 0x15U) 
                                                 | (0x1ff000U 
                                                    & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                       >> 0xbU))))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                              >> 0xaU)))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                     >> 7U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                        << 1U)) 
                                                    | (0x1eU 
                                                       & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                          >> 0x12U))))))
                                       : ((1U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                              >> 0xaU)))) 
                                               << 0xbU) 
                                              | ((0x7e0U 
                                                  & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                     << 1U)) 
                                                 | (0x1fU 
                                                    & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                       >> 0x12U))))
                                           : vlSelfRef.tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE)))),32);
        bufp->chgIData(oldp+141,(vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a),32);
        bufp->chgIData(oldp+142,(vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b),32);
        bufp->chgIData(oldp+143,(vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result),32);
        bufp->chgBit(oldp+144,((0U == vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result)));
        bufp->chgIData(oldp+145,(vlSelfRef.tb_EEL__DOT__UUT__DOT__dout),32);
        bufp->chgCData(oldp+146,((0x7fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                           >> 0xbU))),7);
        bufp->chgCData(oldp+147,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                        >> 0x17U))),3);
        bufp->chgBit(oldp+148,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                      >> 9U))));
        bufp->chgSData(oldp+149,((0x3fffU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                             >> 0xfU))),14);
        bufp->chgIData(oldp+150,(((0U == (3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                >> 8U)))
                                   ? ((0x80U & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])
                                       ? (0xffffff00U 
                                          | (0xffU 
                                             & vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                             [(0x3fffU 
                                               & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                    << 0x11U) 
                                                   | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                      >> 0xfU)) 
                                                  - (IData)(0x2000U)))]))
                                       : (0xffU & vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                          [(0x3fffU 
                                            & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                 << 0x11U) 
                                                | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                   >> 0xfU)) 
                                               - (IData)(0x2000U)))]))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                               >> 8U)))
                                       ? ((0x80U & 
                                           vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])
                                           ? (0xffff0000U 
                                              | (0xffffU 
                                                 & vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                                 [(0x3fffU 
                                                   & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                        << 0x11U) 
                                                       | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                          >> 0xfU)) 
                                                      - (IData)(0x2000U)))]))
                                           : (0xffffU 
                                              & vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                              [(0x3fffU 
                                                & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                     << 0x11U) 
                                                    | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                       >> 0xfU)) 
                                                   - (IData)(0x2000U)))]))
                                       : ((2U == (3U 
                                                  & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                     >> 8U)))
                                           ? vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                          [(0x3fffU 
                                            & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                 << 0x11U) 
                                                | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                   >> 0xfU)) 
                                               - (IData)(0x2000U)))]
                                           : vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                          [(0x3fffU 
                                            & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                 << 0x11U) 
                                                | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                   >> 0xfU)) 
                                               - (IData)(0x2000U)))])))),32);
        bufp->chgIData(oldp+151,(((0U == (3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                >> 8U)))
                                   ? ((0x80U & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])
                                       ? (0xffffff00U 
                                          | (0xffU 
                                             & vlSelfRef.tb_EEL__DOT__UUT__DOT__din_fwd))
                                       : (0xffU & vlSelfRef.tb_EEL__DOT__UUT__DOT__din_fwd))
                                   : ((1U == (3U & 
                                              (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                               >> 8U)))
                                       ? ((0x80U & 
                                           vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])
                                           ? (0xffff0000U 
                                              | (0xffffU 
                                                 & vlSelfRef.tb_EEL__DOT__UUT__DOT__din_fwd))
                                           : (0xffffU 
                                              & vlSelfRef.tb_EEL__DOT__UUT__DOT__din_fwd))
                                       : vlSelfRef.tb_EEL__DOT__UUT__DOT__din_fwd))),32);
        bufp->chgSData(oldp+152,((0x3fffU & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                               << 0x11U) 
                                              | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                 >> 0xfU)) 
                                             - (IData)(0x2000U)))),14);
        bufp->chgCData(oldp+153,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                           >> 0x1aU))),5);
        bufp->chgCData(oldp+154,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                            << 1U) 
                                           | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                              >> 0x1fU)))),5);
        bufp->chgCData(oldp+155,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                           >> 0x12U))),5);
        bufp->chgCData(oldp+156,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                           >> 0x1aU))),5);
        bufp->chgCData(oldp+157,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[6U] 
                                            << 1U) 
                                           | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                              >> 0x1fU)))),5);
        bufp->chgCData(oldp+158,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                           >> 0x12U))),5);
        bufp->chgCData(oldp+159,((0x7fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                           >> 0xbU))),7);
        bufp->chgCData(oldp+160,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                           >> 0x1aU))),5);
        bufp->chgCData(oldp+161,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U] 
                                            << 1U) 
                                           | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                              >> 0x1fU)))),5);
        bufp->chgCData(oldp+162,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                           >> 0x12U))),5);
        bufp->chgCData(oldp+163,((0x7fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                           >> 0xbU))),7);
        bufp->chgCData(oldp+164,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                           >> 0x1aU))),5);
        bufp->chgCData(oldp+165,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[6U] 
                                            << 1U) 
                                           | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                              >> 0x1fU)))),5);
        bufp->chgCData(oldp+166,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                           >> 0x12U))),5);
        bufp->chgCData(oldp+167,((0x7fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                           >> 0xbU))),7);
        bufp->chgBit(oldp+168,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__load_use_stall));
        bufp->chgBit(oldp+169,((0x67U == (0x7fU & (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xbU)))));
        bufp->chgBit(oldp+170,((0x6fU == (0x7fU & (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xbU)))));
        bufp->chgBit(oldp+171,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__ed_fwd1));
        bufp->chgBit(oldp+172,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__ed_fwd2));
        bufp->chgBit(oldp+173,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__md_fwd1));
        bufp->chgBit(oldp+174,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__md_fwd2));
        bufp->chgBit(oldp+175,((((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                           >> 0x1aU)) 
                                 == (0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                              >> 0x12U))) 
                                & ((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT____VdfgRegularize_hb9c15412_0_14) 
                                   & ((~ (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__ed_fwd1)) 
                                      & ((0x6fU != 
                                          (0x7fU & 
                                           (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                            >> 0xbU))) 
                                         & ((~ (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__md_fwd1)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                                   >> 0x12U))))))))));
        bufp->chgBit(oldp+176,((((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                            << 1U) 
                                           | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                              >> 0x1fU))) 
                                 == (0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                              >> 0x12U))) 
                                & ((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT____VdfgRegularize_hb9c15412_0_14) 
                                   & ((~ (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__ed_fwd2)) 
                                      & ((0x6fU != 
                                          (0x7fU & 
                                           (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                            >> 0xbU))) 
                                         & ((~ (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__md_fwd2)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                                   >> 0x12U))))))))));
        bufp->chgBit(oldp+177,((IData)((((0x11800U 
                                          == (0x3f800U 
                                              & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U])) 
                                         & (0x1800U 
                                            == (0x3f800U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U]))) 
                                        & ((0x1fU & 
                                            ((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U] 
                                              << 1U) 
                                             | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                                >> 0x1fU))) 
                                           == (0x1fU 
                                               & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                                  >> 0x12U)))))));
        bufp->chgBit(oldp+178,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__we_load_fwd1));
        bufp->chgBit(oldp+179,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__we_load_fwd2));
        bufp->chgIData(oldp+180,((0x1ffffffU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                 << 0xeU) 
                                                | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0x12U)))),25);
        bufp->chgIData(oldp+181,((0xfffff000U & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                  << 0x15U) 
                                                 | (0x1ff000U 
                                                    & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                       >> 0xbU))))),32);
        bufp->chgIData(oldp+182,(vlSelfRef.tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE),32);
        bufp->chgIData(oldp+183,((((- (IData)((1U & 
                                               (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                >> 0xaU)))) 
                                   << 0xbU) | ((0x7e0U 
                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                   << 1U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                     >> 0x12U))))),32);
        bufp->chgIData(oldp+184,((((- (IData)((1U & 
                                               (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                >> 0xaU)))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 7U)) 
                                               | ((0x7e0U 
                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                      << 1U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                        >> 0x12U)))))),32);
        bufp->chgIData(oldp+185,((((- (IData)((1U & 
                                               (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                >> 0xaU)))) 
                                   << 0x14U) | (((0xff000U 
                                                  & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                     >> 0xbU)) 
                                                 | (0x800U 
                                                    & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                       >> 0x14U))) 
                                                | (0x7feU 
                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                      << 1U))))),32);
        bufp->chgBit(oldp+186,((1U & (~ (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__stall)))));
        bufp->chgSData(oldp+187,((0x3fffU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out 
                                             >> 2U))),14);
        bufp->chgIData(oldp+188,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[0]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[1]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[2]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[3]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[4]),32);
        bufp->chgIData(oldp+193,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[5]),32);
        bufp->chgIData(oldp+194,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[6]),32);
        bufp->chgIData(oldp+195,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[7]),32);
        bufp->chgIData(oldp+196,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[8]),32);
        bufp->chgIData(oldp+197,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[9]),32);
        bufp->chgIData(oldp+198,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[10]),32);
        bufp->chgIData(oldp+199,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[11]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[12]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[13]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[14]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[15]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[16]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[17]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[18]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[19]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[20]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[21]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[22]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[23]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[24]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[25]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[26]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[27]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[28]),32);
        bufp->chgIData(oldp+217,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[29]),32);
        bufp->chgIData(oldp+218,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[30]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[31]),32);
    }
    bufp->chgBit(oldp+220,(vlSelfRef.tb_EEL__DOT__CLK));
    bufp->chgBit(oldp+221,(vlSelfRef.tb_EEL__DOT__RST));
}

void Vtb_EEL___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root__trace_cleanup\n"); );
    // Init
    Vtb_EEL___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_EEL___024root*>(voidSelf);
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
