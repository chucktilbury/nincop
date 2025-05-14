/**
 * @file ./out/ast/type_parameter.c
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
 * Traverse the type_parameter data structure.
 *
 * type_parameter ( scope_operator ? compound_identifier ( TOK_AS TOK_IDENTIFIER ) ? ) 
 */
void traverse_type_parameter(ast_type_parameter_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

