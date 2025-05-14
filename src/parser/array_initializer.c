/**
 * @file ./out/parser/array_initializer.c
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
 * array_initializer ( TOK_OCBRACE array_init_item ( TOK_COMMA array_init_item ) * TOK_CCBRACE ) 
 */
ast_array_initializer_t* parse_array_initializer(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_array_initializer_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* TERMINAL_OPER = NULL;
// ast_array_init_item_t* array_init_item = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_array_init_item_t* array_init_item = NULL;
// token_t* TERMINAL_OPER = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // terminal rule element: TOK_OCBRACE
    // non-terminal rule element: array_init_item
// begin zero_or_more_function
// begin grouping_function
    // terminal rule element: TOK_COMMA
    // non-terminal rule element: array_init_item
// end grouping_function
// end zero_or_more_function
    // terminal rule element: TOK_CCBRACE
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_array_initializer_t*)create_ast_node(AST_ARRAY_INITIALIZER);
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->array_init_item = array_init_item;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->array_init_item = array_init_item;
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

