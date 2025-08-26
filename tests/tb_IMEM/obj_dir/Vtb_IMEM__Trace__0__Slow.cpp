// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_IMEM__Syms.h"


VL_ATTR_COLD void Vtb_IMEM___024root__trace_init_sub__TOP__0(Vtb_IMEM___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root__trace_init_sub__TOP__0\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_IMEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"RDEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"PC_OUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"RDEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+5,0,"MEM_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_IMEM___024root__trace_init_top(Vtb_IMEM___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root__trace_init_top\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_IMEM___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_IMEM___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_IMEM___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_IMEM___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_IMEM___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_IMEM___024root__trace_register(Vtb_IMEM___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root__trace_register\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_IMEM___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_IMEM___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_IMEM___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_IMEM___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_IMEM___024root__trace_const_0_sub_0(Vtb_IMEM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_IMEM___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root__trace_const_0\n"); );
    // Init
    Vtb_IMEM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_IMEM___024root*>(voidSelf);
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_IMEM___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_IMEM___024root__trace_const_0_sub_0(Vtb_IMEM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root__trace_const_0_sub_0\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+6,(0xeU),32);
}

VL_ATTR_COLD void Vtb_IMEM___024root__trace_full_0_sub_0(Vtb_IMEM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_IMEM___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root__trace_full_0\n"); );
    // Init
    Vtb_IMEM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_IMEM___024root*>(voidSelf);
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_IMEM___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_IMEM___024root__trace_full_0_sub_0(Vtb_IMEM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_IMEM___024root__trace_full_0_sub_0\n"); );
    Vtb_IMEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_IMEM__DOT__RDEN));
    bufp->fullIData(oldp+2,(vlSelfRef.tb_IMEM__DOT__PC_OUT),32);
    bufp->fullSData(oldp+3,((0x3fffU & (vlSelfRef.tb_IMEM__DOT__PC_OUT 
                                        >> 2U))),14);
    bufp->fullBit(oldp+4,(vlSelfRef.tb_IMEM__DOT__CLK));
    bufp->fullIData(oldp+5,(vlSelfRef.tb_IMEM__DOT__UUT__DOT__MEM_OUT),32);
}
