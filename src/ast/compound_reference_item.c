/**
 * @file ./out/ast/compound_reference_item.c
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
 * Traverse the compound_reference_item data structure.
 *
 * compound_reference_item ( TOK_IDENTIFIER | array_reference | func_reference ) 
 */
void traverse_compound_reference_item(ast_compound_reference_item_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

