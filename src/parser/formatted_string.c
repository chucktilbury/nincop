/**
 * @file ./out/parser/formatted_string.c
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
 * formatted_string ( TOK_STRING_LITERAL ( TOK_OPAREN ( string_param ( TOK_COMMA string_param ) * ) ? TOK_CPAREN ) ? ) 
 */
ast_formatted_string_t* parse_formatted_string(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_formatted_string_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* STRING_LITERAL = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_string_param_t* string_param = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_string_param_t* string_param = NULL;
// token_t* TERMINAL_OPER = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // terminal rule element: TOK_STRING_LITERAL
// begin zero_or_one_function
// begin grouping_function
    // terminal rule element: TOK_OPAREN
// begin zero_or_one_function
// begin grouping_function
    // non-terminal rule element: string_param
// begin zero_or_more_function
// begin grouping_function
    // terminal rule element: TOK_COMMA
    // non-terminal rule element: string_param
// end grouping_function
// end zero_or_more_function
// end grouping_function
// end zero_or_one_function
    // terminal rule element: TOK_CPAREN
// end grouping_function
// end zero_or_one_function
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_formatted_string_t*)create_ast_node(AST_FORMATTED_STRING);
// retv->STRING_LITERAL = STRING_LITERAL;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->string_param = string_param;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->string_param = string_param;
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

