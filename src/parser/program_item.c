/**
 * @file ./out/parser/program_item.c
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
 * program_item ( import_statement | data_declaration | data_decl_assignment | func_definition | type_definition | namespace_definition | directive_definition | scope_operator ) 
 */
ast_program_item_t* parse_program_item(parser_state_t* pstate) {

ENTER;
ASSERT(pstate != NULL, "null pstate is not allowed");
ast_program_item_t* retv = NULL;
int state = 0;
bool finished = false;
void* post = mark_token_queue();

// ast_import_statement_t* import_statement = NULL;
// ast_data_declaration_t* data_declaration = NULL;
// ast_data_decl_assignment_t* data_decl_assignment = NULL;
// ast_func_definition_t* func_definition = NULL;
// ast_type_definition_t* type_definition = NULL;
// ast_namespace_definition_t* namespace_definition = NULL;
// ast_directive_definition_t* directive_definition = NULL;
// ast_scope_operator_t* scope_operator = NULL;


while(!finished) {
    switch(state) {

// begin grouping_function
// begin or_function
    // non-terminal rule element: import_statement
// end or_function
// begin or_function
    // non-terminal rule element: data_declaration
// end or_function
// begin or_function
    // non-terminal rule element: data_decl_assignment
// end or_function
// begin or_function
    // non-terminal rule element: func_definition
// end or_function
// begin or_function
    // non-terminal rule element: type_definition
// end or_function
// begin or_function
    // non-terminal rule element: namespace_definition
// end or_function
// begin or_function
    // non-terminal rule element: directive_definition
// end or_function
    // non-terminal rule element: scope_operator
// end grouping_function


        case STATE_MATCH:
            TRACE_STATE;
            consume_token_queue();
            retv = (ast_program_item_t*)create_ast_node(AST_PROGRAM_ITEM);
// retv->import_statement = import_statement;
// retv->data_declaration = data_declaration;
// retv->data_decl_assignment = data_decl_assignment;
// retv->func_definition = func_definition;
// retv->type_definition = type_definition;
// retv->namespace_definition = namespace_definition;
// retv->directive_definition = directive_definition;
// retv->scope_operator = scope_operator;

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

