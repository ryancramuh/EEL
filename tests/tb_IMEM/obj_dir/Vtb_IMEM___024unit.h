// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_IMEM.h for the primary calling header

#ifndef VERILATED_VTB_IMEM___024UNIT_H_
#define VERILATED_VTB_IMEM___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_IMEM__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_IMEM___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vtb_IMEM__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_IMEM___024unit(Vtb_IMEM__Syms* symsp, const char* v__name);
    ~Vtb_IMEM___024unit();
    VL_UNCOPYABLE(Vtb_IMEM___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
