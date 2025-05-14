/**
 * @file ./out/parser/do_statement.c
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
 * do_statement ( TOK_DO loop_body while_clause ) 
 */
ast_do_statement_t* parse_do_statement(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_do_statement_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_loop_body_t* loop_body = NULL;
// ast_while_clause_t* while_clause = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // terminal rule element: TOK_DO
    // non-terminal rule element: loop_body
    // non-terminal rule element: while_clause
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_do_statement_t*)create_ast_node(AST_DO_STATEMENT);
// retv->loop_body = loop_body;
// retv->while_clause = while_clause;

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

