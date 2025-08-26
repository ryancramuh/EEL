// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_REG_FILE.h for the primary calling header

#ifndef VERILATED_VTB_REG_FILE___024ROOT_H_
#define VERILATED_VTB_REG_FILE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_REG_FILE__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_REG_FILE___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_REG_FILE__DOT__CLK;
    CData/*4:0*/ tb_REG_FILE__DOT__ADDR1;
    CData/*4:0*/ tb_REG_FILE__DOT__ADDR2;
    CData/*4:0*/ tb_REG_FILE__DOT__W_ADDR;
    CData/*0:0*/ tb_REG_FILE__DOT__W_EN;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__ADDR1__v0;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__ADDR2__v0;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__W_ADDR__v0;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__W_EN__v0;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__W_DATA__v0;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__ADDR1__v1;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__ADDR2__v1;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__W_ADDR__v1;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__W_EN__v1;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__W_DATA__v1;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__ADDR1__v2;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__ADDR2__v2;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__W_ADDR__v2;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__W_EN__v2;
    CData/*0:0*/ __VdlySet__tb_REG_FILE__DOT__W_DATA__v2;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_REG_FILE__DOT__CLK__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_REG_FILE__DOT__W_DATA;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> tb_REG_FILE__DOT__UUT__DOT__reg_32x32;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_REG_FILE__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_REG_FILE___024root(Vtb_REG_FILE__Syms* symsp, const char* v__name);
    ~Vtb_REG_FILE___024root();
    VL_UNCOPYABLE(Vtb_REG_FILE___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
