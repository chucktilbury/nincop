/**
 * @file ./out/ast/array_reference.c
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
 * Traverse the array_reference data structure.
 *
 * array_reference ( TOK_IDENTIFIER TOK_OSBRACE array_ref_index TOK_CSBRACE ( TOK_OSBRACE array_ref_index TOK_CSBRACE ) * ) 
 */
void traverse_array_reference(ast_array_reference_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

