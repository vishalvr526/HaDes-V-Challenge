/* Copyright (c) 2024 Tobias Scheipel, David Beikircher, Florian Riedl
 * Embedded Architectures & Systems Group, Graz University of Technology
 * SPDX-License-Identifier: MIT
 * ---------------------------------------------------------------------
 * File: instruction_decoder.sv
 */



module instruction_decoder (
    input  logic [31:0]   instruction_in,
    output instruction::t instruction_out
);

    // TODO: Delete the following line and implement this module.
    logic [6:0] opcode;
logic [4:0] rd, rs1, rs2;
logic [2:0] funct3;
logic [6:0] funct7;
logic [31:0] imm;

assign opcode = instruction_in[6:0];
assign rd     = instruction_in[11:7];
assign funct3 = instruction_in[14:12];
assign rs1    = instruction_in[19:15];
assign rs2    = instruction_in[24:20];
assign funct7 = instruction_in[31:25];
assign imm = {{20{instruction_in[31]}}, instruction_in[31:20]};

always_comb begin
    instruction_out.opcode = opcode;
    instruction_out.rd     = rd;
    instruction_out.rs1    = rs1;
    instruction_out.rs2    = rs2;
    instruction_out.funct3 = funct3;
    instruction_out.funct7 = funct7;
    instruction_out.imm = imm;
end

endmodule
