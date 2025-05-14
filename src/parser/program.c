/**
 * @file ./out/parser/program.c
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
 * program ( program_item + | start_block ) 
 */
ast_program_t* parse_program(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_program_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_program_item_t* program_item = NULL;
// ast_start_block_t* start_block = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
// begin one_or_more_function
    // non-terminal rule element: program_item
// end one_or_more_function
// end or_function
    // non-terminal rule element: start_block
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_program_t*)create_ast_node(AST_PROGRAM);
// retv->program_item = program_item;
// retv->start_block = start_block;

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

