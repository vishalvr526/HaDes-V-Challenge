/* Copyright (c) 2024 Tobias Scheipel, David Beikircher, Florian Riedl
 * Embedded Architectures & Systems Group, Graz University of Technology
 * SPDX-License-Identifier: MIT
 * ---------------------------------------------------------------------
 * File: writeback_stage.sv
 */



module writeback_stage (
    input logic clk,
    input logic rst,

    // Inputs
    input logic [31:0]   source_data_in,
    input logic [31:0]   rd_data_in,
    input instruction::t instruction_in,
    input logic [31:0]   program_counter_in,
    input logic [31:0]   next_program_counter_in,

    // Interrupt signals
    input logic external_interrupt_in,
    input logic timer_interrupt_in,

    // Outputs
    output forwarding::t forwarding_out,

    // Pipeline control
    input  pipeline_status::forwards_t  status_forwards_in,
    output pipeline_status::backwards_t status_backwards_out,
    output logic [31:0] jump_address_backwards_out
);

    // TODO: Delete the following line and implement this module.
    assign forwarding_out = '0;

assign status_backwards_out = status_forwards_in;
assign jump_address_backwards_out = 32'd0;

logic write_enable;

always_comb begin
    case (instruction_in.opcode)
        7'b0110011: write_enable = 1'b1; // R-type
        7'b0010011: write_enable = 1'b1; // I-type
        7'b0000011: write_enable = 1'b1; // LOAD
        default:    write_enable = 1'b0;
    endcase
end

assign forwarding_out.rd_data = rd_data_in;
assign forwarding_out.rd_addr = instruction_in.rd;
assign forwarding_out.we      = write_enable;



endmodule
