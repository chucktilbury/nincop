/**
 * @file ./out/parser/import_statement.c
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
 * import_statement ( TOK_IMPORT TOK_STRING_LITERAL ( TOK_AS TOK_IDENTIFIER ) ? ) 
 */
ast_import_statement_t* parse_import_statement(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_import_statement_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// token_t* STRING_LITERAL = NULL;
// token_t* IDENTIFIER = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
    // terminal rule element: TOK_IMPORT
    // terminal rule element: TOK_STRING_LITERAL
// begin zero_or_one_function
// begin grouping_function
    // terminal rule element: TOK_AS
    // terminal rule element: TOK_IDENTIFIER
// end grouping_function
// end zero_or_one_function
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_import_statement_t*)create_ast_node(AST_IMPORT_STATEMENT);
// retv->STRING_LITERAL = STRING_LITERAL;
// retv->IDENTIFIER = IDENTIFIER;

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

