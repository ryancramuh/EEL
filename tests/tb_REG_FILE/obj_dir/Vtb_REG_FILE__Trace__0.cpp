// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_REG_FILE__Syms.h"


void Vtb_REG_FILE___024root__trace_chg_0_sub_0(Vtb_REG_FILE___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_REG_FILE___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root__trace_chg_0\n"); );
    // Init
    Vtb_REG_FILE___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_REG_FILE___024root*>(voidSelf);
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_REG_FILE___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_REG_FILE___024root__trace_chg_0_sub_0(Vtb_REG_FILE___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root__trace_chg_0_sub_0\n"); );
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+32,(vlSelfRef.tb_REG_FILE__DOT__ADDR1),5);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_REG_FILE__DOT__ADDR2),5);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_REG_FILE__DOT__W_ADDR),5);
        bufp->chgBit(oldp+35,(vlSelfRef.tb_REG_FILE__DOT__W_EN));
        bufp->chgIData(oldp+36,(vlSelfRef.tb_REG_FILE__DOT__W_DATA),32);
    }
    bufp->chgBit(oldp+37,(vlSelfRef.tb_REG_FILE__DOT__CLK));
    bufp->chgIData(oldp+38,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32
                            [vlSelfRef.tb_REG_FILE__DOT__ADDR1]),32);
    bufp->chgIData(oldp+39,(vlSelfRef.tb_REG_FILE__DOT__UUT__DOT__reg_32x32
                            [vlSelfRef.tb_REG_FILE__DOT__ADDR2]),32);
}

void Vtb_REG_FILE___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_REG_FILE___024root__trace_cleanup\n"); );
    // Init
    Vtb_REG_FILE___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_REG_FILE___024root*>(voidSelf);
    Vtb_REG_FILE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
