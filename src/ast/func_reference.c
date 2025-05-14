/**
 * @file ./out/ast/func_reference.c
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
 * Traverse the func_reference data structure.
 *
 * func_reference ( TOK_IDENTIFIER TOK_OPAREN ( expression ( TOK_COMMA expression ) * ) ? TOK_CPAREN ) 
 */
void traverse_func_reference(ast_func_reference_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

