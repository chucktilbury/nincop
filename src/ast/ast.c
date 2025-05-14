/**
 * @file ./out/ast/ast.c
 *
 * This is a generated file. If you edit this file, don't run the generator
 * in this directory. Run it in a different one and then merge the results
 * using a tool like diff.
 *
 * @date Wed May 14 14:31:37 2025
 * @author Chuck Tilbury
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "ast.h"
#include "ast_protos.h"
#include "common.h"

/*
 * public interface
 */
ast_node_t* create_ast_node(ast_type_t type) {

    ast_node_t* ptr = _ALLOC(get_node_size(type));
    ptr->type = type;

    return ptr;
}

void traverse_ast(ast_node_t* node) {

    traverse_program((ast_program_t*)node);
}

const char* node_type_to_str(ast_type_t type) {

    return     (type == AST_ARRAY_INIT_ITEM)? "array_init_item":
    (type == AST_ARRAY_INITIALIZER)? "array_initializer":
    (type == AST_ARRAY_REF_INDEX)? "array_ref_index":
    (type == AST_ARRAY_REFERENCE)? "array_reference":
    (type == AST_ASSIGNMENT)? "assignment":
    (type == AST_CAST_CLAUSE)? "cast_clause":
    (type == AST_COMPOUND_IDENTIFIER)? "compound_identifier":
    (type == AST_COMPOUND_REFERENCE)? "compound_reference":
    (type == AST_COMPOUND_REFERENCE_ITEM)? "compound_reference_item":
    (type == AST_DATA_DECL_ASSIGNMENT)? "data_decl_assignment":
    (type == AST_DATA_DECLARATION)? "data_declaration":
    (type == AST_DATA_NAME_DECL)? "data_name_decl":
    (type == AST_DIRECTIVE_DEFINITION)? "directive_definition":
    (type == AST_DO_STATEMENT)? "do_statement":
    (type == AST_ELSE_CLAUSE)? "else_clause":
    (type == AST_EXCEPT_CLAUSE)? "except_clause":
    (type == AST_EXCEPTION_BLOCK)? "exception_block":
    (type == AST_EXIT_STATEMENT)? "exit_statement":
    (type == AST_EXPR_AND)? "expr_and":
    (type == AST_EXPR_EQUAL)? "expr_equal":
    (type == AST_EXPR_MAGNITUDE)? "expr_magnitude":
    (type == AST_EXPR_POWER)? "expr_power":
    (type == AST_EXPR_PRIMARY)? "expr_primary":
    (type == AST_EXPR_PRODUCT)? "expr_product":
    (type == AST_EXPR_SUM)? "expr_sum":
    (type == AST_EXPR_UNARY_NEG)? "expr_unary_neg":
    (type == AST_EXPR_UNARY_NOT)? "expr_unary_not":
    (type == AST_EXPRESSION)? "expression":
    (type == AST_FINAL_CLAUSE)? "final_clause":
    (type == AST_FINAL_ELSE)? "final_else":
    (type == AST_FOR_STATEMENT)? "for_statement":
    (type == AST_FORMATTED_STRING)? "formatted_string":
    (type == AST_FUNC_BODY)? "func_body":
    (type == AST_FUNC_BODY_ELEMENT)? "func_body_element":
    (type == AST_FUNC_DEFINITION)? "func_definition":
    (type == AST_FUNC_IDENTIFIER)? "func_identifier":
    (type == AST_FUNC_PARAMETERS)? "func_parameters":
    (type == AST_FUNC_REFERENCE)? "func_reference":
    (type == AST_FUNC_TYPE)? "func_type":
    (type == AST_IF_CLAUSE)? "if_clause":
    (type == AST_IF_STATEMENT)? "if_statement":
    (type == AST_IMPORT_STATEMENT)? "import_statement":
    (type == AST_LOOP_BODY)? "loop_body":
    (type == AST_LOOP_BODY_ELEMENT)? "loop_body_element":
    (type == AST_NAMESPACE_DEFINITION)? "namespace_definition":
    (type == AST_OPERATOR_TYPE)? "operator_type":
    (type == AST_PROGRAM)? "program":
    (type == AST_PROGRAM_ITEM)? "program_item":
    (type == AST_RAISE_STATEMENT)? "raise_statement":
    (type == AST_RETURN_STATEMENT)? "return_statement":
    (type == AST_SCOPE_OPERATOR)? "scope_operator":
    (type == AST_START_BLOCK)? "start_block":
    (type == AST_STRING_PARAM)? "string_param":
    (type == AST_TRY_CLAUSE)? "try_clause":
    (type == AST_TYPE_DEFINITION)? "type_definition":
    (type == AST_TYPE_ELEMENT)? "type_element":
    (type == AST_TYPE_NAME)? "type_name":
    (type == AST_TYPE_PARAMETER)? "type_parameter":
    (type == AST_WHILE_CLAUSE)? "while_clause":
    (type == AST_WHILE_STATEMENT)? "while_statement":
 "UNKNOWN";
}

size_t get_node_size(ast_type_t type) {

    return     (type == AST_ARRAY_INIT_ITEM)? sizeof(ast_array_init_item_t):
    (type == AST_ARRAY_INITIALIZER)? sizeof(ast_array_initializer_t):
    (type == AST_ARRAY_REF_INDEX)? sizeof(ast_array_ref_index_t):
    (type == AST_ARRAY_REFERENCE)? sizeof(ast_array_reference_t):
    (type == AST_ASSIGNMENT)? sizeof(ast_assignment_t):
    (type == AST_CAST_CLAUSE)? sizeof(ast_cast_clause_t):
    (type == AST_COMPOUND_IDENTIFIER)? sizeof(ast_compound_identifier_t):
    (type == AST_COMPOUND_REFERENCE)? sizeof(ast_compound_reference_t):
    (type == AST_COMPOUND_REFERENCE_ITEM)? sizeof(ast_compound_reference_item_t):
    (type == AST_DATA_DECL_ASSIGNMENT)? sizeof(ast_data_decl_assignment_t):
    (type == AST_DATA_DECLARATION)? sizeof(ast_data_declaration_t):
    (type == AST_DATA_NAME_DECL)? sizeof(ast_data_name_decl_t):
    (type == AST_DIRECTIVE_DEFINITION)? sizeof(ast_directive_definition_t):
    (type == AST_DO_STATEMENT)? sizeof(ast_do_statement_t):
    (type == AST_ELSE_CLAUSE)? sizeof(ast_else_clause_t):
    (type == AST_EXCEPT_CLAUSE)? sizeof(ast_except_clause_t):
    (type == AST_EXCEPTION_BLOCK)? sizeof(ast_exception_block_t):
    (type == AST_EXIT_STATEMENT)? sizeof(ast_exit_statement_t):
    (type == AST_EXPR_AND)? sizeof(ast_expr_and_t):
    (type == AST_EXPR_EQUAL)? sizeof(ast_expr_equal_t):
    (type == AST_EXPR_MAGNITUDE)? sizeof(ast_expr_magnitude_t):
    (type == AST_EXPR_POWER)? sizeof(ast_expr_power_t):
    (type == AST_EXPR_PRIMARY)? sizeof(ast_expr_primary_t):
    (type == AST_EXPR_PRODUCT)? sizeof(ast_expr_product_t):
    (type == AST_EXPR_SUM)? sizeof(ast_expr_sum_t):
    (type == AST_EXPR_UNARY_NEG)? sizeof(ast_expr_unary_neg_t):
    (type == AST_EXPR_UNARY_NOT)? sizeof(ast_expr_unary_not_t):
    (type == AST_EXPRESSION)? sizeof(ast_expression_t):
    (type == AST_FINAL_CLAUSE)? sizeof(ast_final_clause_t):
    (type == AST_FINAL_ELSE)? sizeof(ast_final_else_t):
    (type == AST_FOR_STATEMENT)? sizeof(ast_for_statement_t):
    (type == AST_FORMATTED_STRING)? sizeof(ast_formatted_string_t):
    (type == AST_FUNC_BODY)? sizeof(ast_func_body_t):
    (type == AST_FUNC_BODY_ELEMENT)? sizeof(ast_func_body_element_t):
    (type == AST_FUNC_DEFINITION)? sizeof(ast_func_definition_t):
    (type == AST_FUNC_IDENTIFIER)? sizeof(ast_func_identifier_t):
    (type == AST_FUNC_PARAMETERS)? sizeof(ast_func_parameters_t):
    (type == AST_FUNC_REFERENCE)? sizeof(ast_func_reference_t):
    (type == AST_FUNC_TYPE)? sizeof(ast_func_type_t):
    (type == AST_IF_CLAUSE)? sizeof(ast_if_clause_t):
    (type == AST_IF_STATEMENT)? sizeof(ast_if_statement_t):
    (type == AST_IMPORT_STATEMENT)? sizeof(ast_import_statement_t):
    (type == AST_LOOP_BODY)? sizeof(ast_loop_body_t):
    (type == AST_LOOP_BODY_ELEMENT)? sizeof(ast_loop_body_element_t):
    (type == AST_NAMESPACE_DEFINITION)? sizeof(ast_namespace_definition_t):
    (type == AST_OPERATOR_TYPE)? sizeof(ast_operator_type_t):
    (type == AST_PROGRAM)? sizeof(ast_program_t):
    (type == AST_PROGRAM_ITEM)? sizeof(ast_program_item_t):
    (type == AST_RAISE_STATEMENT)? sizeof(ast_raise_statement_t):
    (type == AST_RETURN_STATEMENT)? sizeof(ast_return_statement_t):
    (type == AST_SCOPE_OPERATOR)? sizeof(ast_scope_operator_t):
    (type == AST_START_BLOCK)? sizeof(ast_start_block_t):
    (type == AST_STRING_PARAM)? sizeof(ast_string_param_t):
    (type == AST_TRY_CLAUSE)? sizeof(ast_try_clause_t):
    (type == AST_TYPE_DEFINITION)? sizeof(ast_type_definition_t):
    (type == AST_TYPE_ELEMENT)? sizeof(ast_type_element_t):
    (type == AST_TYPE_NAME)? sizeof(ast_type_name_t):
    (type == AST_TYPE_PARAMETER)? sizeof(ast_type_parameter_t):
    (type == AST_WHILE_CLAUSE)? sizeof(ast_while_clause_t):
    (type == AST_WHILE_STATEMENT)? sizeof(ast_while_statement_t):
 (size_t)-1;
}


