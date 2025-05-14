/**
 * @file ./out/parser/operator_type.c
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
 * operator_type ( TOK__ADD_ | TOK__SUBTRACT_ | TOK__MULTIPLY_ | TOK__DIVIDE_ | TOK__MODULO_ | TOK__POWER_ | TOK__LESS_THAN_ | TOK_MORE_THAN_ | TOK__LESS_OR_EQUAL_ | TOK__MORE_OR_EQUAL_ | TOK__EQUAL_ | TOK__NOT_EQUAL_ | TOK__ASSIGN_ | TOK__ADD_EQUAL_ | TOK__SUBTRACT_EQUAL_ | TOK__MULTIPLY_EQUAL_ | TOK__DIVIDE_EQUAL_ | TOK__MODULO_EQUAL_ | TOK__UNARY_NOT_ | TOK__UNARY_NEGATE_ | TOK__AND_ | TOK__OR_ | TOK__CREATE_ | TOK__DESTROY_ ) 
 */
ast_operator_type_t* parse_operator_type(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_operator_type_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();



while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
    // terminal rule element: TOK__ADD_
// end or_function
// begin or_function
    // terminal rule element: TOK__SUBTRACT_
// end or_function
// begin or_function
    // terminal rule element: TOK__MULTIPLY_
// end or_function
// begin or_function
    // terminal rule element: TOK__DIVIDE_
// end or_function
// begin or_function
    // terminal rule element: TOK__MODULO_
// end or_function
// begin or_function
    // terminal rule element: TOK__POWER_
// end or_function
// begin or_function
    // terminal rule element: TOK__LESS_THAN_
// end or_function
// begin or_function
    // terminal rule element: TOK_MORE_THAN_
// end or_function
// begin or_function
    // terminal rule element: TOK__LESS_OR_EQUAL_
// end or_function
// begin or_function
    // terminal rule element: TOK__MORE_OR_EQUAL_
// end or_function
// begin or_function
    // terminal rule element: TOK__EQUAL_
// end or_function
// begin or_function
    // terminal rule element: TOK__NOT_EQUAL_
// end or_function
// begin or_function
    // terminal rule element: TOK__ASSIGN_
// end or_function
// begin or_function
    // terminal rule element: TOK__ADD_EQUAL_
// end or_function
// begin or_function
    // terminal rule element: TOK__SUBTRACT_EQUAL_
// end or_function
// begin or_function
    // terminal rule element: TOK__MULTIPLY_EQUAL_
// end or_function
// begin or_function
    // terminal rule element: TOK__DIVIDE_EQUAL_
// end or_function
// begin or_function
    // terminal rule element: TOK__MODULO_EQUAL_
// end or_function
// begin or_function
    // terminal rule element: TOK__UNARY_NOT_
// end or_function
// begin or_function
    // terminal rule element: TOK__UNARY_NEGATE_
// end or_function
// begin or_function
    // terminal rule element: TOK__AND_
// end or_function
// begin or_function
    // terminal rule element: TOK__OR_
// end or_function
// begin or_function
    // terminal rule element: TOK__CREATE_
// end or_function
    // terminal rule element: TOK__DESTROY_
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_operator_type_t*)create_ast_node(AST_OPERATOR_TYPE);

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

