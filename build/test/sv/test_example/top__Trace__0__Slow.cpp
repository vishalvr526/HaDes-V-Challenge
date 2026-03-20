// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "top__Syms.h"


VL_ATTR_COLD void top___024root__trace_init_sub__TOP__0(top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("test_example ");
    tracep->declBit(c+8,"clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"clk_vga",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1,"rst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2,"error_count",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->declBus(c+3,"dut_read_address1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,"dut_read_data1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"dut_read_address2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,"dut_read_data2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,"dut_write_address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,"dut_write_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,"dut_write_enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+8,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"read_address1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+10,"read_data1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"read_address2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+11,"read_data2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"write_address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+6,"write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+7,"write_enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("golden ");
    tracep->declBit(c+8,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"read_address1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+10,"read_data1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"read_address2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+11,"read_data2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"write_address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+6,"write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+7,"write_enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("inner ");
    tracep->declBit(c+8,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"read_address1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+4,"read_address2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+5,"write_address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+7,"write_enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"read_data1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"read_data2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void top___024root__trace_init_sub__TOP__instruction__0(top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root__trace_init_sub__TOP__instruction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("NOP\206 ");
    {
        const char* __VenumItemNames[]
        = {"LUI", "AUIPC", "JAL", "JALR", "BEQ", "BNE", 
                                "BLT", "BGE", "BLTU", 
                                "BGEU", "LB", "LH", 
                                "LW", "LBU", "LHU", 
                                "SB", "SH", "SW", "ADDI", 
                                "SLTI", "SLTIU", "XORI", 
                                "ORI", "ANDI", "SLLI", 
                                "SRLI", "SRAI", "ADD", 
                                "SUB", "SLL", "SLT", 
                                "SLTU", "XOR", "SRL", 
                                "SRA", "OR", "AND", 
                                "FENCE", "FENCE_I", 
                                "ECALL", "EBREAK", 
                                "CSRRW", "CSRRS", "CSRRC", 
                                "CSRRWI", "CSRRSI", 
                                "CSRRCI", "MRET", "WFI", 
                                "ILLEGAL"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "11110", 
                                "11111", "100000", 
                                "100001", "100010", 
                                "100011", "100100", 
                                "100101", "100110", 
                                "100111", "101000", 
                                "101001", "101010", 
                                "101011", "101100", 
                                "101101", "101110", 
                                "101111", "110000", 
                                "110001"};
        tracep->declDTypeEnum(1, "op::t", 50, 6, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+12,"op",1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+13,"rd_address",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+13,"rs1_address",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+13,"rs2_address",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    {
        const char* __VenumItemNames[]
        = {"MVENDORID", "MARCHID", "MIMPID", "MHARTID", 
                                "MCONFIGPTR", "MSTATUS", 
                                "MISA", "MEDELEG", 
                                "MIDELEG", "MIE", "MTVEC", 
                                "MCOUNTEREN", "MSTATUSH", 
                                "MSCRATCH", "MEPC", 
                                "MCAUSE", "MTVAL", 
                                "MIP", "MCYCLE", "MINSTRET", 
                                "MHPMCOUNTER3", "MHPMCOUNTER4", 
                                "MHPMCOUNTER5", "MHPMCOUNTER6", 
                                "MHPMCOUNTER7", "MHPMCOUNTER8", 
                                "MHPMCOUNTER9", "MHPMCOUNTER10", 
                                "MHPMCOUNTER11", "MHPMCOUNTER12", 
                                "MHPMCOUNTER13", "MHPMCOUNTER14", 
                                "MHPMCOUNTER15", "MHPMCOUNTER16", 
                                "MHPMCOUNTER17", "MHPMCOUNTER18", 
                                "MHPMCOUNTER19", "MHPMCOUNTER20", 
                                "MHPMCOUNTER21", "MHPMCOUNTER22", 
                                "MHPMCOUNTER23", "MHPMCOUNTER24", 
                                "MHPMCOUNTER25", "MHPMCOUNTER26", 
                                "MHPMCOUNTER27", "MHPMCOUNTER28", 
                                "MHPMCOUNTER29", "MHPMCOUNTER30", 
                                "MHPMCOUNTER31", "MCYCLEH", 
                                "MINSTRETH", "MHPMCOUNTER3H", 
                                "MHPMCOUNTER4H", "MHPMCOUNTER5H", 
                                "MHPMCOUNTER6H", "MHPMCOUNTER7H", 
                                "MHPMCOUNTER8H", "MHPMCOUNTER9H", 
                                "MHPMCOUNTER10H", "MHPMCOUNTER11H", 
                                "MHPMCOUNTER12H", "MHPMCOUNTER13H", 
                                "MHPMCOUNTER14H", "MHPMCOUNTER15H", 
                                "MHPMCOUNTER16H", "MHPMCOUNTER17H", 
                                "MHPMCOUNTER18H", "MHPMCOUNTER19H", 
                                "MHPMCOUNTER20H", "MHPMCOUNTER21H", 
                                "MHPMCOUNTER22H", "MHPMCOUNTER23H", 
                                "MHPMCOUNTER24H", "MHPMCOUNTER25H", 
                                "MHPMCOUNTER26H", "MHPMCOUNTER27H", 
                                "MHPMCOUNTER28H", "MHPMCOUNTER29H", 
                                "MHPMCOUNTER30H", "MHPMCOUNTER31H", 
                                "MHPMEVENT3", "MHPMEVENT4", 
                                "MHPMEVENT5", "MHPMEVENT6", 
                                "MHPMEVENT7", "MHPMEVENT8", 
                                "MHPMEVENT9", "MHPMEVENT10", 
                                "MHPMEVENT11", "MHPMEVENT12", 
                                "MHPMEVENT13", "MHPMEVENT14", 
                                "MHPMEVENT15", "MHPMEVENT16", 
                                "MHPMEVENT17", "MHPMEVENT18", 
                                "MHPMEVENT19", "MHPMEVENT20", 
                                "MHPMEVENT21", "MHPMEVENT22", 
                                "MHPMEVENT23", "MHPMEVENT24", 
                                "MHPMEVENT25", "MHPMEVENT26", 
                                "MHPMEVENT27", "MHPMEVENT28", 
                                "MHPMEVENT29", "MHPMEVENT30", 
                                "MHPMEVENT31"};
        const char* __VenumItemValues[]
        = {"111100010001", "111100010010", "111100010011", 
                                "111100010100", "111100010101", 
                                "1100000000", "1100000001", 
                                "1100000010", "1100000011", 
                                "1100000100", "1100000101", 
                                "1100000110", "1100010000", 
                                "1101000000", "1101000001", 
                                "1101000010", "1101000011", 
                                "1101000100", "101100000000", 
                                "101100000010", "101100000011", 
                                "101100000100", "101100000101", 
                                "101100000110", "101100000111", 
                                "101100001000", "101100001001", 
                                "101100001010", "101100001011", 
                                "101100001100", "101100001101", 
                                "101100001110", "101100001111", 
                                "101100010000", "101100010001", 
                                "101100010010", "101100010011", 
                                "101100010100", "101100010101", 
                                "101100010110", "101100010111", 
                                "101100011000", "101100011001", 
                                "101100011010", "101100011011", 
                                "101100011100", "101100011101", 
                                "101100011110", "101100011111", 
                                "101110000000", "101110000010", 
                                "101110000011", "101110000100", 
                                "101110000101", "101110000110", 
                                "101110000111", "101110001000", 
                                "101110001001", "101110001010", 
                                "101110001011", "101110001100", 
                                "101110001101", "101110001110", 
                                "101110001111", "101110010000", 
                                "101110010001", "101110010010", 
                                "101110010011", "101110010100", 
                                "101110010101", "101110010110", 
                                "101110010111", "101110011000", 
                                "101110011001", "101110011010", 
                                "101110011011", "101110011100", 
                                "101110011101", "101110011110", 
                                "101110011111", "1100100011", 
                                "1100100100", "1100100101", 
                                "1100100110", "1100100111", 
                                "1100101000", "1100101001", 
                                "1100101010", "1100101011", 
                                "1100101100", "1100101101", 
                                "1100101110", "1100101111", 
                                "1100110000", "1100110001", 
                                "1100110010", "1100110011", 
                                "1100110100", "1100110101", 
                                "1100110110", "1100110111", 
                                "1100111000", "1100111001", 
                                "1100111010", "1100111011", 
                                "1100111100", "1100111101", 
                                "1100111110", "1100111111"};
        tracep->declDTypeEnum(2, "csr::t", 109, 12, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+14,"csr",2, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+15,"immediate",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void top___024root__trace_init_sub__TOP__clk_params__0(top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root__trace_init_sub__TOP__clk_params__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declDouble(c+16,"INPUT_CLK_FREQUENCY_MHZ",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declDouble(c+18,"INPUT_CLK_JITTER_PS",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declDouble(c+20,"INPUT_CLK_JITTER_TO_PERIOD",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declDouble(c+22,"INPUT_CLK_PERIOD_NS",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declDouble(c+22,"MMCM_MUL",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declBus(c+24,"MMCM_DIV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declDouble(c+25,"MMCM_DIV_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declDouble(c+27,"SYS_CLK_FREQUENCY_MHZ",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declDouble(c+25,"SYS_CLK_PERIOD_NS",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declBus(c+29,"PLL1_MUL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+30,"PLL1_DIV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declDouble(c+22,"PLL1_DIV_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declDouble(c+31,"PLL1_FREQUENCY_MHZ",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declDouble(c+33,"PLL1_PERIOD_NS",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declBus(c+35,"PLL2_MUL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+36,"PLL2_DIV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declDouble(c+37,"PLL2_DIV_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declDouble(c+39,"PLL2_FREQUENCY_MHZ",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declDouble(c+41,"PLL2_PERIOD_NS",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declDouble(c+39,"VGA_CLK_FREQUENCY_MHZ",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declDouble(c+41,"VGA_CLK_PERIOD_NS",-1, FST_VD_IMPLICIT,FST_VT_VCD_REAL_PARAMETER, false,-1);
    tracep->declBus(c+43,"SIM_CYCLES_PER_SYS_CLK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+44,"SIM_CYCLES_PER_VGA_CLK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
}

VL_ATTR_COLD void top___024root__trace_init_top(top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root__trace_init_top\n"); );
    // Body
    top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("clk_params ");
    top___024root__trace_init_sub__TOP__clk_params__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instruction ");
    top___024root__trace_init_sub__TOP__instruction__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void top___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void top___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void top___024root__trace_register(top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void top___024root__trace_full_sub_0(top___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void top___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root__trace_full_top_0\n"); );
    // Init
    top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<top___024root*>(voidSelf);
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void top___024root__trace_full_sub_0(top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->test_example__DOT__rst));
    bufp->fullIData(oldp+2,(vlSelf->test_example__DOT__error_count),32);
    bufp->fullCData(oldp+3,(vlSelf->test_example__DOT__dut_read_address1),5);
    bufp->fullCData(oldp+4,(vlSelf->test_example__DOT__dut_read_address2),5);
    bufp->fullCData(oldp+5,(vlSelf->test_example__DOT__dut_write_address),5);
    bufp->fullIData(oldp+6,(vlSelf->test_example__DOT__dut_write_data),32);
    bufp->fullBit(oldp+7,(vlSelf->test_example__DOT__dut_write_enable));
    bufp->fullBit(oldp+8,(vlSelf->test_example__DOT__clk));
    bufp->fullBit(oldp+9,(vlSelf->test_example__DOT__clk_vga));
    bufp->fullIData(oldp+10,(vlSelf->test_example__DOT__dut_read_data1),32);
    bufp->fullIData(oldp+11,(vlSelf->test_example__DOT__dut_read_data2),32);
    bufp->fullCData(oldp+12,(0x12U),6);
    bufp->fullCData(oldp+13,(0U),5);
    bufp->fullSData(oldp+14,(0U),12);
    bufp->fullIData(oldp+15,(0U),32);
    bufp->fullDouble(oldp+16,(100.0));
    bufp->fullDouble(oldp+18,(95.0));
    bufp->fullDouble(oldp+20,(1.00000000000000002e-02));
    bufp->fullDouble(oldp+22,(10.0));
    bufp->fullIData(oldp+24,(1U),32);
    bufp->fullDouble(oldp+25,(20.0));
    bufp->fullDouble(oldp+27,(50.0));
    bufp->fullIData(oldp+29,(0x35U),32);
    bufp->fullIData(oldp+30,(5U),32);
    bufp->fullDouble(oldp+31,(106.0));
    bufp->fullDouble(oldp+33,(9.43396226415094397e+00));
    bufp->fullIData(oldp+35,(0x13U),32);
    bufp->fullIData(oldp+36,(2U),32);
    bufp->fullDouble(oldp+37,(40.0));
    bufp->fullDouble(oldp+39,(2.51750000000000007e+01));
    bufp->fullDouble(oldp+41,(3.97219463753723900e+01));
    bufp->fullIData(oldp+43,(0x14U),32);
    bufp->fullIData(oldp+44,(0x28U),32);
}
