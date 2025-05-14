/**
 * @file ./out/parser/assignment.c
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
 * assignment ( ( compound_reference TOK_EQUAL ( expression | array_initializer ) ) | ( compound_reference TOK_PLUS_EQUAL expression ) | ( compound_reference TOK_MINUS_EQUAL expression ) | ( compound_reference TOK_STAR_EQUAL expression ) | ( compound_reference TOK_SLASH_EQUAL expression ) | ( compound_reference TOK_PERCENT_EQUAL expression ) ) 
 */
ast_assignment_t* parse_assignment(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_assignment_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_compound_reference_t* compound_reference = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expression_t* expression = NULL;
// ast_array_initializer_t* array_initializer = NULL;
// ast_compound_reference_t* compound_reference = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expression_t* expression = NULL;
// ast_compound_reference_t* compound_reference = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expression_t* expression = NULL;
// ast_compound_reference_t* compound_reference = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expression_t* expression = NULL;
// ast_compound_reference_t* compound_reference = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expression_t* expression = NULL;
// ast_compound_reference_t* compound_reference = NULL;
// token_t* TERMINAL_OPER = NULL;
// ast_expression_t* expression = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
// begin grouping_function
    // non-terminal rule element: compound_reference
    // terminal rule element: TOK_EQUAL
// begin grouping_function
// begin or_function
    // non-terminal rule element: expression
// end or_function
    // non-terminal rule element: array_initializer
// end grouping_function
// end grouping_function
// end or_function
// begin or_function
// begin grouping_function
    // non-terminal rule element: compound_reference
    // terminal rule element: TOK_PLUS_EQUAL
    // non-terminal rule element: expression
// end grouping_function
// end or_function
// begin or_function
// begin grouping_function
    // non-terminal rule element: compound_reference
    // terminal rule element: TOK_MINUS_EQUAL
    // non-terminal rule element: expression
// end grouping_function
// end or_function
// begin or_function
// begin grouping_function
    // non-terminal rule element: compound_reference
    // terminal rule element: TOK_STAR_EQUAL
    // non-terminal rule element: expression
// end grouping_function
// end or_function
// begin or_function
// begin grouping_function
    // non-terminal rule element: compound_reference
    // terminal rule element: TOK_SLASH_EQUAL
    // non-terminal rule element: expression
// end grouping_function
// end or_function
// begin grouping_function
    // non-terminal rule element: compound_reference
    // terminal rule element: TOK_PERCENT_EQUAL
    // non-terminal rule element: expression
// end grouping_function
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_assignment_t*)create_ast_node(AST_ASSIGNMENT);
// retv->compound_reference = compound_reference;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expression = expression;
// retv->array_initializer = array_initializer;
// retv->compound_reference = compound_reference;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expression = expression;
// retv->compound_reference = compound_reference;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expression = expression;
// retv->compound_reference = compound_reference;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expression = expression;
// retv->compound_reference = compound_reference;
// retv->TERMINAL_OPER = TERMINAL_OPER;
// retv->expression = expression;
// retv->compound_reference = compound_reference;
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

