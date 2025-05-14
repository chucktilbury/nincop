/**
 * @file ./out/ast/program_item.c
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
 * Traverse the program_item data structure.
 *
 * program_item ( import_statement | data_declaration | data_decl_assignment | func_definition | type_definition | namespace_definition | directive_definition | scope_operator ) 
 */
void traverse_program_item(ast_program_item_t* node) {

    ENTER;
    if(node == NULL)
        RETURN();

    // ast implementation is TBD


    RETURN();
}

