// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "top__Syms.h"
#include "top__Syms.h"
#include "top___024root.h"

extern "C" void ref_register_file_inner_protectlib_check_hash(int protectlib_hash___05FV);

VL_INLINE_OPT void top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_check_hash_TOP(IData/*31:0*/ protectlib_hash___05FV) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_check_hash_TOP\n"); );
    // Body
    int protectlib_hash___05FV__Vcvt;
    for (size_t protectlib_hash___05FV__Vidx = 0; protectlib_hash___05FV__Vidx < 1; ++protectlib_hash___05FV__Vidx) protectlib_hash___05FV__Vcvt = protectlib_hash___05FV;
    ref_register_file_inner_protectlib_check_hash(protectlib_hash___05FV__Vcvt);
}

extern "C" void* ref_register_file_inner_protectlib_create(const char* scope___05FV);

VL_INLINE_OPT void top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_create_TOP(std::string scope___05FV, QData/*63:0*/ &ref_register_file_inner_protectlib_create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_create_TOP\n"); );
    // Body
    const char* scope___05FV__Vcvt;
    for (size_t scope___05FV__Vidx = 0; scope___05FV__Vidx < 1; ++scope___05FV__Vidx) scope___05FV__Vcvt = scope___05FV.c_str();
    void* ref_register_file_inner_protectlib_create__Vfuncrtn__Vcvt;
    ref_register_file_inner_protectlib_create__Vfuncrtn__Vcvt = ref_register_file_inner_protectlib_create(scope___05FV__Vcvt);
    ref_register_file_inner_protectlib_create__Vfuncrtn 
        = VL_CVT_VP_Q(ref_register_file_inner_protectlib_create__Vfuncrtn__Vcvt);
}

extern "C" long long ref_register_file_inner_protectlib_combo_update(void* handle___05FV, svLogic rst, const svLogicVecVal* read_address1, const svLogicVecVal* read_address2, const svLogicVecVal* write_address, svLogic write_enable, svLogicVecVal* read_data1, svLogicVecVal* read_data2, const svLogicVecVal* write_data);

VL_INLINE_OPT void top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update_TOP(QData/*63:0*/ handle___05FV, CData/*0:0*/ rst, CData/*4:0*/ read_address1, CData/*4:0*/ read_address2, CData/*4:0*/ write_address, CData/*0:0*/ write_enable, IData/*31:0*/ &read_data1, IData/*31:0*/ &read_data2, IData/*31:0*/ write_data, QData/*63:0*/ &ref_register_file_inner_protectlib_combo_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_update_TOP\n"); );
    // Body
    void* handle___05FV__Vcvt;
    for (size_t handle___05FV__Vidx = 0; handle___05FV__Vidx < 1; ++handle___05FV__Vidx) handle___05FV__Vcvt = VL_CVT_Q_VP(handle___05FV);
    svLogic rst__Vcvt;
    for (size_t rst__Vidx = 0; rst__Vidx < 1; ++rst__Vidx) rst__Vcvt = rst;
    svLogicVecVal read_address1__Vcvt[1];
    for (size_t read_address1__Vidx = 0; read_address1__Vidx < 1; ++read_address1__Vidx) VL_SET_SVLV_I(5, read_address1__Vcvt + 1 * read_address1__Vidx, read_address1);
    svLogicVecVal read_address2__Vcvt[1];
    for (size_t read_address2__Vidx = 0; read_address2__Vidx < 1; ++read_address2__Vidx) VL_SET_SVLV_I(5, read_address2__Vcvt + 1 * read_address2__Vidx, read_address2);
    svLogicVecVal write_address__Vcvt[1];
    for (size_t write_address__Vidx = 0; write_address__Vidx < 1; ++write_address__Vidx) VL_SET_SVLV_I(5, write_address__Vcvt + 1 * write_address__Vidx, write_address);
    svLogic write_enable__Vcvt;
    for (size_t write_enable__Vidx = 0; write_enable__Vidx < 1; ++write_enable__Vidx) write_enable__Vcvt = write_enable;
    svLogicVecVal read_data1__Vcvt[1];
    svLogicVecVal read_data2__Vcvt[1];
    svLogicVecVal write_data__Vcvt[1];
    for (size_t write_data__Vidx = 0; write_data__Vidx < 1; ++write_data__Vidx) VL_SET_SVLV_I(32, write_data__Vcvt + 1 * write_data__Vidx, write_data);
    long long ref_register_file_inner_protectlib_combo_update__Vfuncrtn__Vcvt;
    ref_register_file_inner_protectlib_combo_update__Vfuncrtn__Vcvt = ref_register_file_inner_protectlib_combo_update(handle___05FV__Vcvt, rst__Vcvt, read_address1__Vcvt, read_address2__Vcvt, write_address__Vcvt, write_enable__Vcvt, read_data1__Vcvt, read_data2__Vcvt, write_data__Vcvt);
    read_data1 = VL_SET_I_SVLV(read_data1__Vcvt);
    read_data2 = VL_SET_I_SVLV(read_data2__Vcvt);
    ref_register_file_inner_protectlib_combo_update__Vfuncrtn 
        = ref_register_file_inner_protectlib_combo_update__Vfuncrtn__Vcvt;
}

extern "C" long long ref_register_file_inner_protectlib_seq_update(void* handle___05FV, svLogic clk, svLogicVecVal* read_data1, svLogicVecVal* read_data2);

VL_INLINE_OPT void top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update_TOP(QData/*63:0*/ handle___05FV, CData/*0:0*/ clk, IData/*31:0*/ &read_data1, IData/*31:0*/ &read_data2, QData/*63:0*/ &ref_register_file_inner_protectlib_seq_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_seq_update_TOP\n"); );
    // Body
    void* handle___05FV__Vcvt;
    for (size_t handle___05FV__Vidx = 0; handle___05FV__Vidx < 1; ++handle___05FV__Vidx) handle___05FV__Vcvt = VL_CVT_Q_VP(handle___05FV);
    svLogic clk__Vcvt;
    for (size_t clk__Vidx = 0; clk__Vidx < 1; ++clk__Vidx) clk__Vcvt = clk;
    svLogicVecVal read_data1__Vcvt[1];
    svLogicVecVal read_data2__Vcvt[1];
    long long ref_register_file_inner_protectlib_seq_update__Vfuncrtn__Vcvt;
    ref_register_file_inner_protectlib_seq_update__Vfuncrtn__Vcvt = ref_register_file_inner_protectlib_seq_update(handle___05FV__Vcvt, clk__Vcvt, read_data1__Vcvt, read_data2__Vcvt);
    read_data1 = VL_SET_I_SVLV(read_data1__Vcvt);
    read_data2 = VL_SET_I_SVLV(read_data2__Vcvt);
    ref_register_file_inner_protectlib_seq_update__Vfuncrtn 
        = ref_register_file_inner_protectlib_seq_update__Vfuncrtn__Vcvt;
}

extern "C" void ref_register_file_inner_protectlib_combo_ignore(void* handle___05FV, svLogic rst, const svLogicVecVal* read_address1, const svLogicVecVal* read_address2, const svLogicVecVal* write_address, svLogic write_enable, const svLogicVecVal* write_data);

VL_INLINE_OPT void top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_ignore_TOP(QData/*63:0*/ handle___05FV, CData/*0:0*/ rst, CData/*4:0*/ read_address1, CData/*4:0*/ read_address2, CData/*4:0*/ write_address, CData/*0:0*/ write_enable, IData/*31:0*/ write_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_combo_ignore_TOP\n"); );
    // Body
    void* handle___05FV__Vcvt;
    for (size_t handle___05FV__Vidx = 0; handle___05FV__Vidx < 1; ++handle___05FV__Vidx) handle___05FV__Vcvt = VL_CVT_Q_VP(handle___05FV);
    svLogic rst__Vcvt;
    for (size_t rst__Vidx = 0; rst__Vidx < 1; ++rst__Vidx) rst__Vcvt = rst;
    svLogicVecVal read_address1__Vcvt[1];
    for (size_t read_address1__Vidx = 0; read_address1__Vidx < 1; ++read_address1__Vidx) VL_SET_SVLV_I(5, read_address1__Vcvt + 1 * read_address1__Vidx, read_address1);
    svLogicVecVal read_address2__Vcvt[1];
    for (size_t read_address2__Vidx = 0; read_address2__Vidx < 1; ++read_address2__Vidx) VL_SET_SVLV_I(5, read_address2__Vcvt + 1 * read_address2__Vidx, read_address2);
    svLogicVecVal write_address__Vcvt[1];
    for (size_t write_address__Vidx = 0; write_address__Vidx < 1; ++write_address__Vidx) VL_SET_SVLV_I(5, write_address__Vcvt + 1 * write_address__Vidx, write_address);
    svLogic write_enable__Vcvt;
    for (size_t write_enable__Vidx = 0; write_enable__Vidx < 1; ++write_enable__Vidx) write_enable__Vcvt = write_enable;
    svLogicVecVal write_data__Vcvt[1];
    for (size_t write_data__Vidx = 0; write_data__Vidx < 1; ++write_data__Vidx) VL_SET_SVLV_I(32, write_data__Vcvt + 1 * write_data__Vidx, write_data);
    ref_register_file_inner_protectlib_combo_ignore(handle___05FV__Vcvt, rst__Vcvt, read_address1__Vcvt, read_address2__Vcvt, write_address__Vcvt, write_enable__Vcvt, write_data__Vcvt);
}

extern "C" void ref_register_file_inner_protectlib_final(void* handle___05FV);

VL_INLINE_OPT void top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_final_TOP(QData/*63:0*/ handle___05FV) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root____Vdpiimwrap_test_example__DOT__dut__DOT__golden__DOT__inner__DOT__ref_register_file_inner_protectlib_final_TOP\n"); );
    // Body
    void* handle___05FV__Vcvt;
    for (size_t handle___05FV__Vidx = 0; handle___05FV__Vidx < 1; ++handle___05FV__Vidx) handle___05FV__Vcvt = VL_CVT_Q_VP(handle___05FV);
    ref_register_file_inner_protectlib_final(handle___05FV__Vcvt);
}

VL_INLINE_OPT VlCoroutine top___024root___eval_initial__TOP__2(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_initial__TOP__2\n"); );
    // Init
    CData/*0:0*/ __Vtask_test_example__DOT__set_write_port__3__write_enable;
    __Vtask_test_example__DOT__set_write_port__3__write_enable = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_write_port__3__write_addr;
    __Vtask_test_example__DOT__set_write_port__3__write_addr = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_write_port__3__write_data;
    __Vtask_test_example__DOT__set_write_port__3__write_data = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_read_ports__4__addr1;
    __Vtask_test_example__DOT__set_read_ports__4__addr1 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_read_ports__4__addr2;
    __Vtask_test_example__DOT__set_read_ports__4__addr2 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__5__exp_read_data1;
    __Vtask_test_example__DOT__prove__5__exp_read_data1 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__5__exp_read_data2;
    __Vtask_test_example__DOT__prove__5__exp_read_data2 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__6__exp_read_data1;
    __Vtask_test_example__DOT__prove__6__exp_read_data1 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__6__exp_read_data2;
    __Vtask_test_example__DOT__prove__6__exp_read_data2 = 0;
    CData/*0:0*/ __Vtask_test_example__DOT__set_write_port__7__write_enable;
    __Vtask_test_example__DOT__set_write_port__7__write_enable = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_write_port__7__write_addr;
    __Vtask_test_example__DOT__set_write_port__7__write_addr = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_write_port__7__write_data;
    __Vtask_test_example__DOT__set_write_port__7__write_data = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_read_ports__8__addr1;
    __Vtask_test_example__DOT__set_read_ports__8__addr1 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_read_ports__8__addr2;
    __Vtask_test_example__DOT__set_read_ports__8__addr2 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__9__exp_read_data1;
    __Vtask_test_example__DOT__prove__9__exp_read_data1 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__9__exp_read_data2;
    __Vtask_test_example__DOT__prove__9__exp_read_data2 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__10__exp_read_data1;
    __Vtask_test_example__DOT__prove__10__exp_read_data1 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__10__exp_read_data2;
    __Vtask_test_example__DOT__prove__10__exp_read_data2 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_read_ports__11__addr1;
    __Vtask_test_example__DOT__set_read_ports__11__addr1 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_read_ports__11__addr2;
    __Vtask_test_example__DOT__set_read_ports__11__addr2 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__12__exp_read_data1;
    __Vtask_test_example__DOT__prove__12__exp_read_data1 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__12__exp_read_data2;
    __Vtask_test_example__DOT__prove__12__exp_read_data2 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_read_ports__13__addr1;
    __Vtask_test_example__DOT__set_read_ports__13__addr1 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_read_ports__13__addr2;
    __Vtask_test_example__DOT__set_read_ports__13__addr2 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__14__exp_read_data1;
    __Vtask_test_example__DOT__prove__14__exp_read_data1 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__14__exp_read_data2;
    __Vtask_test_example__DOT__prove__14__exp_read_data2 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_read_ports__15__addr1;
    __Vtask_test_example__DOT__set_read_ports__15__addr1 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__set_read_ports__15__addr2;
    __Vtask_test_example__DOT__set_read_ports__15__addr2 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__16__exp_read_data1;
    __Vtask_test_example__DOT__prove__16__exp_read_data1 = 0;
    IData/*31:0*/ __Vtask_test_example__DOT__prove__16__exp_read_data2;
    __Vtask_test_example__DOT__prove__16__exp_read_data2 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x6d706c65U;
    __Vtemp_1[2U] = 0x5f657861U;
    __Vtemp_1[3U] = 0x74657374U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->test_example__DOT__dut_read_address1 = 0U;
    vlSelf->test_example__DOT__dut_read_address2 = 0U;
    vlSelf->test_example__DOT__dut_write_address = 0U;
    vlSelf->test_example__DOT__dut_write_data = 0U;
    vlSelf->test_example__DOT__dut_write_enable = 0U;
    VL_WRITEF("------------------------------ (%6# ns) Write value to register\n",
              64,VL_TIME_UNITED_Q(1));
    co_await vlSelf->__VtrigSched_h9a72ee7d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge test_example.clk)", 
                                                       "test/sv/test_example.sv", 
                                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/sv/test_example.sv", 
                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test_example__DOT__rst = 1U;
    vlSelf->test_example__DOT__dut_read_address1 = 0U;
    vlSelf->test_example__DOT__dut_read_address2 = 0U;
    vlSelf->test_example__DOT__dut_write_address = 0U;
    vlSelf->test_example__DOT__dut_write_data = 0U;
    vlSelf->test_example__DOT__dut_write_enable = 0U;
    co_await vlSelf->__VtrigSched_h9a72eebe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_example.clk)", 
                                                       "test/sv/test_example.sv", 
                                                       139);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/sv/test_example.sv", 
                                       139);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h9a72eebe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_example.clk)", 
                                                       "test/sv/test_example.sv", 
                                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/sv/test_example.sv", 
                                       140);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->test_example__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h9a72eebe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_example.clk)", 
                                                       "test/sv/test_example.sv", 
                                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/sv/test_example.sv", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_test_example__DOT__set_write_port__3__write_data = 0xcafebabeU;
    __Vtask_test_example__DOT__set_write_port__3__write_addr = 1U;
    __Vtask_test_example__DOT__set_write_port__3__write_enable = 1U;
    vlSelf->test_example__DOT__dut_write_address = 
        (0x1fU & __Vtask_test_example__DOT__set_write_port__3__write_addr);
    vlSelf->test_example__DOT__dut_write_data = __Vtask_test_example__DOT__set_write_port__3__write_data;
    vlSelf->test_example__DOT__dut_write_enable = __Vtask_test_example__DOT__set_write_port__3__write_enable;
    __Vtask_test_example__DOT__set_read_ports__4__addr2 = 0U;
    __Vtask_test_example__DOT__set_read_ports__4__addr1 = 1U;
    vlSelf->test_example__DOT__dut_read_address1 = 
        (0x1fU & __Vtask_test_example__DOT__set_read_ports__4__addr1);
    vlSelf->test_example__DOT__dut_read_address2 = 
        (0x1fU & __Vtask_test_example__DOT__set_read_ports__4__addr2);
    co_await vlSelf->__VtrigSched_h9a72eebe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_example.clk)", 
                                                       "test/sv/test_example.sv", 
                                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_test_example__DOT__prove__5__exp_read_data2 = 0U;
    __Vtask_test_example__DOT__prove__5__exp_read_data1 = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data1 
                       != __Vtask_test_example__DOT__prove__5__exp_read_data1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data1 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data1,
                          32,__Vtask_test_example__DOT__prove__5__exp_read_data1);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data2 
                       != __Vtask_test_example__DOT__prove__5__exp_read_data2))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data2 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data2,
                          32,__Vtask_test_example__DOT__prove__5__exp_read_data2);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/sv/test_example.sv", 
                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_test_example__DOT__prove__6__exp_read_data2 = 0U;
    __Vtask_test_example__DOT__prove__6__exp_read_data1 = 0xcafebabeU;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data1 
                       != __Vtask_test_example__DOT__prove__6__exp_read_data1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data1 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data1,
                          32,__Vtask_test_example__DOT__prove__6__exp_read_data1);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data2 
                       != __Vtask_test_example__DOT__prove__6__exp_read_data2))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data2 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data2,
                          32,__Vtask_test_example__DOT__prove__6__exp_read_data2);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    __Vtask_test_example__DOT__set_write_port__7__write_data = 0xdeadbeefU;
    __Vtask_test_example__DOT__set_write_port__7__write_addr = 0x1fU;
    __Vtask_test_example__DOT__set_write_port__7__write_enable = 1U;
    vlSelf->test_example__DOT__dut_write_address = 
        (0x1fU & __Vtask_test_example__DOT__set_write_port__7__write_addr);
    vlSelf->test_example__DOT__dut_write_data = __Vtask_test_example__DOT__set_write_port__7__write_data;
    vlSelf->test_example__DOT__dut_write_enable = __Vtask_test_example__DOT__set_write_port__7__write_enable;
    __Vtask_test_example__DOT__set_read_ports__8__addr2 = 0x1fU;
    __Vtask_test_example__DOT__set_read_ports__8__addr1 = 1U;
    vlSelf->test_example__DOT__dut_read_address1 = 
        (0x1fU & __Vtask_test_example__DOT__set_read_ports__8__addr1);
    vlSelf->test_example__DOT__dut_read_address2 = 
        (0x1fU & __Vtask_test_example__DOT__set_read_ports__8__addr2);
    co_await vlSelf->__VtrigSched_h9a72eebe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_example.clk)", 
                                                       "test/sv/test_example.sv", 
                                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_test_example__DOT__prove__9__exp_read_data2 = 0U;
    __Vtask_test_example__DOT__prove__9__exp_read_data1 = 0xcafebabeU;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data1 
                       != __Vtask_test_example__DOT__prove__9__exp_read_data1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data1 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data1,
                          32,__Vtask_test_example__DOT__prove__9__exp_read_data1);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data2 
                       != __Vtask_test_example__DOT__prove__9__exp_read_data2))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data2 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data2,
                          32,__Vtask_test_example__DOT__prove__9__exp_read_data2);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/sv/test_example.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_test_example__DOT__prove__10__exp_read_data2 = 0xdeadbeefU;
    __Vtask_test_example__DOT__prove__10__exp_read_data1 = 0xcafebabeU;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data1 
                       != __Vtask_test_example__DOT__prove__10__exp_read_data1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data1 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data1,
                          32,__Vtask_test_example__DOT__prove__10__exp_read_data1);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data2 
                       != __Vtask_test_example__DOT__prove__10__exp_read_data2))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data2 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data2,
                          32,__Vtask_test_example__DOT__prove__10__exp_read_data2);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h9a72eebe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_example.clk)", 
                                                       "test/sv/test_example.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("------------------------------ (%6# ns) Check asynchron read\n",
              64,VL_TIME_UNITED_Q(1));
    __Vtask_test_example__DOT__set_read_ports__11__addr2 = 2U;
    __Vtask_test_example__DOT__set_read_ports__11__addr1 = 0x1fU;
    vlSelf->test_example__DOT__dut_read_address1 = 
        (0x1fU & __Vtask_test_example__DOT__set_read_ports__11__addr1);
    vlSelf->test_example__DOT__dut_read_address2 = 
        (0x1fU & __Vtask_test_example__DOT__set_read_ports__11__addr2);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/sv/test_example.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_test_example__DOT__prove__12__exp_read_data2 = 0U;
    __Vtask_test_example__DOT__prove__12__exp_read_data1 = 0xdeadbeefU;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data1 
                       != __Vtask_test_example__DOT__prove__12__exp_read_data1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data1 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data1,
                          32,__Vtask_test_example__DOT__prove__12__exp_read_data1);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data2 
                       != __Vtask_test_example__DOT__prove__12__exp_read_data2))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data2 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data2,
                          32,__Vtask_test_example__DOT__prove__12__exp_read_data2);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    __Vtask_test_example__DOT__set_read_ports__13__addr2 = 1U;
    __Vtask_test_example__DOT__set_read_ports__13__addr1 = 0x1eU;
    vlSelf->test_example__DOT__dut_read_address1 = 
        (0x1fU & __Vtask_test_example__DOT__set_read_ports__13__addr1);
    vlSelf->test_example__DOT__dut_read_address2 = 
        (0x1fU & __Vtask_test_example__DOT__set_read_ports__13__addr2);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/sv/test_example.sv", 
                                       107);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_test_example__DOT__prove__14__exp_read_data2 = 0xcafebabeU;
    __Vtask_test_example__DOT__prove__14__exp_read_data1 = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data1 
                       != __Vtask_test_example__DOT__prove__14__exp_read_data1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data1 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data1,
                          32,__Vtask_test_example__DOT__prove__14__exp_read_data1);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data2 
                       != __Vtask_test_example__DOT__prove__14__exp_read_data2))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data2 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data2,
                          32,__Vtask_test_example__DOT__prove__14__exp_read_data2);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    __Vtask_test_example__DOT__set_read_ports__15__addr2 = 0U;
    __Vtask_test_example__DOT__set_read_ports__15__addr1 = 1U;
    vlSelf->test_example__DOT__dut_read_address1 = 
        (0x1fU & __Vtask_test_example__DOT__set_read_ports__15__addr1);
    vlSelf->test_example__DOT__dut_read_address2 = 
        (0x1fU & __Vtask_test_example__DOT__set_read_ports__15__addr2);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/sv/test_example.sv", 
                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_test_example__DOT__prove__16__exp_read_data2 = 0U;
    __Vtask_test_example__DOT__prove__16__exp_read_data1 = 0xcafebabeU;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data1 
                       != __Vtask_test_example__DOT__prove__16__exp_read_data1))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data1 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data1,
                          32,__Vtask_test_example__DOT__prove__16__exp_read_data1);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((vlSelf->test_example__DOT__dut_read_data2 
                       != __Vtask_test_example__DOT__prove__16__exp_read_data2))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("(%6# ns) read_data2 = 0x%x (0x%x)\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlSelf->test_example__DOT__dut_read_data2,
                          32,__Vtask_test_example__DOT__prove__16__exp_read_data2);
                vlSelf->test_example__DOT__error_count 
                    = ((IData)(1U) + vlSelf->test_example__DOT__error_count);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h9a72eebe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_example.clk)", 
                                                       "test/sv/test_example.sv", 
                                                       114);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h9a72eebe__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_example.clk)", 
                                                       "test/sv/test_example.sv", 
                                                       115);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0U != vlSelf->test_example__DOT__error_count)) {
        VL_WRITEF("\033[0;31m\nSome test(s) failed! (# Errors: %4d)\n",
                  32,vlSelf->test_example__DOT__error_count);
    } else {
        VL_WRITEF("\033[0;32m\nAll tests passed! (# Errors: %4d)\n",
                  32,vlSelf->test_example__DOT__error_count);
    }
    VL_WRITEF("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!! TEST DONE !!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\033[0m\n");
    VL_FINISH_MT("test/sv/test_example.sv", 121, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void top___024root___dump_triggers__act(top___024root* vlSelf);
#endif  // VL_DEBUG

void top___024root___eval_triggers__act(top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->test_example__DOT__clk) 
                                     ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__test_example__DOT__clk__0)));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->test_example__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__test_example__DOT__clk__0)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->test_example__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__test_example__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__test_example__DOT__clk__0 
        = vlSelf->test_example__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
