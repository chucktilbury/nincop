/**
 * @file ./out/ast/formatted_string.c
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
 * Traverse the formatted_string data structure.
 *
 * formatted_string ( TOK_STRING_LITERAL ( TOK_OPAREN ( string_param ( TOK_COMMA string_param ) * ) ? TOK_CPAREN ) ? ) 
 */
void traverse_formatted_string(ast_formatted_string_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

