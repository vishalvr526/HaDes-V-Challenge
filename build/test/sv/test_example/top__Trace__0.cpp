// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "top__Syms.h"


void top___024root__trace_chg_sub_0(top___024root* vlSelf, VerilatedFst::Buffer* bufp);

void top___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root__trace_chg_top_0\n"); );
    // Init
    top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<top___024root*>(voidSelf);
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void top___024root__trace_chg_sub_0(top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->test_example__DOT__rst));
        bufp->chgIData(oldp+1,(vlSelf->test_example__DOT__error_count),32);
        bufp->chgCData(oldp+2,(vlSelf->test_example__DOT__dut_read_address1),5);
        bufp->chgCData(oldp+3,(vlSelf->test_example__DOT__dut_read_address2),5);
        bufp->chgCData(oldp+4,(vlSelf->test_example__DOT__dut_write_address),5);
        bufp->chgIData(oldp+5,(vlSelf->test_example__DOT__dut_write_data),32);
        bufp->chgBit(oldp+6,(vlSelf->test_example__DOT__dut_write_enable));
    }
    bufp->chgBit(oldp+7,(vlSelf->test_example__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelf->test_example__DOT__clk_vga));
    bufp->chgIData(oldp+9,(vlSelf->test_example__DOT__dut_read_data1),32);
    bufp->chgIData(oldp+10,(vlSelf->test_example__DOT__dut_read_data2),32);
}

void top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root__trace_cleanup\n"); );
    // Init
    top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<top___024root*>(voidSelf);
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
