/**
 * @file ./out/ast/array_initializer.c
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
 * Traverse the array_initializer data structure.
 *
 * array_initializer ( TOK_OCBRACE array_init_item ( TOK_COMMA array_init_item ) * TOK_CCBRACE ) 
 */
void traverse_array_initializer(ast_array_initializer_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

