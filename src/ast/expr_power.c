/**
 * @file ./out/ast/expr_power.c
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
 * Traverse the expr_power data structure.
 *
 * expr_power ( expr_unary_neg ( TOK_CARET expr_unary_neg ) * ) 
 */
void traverse_expr_power(ast_expr_power_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

