// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_IMEM.h for the primary calling header

#ifndef VERILATED_VTB_IMEM___024ROOT_H_
#define VERILATED_VTB_IMEM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_IMEM___024unit;


class Vtb_IMEM__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_IMEM___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_IMEM___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_IMEM__DOT__CLK;
    CData/*0:0*/ tb_IMEM__DOT__RDEN;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__RDEN__v0;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__PC_OUT__v0;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__RDEN__v1;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__PC_OUT__v1;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__RDEN__v2;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__PC_OUT__v2;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__RDEN__v3;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__PC_OUT__v3;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__RDEN__v4;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__PC_OUT__v4;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__RDEN__v5;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__PC_OUT__v5;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__RDEN__v6;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__PC_OUT__v6;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__RDEN__v7;
    CData/*0:0*/ __VdlySet__tb_IMEM__DOT__PC_OUT__v7;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_IMEM__DOT__CLK__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_IMEM__DOT__PC_OUT;
    IData/*31:0*/ tb_IMEM__DOT__UUT__DOT__MEM_OUT;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_IMEM__DOT__UUT__DOT__MEM_OUT__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16384> tb_IMEM__DOT__UUT__DOT__rom_64kb;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_IMEM__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_IMEM___024root(Vtb_IMEM__Syms* symsp, const char* v__name);
    ~Vtb_IMEM___024root();
    VL_UNCOPYABLE(Vtb_IMEM___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
