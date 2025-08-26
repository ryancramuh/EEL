// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ALU.h for the primary calling header

#ifndef VERILATED_VTB_ALU___024ROOT_H_
#define VERILATED_VTB_ALU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_ALU___024unit;


class Vtb_ALU__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ALU___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_ALU___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_ALU__DOT__UUT__DOT__ZERO;
    CData/*3:0*/ tb_ALU__DOT__ALU_FUN;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*3:0*/ __Vtrigprevexpr___TOP__tb_ALU__DOT__ALU_FUN__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ALU__DOT__UUT__DOT__ZERO__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_ALU__DOT__OP_A;
    IData/*31:0*/ tb_ALU__DOT__OP_B;
    IData/*31:0*/ tb_ALU__DOT__UUT__DOT__RESULT;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_ALU__DOT__OP_A__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_ALU__DOT__OP_B__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_ALU__DOT__UUT__DOT__RESULT__0;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ALU__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ALU___024root(Vtb_ALU__Syms* symsp, const char* v__name);
    ~Vtb_ALU___024root();
    VL_UNCOPYABLE(Vtb_ALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
