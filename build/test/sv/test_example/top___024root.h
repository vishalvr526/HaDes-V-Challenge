// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See top.h for the primary calling header

#ifndef VERILATED_TOP___024ROOT_H_
#define VERILATED_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class top__Syms;

class alignas(VL_CACHE_LINE_BYTES) top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ test_example__DOT__clk;
    CData/*0:0*/ test_example__DOT__clk_vga;
    CData/*0:0*/ test_example__DOT__rst;
    CData/*4:0*/ test_example__DOT__dut_read_address1;
    CData/*4:0*/ test_example__DOT__dut_read_address2;
    CData/*4:0*/ test_example__DOT__dut_write_address;
    CData/*0:0*/ test_example__DOT__dut_write_enable;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test_example__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ test_example__DOT__error_count;
    IData/*31:0*/ test_example__DOT__dut_read_data1;
    IData/*31:0*/ test_example__DOT__dut_read_data2;
    IData/*31:0*/ test_example__DOT__dut_write_data;
    IData/*31:0*/ test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_combo___05FV;
    IData/*31:0*/ test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_combo___05FV;
    IData/*31:0*/ test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data1_seq___05FV;
    IData/*31:0*/ test_example__DOT__dut__DOT__golden__DOT__inner__DOT__read_data2_seq___05FV;
    IData/*31:0*/ __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__read_data1;
    IData/*31:0*/ __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__read_data2;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ test_example__DOT__dut__DOT__golden__DOT__inner__DOT__handle___05FV;
    QData/*63:0*/ test_example__DOT__dut__DOT__golden__DOT__inner__DOT__last_combo_seqnum___05FV;
    QData/*63:0*/ test_example__DOT__dut__DOT__golden__DOT__inner__DOT__last_seq_seqnum___05FV;
    QData/*63:0*/ __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update__20__Vfuncout;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9a72ee7d__0;
    VlTriggerScheduler __VtrigSched_h9a72eebe__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    top__Syms* const vlSymsp;

    // CONSTRUCTORS
    top___024root(top__Syms* symsp, const char* v__name);
    ~top___024root();
    VL_UNCOPYABLE(top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
