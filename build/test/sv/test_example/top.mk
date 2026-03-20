# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f top.mk

default: top

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = top
# Module prefix (from --prefix)
VM_MODPREFIX = top
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-DVL_TIME_CONTEXT \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	/home/aveen_s_/HaDes-V-Challenge/ref/libref_cpu_inner.so \
	/home/aveen_s_/HaDes-V-Challenge/ref/libref_decode_stage_inner.so \
	/home/aveen_s_/HaDes-V-Challenge/ref/libref_execute_stage_inner.so \
	/home/aveen_s_/HaDes-V-Challenge/ref/libref_fetch_stage_inner.so \
	/home/aveen_s_/HaDes-V-Challenge/ref/libref_instruction_decoder_inner.so \
	/home/aveen_s_/HaDes-V-Challenge/ref/libref_memory_stage_inner.so \
	/home/aveen_s_/HaDes-V-Challenge/ref/libref_register_file_inner.so \
	/home/aveen_s_/HaDes-V-Challenge/ref/libref_writeback_stage_inner.so \
	-lz \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \


### Default rules...
# Include list of all generated classes
include top_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)


### Link rules... (from --exe)
top: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
