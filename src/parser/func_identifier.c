/**
 * @file ./out/parser/func_identifier.c
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
 * func_identifier ( TOK_IDENTIFIER | operator_type ) 
 */
ast_func_identifier_t* parse_func_identifier(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_func_identifier_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* IDENTIFIER = NULL;
// ast_operator_type_t* operator_type = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
    // terminal rule element: TOK_IDENTIFIER
// end or_function
    // non-terminal rule element: operator_type
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_func_identifier_t*)create_ast_node(AST_FUNC_IDENTIFIER);
// retv->IDENTIFIER = IDENTIFIER;
// retv->operator_type = operator_type;

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

