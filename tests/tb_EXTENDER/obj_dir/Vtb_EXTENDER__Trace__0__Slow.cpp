// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_EXTENDER__Syms.h"


VL_ATTR_COLD void Vtb_EXTENDER___024root__trace_init_sub__TOP__0(Vtb_EXTENDER___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root__trace_init_sub__TOP__0\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_EXTENDER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"IMM_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"IMM_IN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"IR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1,0,"IMM_SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+8,0,"IMM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"U_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"S_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"B_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"J_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_EXTENDER___024root__trace_init_top(Vtb_EXTENDER___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root__trace_init_top\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_EXTENDER___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_EXTENDER___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_EXTENDER___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_EXTENDER___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_EXTENDER___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_EXTENDER___024root__trace_register(Vtb_EXTENDER___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root__trace_register\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_EXTENDER___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_EXTENDER___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_EXTENDER___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_EXTENDER___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_EXTENDER___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root__trace_const_0\n"); );
    // Init
    Vtb_EXTENDER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_EXTENDER___024root*>(voidSelf);
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_EXTENDER___024root__trace_full_0_sub_0(Vtb_EXTENDER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_EXTENDER___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root__trace_full_0\n"); );
    // Init
    Vtb_EXTENDER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_EXTENDER___024root*>(voidSelf);
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_EXTENDER___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_EXTENDER___024root__trace_full_0_sub_0(Vtb_EXTENDER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EXTENDER___024root__trace_full_0_sub_0\n"); );
    Vtb_EXTENDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.tb_EXTENDER__DOT__IMM_SEL),3);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_EXTENDER__DOT__IMM_IN),32);
    bufp->fullIData(oldp+3,((vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                             >> 7U)),25);
    bufp->fullIData(oldp+4,((0xfffff000U & vlSelfRef.tb_EXTENDER__DOT__IMM_IN)),32);
    bufp->fullIData(oldp+5,((((- (IData)((vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                          >> 0x1fU))) 
                              << 0xbU) | ((0x7e0U & 
                                           (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                >> 7U))))),32);
    bufp->fullIData(oldp+6,((((- (IData)((vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0x800U & 
                                           (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                            << 4U)) 
                                          | ((0x7e0U 
                                              & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                   >> 7U)))))),32);
    bufp->fullIData(oldp+7,((((- (IData)((vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                          >> 0x1fU))) 
                              << 0x14U) | (((0xff000U 
                                             & vlSelfRef.tb_EXTENDER__DOT__IMM_IN) 
                                            | (0x800U 
                                               & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                  >> 9U))) 
                                           | (0x7feU 
                                              & (vlSelfRef.tb_EXTENDER__DOT__IMM_IN 
                                                 >> 0x14U))))),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_EXTENDER__DOT__UUT__DOT__IMM),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_EXTENDER__DOT__UUT__DOT__I_TYPE),32);
}
