/**
 * @file ./out/parser/type_element.c
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
 * type_element ( scope_operator | data_name_decl | func_identifier func_parameters func_body ? ) 
 */
ast_type_element_t* parse_type_element(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_type_element_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_scope_operator_t* scope_operator = NULL;
// ast_data_name_decl_t* data_name_decl = NULL;
// ast_func_identifier_t* func_identifier = NULL;
// ast_func_parameters_t* func_parameters = NULL;
// ast_func_body_t* func_body = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
    // non-terminal rule element: scope_operator
// end or_function
// begin or_function
    // non-terminal rule element: data_name_decl
// end or_function
    // non-terminal rule element: func_identifier
    // non-terminal rule element: func_parameters
// begin zero_or_one_function
    // non-terminal rule element: func_body
// end zero_or_one_function
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_type_element_t*)create_ast_node(AST_TYPE_ELEMENT);
// retv->scope_operator = scope_operator;
// retv->data_name_decl = data_name_decl;
// retv->func_identifier = func_identifier;
// retv->func_parameters = func_parameters;
// retv->func_body = func_body;

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

