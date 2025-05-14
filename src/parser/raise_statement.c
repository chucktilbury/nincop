/**
 * @file ./out/parser/raise_statement.c
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
 * raise_statement ( TOK_RAISE TOK_OPAREN TOK_IDENTIFIER TOK_COMMA ( expression | TOK_NOTHING ) TOK_CPAREN ) 
 */
ast_raise_statement_t* parse_raise_statement(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_raise_statement_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* TERMINAL_OPER = NULL;
// token_t* IDENTIFIER = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expression_t* expression = NULL;
// token_t* TERMINAL_OPER = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // terminal rule element: TOK_RAISE
    // terminal rule element: TOK_OPAREN
    // terminal rule element: TOK_IDENTIFIER
    // terminal rule element: TOK_COMMA
// begin grouping_function
// begin or_function
    // non-terminal rule element: expression
// end or_function
    // terminal rule element: TOK_NOTHING
// end grouping_function
    // terminal rule element: TOK_CPAREN
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_raise_statement_t*)create_ast_node(AST_RAISE_STATEMENT);
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->IDENTIFIER = IDENTIFIER;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expression = expression;
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

