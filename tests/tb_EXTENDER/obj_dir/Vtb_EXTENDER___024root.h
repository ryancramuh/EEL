// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_EXTENDER.h for the primary calling header

#ifndef VERILATED_VTB_EXTENDER___024ROOT_H_
#define VERILATED_VTB_EXTENDER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_EXTENDER__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_EXTENDER___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ tb_EXTENDER__DOT__IMM_SEL;
    CData/*0:0*/ __VdlySet__tb_EXTENDER__DOT__IMM_SEL__v0;
    CData/*0:0*/ __VdlySet__tb_EXTENDER__DOT__IMM_IN__v0;
    CData/*0:0*/ __VdlySet__tb_EXTENDER__DOT__IMM_SEL__v1;
    CData/*0:0*/ __VdlySet__tb_EXTENDER__DOT__IMM_IN__v1;
    CData/*0:0*/ __VdlySet__tb_EXTENDER__DOT__IMM_SEL__v2;
    CData/*0:0*/ __VdlySet__tb_EXTENDER__DOT__IMM_IN__v2;
    CData/*0:0*/ __VdlySet__tb_EXTENDER__DOT__IMM_SEL__v3;
    CData/*0:0*/ __VdlySet__tb_EXTENDER__DOT__IMM_IN__v3;
    CData/*0:0*/ __VdlySet__tb_EXTENDER__DOT__IMM_SEL__v4;
    CData/*0:0*/ __VdlySet__tb_EXTENDER__DOT__IMM_IN__v4;
    CData/*0:0*/ __VdlySet__tb_EXTENDER__DOT__IMM_SEL__v5;
    CData/*0:0*/ __VdlySet__tb_EXTENDER__DOT__IMM_IN__v5;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_EXTENDER__DOT__IMM_IN;
    IData/*31:0*/ tb_EXTENDER__DOT__UUT__DOT__IMM;
    IData/*31:0*/ tb_EXTENDER__DOT__UUT__DOT__I_TYPE;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_EXTENDER__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_EXTENDER___024root(Vtb_EXTENDER__Syms* symsp, const char* v__name);
    ~Vtb_EXTENDER___024root();
    VL_UNCOPYABLE(Vtb_EXTENDER___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
