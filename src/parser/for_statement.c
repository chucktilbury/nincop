/**
 * @file ./out/parser/for_statement.c
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
 * for_statement ( TOK_FOR ( TOK_OPAREN ( type_name ? TOK_IDENTIFIER TOK_IN ) ? expression TOK_CPAREN ) ? loop_body ) 
 */
ast_for_statement_t* parse_for_statement(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_for_statement_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* TERMINAL_OPER = NULL;
// ast_type_name_t* type_name = NULL;
// token_t* IDENTIFIER = NULL;
// ast_expression_t* expression = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_loop_body_t* loop_body = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // terminal rule element: TOK_FOR
// begin zero_or_one_function
// begin grouping_function
    // terminal rule element: TOK_OPAREN
// begin zero_or_one_function
// begin grouping_function
// begin zero_or_one_function
    // non-terminal rule element: type_name
// end zero_or_one_function
    // terminal rule element: TOK_IDENTIFIER
    // terminal rule element: TOK_IN
// end grouping_function
// end zero_or_one_function
    // non-terminal rule element: expression
    // terminal rule element: TOK_CPAREN
// end grouping_function
// end zero_or_one_function
    // non-terminal rule element: loop_body
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_for_statement_t*)create_ast_node(AST_FOR_STATEMENT);
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->type_name = type_name;
// retv->IDENTIFIER = IDENTIFIER;
// retv->expression = expression;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->loop_body = loop_body;

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

