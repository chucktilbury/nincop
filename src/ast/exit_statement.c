/**
 * @file ./out/ast/exit_statement.c
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
 * Traverse the exit_statement data structure.
 *
 * exit_statement ( TOK_EXIT TOK_OPAREN expression TOK_CPAREN ) 
 */
void traverse_exit_statement(ast_exit_statement_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

