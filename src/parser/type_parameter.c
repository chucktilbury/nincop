/**
 * @file ./out/parser/type_parameter.c
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
 * type_parameter ( scope_operator ? compound_identifier ( TOK_AS TOK_IDENTIFIER ) ? ) 
 */
ast_type_parameter_t* parse_type_parameter(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_type_parameter_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_scope_operator_t* scope_operator = NULL;
// ast_compound_identifier_t* compound_identifier = NULL;
// token_t* IDENTIFIER = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin zero_or_one_function
    // non-terminal rule element: scope_operator
// end zero_or_one_function
    // non-terminal rule element: compound_identifier
// begin zero_or_one_function
// begin grouping_function
    // terminal rule element: TOK_AS
    // terminal rule element: TOK_IDENTIFIER
// end grouping_function
// end zero_or_one_function
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_type_parameter_t*)create_ast_node(AST_TYPE_PARAMETER);
// retv->scope_operator = scope_operator;
// retv->compound_identifier = compound_identifier;
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

