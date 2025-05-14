/**
 * @file ./out/parser/expr_primary.c
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

#include "common.h"
#include "parser_protos.h"

/*
 * expr_primary ( ( TOK_OPAREN expression TOK_CPAREN ) | TOK_INT_LITERAL | TOK_FLOAT_LITERAL | TOK_BOOL_LITERAL | formatted_string | compound_reference | cast_clause ) 
 */
ast_expr_primary_t* parse_expr_primary(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_expr_primary_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* TERMINAL_OPER = NULL;
// ast_expression_t* expression = NULL;
// token_t* TERMINAL_OPER = NULL;
// token_t* INT_LITERAL = NULL;
// token_t* FLOAT_LITERAL = NULL;
// token_t* BOOL_LITERAL = NULL;
// ast_formatted_string_t* formatted_string = NULL;
// ast_compound_reference_t* compound_reference = NULL;
// ast_cast_clause_t* cast_clause = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
// begin grouping_function
    // terminal rule element: TOK_OPAREN
    // non-terminal rule element: expression
    // terminal rule element: TOK_CPAREN
// end grouping_function
// end or_function
// begin or_function
    // terminal rule element: TOK_INT_LITERAL
// end or_function
// begin or_function
    // terminal rule element: TOK_FLOAT_LITERAL
// end or_function
// begin or_function
    // terminal rule element: TOK_BOOL_LITERAL
// end or_function
// begin or_function
    // non-terminal rule element: formatted_string
// end or_function
// begin or_function
    // non-terminal rule element: compound_reference
// end or_function
    // non-terminal rule element: cast_clause
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_expr_primary_t*)create_ast_node(AST_EXPR_PRIMARY);
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expression = expression;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->INT_LITERAL = INT_LITERAL;
// retv->FLOAT_LITERAL = FLOAT_LITERAL;
// retv->BOOL_LITERAL = BOOL_LITERAL;
// retv->formatted_string = formatted_string;
// retv->compound_reference = compound_reference;
// retv->cast_clause = cast_clause;

            break;
        case STATE_NO_MATCH:
            TRACE_STATE;
            restore_token_queue(post);
            finished = true;
            break;
        case STATE_ERROR:
            TRACE_STATE;
            restore_token_queue(post);
            recover_parser_error(pstate);
            finished = true;
            break;
        default:
            FATAL("unknown state: %d", state);
    }
}

RETURN(retv);
}

