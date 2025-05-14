/**
 * @file ./out/parser/type_name.c
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
 * type_name ( ( TOK_INT | TOK_INTEGER ) | ( TOK_BOOL | TOK_BOOLEAN ) | ( TOK_STR | TOK_STRING ) | TOK_FLOAT | TOK_LIST | TOK_HASH | compound_identifier ) 
 */
ast_type_name_t* parse_type_name(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_type_name_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_compound_identifier_t* compound_identifier = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
// begin grouping_function
// begin or_function
    // terminal rule element: TOK_INT
// end or_function
    // terminal rule element: TOK_INTEGER
// end grouping_function
// end or_function
// begin or_function
// begin grouping_function
// begin or_function
    // terminal rule element: TOK_BOOL
// end or_function
    // terminal rule element: TOK_BOOLEAN
// end grouping_function
// end or_function
// begin or_function
// begin grouping_function
// begin or_function
    // terminal rule element: TOK_STR
// end or_function
    // terminal rule element: TOK_STRING
// end grouping_function
// end or_function
// begin or_function
    // terminal rule element: TOK_FLOAT
// end or_function
// begin or_function
    // terminal rule element: TOK_LIST
// end or_function
// begin or_function
    // terminal rule element: TOK_HASH
// end or_function
    // non-terminal rule element: compound_identifier
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_type_name_t*)create_ast_node(AST_TYPE_NAME);
// retv->compound_identifier = compound_identifier;

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

