// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_EEL__Syms.h"


VL_ATTR_COLD void Vtb_EEL___024root__trace_init_sub__TOP____024unit__0(Vtb_EEL___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_EEL___024root__trace_init_sub__TOP__0(Vtb_EEL___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root__trace_init_sub__TOP__0\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_EEL___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_EEL", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+221,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+221,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"RST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fd", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"NEXTPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"PC_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"ADDR1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"ADDR2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"WADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"RF_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"IMM_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"ALU_FUN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+15,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"BYTE_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+22,0,"SIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"BR_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+25,0,"JUMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"STALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"FLUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("de", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+28,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"NEXTPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"PC_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+32,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"ADDR1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"ADDR2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"WADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"RF_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+38,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"IMM_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ALU_FUN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+44,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"BYTE_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+49,0,"SIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"BR_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+52,0,"JUMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"STALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"FLUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("em", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+55,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"NEXTPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"PC_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+59,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"ADDR1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"ADDR2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"WADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"RF_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"IMM_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+67,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"ALU_FUN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+69,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"BYTE_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+76,0,"SIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"BR_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+79,0,"JUMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"STALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"FLUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mw", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+82,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"NEXTPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"PC_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+86,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"ADDR1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"ADDR2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"WADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+91,0,"RF_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+92,0,"REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"IMM_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+94,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"ALU_FUN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+96,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+98,0,"ALU_RESULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"MEM_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"BYTE_SEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+103,0,"SIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"BR_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+106,0,"JUMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"STALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"FLUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+109,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"fwd_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"fwd_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+113,0,"fwd_srca",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"fwd_srcb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"fwd_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"rs1_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"rs2_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"srca_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"srcb_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"din_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"pc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"w_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"rf_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+129,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"byte_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+133,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"br_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+136,0,"jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"alu_fun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+138,0,"src_a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"src_b_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+140,0,"imm_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+141,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"alu_op_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"alu_op_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ALU_SRC_A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ALU_SRC_B", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+119,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("CTRL_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+147,0,"OPCODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+148,0,"FUNC3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+149,0,"FUNC7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"RF_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+138,0,"SRC_A_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"SRC_B_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+137,0,"ALU_FUN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+129,0,"REG_WRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"MEM_READ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"BYTE_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+133,0,"SIGN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"IMM_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+134,0,"BRANCH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"BR_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+136,0,"JUMP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"PC_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("DATA_MEMORY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+225,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"DATA_MEM_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+223,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+221,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"RDEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"BYTE_SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+76,0,"SIGN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+120,0,"DATA_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"DATA_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"actual_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->popPrefix();
    tracep->pushPrefix("EEL_ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"OP_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"OP_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ALU_FUN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+145,0,"ZERO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"RESULT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("FWD_DIN_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("FWD_RS1_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+124,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("FWD_RS2_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+124,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("FWD_SRCA_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("FWD_SRCB_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("HAZ_CTRL", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+221,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"D_ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+155,0,"D_ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+156,0,"D_WADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+147,0,"D_OP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+157,0,"E_ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+158,0,"E_ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"E_WADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+160,0,"E_OP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+161,0,"M_ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+162,0,"M_ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+163,0,"M_WADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+164,0,"M_OP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+165,0,"W_ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+166,0,"W_ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+167,0,"W_WADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+168,0,"W_OP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+109,0,"STALL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"FLUSH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"FWD_RS1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"FWD_RS2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+113,0,"FWD_SRCA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"FWD_SRCB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"FWD_DIN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"load_use_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"flush_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"flush_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"ed_fwd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"ed_fwd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"md_fwd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"md_fwd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"wd_fwd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"wd_fwd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"wm_load_fwd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"we_load_fwd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"we_load_fwd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("IMM_GEN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+181,0,"IR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+140,0,"IMM_SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+141,0,"IMM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"U_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"S_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"B_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"J_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PC_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+121,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PROG_COUNTER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+221,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"RST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"PC_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"PC_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"PC_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PROG_MEMORY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+225,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+221,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"RDEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+123,0,"MEM_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+221,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"W_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+92,0,"W_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"W_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"RS1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"RS2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("reg_32x32", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+189+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RF_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"D0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"D1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"D2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"D3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"DOUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_EEL___024root__trace_init_sub__TOP____024unit__0(Vtb_EEL___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+223,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+234,0,"AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+235,0,"STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+236,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+237,0,"IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+238,0,"REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+239,0,"JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+240,0,"JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+241,0,"BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
}

VL_ATTR_COLD void Vtb_EEL___024root__trace_init_top(Vtb_EEL___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root__trace_init_top\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_EEL___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_EEL___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_EEL___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_EEL___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_EEL___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_EEL___024root__trace_register(Vtb_EEL___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root__trace_register\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_EEL___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_EEL___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_EEL___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_EEL___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_EEL___024root__trace_const_0_sub_0(Vtb_EEL___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_EEL___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root__trace_const_0\n"); );
    // Init
    Vtb_EEL___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_EEL___024root*>(voidSelf);
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_EEL___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_EEL___024root__trace_const_0_sub_0(Vtb_EEL___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root__trace_const_0_sub_0\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+223,(0x20U),32);
    bufp->fullIData(oldp+224,(0U),32);
    bufp->fullIData(oldp+225,(0xeU),32);
    bufp->fullSData(oldp+226,(0x2000U),14);
    bufp->fullCData(oldp+227,(0U),2);
    bufp->fullIData(oldp+228,(vlSelfRef.tb_EEL__DOT__UUT__DOT__PC_MUX__DOT__D1),32);
    bufp->fullIData(oldp+229,(vlSelfRef.tb_EEL__DOT__UUT__DOT__PC_MUX__DOT__D2),32);
    bufp->fullIData(oldp+230,(vlSelfRef.tb_EEL__DOT__UUT__DOT__PC_MUX__DOT__D3),32);
    bufp->fullBit(oldp+231,(1U));
    bufp->fullIData(oldp+232,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF_MUX__DOT__D1),32);
    bufp->fullCData(oldp+233,(0x37U),7);
    bufp->fullCData(oldp+234,(0x17U),7);
    bufp->fullCData(oldp+235,(0x23U),7);
    bufp->fullCData(oldp+236,(3U),7);
    bufp->fullCData(oldp+237,(0x13U),7);
    bufp->fullCData(oldp+238,(0x33U),7);
    bufp->fullCData(oldp+239,(0x6fU),7);
    bufp->fullCData(oldp+240,(0x67U),7);
    bufp->fullCData(oldp+241,(0x63U),7);
}

VL_ATTR_COLD void Vtb_EEL___024root__trace_full_0_sub_0(Vtb_EEL___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_EEL___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root__trace_full_0\n"); );
    // Init
    Vtb_EEL___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_EEL___024root*>(voidSelf);
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_EEL___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_EEL___024root__trace_full_0_sub_0(Vtb_EEL___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root__trace_full_0_sub_0\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[8U] 
                              << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[7U] 
                                           >> 0xbU))),32);
    bufp->fullIData(oldp+2,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[7U] 
                              << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                           >> 0xbU))),32);
    bufp->fullIData(oldp+3,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                              << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                           >> 0xbU))),32);
    bufp->fullCData(oldp+4,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                   >> 9U))),2);
    bufp->fullIData(oldp+5,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[4U] 
                                           >> 9U))),32);
    bufp->fullIData(oldp+6,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[4U] 
                              << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                           >> 9U))),32);
    bufp->fullCData(oldp+7,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                      >> 4U))),5);
    bufp->fullCData(oldp+8,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                       << 1U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                                 >> 0x1fU)))),5);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                      >> 0x1aU))),5);
    bufp->fullCData(oldp+10,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                    >> 0x18U))),2);
    bufp->fullBit(oldp+11,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                  >> 0x17U))));
    bufp->fullCData(oldp+12,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                    >> 0x14U))),3);
    bufp->fullIData(oldp+13,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                               << 0xcU) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[1U] 
                                           >> 0x14U))),32);
    bufp->fullCData(oldp+14,((0xfU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[1U] 
                                      >> 0x10U))),4);
    bufp->fullBit(oldp+15,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[1U] 
                                  >> 0xfU))));
    bufp->fullCData(oldp+16,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[1U] 
                                    >> 0xdU))),2);
    bufp->fullIData(oldp+17,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[1U] 
                               << 0x13U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                            >> 0xdU))),32);
    bufp->fullBit(oldp+18,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                  >> 0xcU))));
    bufp->fullBit(oldp+19,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                  >> 0xbU))));
    bufp->fullBit(oldp+20,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                  >> 0xaU))));
    bufp->fullCData(oldp+21,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                    >> 8U))),2);
    bufp->fullBit(oldp+22,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                  >> 7U))));
    bufp->fullBit(oldp+23,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                  >> 6U))));
    bufp->fullCData(oldp+24,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                    >> 3U))),3);
    bufp->fullBit(oldp+25,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                  >> 2U))));
    bufp->fullBit(oldp+26,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+27,((1U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[0U])));
    bufp->fullIData(oldp+28,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[8U] 
                               << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[7U] 
                                            >> 0xbU))),32);
    bufp->fullIData(oldp+29,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[7U] 
                               << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[6U] 
                                            >> 0xbU))),32);
    bufp->fullIData(oldp+30,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[6U] 
                               << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                            >> 0xbU))),32);
    bufp->fullCData(oldp+31,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                    >> 9U))),2);
    bufp->fullIData(oldp+32,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                               << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+33,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                               << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U] 
                                            >> 9U))),32);
    bufp->fullCData(oldp+34,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U] 
                                       >> 4U))),5);
    bufp->fullCData(oldp+35,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U] 
                                        << 1U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                                  >> 0x1fU)))),5);
    bufp->fullCData(oldp+36,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                       >> 0x1aU))),5);
    bufp->fullCData(oldp+37,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                    >> 0x18U))),2);
    bufp->fullBit(oldp+38,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                  >> 0x17U))));
    bufp->fullCData(oldp+39,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                    >> 0x14U))),3);
    bufp->fullIData(oldp+40,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                               << 0xcU) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                                           >> 0x14U))),32);
    bufp->fullCData(oldp+41,((0xfU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                                      >> 0x10U))),4);
    bufp->fullBit(oldp+42,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                                  >> 0xfU))));
    bufp->fullCData(oldp+43,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                                    >> 0xdU))),2);
    bufp->fullIData(oldp+44,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                               << 0x13U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                            >> 0xdU))),32);
    bufp->fullBit(oldp+45,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                  >> 0xcU))));
    bufp->fullBit(oldp+46,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                  >> 0xbU))));
    bufp->fullBit(oldp+47,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                  >> 0xaU))));
    bufp->fullCData(oldp+48,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                    >> 8U))),2);
    bufp->fullBit(oldp+49,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                  >> 7U))));
    bufp->fullBit(oldp+50,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                  >> 6U))));
    bufp->fullCData(oldp+51,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                    >> 3U))),3);
    bufp->fullBit(oldp+52,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                  >> 2U))));
    bufp->fullBit(oldp+53,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+54,((1U & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[0U])));
    bufp->fullIData(oldp+55,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[8U] 
                               << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[7U] 
                                            >> 0xbU))),32);
    bufp->fullIData(oldp+56,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[7U] 
                               << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U] 
                                            >> 0xbU))),32);
    bufp->fullIData(oldp+57,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U] 
                               << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                            >> 0xbU))),32);
    bufp->fullCData(oldp+58,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                    >> 9U))),2);
    bufp->fullIData(oldp+59,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                               << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[4U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+60,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[4U] 
                               << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U] 
                                            >> 9U))),32);
    bufp->fullCData(oldp+61,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U] 
                                       >> 4U))),5);
    bufp->fullCData(oldp+62,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[3U] 
                                        << 1U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U] 
                                                  >> 0x1fU)))),5);
    bufp->fullCData(oldp+63,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U] 
                                       >> 0x1aU))),5);
    bufp->fullCData(oldp+64,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U] 
                                    >> 0x18U))),2);
    bufp->fullBit(oldp+65,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U] 
                                  >> 0x17U))));
    bufp->fullCData(oldp+66,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U] 
                                    >> 0x14U))),3);
    bufp->fullIData(oldp+67,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[2U] 
                               << 0xcU) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                                           >> 0x14U))),32);
    bufp->fullCData(oldp+68,((0xfU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                                      >> 0x10U))),4);
    bufp->fullBit(oldp+69,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                                  >> 0xfU))));
    bufp->fullCData(oldp+70,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                                    >> 0xdU))),2);
    bufp->fullIData(oldp+71,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                               << 0x13U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                            >> 0xdU))),32);
    bufp->fullBit(oldp+72,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                  >> 0xcU))));
    bufp->fullBit(oldp+73,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                  >> 0xbU))));
    bufp->fullBit(oldp+74,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                  >> 0xaU))));
    bufp->fullCData(oldp+75,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                    >> 8U))),2);
    bufp->fullBit(oldp+76,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                  >> 7U))));
    bufp->fullBit(oldp+77,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                  >> 6U))));
    bufp->fullCData(oldp+78,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                    >> 3U))),3);
    bufp->fullBit(oldp+79,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                  >> 2U))));
    bufp->fullBit(oldp+80,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+81,((1U & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])));
    bufp->fullIData(oldp+82,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[8U] 
                               << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[7U] 
                                            >> 0xbU))),32);
    bufp->fullIData(oldp+83,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[7U] 
                               << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[6U] 
                                            >> 0xbU))),32);
    bufp->fullIData(oldp+84,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[6U] 
                               << 0x15U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                            >> 0xbU))),32);
    bufp->fullCData(oldp+85,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                    >> 9U))),2);
    bufp->fullIData(oldp+86,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                               << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[4U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+87,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[4U] 
                               << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[3U] 
                                            >> 9U))),32);
    bufp->fullCData(oldp+88,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[3U] 
                                       >> 4U))),5);
    bufp->fullCData(oldp+89,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[3U] 
                                        << 1U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                                                  >> 0x1fU)))),5);
    bufp->fullCData(oldp+90,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                                       >> 0x1aU))),5);
    bufp->fullCData(oldp+91,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                                    >> 0x18U))),2);
    bufp->fullBit(oldp+92,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                                  >> 0x17U))));
    bufp->fullCData(oldp+93,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                                    >> 0x14U))),3);
    bufp->fullIData(oldp+94,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[2U] 
                               << 0xcU) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                                           >> 0x14U))),32);
    bufp->fullCData(oldp+95,((0xfU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                                      >> 0x10U))),4);
    bufp->fullBit(oldp+96,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                                  >> 0xfU))));
    bufp->fullCData(oldp+97,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                                    >> 0xdU))),2);
    bufp->fullIData(oldp+98,(((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                               << 0x13U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                            >> 0xdU))),32);
    bufp->fullBit(oldp+99,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                  >> 0xcU))));
    bufp->fullBit(oldp+100,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+101,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                   >> 0xaU))));
    bufp->fullCData(oldp+102,((3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                     >> 8U))),2);
    bufp->fullBit(oldp+103,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+104,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                   >> 6U))));
    bufp->fullCData(oldp+105,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                     >> 3U))),3);
    bufp->fullBit(oldp+106,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+107,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+108,((1U & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U])));
    bufp->fullBit(oldp+109,(vlSelfRef.tb_EEL__DOT__UUT__DOT__stall));
    bufp->fullBit(oldp+110,(vlSelfRef.tb_EEL__DOT__UUT__DOT__flush));
    bufp->fullCData(oldp+111,(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs1),2);
    bufp->fullCData(oldp+112,(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs2),2);
    bufp->fullBit(oldp+113,(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_srca));
    bufp->fullBit(oldp+114,(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_srcb));
    bufp->fullBit(oldp+115,(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_din));
    bufp->fullIData(oldp+116,(((2U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs1))
                                ? ((1U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs1))
                                    ? ((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                                        << 0x13U) | 
                                       (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                        >> 0xdU)) : 
                                   ((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                                     << 0x13U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                  >> 0xdU)))
                                : ((1U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs1))
                                    ? vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result
                                    : vlSelfRef.tb_EEL__DOT__UUT__DOT__rs1))),32);
    bufp->fullIData(oldp+117,(((2U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs2))
                                ? ((1U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs2))
                                    ? ((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[1U] 
                                        << 0x13U) | 
                                       (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[0U] 
                                        >> 0xdU)) : 
                                   ((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[1U] 
                                     << 0x13U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                  >> 0xdU)))
                                : ((1U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_rs2))
                                    ? vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result
                                    : vlSelfRef.tb_EEL__DOT__UUT__DOT__rs1))),32);
    bufp->fullIData(oldp+118,(vlSelfRef.tb_EEL__DOT__UUT__DOT__srca_fwd),32);
    bufp->fullIData(oldp+119,(((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_srca)
                                ? ((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__fwd_srca)
                                    ? vlSelfRef.tb_EEL__DOT__UUT__DOT__w_data
                                    : ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                                        << 0x17U) | 
                                       (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U] 
                                        >> 9U))) : 
                               ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                                 << 0x17U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U] 
                                              >> 9U)))),32);
    bufp->fullIData(oldp+120,(vlSelfRef.tb_EEL__DOT__UUT__DOT__din_fwd),32);
    bufp->fullIData(oldp+121,(((IData)(4U) + vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out)),32);
    bufp->fullIData(oldp+122,(vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out),32);
    bufp->fullIData(oldp+123,(vlSelfRef.tb_EEL__DOT__UUT__DOT__ir),32);
    bufp->fullIData(oldp+124,(vlSelfRef.tb_EEL__DOT__UUT__DOT__rs1),32);
    bufp->fullIData(oldp+125,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32
                              [(0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[3U] 
                                          << 1U) | 
                                         (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[2U] 
                                          >> 0x1fU)))]),32);
    bufp->fullIData(oldp+126,(vlSelfRef.tb_EEL__DOT__UUT__DOT__w_data),32);
    bufp->fullCData(oldp+127,(vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_sel),2);
    bufp->fullCData(oldp+128,(vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel),2);
    bufp->fullBit(oldp+129,(vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write));
    bufp->fullBit(oldp+130,(vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write));
    bufp->fullBit(oldp+131,(vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_read));
    bufp->fullCData(oldp+132,(vlSelfRef.tb_EEL__DOT__UUT__DOT__byte_sel),2);
    bufp->fullBit(oldp+133,(vlSelfRef.tb_EEL__DOT__UUT__DOT__sign));
    bufp->fullBit(oldp+134,(vlSelfRef.tb_EEL__DOT__UUT__DOT__branch));
    bufp->fullCData(oldp+135,(vlSelfRef.tb_EEL__DOT__UUT__DOT__br_type),3);
    bufp->fullBit(oldp+136,(vlSelfRef.tb_EEL__DOT__UUT__DOT__jump));
    bufp->fullCData(oldp+137,(vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_fun),4);
    bufp->fullBit(oldp+138,(vlSelfRef.tb_EEL__DOT__UUT__DOT__src_a_sel));
    bufp->fullCData(oldp+139,(vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel),2);
    bufp->fullCData(oldp+140,(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel),3);
    bufp->fullIData(oldp+141,(((4U & (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel))
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
    bufp->fullIData(oldp+142,(vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a),32);
    bufp->fullIData(oldp+143,(vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b),32);
    bufp->fullIData(oldp+144,(vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result),32);
    bufp->fullBit(oldp+145,((0U == vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result)));
    bufp->fullIData(oldp+146,(vlSelfRef.tb_EEL__DOT__UUT__DOT__dout),32);
    bufp->fullCData(oldp+147,((0x7fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                        >> 0xbU))),7);
    bufp->fullCData(oldp+148,((7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                     >> 0x17U))),3);
    bufp->fullBit(oldp+149,((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                   >> 9U))));
    bufp->fullSData(oldp+150,((0x3fffU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                          >> 0xfU))),14);
    bufp->fullIData(oldp+151,(((0U == (3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                             >> 8U)))
                                ? ((0x80U & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])
                                    ? (0xffffff00U 
                                       | (0xffU & vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                          [(0x3fffU 
                                            & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                 << 0x11U) 
                                                | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                   >> 0xfU)) 
                                               - (IData)(0x2000U)))]))
                                    : (0xffU & vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                       [(0x3fffU & 
                                         (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                            << 0x11U) 
                                           | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                              >> 0xfU)) 
                                          - (IData)(0x2000U)))]))
                                : ((1U == (3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                 >> 8U)))
                                    ? ((0x80U & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])
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
                                    : ((2U == (3U & 
                                               (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                >> 8U)))
                                        ? vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                       [(0x3fffU & 
                                         (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                            << 0x11U) 
                                           | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                              >> 0xfU)) 
                                          - (IData)(0x2000U)))]
                                        : vlSelfRef.tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb
                                       [(0x3fffU & 
                                         (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                            << 0x11U) 
                                           | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                              >> 0xfU)) 
                                          - (IData)(0x2000U)))])))),32);
    bufp->fullIData(oldp+152,(((0U == (3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                             >> 8U)))
                                ? ((0x80U & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])
                                    ? (0xffffff00U 
                                       | (0xffU & vlSelfRef.tb_EEL__DOT__UUT__DOT__din_fwd))
                                    : (0xffU & vlSelfRef.tb_EEL__DOT__UUT__DOT__din_fwd))
                                : ((1U == (3U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                                 >> 8U)))
                                    ? ((0x80U & vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U])
                                        ? (0xffff0000U 
                                           | (0xffffU 
                                              & vlSelfRef.tb_EEL__DOT__UUT__DOT__din_fwd))
                                        : (0xffffU 
                                           & vlSelfRef.tb_EEL__DOT__UUT__DOT__din_fwd))
                                    : vlSelfRef.tb_EEL__DOT__UUT__DOT__din_fwd))),32);
    bufp->fullSData(oldp+153,((0x3fffU & (((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                            << 0x11U) 
                                           | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[0U] 
                                              >> 0xfU)) 
                                          - (IData)(0x2000U)))),14);
    bufp->fullCData(oldp+154,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                        >> 0x1aU))),5);
    bufp->fullCData(oldp+155,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                         << 1U) | (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0x1fU)))),5);
    bufp->fullCData(oldp+156,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                        >> 0x12U))),5);
    bufp->fullCData(oldp+157,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                        >> 0x1aU))),5);
    bufp->fullCData(oldp+158,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[6U] 
                                         << 1U) | (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                                   >> 0x1fU)))),5);
    bufp->fullCData(oldp+159,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                        >> 0x12U))),5);
    bufp->fullCData(oldp+160,((0x7fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                        >> 0xbU))),7);
    bufp->fullCData(oldp+161,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                        >> 0x1aU))),5);
    bufp->fullCData(oldp+162,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U] 
                                         << 1U) | (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                                   >> 0x1fU)))),5);
    bufp->fullCData(oldp+163,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                        >> 0x12U))),5);
    bufp->fullCData(oldp+164,((0x7fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                        >> 0xbU))),7);
    bufp->fullCData(oldp+165,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                        >> 0x1aU))),5);
    bufp->fullCData(oldp+166,((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[6U] 
                                         << 1U) | (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                                   >> 0x1fU)))),5);
    bufp->fullCData(oldp+167,((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                        >> 0x12U))),5);
    bufp->fullCData(oldp+168,((0x7fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                        >> 0xbU))),7);
    bufp->fullBit(oldp+169,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__load_use_stall));
    bufp->fullBit(oldp+170,((0x67U == (0x7fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                >> 0xbU)))));
    bufp->fullBit(oldp+171,((0x6fU == (0x7fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                >> 0xbU)))));
    bufp->fullBit(oldp+172,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__ed_fwd1));
    bufp->fullBit(oldp+173,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__ed_fwd2));
    bufp->fullBit(oldp+174,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__md_fwd1));
    bufp->fullBit(oldp+175,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__md_fwd2));
    bufp->fullBit(oldp+176,((((0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                        >> 0x1aU)) 
                              == (0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                           >> 0x12U))) 
                             & ((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT____VdfgRegularize_hb9c15412_0_14) 
                                & ((~ (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__ed_fwd1)) 
                                   & ((0x6fU != (0x7fU 
                                                 & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                    >> 0xbU))) 
                                      & ((~ (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__md_fwd1)) 
                                         & (0U != (0x1fU 
                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                                      >> 0x12U))))))))));
    bufp->fullBit(oldp+177,((((0x1fU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                         << 1U) | (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0x1fU))) 
                              == (0x1fU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                           >> 0x12U))) 
                             & ((IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT____VdfgRegularize_hb9c15412_0_14) 
                                & ((~ (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__ed_fwd2)) 
                                   & ((0x6fU != (0x7fU 
                                                 & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                    >> 0xbU))) 
                                      & ((~ (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__md_fwd2)) 
                                         & (0U != (0x1fU 
                                                   & (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                                      >> 0x12U))))))))));
    bufp->fullBit(oldp+178,((IData)((((0x11800U == 
                                       (0x3f800U & 
                                        vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U])) 
                                      & (0x1800U == 
                                         (0x3f800U 
                                          & vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U]))) 
                                     & ((0x1fU & ((
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__em[6U] 
                                                   << 1U) 
                                                  | (vlSelfRef.tb_EEL__DOT__UUT__DOT__em[5U] 
                                                     >> 0x1fU))) 
                                        == (0x1fU & 
                                            (vlSelfRef.tb_EEL__DOT__UUT__DOT__mw[5U] 
                                             >> 0x12U)))))));
    bufp->fullBit(oldp+179,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__we_load_fwd1));
    bufp->fullBit(oldp+180,(vlSelfRef.tb_EEL__DOT__UUT__DOT__HAZ_CTRL__DOT__we_load_fwd2));
    bufp->fullIData(oldp+181,((0x1ffffffU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                              << 0xeU) 
                                             | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                >> 0x12U)))),25);
    bufp->fullIData(oldp+182,((0xfffff000U & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                               << 0x15U) 
                                              | (0x1ff000U 
                                                 & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                    >> 0xbU))))),32);
    bufp->fullIData(oldp+183,(vlSelfRef.tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE),32);
    bufp->fullIData(oldp+184,((((- (IData)((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                  >> 0xaU)))) 
                                << 0xbU) | ((0x7e0U 
                                             & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                                << 1U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                  >> 0x12U))))),32);
    bufp->fullIData(oldp+185,((((- (IData)((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
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
    bufp->fullIData(oldp+186,((((- (IData)((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
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
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSelfRef.tb_EEL__DOT__UUT__DOT__stall)))));
    bufp->fullSData(oldp+188,((0x3fffU & (vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out 
                                          >> 2U))),14);
    bufp->fullIData(oldp+189,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[0]),32);
    bufp->fullIData(oldp+190,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[1]),32);
    bufp->fullIData(oldp+191,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[2]),32);
    bufp->fullIData(oldp+192,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[3]),32);
    bufp->fullIData(oldp+193,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[4]),32);
    bufp->fullIData(oldp+194,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[5]),32);
    bufp->fullIData(oldp+195,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[6]),32);
    bufp->fullIData(oldp+196,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[7]),32);
    bufp->fullIData(oldp+197,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[8]),32);
    bufp->fullIData(oldp+198,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[9]),32);
    bufp->fullIData(oldp+199,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[10]),32);
    bufp->fullIData(oldp+200,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[11]),32);
    bufp->fullIData(oldp+201,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[12]),32);
    bufp->fullIData(oldp+202,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[13]),32);
    bufp->fullIData(oldp+203,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[14]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[15]),32);
    bufp->fullIData(oldp+205,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[16]),32);
    bufp->fullIData(oldp+206,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[17]),32);
    bufp->fullIData(oldp+207,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[18]),32);
    bufp->fullIData(oldp+208,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[19]),32);
    bufp->fullIData(oldp+209,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[20]),32);
    bufp->fullIData(oldp+210,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[21]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[22]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[23]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[24]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[25]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[26]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[27]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[28]),32);
    bufp->fullIData(oldp+218,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[29]),32);
    bufp->fullIData(oldp+219,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[30]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[31]),32);
    bufp->fullBit(oldp+221,(vlSelfRef.tb_EEL__DOT__CLK));
    bufp->fullBit(oldp+222,(vlSelfRef.tb_EEL__DOT__RST));
}
