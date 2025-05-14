/**
 * @file ./out/ast/expr_sum.c
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
 * Traverse the expr_sum data structure.
 *
 * expr_sum ( ( expr_product ( TOK_PLUS expr_product ) * ) | ( expr_product ( TOK_MINUS expr_product ) * ) ) 
 */
void traverse_expr_sum(ast_expr_sum_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

