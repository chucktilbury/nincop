/**
 * @file ./out/parser/exception_block.c
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
 * exception_block ( try_clause except_clause + final_clause ? ) 
 */
ast_exception_block_t* parse_exception_block(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_exception_block_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_try_clause_t* try_clause = NULL;
// ast_except_clause_t* except_clause = NULL;
// ast_final_clause_t* final_clause = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // non-terminal rule element: try_clause
// begin one_or_more_function
    // non-terminal rule element: except_clause
// end one_or_more_function
// begin zero_or_one_function
    // non-terminal rule element: final_clause
// end zero_or_one_function
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_exception_block_t*)create_ast_node(AST_EXCEPTION_BLOCK);
// retv->try_clause = try_clause;
// retv->except_clause = except_clause;
// retv->final_clause = final_clause;

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

