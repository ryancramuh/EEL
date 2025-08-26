// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_PC.h for the primary calling header

#ifndef VERILATED_VTB_PC___024ROOT_H_
#define VERILATED_VTB_PC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_PC___024unit;


class Vtb_PC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_PC___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_PC___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_PC__DOT__CLK;
    CData/*0:0*/ tb_PC__DOT__RST;
    CData/*0:0*/ tb_PC__DOT__PC_EN;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__RST__v0;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__PC_EN__v0;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__PC_IN__v0;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__RST__v1;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__PC_EN__v1;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__PC_IN__v1;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__RST__v2;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__PC_EN__v2;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__PC_IN__v2;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__RST__v3;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__PC_EN__v3;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__PC_IN__v3;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__RST__v4;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__PC_EN__v4;
    CData/*0:0*/ __VdlySet__tb_PC__DOT__PC_IN__v4;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_PC__DOT__CLK__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_PC__DOT__PC_IN;
    IData/*31:0*/ tb_PC__DOT__UUT__DOT__PC_OUT;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_PC__DOT__UUT__DOT__PC_OUT__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_PC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_PC___024root(Vtb_PC__Syms* symsp, const char* v__name);
    ~Vtb_PC___024root();
    VL_UNCOPYABLE(Vtb_PC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
