/**
 * @file ./out/ast/array_init_item.c
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
 * Traverse the array_init_item data structure.
 *
 * array_init_item ( expression | ( TOK_STRING_LITERAL TOK_COLON expression ) | array_initializer ) 
 */
void traverse_array_init_item(ast_array_init_item_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

