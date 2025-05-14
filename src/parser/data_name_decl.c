/**
 * @file ./out/parser/data_name_decl.c
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
 * data_name_decl ( type_name TOK_IDENTIFIER ) 
 */
ast_data_name_decl_t* parse_data_name_decl(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_data_name_decl_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_type_name_t* type_name = NULL;
// token_t* IDENTIFIER = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // non-terminal rule element: type_name
    // terminal rule element: TOK_IDENTIFIER
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_data_name_decl_t*)create_ast_node(AST_DATA_NAME_DECL);
// retv->type_name = type_name;
// retv->IDENTIFIER = IDENTIFIER;

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

