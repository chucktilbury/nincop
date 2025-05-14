/**
 * @file ./out/ast/operator_type.c
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
 * Traverse the operator_type data structure.
 *
 * operator_type ( TOK__ADD_ | TOK__SUBTRACT_ | TOK__MULTIPLY_ | TOK__DIVIDE_ | TOK__MODULO_ | TOK__POWER_ | TOK__LESS_THAN_ | TOK_MORE_THAN_ | TOK__LESS_OR_EQUAL_ | TOK__MORE_OR_EQUAL_ | TOK__EQUAL_ | TOK__NOT_EQUAL_ | TOK__ASSIGN_ | TOK__ADD_EQUAL_ | TOK__SUBTRACT_EQUAL_ | TOK__MULTIPLY_EQUAL_ | TOK__DIVIDE_EQUAL_ | TOK__MODULO_EQUAL_ | TOK__UNARY_NOT_ | TOK__UNARY_NEGATE_ | TOK__AND_ | TOK__OR_ | TOK__CREATE_ | TOK__DESTROY_ ) 
 */
void traverse_operator_type(ast_operator_type_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

