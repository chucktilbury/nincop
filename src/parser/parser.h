/**
 * @file ./out/parser/parser.h
 *
 * This is a generated file. If you edit this file, don't run the generator
 * in this directory. Run it in a different one and then merge the results
 * using a tool like diff.
 *
 * @date Wed May 14 14:31:37 2025
 * @author Chuck Tilbury
 *
 */

#ifndef _PARSER_H_
#define _PARSER_H_

#include "ast.h"
#include "common.h"

typedef enum {
    PMODE_NORMAL,
    PMODE_INCLUDE,
    PMODE_IMPORT,
} parser_mode_t;

typedef enum {
    SCOPE_PRIVATE,
    SCOPE_PUBLIC,
    SCOPE_PROTECTED,
} parser_scope_t;

typedef struct {
    ptr_list_t* scope_stack;
    ptr_list_t* mode_stack;
} parser_state_t;

ast_node_t* parse(void);
parser_state_t* create_parser_state(void);
void push_parser_scope(parser_state_t* pstate, parser_scope_t scope);
parser_scope_t pop_parser_scope(parser_state_t* pstate);
parser_scope_t peek_parser_scope(parser_state_t* pstate);
void push_parser_mode(parser_state_t* pstate, parser_mode_t mode);
parser_mode_t pop_parser_mode(parser_state_t* pstate);
parser_mode_t peek_parser_mode(parser_state_t* pstate);
void recover_parser_error(parser_state_t* pstate);

#endif /* _PARSER_H_ */



