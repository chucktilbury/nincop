/**
 * @file ./out/parser/namespace_definition.c
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
 * namespace_definition ( TOK_NAMESPACE TOK_IDENTIFIER TOK_OCBRACE program_item + TOK_CCBRACE ) 
 */
ast_namespace_definition_t* parse_namespace_definition(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_namespace_definition_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* IDENTIFIER = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_program_item_t* program_item = NULL;
// token_t* TERMINAL_OPER = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // terminal rule element: TOK_NAMESPACE
    // terminal rule element: TOK_IDENTIFIER
    // terminal rule element: TOK_OCBRACE
// begin one_or_more_function
    // non-terminal rule element: program_item
// end one_or_more_function
    // terminal rule element: TOK_CCBRACE
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_namespace_definition_t*)create_ast_node(AST_NAMESPACE_DEFINITION);
// retv->IDENTIFIER = IDENTIFIER;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->program_item = program_item;
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

