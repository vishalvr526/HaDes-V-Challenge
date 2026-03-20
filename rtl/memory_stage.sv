/* Copyright (c) 2024 Tobias Scheipel, David Beikircher, Florian Riedl
 * Embedded Architectures & Systems Group, Graz University of Technology
 * SPDX-License-Identifier: MIT
 * ---------------------------------------------------------------------
 * File: memory_stage.sv
 */



module memory_stage (
    input logic clk,
    input logic rst,

    // Memory interface
    wishbone_interface.master wb,

    // Inputs
    input logic [31:0]   source_data_in,
    input logic [31:0]   rd_data_in,
    input instruction::t instruction_in,
    input logic [31:0]   program_counter_in,
    input logic [31:0]   next_program_counter_in,

    // Outputs
    output logic [31:0]   source_data_reg_out,
    output logic [31:0]   rd_data_reg_out,
    output instruction::t instruction_reg_out,
    output logic [31:0]   program_counter_reg_out,
    output logic [31:0]   next_program_counter_reg_out,
    output forwarding::t  forwarding_out,

    // Pipeline control
    input  pipeline_status::forwards_t  status_forwards_in,
    output pipeline_status::forwards_t  status_forwards_out,
    input  pipeline_status::backwards_t status_backwards_in,
    output pipeline_status::backwards_t status_backwards_out,
    input  logic [31:0] jump_address_backwards_in,
    output logic [31:0] jump_address_backwards_out
);

    // TODO: Delete the following line and implement this module.
    assign program_counter_reg_out = program_counter_in;
assign next_program_counter_reg_out = next_program_counter_in;
assign instruction_reg_out = instruction_in;
assign source_data_reg_out = source_data_in;

logic [31:0] mem_data;

always_comb begin
    case (instruction_in.opcode)

        // LOAD (LW)
        7'b0000011: begin
            mem_data = wb.dat_r;
        end

        // STORE (SW)
        7'b0100011: begin
            mem_data = 32'd0; // nothing to write back
        end

        default: begin
            mem_data = rd_data_in; // ALU result pass
        end

    endcase
end

assign wb.adr = rd_data_in;
assign wb.dat_w = rs2_data_in;
assign wb.we  = (instruction_in.opcode == 7'b0100011); // store
assign wb.cyc = 1'b1;
assign wb.stb = 1'b1;

assign rd_data_reg_out = mem_data;

endmodule
