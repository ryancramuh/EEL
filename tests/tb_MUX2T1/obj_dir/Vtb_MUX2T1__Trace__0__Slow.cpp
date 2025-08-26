// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_MUX2T1__Syms.h"


VL_ATTR_COLD void Vtb_MUX2T1___024root__trace_init_sub__TOP__0(Vtb_MUX2T1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX2T1___024root__trace_init_sub__TOP__0\n"); );
    Vtb_MUX2T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_MUX2T1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"D0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"D1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_MUX2T1___024root__trace_init_top(Vtb_MUX2T1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX2T1___024root__trace_init_top\n"); );
    Vtb_MUX2T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_MUX2T1___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_MUX2T1___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_MUX2T1___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_MUX2T1___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_MUX2T1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_MUX2T1___024root__trace_register(Vtb_MUX2T1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX2T1___024root__trace_register\n"); );
    Vtb_MUX2T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_MUX2T1___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_MUX2T1___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_MUX2T1___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_MUX2T1___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_MUX2T1___024root__trace_const_0_sub_0(Vtb_MUX2T1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_MUX2T1___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX2T1___024root__trace_const_0\n"); );
    // Init
    Vtb_MUX2T1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_MUX2T1___024root*>(voidSelf);
    Vtb_MUX2T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_MUX2T1___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_MUX2T1___024root__trace_const_0_sub_0(Vtb_MUX2T1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX2T1___024root__trace_const_0_sub_0\n"); );
    Vtb_MUX2T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+5,(0x20U),32);
}

VL_ATTR_COLD void Vtb_MUX2T1___024root__trace_full_0_sub_0(Vtb_MUX2T1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_MUX2T1___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX2T1___024root__trace_full_0\n"); );
    // Init
    Vtb_MUX2T1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_MUX2T1___024root*>(voidSelf);
    Vtb_MUX2T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_MUX2T1___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_MUX2T1___024root__trace_full_0_sub_0(Vtb_MUX2T1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_MUX2T1___024root__trace_full_0_sub_0\n"); );
    Vtb_MUX2T1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tb_MUX2T1__DOT__D0),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_MUX2T1__DOT__D1),32);
    bufp->fullBit(oldp+3,(vlSelfRef.tb_MUX2T1__DOT__SEL));
    bufp->fullIData(oldp+4,(((IData)(vlSelfRef.tb_MUX2T1__DOT__SEL)
                              ? ((IData)(vlSelfRef.tb_MUX2T1__DOT__SEL)
                                  ? vlSelfRef.tb_MUX2T1__DOT__D1
                                  : vlSelfRef.tb_MUX2T1__DOT__D0)
                              : vlSelfRef.tb_MUX2T1__DOT__D0)),32);
}
