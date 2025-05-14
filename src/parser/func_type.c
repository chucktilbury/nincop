/**
 * @file ./out/parser/func_type.c
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
 * func_type ( type_name | TOK_NOTHING ) 
 */
ast_func_type_t* parse_func_type(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_func_type_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_type_name_t* type_name = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
    // non-terminal rule element: type_name
// end or_function
    // terminal rule element: TOK_NOTHING
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_func_type_t*)create_ast_node(AST_FUNC_TYPE);
// retv->type_name = type_name;

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

