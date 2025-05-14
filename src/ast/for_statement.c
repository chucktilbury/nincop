/**
 * @file ./out/ast/for_statement.c
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
#include "ast_protos.h"

/*
 * Traverse the for_statement data structure.
 *
 * for_statement ( TOK_FOR ( TOK_OPAREN ( type_name ? TOK_IDENTIFIER TOK_IN ) ? expression TOK_CPAREN ) ? loop_body ) 
 */
void traverse_for_statement(ast_for_statement_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

