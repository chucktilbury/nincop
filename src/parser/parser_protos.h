/**
 * @file ./out/parser/parser_protos.h
 *
 * This is a generated file. If you edit this file, don't run the generator
 * in this directory. Run it in a different one and then merge the results
 * using a tool like diff.
 *
 * @date Wed May 14 14:31:37 2025
 * @author Chuck Tilbury
 *
 */

#ifndef _PARSER_PROTOS_H_
#define _PARSER_PROTOS_H_

#include "ast.h"
#include "parser.h"

#define STATE_MATCH     1000
#define STATE_NO_MATCH  1001
#define STATE_ERROR     1002

#ifdef USE_TRACE
#define TRACE_STATE { \
        TRACE("state: %d", state); \
    } while(0)
#else
#define TRACE_STATE
#endif

ast_array_init_item_t* parse_array_init_item(parser_state_t* pstate);
ast_array_initializer_t* parse_array_initializer(parser_state_t* pstate);
ast_array_ref_index_t* parse_array_ref_index(parser_state_t* pstate);
ast_array_reference_t* parse_array_reference(parser_state_t* pstate);
ast_assignment_t* parse_assignment(parser_state_t* pstate);
ast_cast_clause_t* parse_cast_clause(parser_state_t* pstate);
ast_compound_identifier_t* parse_compound_identifier(parser_state_t* pstate);
ast_compound_reference_t* parse_compound_reference(parser_state_t* pstate);
ast_compound_reference_item_t* parse_compound_reference_item(parser_state_t* pstate);
ast_data_decl_assignment_t* parse_data_decl_assignment(parser_state_t* pstate);
ast_data_declaration_t* parse_data_declaration(parser_state_t* pstate);
ast_data_name_decl_t* parse_data_name_decl(parser_state_t* pstate);
ast_directive_definition_t* parse_directive_definition(parser_state_t* pstate);
ast_do_statement_t* parse_do_statement(parser_state_t* pstate);
ast_else_clause_t* parse_else_clause(parser_state_t* pstate);
ast_except_clause_t* parse_except_clause(parser_state_t* pstate);
ast_exception_block_t* parse_exception_block(parser_state_t* pstate);
ast_exit_statement_t* parse_exit_statement(parser_state_t* pstate);
ast_expr_and_t* parse_expr_and(parser_state_t* pstate);
ast_expr_equal_t* parse_expr_equal(parser_state_t* pstate);
ast_expr_magnitude_t* parse_expr_magnitude(parser_state_t* pstate);
ast_expr_power_t* parse_expr_power(parser_state_t* pstate);
ast_expr_primary_t* parse_expr_primary(parser_state_t* pstate);
ast_expr_product_t* parse_expr_product(parser_state_t* pstate);
ast_expr_sum_t* parse_expr_sum(parser_state_t* pstate);
ast_expr_unary_neg_t* parse_expr_unary_neg(parser_state_t* pstate);
ast_expr_unary_not_t* parse_expr_unary_not(parser_state_t* pstate);
ast_expression_t* parse_expression(parser_state_t* pstate);
ast_final_clause_t* parse_final_clause(parser_state_t* pstate);
ast_final_else_t* parse_final_else(parser_state_t* pstate);
ast_for_statement_t* parse_for_statement(parser_state_t* pstate);
ast_formatted_string_t* parse_formatted_string(parser_state_t* pstate);
ast_func_body_t* parse_func_body(parser_state_t* pstate);
ast_func_body_element_t* parse_func_body_element(parser_state_t* pstate);
ast_func_definition_t* parse_func_definition(parser_state_t* pstate);
ast_func_identifier_t* parse_func_identifier(parser_state_t* pstate);
ast_func_parameters_t* parse_func_parameters(parser_state_t* pstate);
ast_func_reference_t* parse_func_reference(parser_state_t* pstate);
ast_func_type_t* parse_func_type(parser_state_t* pstate);
ast_if_clause_t* parse_if_clause(parser_state_t* pstate);
ast_if_statement_t* parse_if_statement(parser_state_t* pstate);
ast_import_statement_t* parse_import_statement(parser_state_t* pstate);
ast_loop_body_t* parse_loop_body(parser_state_t* pstate);
ast_loop_body_element_t* parse_loop_body_element(parser_state_t* pstate);
ast_namespace_definition_t* parse_namespace_definition(parser_state_t* pstate);
ast_operator_type_t* parse_operator_type(parser_state_t* pstate);
ast_program_t* parse_program(parser_state_t* pstate);
ast_program_item_t* parse_program_item(parser_state_t* pstate);
ast_raise_statement_t* parse_raise_statement(parser_state_t* pstate);
ast_return_statement_t* parse_return_statement(parser_state_t* pstate);
ast_scope_operator_t* parse_scope_operator(parser_state_t* pstate);
ast_start_block_t* parse_start_block(parser_state_t* pstate);
ast_string_param_t* parse_string_param(parser_state_t* pstate);
ast_try_clause_t* parse_try_clause(parser_state_t* pstate);
ast_type_definition_t* parse_type_definition(parser_state_t* pstate);
ast_type_element_t* parse_type_element(parser_state_t* pstate);
ast_type_name_t* parse_type_name(parser_state_t* pstate);
ast_type_parameter_t* parse_type_parameter(parser_state_t* pstate);
ast_while_clause_t* parse_while_clause(parser_state_t* pstate);
ast_while_statement_t* parse_while_statement(parser_state_t* pstate);


#endif /* _PARSER_PROTOS_H_ */


