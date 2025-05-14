/**
 * @file ./out/ast/cast_clause.c
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
 * Traverse the cast_clause data structure.
 *
 * cast_clause ( type_name TOK_OPBRACE compound_reference TOK_CPBRACE ) 
 */
void traverse_cast_clause(ast_cast_clause_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

