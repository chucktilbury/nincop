/**
 * @file ./out/parser/expr_equal.c
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
 * expr_equal ( ( expr_magnitude ( ( TOK_EQUAL_EQUAL | TOK_EQU ) expr_magnitude ) * ) | ( expr_magnitude ( ( TOK_BANG_EQUAL | TOK_NEQU ) expr_magnitude ) * ) ) 
 */
ast_expr_equal_t* parse_expr_equal(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_expr_equal_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_expr_magnitude_t* expr_magnitude = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expr_magnitude_t* expr_magnitude = NULL;
// ast_expr_magnitude_t* expr_magnitude = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expr_magnitude_t* expr_magnitude = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
// begin grouping_function
    // non-terminal rule element: expr_magnitude
// begin zero_or_more_function
// begin grouping_function
// begin grouping_function
// begin or_function
    // terminal rule element: TOK_EQUAL_EQUAL
// end or_function
    // terminal rule element: TOK_EQU
// end grouping_function
    // non-terminal rule element: expr_magnitude
// end grouping_function
// end zero_or_more_function
// end grouping_function
// end or_function
// begin grouping_function
    // non-terminal rule element: expr_magnitude
// begin zero_or_more_function
// begin grouping_function
// begin grouping_function
// begin or_function
    // terminal rule element: TOK_BANG_EQUAL
// end or_function
    // terminal rule element: TOK_NEQU
// end grouping_function
    // non-terminal rule element: expr_magnitude
// end grouping_function
// end zero_or_more_function
// end grouping_function
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_expr_equal_t*)create_ast_node(AST_EXPR_EQUAL);
// retv->expr_magnitude = expr_magnitude;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expr_magnitude = expr_magnitude;
// retv->expr_magnitude = expr_magnitude;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expr_magnitude = expr_magnitude;

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

