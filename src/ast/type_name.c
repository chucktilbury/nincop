/**
 * @file ./out/ast/type_name.c
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
 * Traverse the type_name data structure.
 *
 * type_name ( ( TOK_INT | TOK_INTEGER ) | ( TOK_BOOL | TOK_BOOLEAN ) | ( TOK_STR | TOK_STRING ) | TOK_FLOAT | TOK_LIST | TOK_HASH | compound_identifier ) 
 */
void traverse_type_name(ast_type_name_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

