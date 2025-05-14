/**
 * @file ./out/parser/if_statement.c
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
 * if_statement ( if_clause ( else_clause * final_else ? ) ? ) 
 */
ast_if_statement_t* parse_if_statement(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_if_statement_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_if_clause_t* if_clause = NULL;
// ast_else_clause_t* else_clause = NULL;
// ast_final_else_t* final_else = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // non-terminal rule element: if_clause
// begin zero_or_one_function
// begin grouping_function
// begin zero_or_more_function
    // non-terminal rule element: else_clause
// end zero_or_more_function
// begin zero_or_one_function
    // non-terminal rule element: final_else
// end zero_or_one_function
// end grouping_function
// end zero_or_one_function
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_if_statement_t*)create_ast_node(AST_IF_STATEMENT);
// retv->if_clause = if_clause;
// retv->else_clause = else_clause;
// retv->final_else = final_else;

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

