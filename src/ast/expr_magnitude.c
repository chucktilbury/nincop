/**
 * @file ./out/ast/expr_magnitude.c
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
 * Traverse the expr_magnitude data structure.
 *
 * expr_magnitude ( ( expr_sum ( ( TOK_CPBRACE | TOK_GT ) expr_sum ) * ) | ( expr_sum ( ( TOK_OPBRACE | TOK_LT ) expr_sum ) * ) | ( expr_sum ( ( TOK_CPBRACE_EQUAL | TOK_GTE ) expr_sum ) * ) | ( expr_sum ( ( TOK_CPBRACE_EQUAL | TOK_LTE ) expr_sum ) * ) ) 
 */
void traverse_expr_magnitude(ast_expr_magnitude_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

