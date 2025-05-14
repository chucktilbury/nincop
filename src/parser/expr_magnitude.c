/**
 * @file ./out/parser/expr_magnitude.c
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
 * expr_magnitude ( ( expr_sum ( ( TOK_CPBRACE | TOK_GT ) expr_sum ) * ) | ( expr_sum ( ( TOK_OPBRACE | TOK_LT ) expr_sum ) * ) | ( expr_sum ( ( TOK_CPBRACE_EQUAL | TOK_GTE ) expr_sum ) * ) | ( expr_sum ( ( TOK_CPBRACE_EQUAL | TOK_LTE ) expr_sum ) * ) ) 
 */
ast_expr_magnitude_t* parse_expr_magnitude(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_expr_magnitude_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_expr_sum_t* expr_sum = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expr_sum_t* expr_sum = NULL;
// ast_expr_sum_t* expr_sum = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expr_sum_t* expr_sum = NULL;
// ast_expr_sum_t* expr_sum = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expr_sum_t* expr_sum = NULL;
// ast_expr_sum_t* expr_sum = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expr_sum_t* expr_sum = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
// begin grouping_function
    // non-terminal rule element: expr_sum
// begin zero_or_more_function
// begin grouping_function
// begin grouping_function
// begin or_function
    // terminal rule element: TOK_CPBRACE
// end or_function
    // terminal rule element: TOK_GT
// end grouping_function
    // non-terminal rule element: expr_sum
// end grouping_function
// end zero_or_more_function
// end grouping_function
// end or_function
// begin or_function
// begin grouping_function
    // non-terminal rule element: expr_sum
// begin zero_or_more_function
// begin grouping_function
// begin grouping_function
// begin or_function
    // terminal rule element: TOK_OPBRACE
// end or_function
    // terminal rule element: TOK_LT
// end grouping_function
    // non-terminal rule element: expr_sum
// end grouping_function
// end zero_or_more_function
// end grouping_function
// end or_function
// begin or_function
// begin grouping_function
    // non-terminal rule element: expr_sum
// begin zero_or_more_function
// begin grouping_function
// begin grouping_function
// begin or_function
    // terminal rule element: TOK_CPBRACE_EQUAL
// end or_function
    // terminal rule element: TOK_GTE
// end grouping_function
    // non-terminal rule element: expr_sum
// end grouping_function
// end zero_or_more_function
// end grouping_function
// end or_function
// begin grouping_function
    // non-terminal rule element: expr_sum
// begin zero_or_more_function
// begin grouping_function
// begin grouping_function
// begin or_function
    // terminal rule element: TOK_CPBRACE_EQUAL
// end or_function
    // terminal rule element: TOK_LTE
// end grouping_function
    // non-terminal rule element: expr_sum
// end grouping_function
// end zero_or_more_function
// end grouping_function
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_expr_magnitude_t*)create_ast_node(AST_EXPR_MAGNITUDE);
// retv->expr_sum = expr_sum;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expr_sum = expr_sum;
// retv->expr_sum = expr_sum;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expr_sum = expr_sum;
// retv->expr_sum = expr_sum;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expr_sum = expr_sum;
// retv->expr_sum = expr_sum;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expr_sum = expr_sum;

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

