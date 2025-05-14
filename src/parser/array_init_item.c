/**
 * @file ./out/parser/array_init_item.c
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
 * array_init_item ( expression | ( TOK_STRING_LITERAL TOK_COLON expression ) | array_initializer ) 
 */
ast_array_init_item_t* parse_array_init_item(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_array_init_item_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_expression_t* expression = NULL;
// token_t* STRING_LITERAL = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expression_t* expression = NULL;
// ast_array_initializer_t* array_initializer = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
    // non-terminal rule element: expression
// end or_function
// begin or_function
// begin grouping_function
    // terminal rule element: TOK_STRING_LITERAL
    // terminal rule element: TOK_COLON
    // non-terminal rule element: expression
// end grouping_function
// end or_function
    // non-terminal rule element: array_initializer
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_array_init_item_t*)create_ast_node(AST_ARRAY_INIT_ITEM);
// retv->expression = expression;
// retv->STRING_LITERAL = STRING_LITERAL;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expression = expression;
// retv->array_initializer = array_initializer;

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

