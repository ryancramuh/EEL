// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_DMEM__Syms.h"


VL_ATTR_COLD void Vtb_DMEM___024root__trace_init_sub__TOP__0(Vtb_DMEM___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root__trace_init_sub__TOP__0\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_DMEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"RDEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"WEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"SIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"BYTE_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+6,0,"DATA_IN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"RDEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"BYTE_SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,0,"SIGN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+6,0,"DATA_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"DATA_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_DMEM___024root__trace_init_top(Vtb_DMEM___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root__trace_init_top\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_DMEM___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_DMEM___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_DMEM___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_DMEM___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_DMEM___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_DMEM___024root__trace_register(Vtb_DMEM___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root__trace_register\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_DMEM___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_DMEM___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_DMEM___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_DMEM___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_DMEM___024root__trace_const_0_sub_0(Vtb_DMEM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_DMEM___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root__trace_const_0\n"); );
    // Init
    Vtb_DMEM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_DMEM___024root*>(voidSelf);
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_DMEM___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_DMEM___024root__trace_const_0_sub_0(Vtb_DMEM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root__trace_const_0_sub_0\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+11,(0xeU),32);
}

VL_ATTR_COLD void Vtb_DMEM___024root__trace_full_0_sub_0(Vtb_DMEM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_DMEM___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root__trace_full_0\n"); );
    // Init
    Vtb_DMEM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_DMEM___024root*>(voidSelf);
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_DMEM___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_DMEM___024root__trace_full_0_sub_0(Vtb_DMEM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_DMEM___024root__trace_full_0_sub_0\n"); );
    Vtb_DMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_DMEM__DOT__RDEN));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_DMEM__DOT__WEN));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_DMEM__DOT__SIGN));
    bufp->fullCData(oldp+4,(vlSelfRef.tb_DMEM__DOT__BYTE_SEL),2);
    bufp->fullSData(oldp+5,(vlSelfRef.tb_DMEM__DOT__ADDR),14);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_DMEM__DOT__DATA_IN),32);
    bufp->fullIData(oldp+7,(((0U == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                              ? ((IData)(vlSelfRef.tb_DMEM__DOT__SIGN)
                                  ? (0xffffff00U | 
                                     (0xffU & vlSelfRef.tb_DMEM__DOT__DATA_IN))
                                  : (0xffU & vlSelfRef.tb_DMEM__DOT__DATA_IN))
                              : ((1U == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                                  ? ((IData)(vlSelfRef.tb_DMEM__DOT__SIGN)
                                      ? (0xffff0000U 
                                         | (0xffffU 
                                            & vlSelfRef.tb_DMEM__DOT__DATA_IN))
                                      : (0xffffU & vlSelfRef.tb_DMEM__DOT__DATA_IN))
                                  : vlSelfRef.tb_DMEM__DOT__DATA_IN))),32);
    bufp->fullBit(oldp+8,(vlSelfRef.tb_DMEM__DOT__CLK));
    bufp->fullIData(oldp+9,(vlSelfRef.tb_DMEM__DOT__UUT__DOT__DATA_OUT),32);
    bufp->fullIData(oldp+10,(((0U == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                               ? ((IData)(vlSelfRef.tb_DMEM__DOT__SIGN)
                                   ? (0xffffff00U | 
                                      (0xffU & vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                       [vlSelfRef.tb_DMEM__DOT__ADDR]))
                                   : (0xffU & vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                      [vlSelfRef.tb_DMEM__DOT__ADDR]))
                               : ((1U == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                                   ? ((IData)(vlSelfRef.tb_DMEM__DOT__SIGN)
                                       ? (0xffff0000U 
                                          | (0xffffU 
                                             & vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                             [vlSelfRef.tb_DMEM__DOT__ADDR]))
                                       : (0xffffU & 
                                          vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                          [vlSelfRef.tb_DMEM__DOT__ADDR]))
                                   : ((2U == (IData)(vlSelfRef.tb_DMEM__DOT__BYTE_SEL))
                                       ? vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                      [vlSelfRef.tb_DMEM__DOT__ADDR]
                                       : vlSelfRef.tb_DMEM__DOT__UUT__DOT__ram_64kb
                                      [vlSelfRef.tb_DMEM__DOT__ADDR])))),32);
}
