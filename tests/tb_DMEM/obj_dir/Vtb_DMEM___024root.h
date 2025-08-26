// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_DMEM.h for the primary calling header

#ifndef VERILATED_VTB_DMEM___024ROOT_H_
#define VERILATED_VTB_DMEM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_DMEM__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_DMEM___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_DMEM__DOT__CLK;
        CData/*0:0*/ tb_DMEM__DOT__RDEN;
        CData/*0:0*/ tb_DMEM__DOT__WEN;
        CData/*0:0*/ tb_DMEM__DOT__SIGN;
        CData/*1:0*/ tb_DMEM__DOT__BYTE_SEL;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__RDEN__v0;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__WEN__v0;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__BYTE_SEL__v0;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__SIGN__v0;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__ADDR__v0;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__DATA_IN__v0;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__RDEN__v1;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__WEN__v1;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__BYTE_SEL__v1;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__SIGN__v1;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__ADDR__v1;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__DATA_IN__v1;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__RDEN__v2;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__WEN__v2;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__BYTE_SEL__v2;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__SIGN__v2;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__ADDR__v2;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__DATA_IN__v2;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__RDEN__v3;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__WEN__v3;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__BYTE_SEL__v3;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__SIGN__v3;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__ADDR__v3;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__DATA_IN__v3;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__RDEN__v4;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__WEN__v4;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__BYTE_SEL__v4;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__SIGN__v4;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__ADDR__v4;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__DATA_IN__v4;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__RDEN__v5;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__WEN__v5;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__BYTE_SEL__v5;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__SIGN__v5;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__ADDR__v5;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__DATA_IN__v5;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__RDEN__v6;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__WEN__v6;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__BYTE_SEL__v6;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__SIGN__v6;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__ADDR__v6;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__DATA_IN__v6;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__RDEN__v7;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__WEN__v7;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__BYTE_SEL__v7;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__SIGN__v7;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__ADDR__v7;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__DATA_IN__v7;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__RDEN__v8;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__WEN__v8;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__BYTE_SEL__v8;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__SIGN__v8;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__ADDR__v8;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__DATA_IN__v8;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__RDEN__v9;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__WEN__v9;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__BYTE_SEL__v9;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__SIGN__v9;
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__ADDR__v9;
    };
    struct {
        CData/*0:0*/ __VdlySet__tb_DMEM__DOT__DATA_IN__v9;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_DMEM__DOT__CLK__0;
        CData/*0:0*/ __VactContinue;
        SData/*13:0*/ tb_DMEM__DOT__ADDR;
        IData/*31:0*/ tb_DMEM__DOT__DATA_IN;
        IData/*31:0*/ tb_DMEM__DOT__UUT__DOT__DATA_OUT;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 16384> tb_DMEM__DOT__UUT__DOT__ram_64kb;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_DMEM__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_DMEM___024root(Vtb_DMEM__Syms* symsp, const char* v__name);
    ~Vtb_DMEM___024root();
    VL_UNCOPYABLE(Vtb_DMEM___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
