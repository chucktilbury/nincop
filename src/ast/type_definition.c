/**
 * @file ./out/ast/type_definition.c
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
 * Traverse the type_definition data structure.
 *
 * type_definition ( TOK_TYPE TOK_IDENTIFIER ( TOK_OPAREN ( type_parameter ( TOK_COMMA type_parameter ) * ) ? TOK_CPAREN ) ? TOK_OCBRACE type_element ( type_element ) * TOK_CCBRACE ) 
 */
void traverse_type_definition(ast_type_definition_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

