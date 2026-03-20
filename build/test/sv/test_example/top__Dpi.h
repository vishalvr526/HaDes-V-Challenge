// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_TOP__DPI_H_
#define VERILATED_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at ref/ref_register_file_inner.sv:30:34
    extern void ref_register_file_inner_protectlib_check_hash(int protectlib_hash___05FV);
    // DPI import at ref/ref_register_file_inner.sv:60:34
    extern void ref_register_file_inner_protectlib_combo_ignore(void* handle___05FV, svLogic rst, const svLogicVecVal* read_address1, const svLogicVecVal* read_address2, const svLogicVecVal* write_address, svLogic write_enable, const svLogicVecVal* write_data);
    // DPI import at ref/ref_register_file_inner.sv:38:37
    extern long long ref_register_file_inner_protectlib_combo_update(void* handle___05FV, svLogic rst, const svLogicVecVal* read_address1, const svLogicVecVal* read_address2, const svLogicVecVal* write_address, svLogic write_enable, svLogicVecVal* read_data1, svLogicVecVal* read_data2, const svLogicVecVal* write_data);
    // DPI import at ref/ref_register_file_inner.sv:35:37
    extern void* ref_register_file_inner_protectlib_create(const char* scope___05FV);
    // DPI import at ref/ref_register_file_inner.sv:71:34
    extern void ref_register_file_inner_protectlib_final(void* handle___05FV);
    // DPI import at ref/ref_register_file_inner.sv:51:37
    extern long long ref_register_file_inner_protectlib_seq_update(void* handle___05FV, svLogic clk, svLogicVecVal* read_data1, svLogicVecVal* read_data2);

#ifdef __cplusplus
}
#endif

#endif  // guard
