/**
 * @file ./out/parser/func_parameters.c
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
 * func_parameters ( TOK_OPAREN ( data_name_decl ( TOK_COMMA data_name_decl ) * ) ? TOK_CPAREN ) 
 */
ast_func_parameters_t* parse_func_parameters(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_func_parameters_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* TERMINAL_OPER = NULL;
// ast_data_name_decl_t* data_name_decl = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_data_name_decl_t* data_name_decl = NULL;
// token_t* TERMINAL_OPER = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // terminal rule element: TOK_OPAREN
// begin zero_or_one_function
// begin grouping_function
    // non-terminal rule element: data_name_decl
// begin zero_or_more_function
// begin grouping_function
    // terminal rule element: TOK_COMMA
    // non-terminal rule element: data_name_decl
// end grouping_function
// end zero_or_more_function
// end grouping_function
// end zero_or_one_function
    // terminal rule element: TOK_CPAREN
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_func_parameters_t*)create_ast_node(AST_FUNC_PARAMETERS);
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->data_name_decl = data_name_decl;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->data_name_decl = data_name_decl;
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

