/**
 * @file ./out/parser/scope_operator.c
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
 * scope_operator ( TOK_PROTECTED | TOK_PUBLIC | TOK_PRIVATE ) 
 */
ast_scope_operator_t* parse_scope_operator(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_scope_operator_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();



while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
    // terminal rule element: TOK_PROTECTED
// end or_function
// begin or_function
    // terminal rule element: TOK_PUBLIC
// end or_function
    // terminal rule element: TOK_PRIVATE
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_scope_operator_t*)create_ast_node(AST_SCOPE_OPERATOR);

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

