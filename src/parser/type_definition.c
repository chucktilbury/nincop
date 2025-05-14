/**
 * @file ./out/parser/type_definition.c
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
 * type_definition ( TOK_TYPE TOK_IDENTIFIER ( TOK_OPAREN ( type_parameter ( TOK_COMMA type_parameter ) * ) ? TOK_CPAREN ) ? TOK_OCBRACE type_element ( type_element ) * TOK_CCBRACE ) 
 */
ast_type_definition_t* parse_type_definition(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_type_definition_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* IDENTIFIER = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_type_parameter_t* type_parameter = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_type_parameter_t* type_parameter = NULL;
// token_t* TERMINAL_OPER = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_type_element_t* type_element = NULL;
// ast_type_element_t* type_element = NULL;
// token_t* TERMINAL_OPER = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // terminal rule element: TOK_TYPE
    // terminal rule element: TOK_IDENTIFIER
// begin zero_or_one_function
// begin grouping_function
    // terminal rule element: TOK_OPAREN
// begin zero_or_one_function
// begin grouping_function
    // non-terminal rule element: type_parameter
// begin zero_or_more_function
// begin grouping_function
    // terminal rule element: TOK_COMMA
    // non-terminal rule element: type_parameter
// end grouping_function
// end zero_or_more_function
// end grouping_function
// end zero_or_one_function
    // terminal rule element: TOK_CPAREN
// end grouping_function
// end zero_or_one_function
    // terminal rule element: TOK_OCBRACE
    // non-terminal rule element: type_element
// begin zero_or_more_function
// begin grouping_function
    // non-terminal rule element: type_element
// end grouping_function
// end zero_or_more_function
    // terminal rule element: TOK_CCBRACE
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_type_definition_t*)create_ast_node(AST_TYPE_DEFINITION);
// retv->IDENTIFIER = IDENTIFIER;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->type_parameter = type_parameter;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->type_parameter = type_parameter;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->type_element = type_element;
// retv->type_element = type_element;
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

