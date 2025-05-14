/**
 * @file ./out/parser/cast_clause.c
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
 * cast_clause ( type_name TOK_OPBRACE compound_reference TOK_CPBRACE ) 
 */
ast_cast_clause_t* parse_cast_clause(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_cast_clause_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_type_name_t* type_name = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_compound_reference_t* compound_reference = NULL;
// token_t* TERMINAL_OPER = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // non-terminal rule element: type_name
    // terminal rule element: TOK_OPBRACE
    // non-terminal rule element: compound_reference
    // terminal rule element: TOK_CPBRACE
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_cast_clause_t*)create_ast_node(AST_CAST_CLAUSE);
// retv->type_name = type_name;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->compound_reference = compound_reference;
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

