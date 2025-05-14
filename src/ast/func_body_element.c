/**
 * @file ./out/ast/func_body_element.c
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
 * Traverse the func_body_element data structure.
 *
 * func_body_element ( data_declaration | data_decl_assignment | compound_reference | assignment | if_statement | while_statement | do_statement | for_statement | return_statement | exit_statement | raise_statement | exception_block | TOK_INLINE ) 
 */
void traverse_func_body_element(ast_func_body_element_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

