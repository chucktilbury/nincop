/**
 * @file ./out/ast/expr_unary_not.c
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
 * Traverse the expr_unary_not data structure.
 *
 * expr_unary_not ( ( ( TOK_BANG | TOK_NOT ) expr_primary ) * | expr_primary ) 
 */
void traverse_expr_unary_not(ast_expr_unary_not_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

