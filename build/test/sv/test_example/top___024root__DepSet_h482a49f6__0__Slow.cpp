// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "top__Syms.h"
#include "top__Syms.h"
#include "top___024root.h"

void top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_check_hash_TOP(IData/*31:0*/ protectlib_hash___05FV);
void top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_create_TOP(std::string scope___05FV, QData/*63:0*/ &ref_register_file_inner_protectlib_create__Vfuncrtn);

VL_ATTR_COLD void top___024root___eval_initial__TOP(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_initial__TOP\n"); );
    // Init
    QData/*63:0*/ __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_create__19__Vfuncout;
    __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_create__19__Vfuncout = 0;
    // Body
    top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_check_hash_TOP(0xecb80605U);
    top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_create_TOP(VL_SFORMATF_NX("%Ntest_example.dut.golden.inner",
                                                                                vlSymsp->name()) , __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_create__19__Vfuncout);
    vlSelf->test_example__DOT__dut__DOT__golden__DOT__inner__DOT__handle___05FV 
        = __Vfunc_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_create__19__Vfuncout;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void top___024root___dump_triggers__stl(top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void top___024root___eval_triggers__stl(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
