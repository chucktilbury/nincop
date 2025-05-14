/**
 * @file ./out/ast/assignment.c
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
 * Traverse the assignment data structure.
 *
 * assignment ( ( compound_reference TOK_EQUAL ( expression | array_initializer ) ) | ( compound_reference TOK_PLUS_EQUAL expression ) | ( compound_reference TOK_MINUS_EQUAL expression ) | ( compound_reference TOK_STAR_EQUAL expression ) | ( compound_reference TOK_SLASH_EQUAL expression ) | ( compound_reference TOK_PERCENT_EQUAL expression ) ) 
 */
void traverse_assignment(ast_assignment_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

