/**
 * @file ./out/parser/data_decl_assignment.c
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
 * data_decl_assignment ( data_declaration TOK_EQUAL expression ) 
 */
ast_data_decl_assignment_t* parse_data_decl_assignment(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_data_decl_assignment_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_data_declaration_t* data_declaration = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expression_t* expression = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // non-terminal rule element: data_declaration
    // terminal rule element: TOK_EQUAL
    // non-terminal rule element: expression
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_data_decl_assignment_t*)create_ast_node(AST_DATA_DECL_ASSIGNMENT);
// retv->data_declaration = data_declaration;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expression = expression;

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

