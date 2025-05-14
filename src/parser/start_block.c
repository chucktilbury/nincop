/**
 * @file ./out/parser/start_block.c
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
 * start_block ( TOK_START func_body ) 
 */
ast_start_block_t* parse_start_block(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_start_block_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_func_body_t* func_body = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // terminal rule element: TOK_START
    // non-terminal rule element: func_body
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_start_block_t*)create_ast_node(AST_START_BLOCK);
// retv->func_body = func_body;

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

