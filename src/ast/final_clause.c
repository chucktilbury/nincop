/**
 * @file ./out/ast/final_clause.c
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
 * Traverse the final_clause data structure.
 *
 * final_clause ( TOK_FINAL TOK_OPAREN ( type_name | TOK_NOTHING ) TOK_IDENTIFIER TOK_CPAREN func_body ) 
 */
void traverse_final_clause(ast_final_clause_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

