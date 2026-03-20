// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "top__Syms.h"
#include "top___024root.h"

VL_ATTR_COLD void top___024root___eval_initial__TOP(top___024root* vlSelf);
VlCoroutine top___024root___eval_initial__TOP__0(top___024root* vlSelf);
VlCoroutine top___024root___eval_initial__TOP__1(top___024root* vlSelf);
VlCoroutine top___024root___eval_initial__TOP__2(top___024root* vlSelf);

void top___024root___eval_initial(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_initial\n"); );
    // Body
    top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    top___024root___eval_initial__TOP__0(vlSelf);
    top___024root___eval_initial__TOP__1(vlSelf);
    top___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__test_example__DOT__clk__0 
        = vlSelf->test_example__DOT__clk;
}

VL_INLINE_OPT VlCoroutine top___024root___eval_initial__TOP__0(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->test_example__DOT__clk = 1U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "test/sv/test_example.sv", 
                                           28);
        vlSelf->test_example__DOT__clk = (1U & (~ (IData)(vlSelf->test_example__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine top___024root___eval_initial__TOP__1(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->test_example__DOT__clk_vga = 1U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           nullptr, 
                                           "test/sv/test_example.sv", 
                                           37);
        vlSelf->test_example__DOT__clk_vga = (1U & 
                                              (~ (IData)(vlSelf->test_example__DOT__clk_vga)));
    }
}

void top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update_TOP(QData/*63:0*/ handle___05FV, CData/*0:0*/ rst, CData/*4:0*/ read_address1, CData/*4:0*/ read_address2, CData/*4:0*/ write_address, CData/*0:0*/ write_enable, IData/*31:0*/ &read_data1, IData/*31:0*/ &read_data2, IData/*31:0*/ write_data, QData/*63:0*/ &ref_register_file_inner_protectlib_combo_update__Vfuncrtn);

VL_INLINE_OPT void top___024root___act_comb__TOP__0(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___act_comb__TOP__0\n"); );
    // Body
    top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update_TOP(vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__handle___05FV, (IData)(vlSelf->test_example__DOT__rst), vlSelf->test_example__DOT__dut_read_address1, (IData)(vlSelf->test_example__DOT__dut_read_address2), vlSelf->test_example__DOT__dut_write_address, (IData)(vlSelf->test_example__DOT__dut_write_enable), vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__read_data1, vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__read_data2, vlSelf->test_example__DOT__dut_write_data, vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__Vfuncout);
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_combo___05FV 
        = vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__read_data1;
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_combo___05FV 
        = vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__read_data2;
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__last_combo_seqnum___05FV 
        = vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__Vfuncout;
    if ((vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__last_seq_seqnum___05FV 
         > vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__last_combo_seqnum___05FV)) {
        vlSelf->test_example__DOT__dut_read_data1 = vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_seq___05FV;
        vlSelf->test_example__DOT__dut_read_data2 = vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_seq___05FV;
    } else {
        vlSelf->test_example__DOT__dut_read_data1 = vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_combo___05FV;
        vlSelf->test_example__DOT__dut_read_data2 = vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_combo___05FV;
    }
}

void top___024root___eval_act(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_act\n"); );
    // Body
    if ((0xeULL & vlSelf->__VactTriggered.word(0U))) {
        top___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void top___024root___nba_comb__TOP__0(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___nba_comb__TOP__0\n"); );
    // Body
    top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update_TOP(vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__handle___05FV, (IData)(vlSelf->test_example__DOT__rst), vlSelf->test_example__DOT__dut_read_address1, (IData)(vlSelf->test_example__DOT__dut_read_address2), vlSelf->test_example__DOT__dut_write_address, (IData)(vlSelf->test_example__DOT__dut_write_enable), vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__read_data1, vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__read_data2, vlSelf->test_example__DOT__dut_write_data, vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__Vfuncout);
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_combo___05FV 
        = vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__read_data1;
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_combo___05FV 
        = vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__read_data2;
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__last_combo_seqnum___05FV 
        = vlSelf->__Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__Vfuncout;
}

void top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_ignore_TOP(QData/*63:0*/ handle___05FV, CData/*0:0*/ rst, CData/*4:0*/ read_address1, CData/*4:0*/ read_address2, CData/*4:0*/ write_address, CData/*0:0*/ write_enable, IData/*31:0*/ write_data);
void top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update_TOP(QData/*63:0*/ handle___05FV, CData/*0:0*/ clk, IData/*31:0*/ &read_data1, IData/*31:0*/ &read_data2, QData/*63:0*/ &ref_register_file_inner_protectlib_seq_update__Vfuncrtn);

VL_INLINE_OPT void top___024root___nba_sequent__TOP__0(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_tmp___05FV;
    test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_tmp___05FV = 0;
    IData/*31:0*/ test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_tmp___05FV;
    test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_tmp___05FV = 0;
    QData/*63:0*/ __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update__22__Vfuncout;
    __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update__22__read_data1;
    __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update__22__read_data1 = 0;
    IData/*31:0*/ __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update__22__read_data2;
    __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update__22__read_data2 = 0;
    // Body
    top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_ignore_TOP(vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__handle___05FV, (IData)(vlSelf->test_example__DOT__rst), vlSelf->test_example__DOT__dut_read_address1, (IData)(vlSelf->test_example__DOT__dut_read_address2), vlSelf->test_example__DOT__dut_write_address, (IData)(vlSelf->test_example__DOT__dut_write_enable), vlSelf->test_example__DOT__dut_write_data);
    top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update_TOP(vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__handle___05FV, (IData)(vlSelf->test_example__DOT__clk), __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update__22__read_data1, __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update__22__read_data2, __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update__22__Vfuncout);
    test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_tmp___05FV 
        = __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update__22__read_data1;
    test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_tmp___05FV 
        = __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update__22__read_data2;
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__last_seq_seqnum___05FV 
        = __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update__22__Vfuncout;
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_seq___05FV 
        = test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_tmp___05FV;
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_seq___05FV 
        = test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_tmp___05FV;
}

VL_INLINE_OPT void top___024root___nba_comb__TOP__1(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___nba_comb__TOP__1\n"); );
    // Body
    if ((vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__last_seq_seqnum___05FV 
         > vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__last_combo_seqnum___05FV)) {
        vlSelf->test_example__DOT__dut_read_data1 = vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_seq___05FV;
        vlSelf->test_example__DOT__dut_read_data2 = vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_seq___05FV;
    } else {
        vlSelf->test_example__DOT__dut_read_data1 = vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_combo___05FV;
        vlSelf->test_example__DOT__dut_read_data2 = vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_combo___05FV;
    }
}

void top___024root___eval_nba(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_nba\n"); );
    // Body
    if ((0xeULL & vlSelf->__VnbaTriggered.word(0U))) {
        top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xfULL & vlSelf->__VnbaTriggered.word(0U))) {
        top___024root___nba_comb__TOP__1(vlSelf);
    }
}

void top___024root___eval_triggers__act(top___024root* vlSelf);
void top___024root___timing_commit(top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void top___024root___dump_triggers__act(top___024root* vlSelf);
#endif  // VL_DEBUG
void top___024root___timing_resume(top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void top___024root___dump_triggers__nba(top___024root* vlSelf);
#endif  // VL_DEBUG

void top___024root___eval(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            top___024root___eval_triggers__act(vlSelf);
            top___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("test/sv/test_example.sv", 10, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                top___024root___timing_resume(vlSelf);
                top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("test/sv/test_example.sv", 10, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            top___024root___eval_nba(vlSelf);
        }
    }
}

void top___024root___timing_commit(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9a72ee7d__0.commit("@(negedge test_example.clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9a72eebe__0.commit("@(posedge test_example.clk)");
    }
}

void top___024root___timing_resume(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9a72ee7d__0.resume("@(negedge test_example.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9a72eebe__0.resume("@(posedge test_example.clk)");
    }
}

#ifdef VL_DEBUG
void top___024root___eval_debug_assertions(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
