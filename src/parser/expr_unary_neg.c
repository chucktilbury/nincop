/**
 * @file ./out/parser/expr_unary_neg.c
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
 * expr_unary_neg ( ( TOK_MINUS expr_unary_not ) * | expr_primary ) 
 */
ast_expr_unary_neg_t* parse_expr_unary_neg(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_expr_unary_neg_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* TERMINAL_OPER = NULL;
// ast_expr_unary_not_t* expr_unary_not = NULL;
// ast_expr_primary_t* expr_primary = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
// begin zero_or_more_function
// begin grouping_function
    // terminal rule element: TOK_MINUS
    // non-terminal rule element: expr_unary_not
// end grouping_function
// end zero_or_more_function
// end or_function
    // non-terminal rule element: expr_primary
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_expr_unary_neg_t*)create_ast_node(AST_EXPR_UNARY_NEG);
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expr_unary_not = expr_unary_not;
// retv->expr_primary = expr_primary;

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

