// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_EEL.h for the primary calling header

#include "Vtb_EEL__pch.h"
#include "Vtb_EEL___024root.h"

VL_ATTR_COLD void Vtb_EEL___024root___eval_static(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval_static\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_EEL___024root___eval_final(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval_final\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_EEL___024root___dump_triggers__stl(Vtb_EEL___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_EEL___024root___eval_phase__stl(Vtb_EEL___024root* vlSelf);

VL_ATTR_COLD void Vtb_EEL___024root___eval_settle(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval_settle\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_EEL___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_EEL.sv", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_EEL___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_EEL___024root___dump_triggers__stl(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___dump_triggers__stl\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_EEL___024root___stl_sequent__TOP__0(Vtb_EEL___024root* vlSelf);
VL_ATTR_COLD void Vtb_EEL___024root____Vm_traceActivitySetAll(Vtb_EEL___024root* vlSelf);

VL_ATTR_COLD void Vtb_EEL___024root___eval_stl(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval_stl\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_EEL___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_EEL___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_EEL___024root___stl_sequent__TOP__0(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___stl_sequent__TOP__0\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_in = ((IData)(4U) 
                                              + vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_out);
    vlSelfRef.tb_EEL__DOT__UUT__DOT__sign = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__byte_sel = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__src_a_sel = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_fun = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_read = 0U;
    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                  >> 0x11U)))) {
        if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                      >> 0x10U)))) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xfU)))) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__sign 
                                    = ((0x2000000U 
                                        & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                        ? ((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                  >> 0x18U)) 
                                           || (1U & 
                                               (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                >> 0x17U)))
                                        : ((1U & (~ 
                                                  (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0x18U))) 
                                           || (1U & 
                                               (~ (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0x17U)))));
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_read = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x10000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xfU)))) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__byte_sel 
                                    = ((0U == (7U & 
                                               (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                >> 0x17U)))
                                        ? 0U : ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                     >> 0x17U)))
                                                 ? 1U
                                                 : 2U));
                            }
                        }
                    }
                }
            }
            if ((0x8000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xeU)))) {
                    if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__src_a_sel = 1U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_fun = 9U;
                            }
                        }
                    } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__src_a_sel = 0U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_fun 
                                = ((8U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                                          >> 6U)) | 
                                   (7U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                          >> 0x17U)));
                        }
                    }
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                 >> 0xeU)))) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xdU)))) {
                    if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel = 1U;
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xfU)))) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__byte_sel 
                                    = ((0x2000000U 
                                        & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                        ? ((0x1000000U 
                                            & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                            ? 2U : 
                                           ((0x800000U 
                                             & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                             ? 2U : 1U))
                                        : ((0x1000000U 
                                            & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                            ? ((0x800000U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                                ? 0U
                                                : 2U)
                                            : ((0x800000U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                                ? 1U
                                                : 0U)));
                            }
                        }
                    }
                }
            }
            if ((0x8000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xeU)))) {
                    if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__src_a_sel = 1U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel = 2U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_fun = 0U;
                            }
                        }
                    } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel = 1U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_fun 
                                = ((0x2000000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                    ? ((0x1000000U 
                                        & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                        ? ((0x800000U 
                                            & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                            ? 7U : 6U)
                                        : ((0x800000U 
                                            & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                            ? ((0x200U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U])
                                                ? 0xdU
                                                : 5U)
                                            : 4U)) : 
                                   ((0x1000000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                     ? ((0x800000U 
                                         & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                         ? 3U : 2U)
                                     : ((0x800000U 
                                         & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                         ? 1U : 0U)));
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                 >> 0xeU)))) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xdU)))) {
                    if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__src_a_sel = 0U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__src_b_sel = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__branch = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__br_type = 0U;
    vlSelfRef.tb_EEL__DOT__UUT__DOT__jump = 0U;
    if ((0x20000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
        if ((0x10000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xfU)))) {
                if ((0x4000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_sel = 1U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 0U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 4U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__jump = 1U;
                            }
                        }
                    }
                } else if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_sel = 2U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 0U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 4U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__jump = 1U;
                        }
                    }
                } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__pc_sel = 1U;
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 2U;
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__branch = 1U;
                                vlSelfRef.tb_EEL__DOT__UUT__DOT__br_type 
                                    = ((0x2000000U 
                                        & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                        ? ((0x1000000U 
                                            & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                            ? ((0x800000U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                                ? 5U
                                                : 4U)
                                            : ((0x800000U 
                                                & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                                ? 3U
                                                : 2U))
                                        : ((0x1000000U 
                                            & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                            ? 0U : 
                                           ((0x800000U 
                                             & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                             ? 1U : 0U)));
                            }
                        }
                    }
                }
            }
            if ((0x8000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            } else if ((0x4000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write 
                    = ((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xdU)) && ((1U & (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xcU)) 
                                            && (1U 
                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xbU))));
                if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                      >> 0xbU)))) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                        }
                    } else {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                    }
                } else {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                }
            } else if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write 
                    = ((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xcU)) && (1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                  >> 0xbU)));
                if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xbU)))) {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                    }
                } else {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                }
            } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xbU)))) {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                }
            } else {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            }
        } else {
            vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
        }
    } else if ((0x10000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
        if ((0x8000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xeU)))) {
                if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 3U;
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 3U;
                        }
                    }
                } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 3U;
                    }
                }
            }
            vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write 
                = ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                             >> 0xeU))) && ((0x2000U 
                                             & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                             ? ((1U 
                                                 & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                    >> 0xcU)) 
                                                && (1U 
                                                    & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                       >> 0xbU)))
                                             : ((1U 
                                                 & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                    >> 0xcU)) 
                                                && (1U 
                                                    & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                       >> 0xbU)))));
            if ((0x4000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            } else if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                  >> 0xbU)))) {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                    }
                } else {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                }
            } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xbU)))) {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                }
            } else {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            }
        } else {
            if ((0x4000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
            } else if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
            } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xbU)))) {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
                }
            } else {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write = 0U;
            }
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write 
                = ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                             >> 0xeU))) && ((1U & (~ 
                                                   (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                    >> 0xdU))) 
                                            && ((1U 
                                                 & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                    >> 0xcU)) 
                                                && (1U 
                                                    & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                       >> 0xbU)))));
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xdU)))) {
                    if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                            vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x8000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
        if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                      >> 0xeU)))) {
            if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 3U;
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 3U;
                    }
                }
            } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 3U;
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 0U;
                }
            }
        }
        vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write 
            = ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                         >> 0xeU))) && ((0x2000U & 
                                         vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])
                                         ? ((1U & (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xcU)) 
                                            && (1U 
                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xbU)))
                                         : ((1U & (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xcU)) 
                                            && (1U 
                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xbU)))));
        if ((0x4000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
        } else if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                              >> 0xbU)))) {
                    vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
                }
            } else {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            }
        } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xbU)))) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            }
        } else {
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
        }
    } else {
        if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                      >> 0xeU)))) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xdU)))) {
                if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                    if ((0x800U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__rf_sel = 2U;
                        vlSelfRef.tb_EEL__DOT__UUT__DOT__imm_sel = 0U;
                    }
                }
            }
        }
        vlSelfRef.tb_EEL__DOT__UUT__DOT__reg_write 
            = ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                         >> 0xeU))) && ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                  >> 0xdU))) 
                                        && ((1U & (
                                                   vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xcU)) 
                                            && (1U 
                                                & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                                   >> 0xbU)))));
        if ((0x4000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
        } else if ((0x2000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
        } else if ((0x1000U & vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U])) {
            if ((1U & (~ (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                          >> 0xbU)))) {
                vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
            }
        } else {
            vlSelfRef.tb_EEL__DOT__UUT__DOT__mem_write = 0U;
        }
    }
    vlSelfRef.tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE 
        = (((- (IData)((1U & (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                              >> 0xaU)))) << 0xbU) 
           | (0x7ffU & ((vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[6U] 
                         << 1U) | (vlSelfRef.tb_EEL__DOT__UUT__DOT__fd[5U] 
                                   >> 0x1fU))));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a = ((0x8000U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                  ? 
                                                 ((0x8000U 
                                                   & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                   ? 
                                                  ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                                    << 0xcU) 
                                                   | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                                                      >> 0x14U))
                                                   : 
                                                  ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                                    << 0x17U) 
                                                   | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                                                      >> 9U)))
                                                  : 
                                                 ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[5U] 
                                                   << 0x17U) 
                                                  | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                                                     >> 9U)));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b = ((0x4000U 
                                                  & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                   ? 0U
                                                   : 
                                                  ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[8U] 
                                                    << 0x15U) 
                                                   | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[7U] 
                                                      >> 0xbU)))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                   ? 
                                                  ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[2U] 
                                                    << 0xcU) 
                                                   | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U] 
                                                      >> 0x14U))
                                                   : 
                                                  ((vlSelfRef.tb_EEL__DOT__UUT__DOT__de[4U] 
                                                    << 0x17U) 
                                                   | (vlSelfRef.tb_EEL__DOT__UUT__DOT__de[3U] 
                                                      >> 9U))));
    vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_result = (
                                                   (0x80000U 
                                                    & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                    ? 
                                                   ((0x40000U 
                                                     & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                     ? 
                                                    ((0x20000U 
                                                      & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                       ? 
                                                      VL_SHIFTR_III(32,32,32, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b)
                                                       : 0U))
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                       ? vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a
                                                       : 
                                                      (vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a 
                                                       - vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b))))
                                                    : 
                                                   ((0x40000U 
                                                     & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                     ? 
                                                    ((0x20000U 
                                                      & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                       ? 
                                                      (vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b)
                                                       : 
                                                      (vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a 
                                                       | vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b))
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                       ? 
                                                      VL_SHIFTR_III(32,32,32, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b)
                                                       : 0U))
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                       ? 
                                                      (vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a 
                                                       < vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b)
                                                       : 
                                                      VL_LTS_III(32, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b))
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelfRef.tb_EEL__DOT__UUT__DOT__de[1U])
                                                       ? 
                                                      VL_SHIFTL_III(32,32,32, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a, vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b)
                                                       : 
                                                      (vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_a 
                                                       + vlSelfRef.tb_EEL__DOT__UUT__DOT__alu_op_b)))));
}

VL_ATTR_COLD void Vtb_EEL___024root___eval_triggers__stl(Vtb_EEL___024root* vlSelf);

VL_ATTR_COLD bool Vtb_EEL___024root___eval_phase__stl(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___eval_phase__stl\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_EEL___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_EEL___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_EEL___024root___dump_triggers__act(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___dump_triggers__act\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_EEL.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_EEL___024root___dump_triggers__nba(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___dump_triggers__nba\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_EEL.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_EEL___024root____Vm_traceActivitySetAll(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root____Vm_traceActivitySetAll\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtb_EEL___024root___ctor_var_reset(Vtb_EEL___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_EEL___024root___ctor_var_reset\n"); );
    Vtb_EEL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_EEL__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_EEL__DOT__RST = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(267, vlSelf->tb_EEL__DOT__UUT__DOT__fd);
    VL_RAND_RESET_W(267, vlSelf->tb_EEL__DOT__UUT__DOT__de);
    VL_RAND_RESET_W(267, vlSelf->tb_EEL__DOT__UUT__DOT__em);
    VL_RAND_RESET_W(267, vlSelf->tb_EEL__DOT__UUT__DOT__mw);
    vlSelf->tb_EEL__DOT__UUT__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->tb_EEL__DOT__UUT__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->tb_EEL__DOT__UUT__DOT__ir = VL_RAND_RESET_I(32);
    vlSelf->tb_EEL__DOT__UUT__DOT__pc_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_EEL__DOT__UUT__DOT__rf_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_EEL__DOT__UUT__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->tb_EEL__DOT__UUT__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->tb_EEL__DOT__UUT__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->tb_EEL__DOT__UUT__DOT__byte_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_EEL__DOT__UUT__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->tb_EEL__DOT__UUT__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->tb_EEL__DOT__UUT__DOT__br_type = VL_RAND_RESET_I(3);
    vlSelf->tb_EEL__DOT__UUT__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->tb_EEL__DOT__UUT__DOT__alu_fun = VL_RAND_RESET_I(4);
    vlSelf->tb_EEL__DOT__UUT__DOT__src_a_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_EEL__DOT__UUT__DOT__src_b_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_EEL__DOT__UUT__DOT__imm_sel = VL_RAND_RESET_I(3);
    vlSelf->tb_EEL__DOT__UUT__DOT__alu_op_a = VL_RAND_RESET_I(32);
    vlSelf->tb_EEL__DOT__UUT__DOT__alu_op_b = VL_RAND_RESET_I(32);
    vlSelf->tb_EEL__DOT__UUT__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_EEL__DOT__UUT__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->tb_EEL__DOT__UUT__DOT__PC_MUX__DOT__D1 = VL_RAND_RESET_I(32);
    vlSelf->tb_EEL__DOT__UUT__DOT__PC_MUX__DOT__D2 = VL_RAND_RESET_I(32);
    vlSelf->tb_EEL__DOT__UUT__DOT__PC_MUX__DOT__D3 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_EEL__DOT__UUT__DOT__PROG_MEMORY__DOT__rom_64kb[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_EEL__DOT__UUT__DOT__RF__DOT__reg_32x32[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_EEL__DOT__UUT__DOT__IMM_GEN__DOT__I_TYPE = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_EEL__DOT__UUT__DOT__DATA_MEMORY__DOT__ram_64kb[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_EEL__DOT__UUT__DOT__RF_MUX__DOT__D1 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tb_EEL__DOT__RST__v0 = 0;
    vlSelf->__VdlySet__tb_EEL__DOT__RST__v1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_EEL__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
