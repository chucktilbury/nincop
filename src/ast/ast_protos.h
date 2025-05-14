/**
 * @file ./out/ast/ast_protos.h
 *
 * This is a generated file. If you edit this file, don't run the generator
 * in this directory. Run it in a different one and then merge the results
 * using a tool like diff.
 *
 * @date Wed May 14 14:31:37 2025
 * @author Chuck Tilbury
 *
 */

#ifndef _AST_PROTOS_H_
#define _AST_PROTOS_H_

#include "ast.h"

void traverse_array_init_item(ast_array_init_item_t* node);
void traverse_array_initializer(ast_array_initializer_t* node);
void traverse_array_ref_index(ast_array_ref_index_t* node);
void traverse_array_reference(ast_array_reference_t* node);
void traverse_assignment(ast_assignment_t* node);
void traverse_cast_clause(ast_cast_clause_t* node);
void traverse_compound_identifier(ast_compound_identifier_t* node);
void traverse_compound_reference(ast_compound_reference_t* node);
void traverse_compound_reference_item(ast_compound_reference_item_t* node);
void traverse_data_decl_assignment(ast_data_decl_assignment_t* node);
void traverse_data_declaration(ast_data_declaration_t* node);
void traverse_data_name_decl(ast_data_name_decl_t* node);
void traverse_directive_definition(ast_directive_definition_t* node);
void traverse_do_statement(ast_do_statement_t* node);
void traverse_else_clause(ast_else_clause_t* node);
void traverse_except_clause(ast_except_clause_t* node);
void traverse_exception_block(ast_exception_block_t* node);
void traverse_exit_statement(ast_exit_statement_t* node);
void traverse_expr_and(ast_expr_and_t* node);
void traverse_expr_equal(ast_expr_equal_t* node);
void traverse_expr_magnitude(ast_expr_magnitude_t* node);
void traverse_expr_power(ast_expr_power_t* node);
void traverse_expr_primary(ast_expr_primary_t* node);
void traverse_expr_product(ast_expr_product_t* node);
void traverse_expr_sum(ast_expr_sum_t* node);
void traverse_expr_unary_neg(ast_expr_unary_neg_t* node);
void traverse_expr_unary_not(ast_expr_unary_not_t* node);
void traverse_expression(ast_expression_t* node);
void traverse_final_clause(ast_final_clause_t* node);
void traverse_final_else(ast_final_else_t* node);
void traverse_for_statement(ast_for_statement_t* node);
void traverse_formatted_string(ast_formatted_string_t* node);
void traverse_func_body(ast_func_body_t* node);
void traverse_func_body_element(ast_func_body_element_t* node);
void traverse_func_definition(ast_func_definition_t* node);
void traverse_func_identifier(ast_func_identifier_t* node);
void traverse_func_parameters(ast_func_parameters_t* node);
void traverse_func_reference(ast_func_reference_t* node);
void traverse_func_type(ast_func_type_t* node);
void traverse_if_clause(ast_if_clause_t* node);
void traverse_if_statement(ast_if_statement_t* node);
void traverse_import_statement(ast_import_statement_t* node);
void traverse_loop_body(ast_loop_body_t* node);
void traverse_loop_body_element(ast_loop_body_element_t* node);
void traverse_namespace_definition(ast_namespace_definition_t* node);
void traverse_operator_type(ast_operator_type_t* node);
void traverse_program(ast_program_t* node);
void traverse_program_item(ast_program_item_t* node);
void traverse_raise_statement(ast_raise_statement_t* node);
void traverse_return_statement(ast_return_statement_t* node);
void traverse_scope_operator(ast_scope_operator_t* node);
void traverse_start_block(ast_start_block_t* node);
void traverse_string_param(ast_string_param_t* node);
void traverse_try_clause(ast_try_clause_t* node);
void traverse_type_definition(ast_type_definition_t* node);
void traverse_type_element(ast_type_element_t* node);
void traverse_type_name(ast_type_name_t* node);
void traverse_type_parameter(ast_type_parameter_t* node);
void traverse_while_clause(ast_while_clause_t* node);
void traverse_while_statement(ast_while_statement_t* node);


#endif /* _AST_PROTOS_H_ */


