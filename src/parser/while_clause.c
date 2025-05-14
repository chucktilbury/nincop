/**
 * @file ./out/parser/while_clause.c
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
 * while_clause ( TOK_WHILE ( TOK_OPAREN expression ? TOK_CPAREN ) ? ) 
 */
ast_while_clause_t* parse_while_clause(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_while_clause_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* TERMINAL_OPER = NULL;
// ast_expression_t* expression = NULL;
// token_t* TERMINAL_OPER = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // terminal rule element: TOK_WHILE
// begin zero_or_one_function
// begin grouping_function
    // terminal rule element: TOK_OPAREN
// begin zero_or_one_function
    // non-terminal rule element: expression
// end zero_or_one_function
    // terminal rule element: TOK_CPAREN
// end grouping_function
// end zero_or_one_function
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_while_clause_t*)create_ast_node(AST_WHILE_CLAUSE);
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

