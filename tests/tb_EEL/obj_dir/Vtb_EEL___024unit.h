// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_EEL.h for the primary calling header

#ifndef VERILATED_VTB_EEL___024UNIT_H_
#define VERILATED_VTB_EEL___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_EEL__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_EEL___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_EEL__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_EEL___024unit(Vtb_EEL__Syms* symsp, const char* v__name);
    ~Vtb_EEL___024unit();
    VL_UNCOPYABLE(Vtb_EEL___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
