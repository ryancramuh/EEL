// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_REG_FILE__Syms.h"


VL_ATTR_COLD void Vtb_REG_FILE___024root__trace_init_sub__TOP__0(Vtb_REG_FILE___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root__trace_init_sub__TOP__0\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_REG_FILE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"ADDR1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"ADDR2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"W_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"W_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"W_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"W_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"W_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"W_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"RS1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"RS2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("reg_32x32", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_REG_FILE___024root__trace_init_top(Vtb_REG_FILE___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root__trace_init_top\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_REG_FILE___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_REG_FILE___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_REG_FILE___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_REG_FILE___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_REG_FILE___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_REG_FILE___024root__trace_register(Vtb_REG_FILE___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root__trace_register\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_REG_FILE___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_REG_FILE___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_REG_FILE___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_REG_FILE___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_REG_FILE___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root__trace_const_0\n"); );
    // Init
    Vtb_REG_FILE___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_REG_FILE___024root*>(voidSelf);
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_REG_FILE___024root__trace_full_0_sub_0(Vtb_REG_FILE___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_REG_FILE___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root__trace_full_0\n"); );
    // Init
    Vtb_REG_FILE___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_REG_FILE___024root*>(voidSelf);
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_REG_FILE___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_REG_FILE___024root__trace_full_0_sub_0(Vtb_REG_FILE___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root__trace_full_0_sub_0\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[31]),32);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_REG_FILE__DOT__ADDR1),5);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_REG_FILE__DOT__ADDR2),5);
    bufp->fullCData(oldp+35,(vlSelfRef.tb_REG_FILE__DOT__W_ADDR),5);
    bufp->fullBit(oldp+36,(vlSelfRef.tb_REG_FILE__DOT__W_EN));
    bufp->fullIData(oldp+37,(vlSelfRef.tb_REG_FILE__DOT__W_DATA),32);
    bufp->fullBit(oldp+38,(vlSelfRef.tb_REG_FILE__DOT__CLK));
    bufp->fullIData(oldp+39,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32
                             [vlSelfRef.tb_REG_FILE__DOT__ADDR1]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32
                             [vlSelfRef.tb_REG_FILE__DOT__ADDR2]),32);
}
