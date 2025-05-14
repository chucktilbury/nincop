/**
 * @file ./out/parser/func_body_element.c
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
 * func_body_element ( data_declaration | data_decl_assignment | compound_reference | assignment | if_statement | while_statement | do_statement | for_statement | return_statement | exit_statement | raise_statement | exception_block | TOK_INLINE ) 
 */
ast_func_body_element_t* parse_func_body_element(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_func_body_element_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_data_declaration_t* data_declaration = NULL;
// ast_data_decl_assignment_t* data_decl_assignment = NULL;
// ast_compound_reference_t* compound_reference = NULL;
// ast_assignment_t* assignment = NULL;
// ast_if_statement_t* if_statement = NULL;
// ast_while_statement_t* while_statement = NULL;
// ast_do_statement_t* do_statement = NULL;
// ast_for_statement_t* for_statement = NULL;
// ast_return_statement_t* return_statement = NULL;
// ast_exit_statement_t* exit_statement = NULL;
// ast_raise_statement_t* raise_statement = NULL;
// ast_exception_block_t* exception_block = NULL;
// token_t* INLINE = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
    // non-terminal rule element: data_declaration
// end or_function
// begin or_function
    // non-terminal rule element: data_decl_assignment
// end or_function
// begin or_function
    // non-terminal rule element: compound_reference
// end or_function
// begin or_function
    // non-terminal rule element: assignment
// end or_function
// begin or_function
    // non-terminal rule element: if_statement
// end or_function
// begin or_function
    // non-terminal rule element: while_statement
// end or_function
// begin or_function
    // non-terminal rule element: do_statement
// end or_function
// begin or_function
    // non-terminal rule element: for_statement
// end or_function
// begin or_function
    // non-terminal rule element: return_statement
// end or_function
// begin or_function
    // non-terminal rule element: exit_statement
// end or_function
// begin or_function
    // non-terminal rule element: raise_statement
// end or_function
// begin or_function
    // non-terminal rule element: exception_block
// end or_function
    // terminal rule element: TOK_INLINE
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_func_body_element_t*)create_ast_node(AST_FUNC_BODY_ELEMENT);
// retv->data_declaration = data_declaration;
// retv->data_decl_assignment = data_decl_assignment;
// retv->compound_reference = compound_reference;
// retv->assignment = assignment;
// retv->if_statement = if_statement;
// retv->while_statement = while_statement;
// retv->do_statement = do_statement;
// retv->for_statement = for_statement;
// retv->return_statement = return_statement;
// retv->exit_statement = exit_statement;
// retv->raise_statement = raise_statement;
// retv->exception_block = exception_block;
// retv->INLINE = INLINE;

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

