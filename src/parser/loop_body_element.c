/**
 * @file ./out/parser/loop_body_element.c
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
 * loop_body_element ( func_body_element | TOK_CONTINUE | TOK_BREAK ) 
 */
ast_loop_body_element_t* parse_loop_body_element(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_loop_body_element_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_func_body_element_t* func_body_element = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
    // non-terminal rule element: func_body_element
// end or_function
// begin or_function
    // terminal rule element: TOK_CONTINUE
// end or_function
    // terminal rule element: TOK_BREAK
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_loop_body_element_t*)create_ast_node(AST_LOOP_BODY_ELEMENT);
// retv->func_body_element = func_body_element;

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

