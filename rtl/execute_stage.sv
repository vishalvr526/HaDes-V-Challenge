/* Copyright (c) 2024 Tobias Scheipel, David Beikircher, Florian Riedl
 * Embedded Architectures & Systems Group, Graz University of Technology
 * SPDX-License-Identifier: MIT
 * ---------------------------------------------------------------------
 * File: execute_stage.sv
 */



module execute_stage (
    input logic clk,
    input logic rst,

    // Inputs
    input logic [31:0]   rs1_data_in,
    input logic [31:0]   rs2_data_in,
    input instruction::t instruction_in,
    input logic [31:0]   program_counter_in,

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
    logic [31:0] alu_result;
    
    always_comb begin
    case (instruction_in.opcode)

        7'b0110011: begin // R-type
            case (instruction_in.funct3)
                3'b000: begin
                    if (instruction_in.funct7 == 7'b0000000)
                        alu_result = rs1_data_in + rs2_data_in; // ADD
                    else
                        alu_result = rs1_data_in - rs2_data_in; // SUB
                end
                3'b111: alu_result = rs1_data_in & rs2_data_in; // AND
                3'b110: alu_result = rs1_data_in | rs2_data_in; // OR
                default: alu_result = 32'd0;
            endcase
        end

        7'b0010011: begin // I-type (ADDI)
            alu_result = rs1_data_in + instruction_in.imm;
        end

        default: alu_result = 32'd0;
    endcase
end
    assign rd_data_reg_out = alu_result;
assign program_counter_reg_out = program_counter_in;
assign next_program_counter_reg_out = program_counter_in + 32'd4;
assign instruction_reg_out = instruction_in;

endmodule
