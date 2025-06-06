/**
 * @file ./out/parser/func_body.c
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
 * func_body ( TOK_OCBRACE ( func_body_element | func_body ) * TOK_CCBRACE ) 
 */
ast_func_body_t* parse_func_body(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_func_body_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* TERMINAL_OPER = NULL;
// ast_func_body_element_t* func_body_element = NULL;
// ast_func_body_t* func_body = NULL;
// token_t* TERMINAL_OPER = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // terminal rule element: TOK_OCBRACE
// begin zero_or_more_function
// begin grouping_function
// begin or_function
    // non-terminal rule element: func_body_element
// end or_function
    // non-terminal rule element: func_body
// end grouping_function
// end zero_or_more_function
    // terminal rule element: TOK_CCBRACE
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_func_body_t*)create_ast_node(AST_FUNC_BODY);
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->func_body_element = func_body_element;
// retv->func_body = func_body;
// retv->TERMINAL_OPER = TERMINAL_OPER;

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

