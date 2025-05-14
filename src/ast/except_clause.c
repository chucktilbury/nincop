/**
 * @file ./out/ast/except_clause.c
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
 * Traverse the except_clause data structure.
 *
 * except_clause ( TOK_EXCEPT TOK_OPAREN TOK_IDENTIFIER TOK_COMMA ( type_name | TOK_NOTHING ) TOK_IDENTIFIER TOK_CPAREN func_body ) 
 */
void traverse_except_clause(ast_except_clause_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

