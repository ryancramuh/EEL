// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_MUX4T1.h for the primary calling header

#ifndef VERILATED_VTB_MUX4T1___024ROOT_H_
#define VERILATED_VTB_MUX4T1___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_MUX4T1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_MUX4T1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ tb_MUX4T1__DOT__SEL;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__SEL__v0;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D0__v0;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D1__v0;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D2__v0;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D3__v0;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__SEL__v1;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D0__v1;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D1__v1;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D2__v1;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D3__v1;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__SEL__v2;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D0__v2;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D1__v2;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D2__v2;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D3__v2;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__SEL__v3;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D0__v3;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D1__v3;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D2__v3;
    CData/*0:0*/ __VdlySet__tb_MUX4T1__DOT__D3__v3;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_MUX4T1__DOT__D0;
    IData/*31:0*/ tb_MUX4T1__DOT__D1;
    IData/*31:0*/ tb_MUX4T1__DOT__D2;
    IData/*31:0*/ tb_MUX4T1__DOT__D3;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_MUX4T1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_MUX4T1___024root(Vtb_MUX4T1__Syms* symsp, const char* v__name);
    ~Vtb_MUX4T1___024root();
    VL_UNCOPYABLE(Vtb_MUX4T1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
