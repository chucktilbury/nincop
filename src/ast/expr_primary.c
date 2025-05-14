/**
 * @file ./out/ast/expr_primary.c
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
 * Traverse the expr_primary data structure.
 *
 * expr_primary ( ( TOK_OPAREN expression TOK_CPAREN ) | TOK_INT_LITERAL | TOK_FLOAT_LITERAL | TOK_BOOL_LITERAL | formatted_string | compound_reference | cast_clause ) 
 */
void traverse_expr_primary(ast_expr_primary_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

