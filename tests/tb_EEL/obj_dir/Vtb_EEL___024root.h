// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_EEL.h for the primary calling header

#ifndef VERILATED_VTB_EEL___024ROOT_H_
#define VERILATED_VTB_EEL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_EEL__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_EEL___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_EEL__DOT__CLK;
    CData/*0:0*/ tb_EEL__DOT__RST;
    CData/*1:0*/ tb_EEL__DOT__UUT__DOT__pc_sel;
    CData/*1:0*/ tb_EEL__DOT__UUT__DOT__rf_sel;
    CData/*0:0*/ tb_EEL__DOT__UUT__DOT__reg_write;
    CData/*0:0*/ tb_EEL__DOT__UUT__DOT__mem_write;
    CData/*0:0*/ tb_EEL__DOT__UUT__DOT__mem_read;
    CData/*1:0*/ tb_EEL__DOT__UUT__DOT__byte_sel;
    CData/*0:0*/ tb_EEL__DOT__UUT__DOT__sign;
    CData/*0:0*/ tb_EEL__DOT__UUT__DOT__branch;
    CData/*2:0*/ tb_EEL__DOT__UUT__DOT__br_type;
    CData/*0:0*/ tb_EEL__DOT__UUT__DOT__jump;
    CData/*3:0*/ tb_EEL__DOT__UUT__DOT__alu_fun;
    CData/*0:0*/ tb_EEL__DOT__UUT__DOT__src_a_sel;
    CData/*1:0*/ tb_EEL__DOT__UUT__DOT__src_b_sel;
    CData/*2:0*/ tb_EEL__DOT__UUT__DOT__imm_sel;
    CData/*0:0*/ __VdlySet__tb_EEL__DOT__RST__v0;
    CData/*0:0*/ __VdlySet__tb_EEL__DOT__RST__v1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_EEL__DOT__CLK__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_EEL__DOT__UUT__DOT__pc_in;
    IData/*31:0*/ tb_EEL__DOT__UUT__DOT__pc_out;
    IData/*31:0*/ tb_EEL__DOT__UUT__DOT__ir;
    IData/*31:0*/ tb_EEL__DOT__UUT__DOT__alu_op_a;
    IData/*31:0*/ tb_EEL__DOT__UUT__DOT__alu_op_b;
    IData/*31:0*/ tb_EEL__DOT__UUT__DOT__alu_result;
    IData/*31:0*/ tb_EEL__DOT__UUT__DOT__dout;
    IData/*31:0*/ tb_EEL__DOT__UUT__DOT__PC_MUX__DOT__D1;
    IData/*31:0*/ tb_EEL__DOT__UUT__DOT__PC_MUX__DOT__D2;
    IData/*31:0*/ tb_EEL__DOT__UUT__DOT__PC_MUX__DOT__D3;
    IData/*31:0*/ tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE;
    IData/*31:0*/ tb_EEL__DOT__UUT__DOT__RF_MUX__DOT__D1;
    IData/*31:0*/ __VactIterCount;
    VlWide<9>/*266:0*/ tb_EEL__DOT__UUT__DOT__fd;
    VlWide<9>/*266:0*/ tb_EEL__DOT__UUT__DOT__de;
    VlWide<9>/*266:0*/ tb_EEL__DOT__UUT__DOT__em;
    VlWide<9>/*266:0*/ tb_EEL__DOT__UUT__DOT__mw;
    VlUnpacked<IData/*31:0*/, 16384> tb_EEL__DOT__UUT__DOT__PROG_MEMORY__DOT__rom_64kb;
    VlUnpacked<IData/*31:0*/, 32> tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32;
    VlUnpacked<IData/*31:0*/, 16384> tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_EEL__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_EEL___024root(Vtb_EEL__Syms* symsp, const char* v__name);
    ~Vtb_EEL___024root();
    VL_UNCOPYABLE(Vtb_EEL___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
