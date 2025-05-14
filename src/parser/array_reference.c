/**
 * @file ./out/parser/array_reference.c
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
 * array_reference ( TOK_IDENTIFIER TOK_OSBRACE array_ref_index TOK_CSBRACE ( TOK_OSBRACE array_ref_index TOK_CSBRACE ) * ) 
 */
ast_array_reference_t* parse_array_reference(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_array_reference_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* IDENTIFIER = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_array_ref_index_t* array_ref_index = NULL;
// token_t* TERMINAL_OPER = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_array_ref_index_t* array_ref_index = NULL;
// token_t* TERMINAL_OPER = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // terminal rule element: TOK_IDENTIFIER
    // terminal rule element: TOK_OSBRACE
    // non-terminal rule element: array_ref_index
    // terminal rule element: TOK_CSBRACE
// begin zero_or_more_function
// begin grouping_function
    // terminal rule element: TOK_OSBRACE
    // non-terminal rule element: array_ref_index
    // terminal rule element: TOK_CSBRACE
// end grouping_function
// end zero_or_more_function
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_array_reference_t*)create_ast_node(AST_ARRAY_REFERENCE);
// retv->IDENTIFIER = IDENTIFIER;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->array_ref_index = array_ref_index;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->array_ref_index = array_ref_index;
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

