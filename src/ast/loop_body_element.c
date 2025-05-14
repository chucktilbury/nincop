/**
 * @file ./out/ast/loop_body_element.c
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
 * Traverse the loop_body_element data structure.
 *
 * loop_body_element ( func_body_element | TOK_CONTINUE | TOK_BREAK ) 
 */
void traverse_loop_body_element(ast_loop_body_element_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

