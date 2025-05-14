/**
 * @file ./out/ast/scope_operator.c
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
 * Traverse the scope_operator data structure.
 *
 * scope_operator ( TOK_PROTECTED | TOK_PUBLIC | TOK_PRIVATE ) 
 */
void traverse_scope_operator(ast_scope_operator_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

