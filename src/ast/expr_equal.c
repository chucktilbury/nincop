/**
 * @file ./out/ast/expr_equal.c
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
 * Traverse the expr_equal data structure.
 *
 * expr_equal ( ( expr_magnitude ( ( TOK_EQUAL_EQUAL | TOK_EQU ) expr_magnitude ) * ) | ( expr_magnitude ( ( TOK_BANG_EQUAL | TOK_NEQU ) expr_magnitude ) * ) ) 
 */
void traverse_expr_equal(ast_expr_equal_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

