/**
 * @file ./out/parser/compound_reference_item.c
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
 * compound_reference_item ( TOK_IDENTIFIER | array_reference | func_reference ) 
 */
ast_compound_reference_item_t* parse_compound_reference_item(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_compound_reference_item_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* IDENTIFIER = NULL;
// ast_array_reference_t* array_reference = NULL;
// ast_func_reference_t* func_reference = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
    // terminal rule element: TOK_IDENTIFIER
// end or_function
// begin or_function
    // non-terminal rule element: array_reference
// end or_function
    // non-terminal rule element: func_reference
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_compound_reference_item_t*)create_ast_node(AST_COMPOUND_REFERENCE_ITEM);
// retv->IDENTIFIER = IDENTIFIER;
// retv->array_reference = array_reference;
// retv->func_reference = func_reference;

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

