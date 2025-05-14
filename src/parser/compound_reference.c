/**
 * @file ./out/parser/compound_reference.c
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
 * compound_reference ( compound_reference_item ( TOK_DOT compound_reference_item ) * ) 
 */
ast_compound_reference_t* parse_compound_reference(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_compound_reference_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_compound_reference_item_t* compound_reference_item = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_compound_reference_item_t* compound_reference_item = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // non-terminal rule element: compound_reference_item
// begin zero_or_more_function
// begin grouping_function
    // terminal rule element: TOK_DOT
    // non-terminal rule element: compound_reference_item
// end grouping_function
// end zero_or_more_function
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_compound_reference_t*)create_ast_node(AST_COMPOUND_REFERENCE);
// retv->compound_reference_item = compound_reference_item;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->compound_reference_item = compound_reference_item;

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

