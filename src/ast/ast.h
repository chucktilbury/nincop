/**
 * @file ./out/ast/ast.h
 *
 * This is a generated file. If you edit this file, don't run the generator
 * in this directory. Run it in a different one and then merge the results
 * using a tool like diff.
 *
 * @date Wed May 14 14:31:37 2025
 * @author Chuck Tilbury
 *
 */

#ifndef _AST_H_
#define _AST_H_

#include "tokens.h"

typedef enum {
    AST_ARRAY_INIT_ITEM = 512,
    AST_ARRAY_INITIALIZER = 513,
    AST_ARRAY_REF_INDEX = 514,
    AST_ARRAY_REFERENCE = 515,
    AST_ASSIGNMENT = 516,
    AST_CAST_CLAUSE = 517,
    AST_COMPOUND_IDENTIFIER = 518,
    AST_COMPOUND_REFERENCE = 519,
    AST_COMPOUND_REFERENCE_ITEM = 520,
    AST_DATA_DECL_ASSIGNMENT = 521,
    AST_DATA_DECLARATION = 522,
    AST_DATA_NAME_DECL = 523,
    AST_DIRECTIVE_DEFINITION = 524,
    AST_DO_STATEMENT = 525,
    AST_ELSE_CLAUSE = 526,
    AST_EXCEPT_CLAUSE = 527,
    AST_EXCEPTION_BLOCK = 528,
    AST_EXIT_STATEMENT = 529,
    AST_EXPR_AND = 530,
    AST_EXPR_EQUAL = 531,
    AST_EXPR_MAGNITUDE = 532,
    AST_EXPR_POWER = 533,
    AST_EXPR_PRIMARY = 534,
    AST_EXPR_PRODUCT = 535,
    AST_EXPR_SUM = 536,
    AST_EXPR_UNARY_NEG = 537,
    AST_EXPR_UNARY_NOT = 538,
    AST_EXPRESSION = 539,
    AST_FINAL_CLAUSE = 540,
    AST_FINAL_ELSE = 541,
    AST_FOR_STATEMENT = 542,
    AST_FORMATTED_STRING = 543,
    AST_FUNC_BODY = 544,
    AST_FUNC_BODY_ELEMENT = 545,
    AST_FUNC_DEFINITION = 546,
    AST_FUNC_IDENTIFIER = 547,
    AST_FUNC_PARAMETERS = 548,
    AST_FUNC_REFERENCE = 549,
    AST_FUNC_TYPE = 550,
    AST_IF_CLAUSE = 551,
    AST_IF_STATEMENT = 552,
    AST_IMPORT_STATEMENT = 553,
    AST_LOOP_BODY = 554,
    AST_LOOP_BODY_ELEMENT = 555,
    AST_NAMESPACE_DEFINITION = 556,
    AST_OPERATOR_TYPE = 557,
    AST_PROGRAM = 558,
    AST_PROGRAM_ITEM = 559,
    AST_RAISE_STATEMENT = 560,
    AST_RETURN_STATEMENT = 561,
    AST_SCOPE_OPERATOR = 562,
    AST_START_BLOCK = 563,
    AST_STRING_PARAM = 564,
    AST_TRY_CLAUSE = 565,
    AST_TYPE_DEFINITION = 566,
    AST_TYPE_ELEMENT = 567,
    AST_TYPE_NAME = 568,
    AST_TYPE_PARAMETER = 569,
    AST_WHILE_CLAUSE = 570,
    AST_WHILE_STATEMENT = 571
} ast_type_t;

typedef struct _ast_node_t_ {
    ast_type_t type;
    const char* fname;
    int line_no;
    int col_no;
} ast_node_t;

/*
 * array_init_item ( expression | ( TOK_STRING_LITERAL TOK_COLON expression ) | array_initializer ) 
 */
typedef struct _ast_array_init_item_t_ {
    ast_node_t node;

    // struct _ast_expression_t_* expression;
    // token_t* STRING_LITERAL;
    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // struct _ast_array_initializer_t_* array_initializer;

} ast_array_init_item_t;


/*
 * array_initializer ( TOK_OCBRACE array_init_item ( TOK_COMMA array_init_item ) * TOK_CCBRACE ) 
 */
typedef struct _ast_array_initializer_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_array_init_item_t_* array_init_item;
    // token_t* TERMINAL_OPER;
    // struct _ast_array_init_item_t_* array_init_item;
    // token_t* TERMINAL_OPER;

} ast_array_initializer_t;


/*
 * array_ref_index ( expression | TOK_STRING_LITERAL ) 
 */
typedef struct _ast_array_ref_index_t_ {
    ast_node_t node;

    // struct _ast_expression_t_* expression;
    // token_t* STRING_LITERAL;

} ast_array_ref_index_t;


/*
 * array_reference ( TOK_IDENTIFIER TOK_OSBRACE array_ref_index TOK_CSBRACE ( TOK_OSBRACE array_ref_index TOK_CSBRACE ) * ) 
 */
typedef struct _ast_array_reference_t_ {
    ast_node_t node;

    // token_t* IDENTIFIER;
    // token_t* TERMINAL_OPER;
    // struct _ast_array_ref_index_t_* array_ref_index;
    // token_t* TERMINAL_OPER;
    // token_t* TERMINAL_OPER;
    // struct _ast_array_ref_index_t_* array_ref_index;
    // token_t* TERMINAL_OPER;

} ast_array_reference_t;


/*
 * assignment ( ( compound_reference TOK_EQUAL ( expression | array_initializer ) ) | ( compound_reference TOK_PLUS_EQUAL expression ) | ( compound_reference TOK_MINUS_EQUAL expression ) | ( compound_reference TOK_STAR_EQUAL expression ) | ( compound_reference TOK_SLASH_EQUAL expression ) | ( compound_reference TOK_PERCENT_EQUAL expression ) ) 
 */
typedef struct _ast_assignment_t_ {
    ast_node_t node;

    // struct _ast_compound_reference_t_* compound_reference;
    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // struct _ast_array_initializer_t_* array_initializer;
    // struct _ast_compound_reference_t_* compound_reference;
    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // struct _ast_compound_reference_t_* compound_reference;
    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // struct _ast_compound_reference_t_* compound_reference;
    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // struct _ast_compound_reference_t_* compound_reference;
    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // struct _ast_compound_reference_t_* compound_reference;
    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;

} ast_assignment_t;


/*
 * cast_clause ( type_name TOK_OPBRACE compound_reference TOK_CPBRACE ) 
 */
typedef struct _ast_cast_clause_t_ {
    ast_node_t node;

    // struct _ast_type_name_t_* type_name;
    // token_t* TERMINAL_OPER;
    // struct _ast_compound_reference_t_* compound_reference;
    // token_t* TERMINAL_OPER;

} ast_cast_clause_t;


/*
 * compound_identifier ( TOK_IDENTIFIER ( TOK_DOT TOK_IDENTIFIER ) * ) 
 */
typedef struct _ast_compound_identifier_t_ {
    ast_node_t node;

    // token_t* IDENTIFIER;
    // token_t* TERMINAL_OPER;
    // token_t* IDENTIFIER;

} ast_compound_identifier_t;


/*
 * compound_reference ( compound_reference_item ( TOK_DOT compound_reference_item ) * ) 
 */
typedef struct _ast_compound_reference_t_ {
    ast_node_t node;

    // struct _ast_compound_reference_item_t_* compound_reference_item;
    // token_t* TERMINAL_OPER;
    // struct _ast_compound_reference_item_t_* compound_reference_item;

} ast_compound_reference_t;


/*
 * compound_reference_item ( TOK_IDENTIFIER | array_reference | func_reference ) 
 */
typedef struct _ast_compound_reference_item_t_ {
    ast_node_t node;

    // token_t* IDENTIFIER;
    // struct _ast_array_reference_t_* array_reference;
    // struct _ast_func_reference_t_* func_reference;

} ast_compound_reference_item_t;


/*
 * data_decl_assignment ( data_declaration TOK_EQUAL expression ) 
 */
typedef struct _ast_data_decl_assignment_t_ {
    ast_node_t node;

    // struct _ast_data_declaration_t_* data_declaration;
    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;

} ast_data_decl_assignment_t;


/*
 * data_declaration ( TOK_CONST ? data_name_decl ) 
 */
typedef struct _ast_data_declaration_t_ {
    ast_node_t node;

    // struct _ast_data_name_decl_t_* data_name_decl;

} ast_data_declaration_t;


/*
 * data_name_decl ( type_name TOK_IDENTIFIER ) 
 */
typedef struct _ast_data_name_decl_t_ {
    ast_node_t node;

    // struct _ast_type_name_t_* type_name;
    // token_t* IDENTIFIER;

} ast_data_name_decl_t;


/*
 * directive_definition ( TOK_ADD_SEARCH TOK_OPAREN TOK_STRING_LITERAL TOK_CPAREN ) 
 */
typedef struct _ast_directive_definition_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // token_t* STRING_LITERAL;
    // token_t* TERMINAL_OPER;

} ast_directive_definition_t;


/*
 * do_statement ( TOK_DO loop_body while_clause ) 
 */
typedef struct _ast_do_statement_t_ {
    ast_node_t node;

    // struct _ast_loop_body_t_* loop_body;
    // struct _ast_while_clause_t_* while_clause;

} ast_do_statement_t;


/*
 * else_clause ( TOK_ELSE TOK_OPAREN expression TOK_CPAREN func_body ) 
 */
typedef struct _ast_else_clause_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // token_t* TERMINAL_OPER;
    // struct _ast_func_body_t_* func_body;

} ast_else_clause_t;


/*
 * except_clause ( TOK_EXCEPT TOK_OPAREN TOK_IDENTIFIER TOK_COMMA ( type_name | TOK_NOTHING ) TOK_IDENTIFIER TOK_CPAREN func_body ) 
 */
typedef struct _ast_except_clause_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // token_t* IDENTIFIER;
    // token_t* TERMINAL_OPER;
    // struct _ast_type_name_t_* type_name;
    // token_t* IDENTIFIER;
    // token_t* TERMINAL_OPER;
    // struct _ast_func_body_t_* func_body;

} ast_except_clause_t;


/*
 * exception_block ( try_clause except_clause + final_clause ? ) 
 */
typedef struct _ast_exception_block_t_ {
    ast_node_t node;

    // struct _ast_try_clause_t_* try_clause;
    // struct _ast_except_clause_t_* except_clause;
    // struct _ast_final_clause_t_* final_clause;

} ast_exception_block_t;


/*
 * exit_statement ( TOK_EXIT TOK_OPAREN expression TOK_CPAREN ) 
 */
typedef struct _ast_exit_statement_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // token_t* TERMINAL_OPER;

} ast_exit_statement_t;


/*
 * expr_and ( expr_equal ( ( TOK_AMP | TOK_AND ) expr_equal ) * ) 
 */
typedef struct _ast_expr_and_t_ {
    ast_node_t node;

    // struct _ast_expr_equal_t_* expr_equal;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_equal_t_* expr_equal;

} ast_expr_and_t;


/*
 * expr_equal ( ( expr_magnitude ( ( TOK_EQUAL_EQUAL | TOK_EQU ) expr_magnitude ) * ) | ( expr_magnitude ( ( TOK_BANG_EQUAL | TOK_NEQU ) expr_magnitude ) * ) ) 
 */
typedef struct _ast_expr_equal_t_ {
    ast_node_t node;

    // struct _ast_expr_magnitude_t_* expr_magnitude;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_magnitude_t_* expr_magnitude;
    // struct _ast_expr_magnitude_t_* expr_magnitude;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_magnitude_t_* expr_magnitude;

} ast_expr_equal_t;


/*
 * expr_magnitude ( ( expr_sum ( ( TOK_CPBRACE | TOK_GT ) expr_sum ) * ) | ( expr_sum ( ( TOK_OPBRACE | TOK_LT ) expr_sum ) * ) | ( expr_sum ( ( TOK_CPBRACE_EQUAL | TOK_GTE ) expr_sum ) * ) | ( expr_sum ( ( TOK_CPBRACE_EQUAL | TOK_LTE ) expr_sum ) * ) ) 
 */
typedef struct _ast_expr_magnitude_t_ {
    ast_node_t node;

    // struct _ast_expr_sum_t_* expr_sum;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_sum_t_* expr_sum;
    // struct _ast_expr_sum_t_* expr_sum;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_sum_t_* expr_sum;
    // struct _ast_expr_sum_t_* expr_sum;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_sum_t_* expr_sum;
    // struct _ast_expr_sum_t_* expr_sum;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_sum_t_* expr_sum;

} ast_expr_magnitude_t;


/*
 * expr_power ( expr_unary_neg ( TOK_CARET expr_unary_neg ) * ) 
 */
typedef struct _ast_expr_power_t_ {
    ast_node_t node;

    // struct _ast_expr_unary_neg_t_* expr_unary_neg;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_unary_neg_t_* expr_unary_neg;

} ast_expr_power_t;


/*
 * expr_primary ( ( TOK_OPAREN expression TOK_CPAREN ) | TOK_INT_LITERAL | TOK_FLOAT_LITERAL | TOK_BOOL_LITERAL | formatted_string | compound_reference | cast_clause ) 
 */
typedef struct _ast_expr_primary_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // token_t* TERMINAL_OPER;
    // token_t* INT_LITERAL;
    // token_t* FLOAT_LITERAL;
    // token_t* BOOL_LITERAL;
    // struct _ast_formatted_string_t_* formatted_string;
    // struct _ast_compound_reference_t_* compound_reference;
    // struct _ast_cast_clause_t_* cast_clause;

} ast_expr_primary_t;


/*
 * expr_product ( ( expr_product ( TOK_STAR expr_product ) * ) | ( expr_product ( TOK_SLASH expr_product ) * ) | ( expr_product ( TOK_PERCENT expr_product ) * ) ) 
 */
typedef struct _ast_expr_product_t_ {
    ast_node_t node;

    // struct _ast_expr_product_t_* expr_product;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_product_t_* expr_product;
    // struct _ast_expr_product_t_* expr_product;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_product_t_* expr_product;
    // struct _ast_expr_product_t_* expr_product;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_product_t_* expr_product;

} ast_expr_product_t;


/*
 * expr_sum ( ( expr_product ( TOK_PLUS expr_product ) * ) | ( expr_product ( TOK_MINUS expr_product ) * ) ) 
 */
typedef struct _ast_expr_sum_t_ {
    ast_node_t node;

    // struct _ast_expr_product_t_* expr_product;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_product_t_* expr_product;
    // struct _ast_expr_product_t_* expr_product;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_product_t_* expr_product;

} ast_expr_sum_t;


/*
 * expr_unary_neg ( ( TOK_MINUS expr_unary_not ) * | expr_primary ) 
 */
typedef struct _ast_expr_unary_neg_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_expr_unary_not_t_* expr_unary_not;
    // struct _ast_expr_primary_t_* expr_primary;

} ast_expr_unary_neg_t;


/*
 * expr_unary_not ( ( ( TOK_BANG | TOK_NOT ) expr_primary ) * | expr_primary ) 
 */
typedef struct _ast_expr_unary_not_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_expr_primary_t_* expr_primary;
    // struct _ast_expr_primary_t_* expr_primary;

} ast_expr_unary_not_t;


/*
 * expression ( expr_and ( ( TOK_BAR | TOK_OR ) expr_and ) * ) 
 */
typedef struct _ast_expression_t_ {
    ast_node_t node;

    // struct _ast_expr_and_t_* expr_and;
    // token_t* TERMINAL_OPER;
    // struct _ast_expr_and_t_* expr_and;

} ast_expression_t;


/*
 * final_clause ( TOK_FINAL TOK_OPAREN ( type_name | TOK_NOTHING ) TOK_IDENTIFIER TOK_CPAREN func_body ) 
 */
typedef struct _ast_final_clause_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_type_name_t_* type_name;
    // token_t* IDENTIFIER;
    // token_t* TERMINAL_OPER;
    // struct _ast_func_body_t_* func_body;

} ast_final_clause_t;


/*
 * final_else ( TOK_ELSE ( TOK_OPAREN expression ? TOK_CPAREN ) ? func_body ) 
 */
typedef struct _ast_final_else_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // token_t* TERMINAL_OPER;
    // struct _ast_func_body_t_* func_body;

} ast_final_else_t;


/*
 * for_statement ( TOK_FOR ( TOK_OPAREN ( type_name ? TOK_IDENTIFIER TOK_IN ) ? expression TOK_CPAREN ) ? loop_body ) 
 */
typedef struct _ast_for_statement_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_type_name_t_* type_name;
    // token_t* IDENTIFIER;
    // struct _ast_expression_t_* expression;
    // token_t* TERMINAL_OPER;
    // struct _ast_loop_body_t_* loop_body;

} ast_for_statement_t;


/*
 * formatted_string ( TOK_STRING_LITERAL ( TOK_OPAREN ( string_param ( TOK_COMMA string_param ) * ) ? TOK_CPAREN ) ? ) 
 */
typedef struct _ast_formatted_string_t_ {
    ast_node_t node;

    // token_t* STRING_LITERAL;
    // token_t* TERMINAL_OPER;
    // struct _ast_string_param_t_* string_param;
    // token_t* TERMINAL_OPER;
    // struct _ast_string_param_t_* string_param;
    // token_t* TERMINAL_OPER;

} ast_formatted_string_t;


/*
 * func_body ( TOK_OCBRACE ( func_body_element | func_body ) * TOK_CCBRACE ) 
 */
typedef struct _ast_func_body_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_func_body_element_t_* func_body_element;
    // struct _ast_func_body_t_* func_body;
    // token_t* TERMINAL_OPER;

} ast_func_body_t;


/*
 * func_body_element ( data_declaration | data_decl_assignment | compound_reference | assignment | if_statement | while_statement | do_statement | for_statement | return_statement | exit_statement | raise_statement | exception_block | TOK_INLINE ) 
 */
typedef struct _ast_func_body_element_t_ {
    ast_node_t node;

    // struct _ast_data_declaration_t_* data_declaration;
    // struct _ast_data_decl_assignment_t_* data_decl_assignment;
    // struct _ast_compound_reference_t_* compound_reference;
    // struct _ast_assignment_t_* assignment;
    // struct _ast_if_statement_t_* if_statement;
    // struct _ast_while_statement_t_* while_statement;
    // struct _ast_do_statement_t_* do_statement;
    // struct _ast_for_statement_t_* for_statement;
    // struct _ast_return_statement_t_* return_statement;
    // struct _ast_exit_statement_t_* exit_statement;
    // struct _ast_raise_statement_t_* raise_statement;
    // struct _ast_exception_block_t_* exception_block;
    // token_t* INLINE;

} ast_func_body_element_t;


/*
 * func_definition ( func_type compound_identifier ? func_identifier func_parameters func_body ? ) 
 */
typedef struct _ast_func_definition_t_ {
    ast_node_t node;

    // struct _ast_func_type_t_* func_type;
    // struct _ast_compound_identifier_t_* compound_identifier;
    // struct _ast_func_identifier_t_* func_identifier;
    // struct _ast_func_parameters_t_* func_parameters;
    // struct _ast_func_body_t_* func_body;

} ast_func_definition_t;


/*
 * func_identifier ( TOK_IDENTIFIER | operator_type ) 
 */
typedef struct _ast_func_identifier_t_ {
    ast_node_t node;

    // token_t* IDENTIFIER;
    // struct _ast_operator_type_t_* operator_type;

} ast_func_identifier_t;


/*
 * func_parameters ( TOK_OPAREN ( data_name_decl ( TOK_COMMA data_name_decl ) * ) ? TOK_CPAREN ) 
 */
typedef struct _ast_func_parameters_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_data_name_decl_t_* data_name_decl;
    // token_t* TERMINAL_OPER;
    // struct _ast_data_name_decl_t_* data_name_decl;
    // token_t* TERMINAL_OPER;

} ast_func_parameters_t;


/*
 * func_reference ( TOK_IDENTIFIER TOK_OPAREN ( expression ( TOK_COMMA expression ) * ) ? TOK_CPAREN ) 
 */
typedef struct _ast_func_reference_t_ {
    ast_node_t node;

    // token_t* IDENTIFIER;
    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // token_t* TERMINAL_OPER;

} ast_func_reference_t;


/*
 * func_type ( type_name | TOK_NOTHING ) 
 */
typedef struct _ast_func_type_t_ {
    ast_node_t node;

    // struct _ast_type_name_t_* type_name;

} ast_func_type_t;


/*
 * if_clause ( TOK_IF TOK_OPAREN expression TOK_CPAREN func_body ) 
 */
typedef struct _ast_if_clause_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // token_t* TERMINAL_OPER;
    // struct _ast_func_body_t_* func_body;

} ast_if_clause_t;


/*
 * if_statement ( if_clause ( else_clause * final_else ? ) ? ) 
 */
typedef struct _ast_if_statement_t_ {
    ast_node_t node;

    // struct _ast_if_clause_t_* if_clause;
    // struct _ast_else_clause_t_* else_clause;
    // struct _ast_final_else_t_* final_else;

} ast_if_statement_t;


/*
 * import_statement ( TOK_IMPORT TOK_STRING_LITERAL ( TOK_AS TOK_IDENTIFIER ) ? ) 
 */
typedef struct _ast_import_statement_t_ {
    ast_node_t node;

    // token_t* STRING_LITERAL;
    // token_t* IDENTIFIER;

} ast_import_statement_t;


/*
 * loop_body ( TOK_OCBRACE ( loop_body_element | loop_body ) * TOK_CCBRACE ) 
 */
typedef struct _ast_loop_body_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_loop_body_element_t_* loop_body_element;
    // struct _ast_loop_body_t_* loop_body;
    // token_t* TERMINAL_OPER;

} ast_loop_body_t;


/*
 * loop_body_element ( func_body_element | TOK_CONTINUE | TOK_BREAK ) 
 */
typedef struct _ast_loop_body_element_t_ {
    ast_node_t node;

    // struct _ast_func_body_element_t_* func_body_element;

} ast_loop_body_element_t;


/*
 * namespace_definition ( TOK_NAMESPACE TOK_IDENTIFIER TOK_OCBRACE program_item + TOK_CCBRACE ) 
 */
typedef struct _ast_namespace_definition_t_ {
    ast_node_t node;

    // token_t* IDENTIFIER;
    // token_t* TERMINAL_OPER;
    // struct _ast_program_item_t_* program_item;
    // token_t* TERMINAL_OPER;

} ast_namespace_definition_t;


/*
 * operator_type ( TOK__ADD_ | TOK__SUBTRACT_ | TOK__MULTIPLY_ | TOK__DIVIDE_ | TOK__MODULO_ | TOK__POWER_ | TOK__LESS_THAN_ | TOK_MORE_THAN_ | TOK__LESS_OR_EQUAL_ | TOK__MORE_OR_EQUAL_ | TOK__EQUAL_ | TOK__NOT_EQUAL_ | TOK__ASSIGN_ | TOK__ADD_EQUAL_ | TOK__SUBTRACT_EQUAL_ | TOK__MULTIPLY_EQUAL_ | TOK__DIVIDE_EQUAL_ | TOK__MODULO_EQUAL_ | TOK__UNARY_NOT_ | TOK__UNARY_NEGATE_ | TOK__AND_ | TOK__OR_ | TOK__CREATE_ | TOK__DESTROY_ ) 
 */
typedef struct _ast_operator_type_t_ {
    ast_node_t node;


} ast_operator_type_t;


/*
 * program ( program_item + | start_block ) 
 */
typedef struct _ast_program_t_ {
    ast_node_t node;

    // struct _ast_program_item_t_* program_item;
    // struct _ast_start_block_t_* start_block;

} ast_program_t;


/*
 * program_item ( import_statement | data_declaration | data_decl_assignment | func_definition | type_definition | namespace_definition | directive_definition | scope_operator ) 
 */
typedef struct _ast_program_item_t_ {
    ast_node_t node;

    // struct _ast_import_statement_t_* import_statement;
    // struct _ast_data_declaration_t_* data_declaration;
    // struct _ast_data_decl_assignment_t_* data_decl_assignment;
    // struct _ast_func_definition_t_* func_definition;
    // struct _ast_type_definition_t_* type_definition;
    // struct _ast_namespace_definition_t_* namespace_definition;
    // struct _ast_directive_definition_t_* directive_definition;
    // struct _ast_scope_operator_t_* scope_operator;

} ast_program_item_t;


/*
 * raise_statement ( TOK_RAISE TOK_OPAREN TOK_IDENTIFIER TOK_COMMA ( expression | TOK_NOTHING ) TOK_CPAREN ) 
 */
typedef struct _ast_raise_statement_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // token_t* IDENTIFIER;
    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // token_t* TERMINAL_OPER;

} ast_raise_statement_t;


/*
 * return_statement ( TOK_RETURN ( TOK_OPAREN expression ? TOK_CPAREN ) ? ) 
 */
typedef struct _ast_return_statement_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // token_t* TERMINAL_OPER;

} ast_return_statement_t;


/*
 * scope_operator ( TOK_PROTECTED | TOK_PUBLIC | TOK_PRIVATE ) 
 */
typedef struct _ast_scope_operator_t_ {
    ast_node_t node;


} ast_scope_operator_t;


/*
 * start_block ( TOK_START func_body ) 
 */
typedef struct _ast_start_block_t_ {
    ast_node_t node;

    // struct _ast_func_body_t_* func_body;

} ast_start_block_t;


/*
 * string_param ( TOK_IDENTIFIER TOK_EQUAL expression ) 
 */
typedef struct _ast_string_param_t_ {
    ast_node_t node;

    // token_t* IDENTIFIER;
    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;

} ast_string_param_t;


/*
 * try_clause ( TOK_TRY func_body ) 
 */
typedef struct _ast_try_clause_t_ {
    ast_node_t node;

    // struct _ast_func_body_t_* func_body;

} ast_try_clause_t;


/*
 * type_definition ( TOK_TYPE TOK_IDENTIFIER ( TOK_OPAREN ( type_parameter ( TOK_COMMA type_parameter ) * ) ? TOK_CPAREN ) ? TOK_OCBRACE type_element ( type_element ) * TOK_CCBRACE ) 
 */
typedef struct _ast_type_definition_t_ {
    ast_node_t node;

    // token_t* IDENTIFIER;
    // token_t* TERMINAL_OPER;
    // struct _ast_type_parameter_t_* type_parameter;
    // token_t* TERMINAL_OPER;
    // struct _ast_type_parameter_t_* type_parameter;
    // token_t* TERMINAL_OPER;
    // token_t* TERMINAL_OPER;
    // struct _ast_type_element_t_* type_element;
    // struct _ast_type_element_t_* type_element;
    // token_t* TERMINAL_OPER;

} ast_type_definition_t;


/*
 * type_element ( scope_operator | data_name_decl | func_identifier func_parameters func_body ? ) 
 */
typedef struct _ast_type_element_t_ {
    ast_node_t node;

    // struct _ast_scope_operator_t_* scope_operator;
    // struct _ast_data_name_decl_t_* data_name_decl;
    // struct _ast_func_identifier_t_* func_identifier;
    // struct _ast_func_parameters_t_* func_parameters;
    // struct _ast_func_body_t_* func_body;

} ast_type_element_t;


/*
 * type_name ( ( TOK_INT | TOK_INTEGER ) | ( TOK_BOOL | TOK_BOOLEAN ) | ( TOK_STR | TOK_STRING ) | TOK_FLOAT | TOK_LIST | TOK_HASH | compound_identifier ) 
 */
typedef struct _ast_type_name_t_ {
    ast_node_t node;

    // struct _ast_compound_identifier_t_* compound_identifier;

} ast_type_name_t;


/*
 * type_parameter ( scope_operator ? compound_identifier ( TOK_AS TOK_IDENTIFIER ) ? ) 
 */
typedef struct _ast_type_parameter_t_ {
    ast_node_t node;

    // struct _ast_scope_operator_t_* scope_operator;
    // struct _ast_compound_identifier_t_* compound_identifier;
    // token_t* IDENTIFIER;

} ast_type_parameter_t;


/*
 * while_clause ( TOK_WHILE ( TOK_OPAREN expression ? TOK_CPAREN ) ? ) 
 */
typedef struct _ast_while_clause_t_ {
    ast_node_t node;

    // token_t* TERMINAL_OPER;
    // struct _ast_expression_t_* expression;
    // token_t* TERMINAL_OPER;

} ast_while_clause_t;


/*
 * while_statement ( while_clause loop_body ) 
 */
typedef struct _ast_while_statement_t_ {
    ast_node_t node;

    // struct _ast_while_clause_t_* while_clause;
    // struct _ast_loop_body_t_* loop_body;

} ast_while_statement_t;



/*
 * public interface declarations.
 */
ast_node_t* create_ast_node(ast_type_t type);
void traverse_ast(ast_node_t* node);
const char* node_type_to_str(ast_type_t type);
size_t get_node_size(ast_type_t type);

#endif /* _AST_H_ */


