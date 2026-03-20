// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "top__Syms.h"
#include "top__Syms.h"
#include "top___024root.h"

void top___024root___ctor_var_reset(top___024root* vlSelf);

top___024root::top___024root(top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    top___024root___ctor_var_reset(this);
}

void top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

top___024root::~top___024root() {
}
