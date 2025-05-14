/**
 * @file ./out/ast/raise_statement.c
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
 * Traverse the raise_statement data structure.
 *
 * raise_statement ( TOK_RAISE TOK_OPAREN TOK_IDENTIFIER TOK_COMMA ( expression | TOK_NOTHING ) TOK_CPAREN ) 
 */
void traverse_raise_statement(ast_raise_statement_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

