// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "top__Syms.h"
#include "top___024root.h"

VL_ATTR_COLD void top___024root___eval_static__TOP(top___024root* vlSelf);

VL_ATTR_COLD void top___024root___eval_static(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_static\n"); );
    // Body
    top___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void top___024root___eval_static__TOP(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->test_example__DOT__error_count = 0U;
}

VL_ATTR_COLD void top___024root___eval_final__TOP(top___024root* vlSelf);

VL_ATTR_COLD void top___024root___eval_final(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_final\n"); );
    // Body
    top___024root___eval_final__TOP(vlSelf);
}

void top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_final_TOP(QData/*63:0*/ handle___05FV);

VL_ATTR_COLD void top___024root___eval_final__TOP(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_final__TOP\n"); );
    // Body
    top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_final_TOP(vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__handle___05FV);
}

VL_ATTR_COLD void top___024root___eval_triggers__stl(top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void top___024root___dump_triggers__stl(top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void top___024root___eval_stl(top___024root* vlSelf);

VL_ATTR_COLD void top___024root___eval_settle(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("test/sv/test_example.sv", 10, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void top___024root___dump_triggers__stl(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void top___024root___act_comb__TOP__0(top___024root* vlSelf);

VL_ATTR_COLD void top___024root___eval_stl(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        top___024root___act_comb__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void top___024root___dump_triggers__act(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(edge test_example.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge test_example.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge test_example.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void top___024root___dump_triggers__nba(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(edge test_example.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge test_example.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge test_example.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void top___024root___ctor_var_reset(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->test_example__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->test_example__DOT__clk_vga = VL_RAND_RESET_I(1);
    vlSelf->test_example__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->test_example__DOT__error_count = 0;
    vlSelf->test_example__DOT__dut_read_address1 = VL_RAND_RESET_I(5);
    vlSelf->test_example__DOT__dut_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->test_example__DOT__dut_read_address2 = VL_RAND_RESET_I(5);
    vlSelf->test_example__DOT__dut_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->test_example__DOT__dut_write_address = VL_RAND_RESET_I(5);
    vlSelf->test_example__DOT__dut_write_data = VL_RAND_RESET_I(32);
    vlSelf->test_example__DOT__dut_write_enable = VL_RAND_RESET_I(1);
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__handle___05FV = 0;
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__last_combo_seqnum___05FV = VL_RAND_RESET_Q(64);
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__last_seq_seqnum___05FV = VL_RAND_RESET_Q(64);
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_combo___05FV = VL_RAND_RESET_I(32);
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_combo___05FV = VL_RAND_RESET_I(32);
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_seq___05FV = VL_RAND_RESET_I(32);
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_seq___05FV = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__Vfuncout = 0;
    vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__read_data1 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__read_data2 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__test_example__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
