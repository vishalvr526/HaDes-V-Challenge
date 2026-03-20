/* Copyright (c) 2024 Tobias Scheipel, David Beikircher, Florian Riedl
 * Embedded Architectures & Systems Group, Graz University of Technology
 * SPDX-License-Identifier: MIT
 * ---------------------------------------------------------------------
 * File: fetch_stage.sv
 */



module fetch_stage (
    input logic clk,
    input logic rst,

    // Memory interface
    wishbone_interface.master wb,

    //  Output data
    output logic [31:0] instruction_reg_out,
    output logic [31:0] program_counter_reg_out,

    // Pipeline control
    output pipeline_status::forwards_t  status_forwards_out,
    input  pipeline_status::backwards_t status_backwards_in,
    input  logic [31:0] jump_address_backwards_in
);

    // TODO: Delete the following lin
   logic [31:0] pc;

always_ff @(posedge clk) begin
    if (rst)
        pc <= 32'd0;
    else if (status_backwards_in.valid && status_backwards_in.jump)
        pc <= jump_address_backwards_in;
    else
        pc <= pc + 32'd4;
end

assign program_counter_reg_out = pc;

assign wb.adr = pc;
assign wb.cyc = 1'b1;assign wb.stb = 1'b1;
assign wb.we  = 1'b0;

assign instruction_reg_out = wb.dat_r;
endmodule

