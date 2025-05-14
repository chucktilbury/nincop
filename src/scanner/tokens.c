/**
 * @file ./out/scanner/tokens.c
 *
 * This is a generated file. If you edit this file, don't run the generator
 * in this directory. Run it in a different one and then merge the results
 * using a tool like diff.
 *
 * @date Wed May 14 14:31:37 2025
 * @author Chuck Tilbury
 *
 */


#include "tokens.h"
#include "scanner.h"

// there is one global token queue
typedef struct _token_queue_t_ {
    token_t* head;
    token_t* tail;
    token_t* crnt;
} token_queue_t;

static token_queue_t* token_queue = NULL;
static token_t end_of_input;

token_t* create_token(string_t* str, token_type_t type) {

    token_t* ptr = _ALLOC_TYPE(token_t);
    ptr->str = str;
    ptr->type = type;
    ptr->fname = get_scanner_fname();
    ptr->line_no = get_scanner_line_no();
    ptr->col_no = get_scanner_col_no();

    return ptr;
}

void destroy_token(token_t* tok) {

    if(tok != NULL) {
        destroy_string(tok->str);
        _FREE(tok);
        // note that the fname is allocated by the fileio
    }
}

const char* tok_type_to_str(token_t* tok) {

    return (tok->type == TOK_END_OF_INPUT)? "end of input":
        (tok->type == TOK_ERROR)? "error":
            (tok->type == TOK_BANG)? "!":
        (tok->type == TOK_BANG_EQUAL)? "!=":
        (tok->type == TOK_PERCENT)? "%":
        (tok->type == TOK_PERCENT_EQUAL)? "%=":
        (tok->type == TOK_AMP)? "&":
        (tok->type == TOK_OPAREN)? "(":
        (tok->type == TOK_CPAREN)? ")":
        (tok->type == TOK_STAR)? "*":
        (tok->type == TOK_STAR_EQUAL)? "*=":
        (tok->type == TOK_PLUS)? "+":
        (tok->type == TOK_PLUS_EQUAL)? "+=":
        (tok->type == TOK_COMMA)? ",":
        (tok->type == TOK_MINUS)? "-":
        (tok->type == TOK_MINUS_EQUAL)? "-=":
        (tok->type == TOK_DOT)? ".":
        (tok->type == TOK_SLASH)? "/":
        (tok->type == TOK_SLASH_EQUAL)? "/=":
        (tok->type == TOK_COLON)? ":":
        (tok->type == TOK_OPBRACE)? "<":
        (tok->type == TOK_EQUAL)? "=":
        (tok->type == TOK_EQUAL_EQUAL)? "==":
        (tok->type == TOK_CPBRACE)? ">":
        (tok->type == TOK_CPBRACE_EQUAL)? ">=":
        (tok->type == TOK_ADD_SEARCH)? "ADD_SEARCH":
        (tok->type == TOK_BOOL_LITERAL)? "BOOL_LITERAL":
        (tok->type == TOK_FLOAT_LITERAL)? "FLOAT_LITERAL":
        (tok->type == TOK_IDENTIFIER)? "IDENTIFIER":
        (tok->type == TOK_INLINE)? "INLINE":
        (tok->type == TOK_INT_LITERAL)? "INT_LITERAL":
        (tok->type == TOK_STRING_LITERAL)? "STRING_LITERAL":
        (tok->type == TOK_OSBRACE)? "[":
        (tok->type == TOK_CSBRACE)? "]":
        (tok->type == TOK_CARET)? "^":
        (tok->type == TOK__ADD_)? "_add_":
        (tok->type == TOK__ADD_EQUAL_)? "_add_equal_":
        (tok->type == TOK__AND_)? "_and_":
        (tok->type == TOK__ASSIGN_)? "_assign_":
        (tok->type == TOK__CREATE_)? "_create_":
        (tok->type == TOK__DESTROY_)? "_destroy_":
        (tok->type == TOK__DIVIDE_)? "_divide_":
        (tok->type == TOK__DIVIDE_EQUAL_)? "_divide_equal_":
        (tok->type == TOK__EQUAL_)? "_equal_":
        (tok->type == TOK__LESS_OR_EQUAL_)? "_less_or_equal_":
        (tok->type == TOK__LESS_THAN_)? "_less_than_":
        (tok->type == TOK__MODULO_)? "_modulo_":
        (tok->type == TOK__MODULO_EQUAL_)? "_modulo_equal_":
        (tok->type == TOK__MORE_OR_EQUAL_)? "_more_or_equal_":
        (tok->type == TOK__MULTIPLY_)? "_multiply_":
        (tok->type == TOK__MULTIPLY_EQUAL_)? "_multiply_equal_":
        (tok->type == TOK__NOT_EQUAL_)? "_not_equal_":
        (tok->type == TOK__OR_)? "_or_":
        (tok->type == TOK__POWER_)? "_power_":
        (tok->type == TOK__SUBTRACT_)? "_subtract_":
        (tok->type == TOK__SUBTRACT_EQUAL_)? "_subtract_equal_":
        (tok->type == TOK__UNARY_NEGATE_)? "_unary_negate_":
        (tok->type == TOK__UNARY_NOT_)? "_unary_not_":
        (tok->type == TOK_AND)? "and":
        (tok->type == TOK_AS)? "as":
        (tok->type == TOK_BOOL)? "bool":
        (tok->type == TOK_BOOLEAN)? "boolean":
        (tok->type == TOK_BREAK)? "break":
        (tok->type == TOK_CONST)? "const":
        (tok->type == TOK_CONTINUE)? "continue":
        (tok->type == TOK_DO)? "do":
        (tok->type == TOK_ELSE)? "else":
        (tok->type == TOK_EQU)? "equ":
        (tok->type == TOK_EXCEPT)? "except":
        (tok->type == TOK_EXIT)? "exit":
        (tok->type == TOK_FINAL)? "final":
        (tok->type == TOK_FLOAT)? "float":
        (tok->type == TOK_FOR)? "for":
        (tok->type == TOK_GT)? "gt":
        (tok->type == TOK_GTE)? "gte":
        (tok->type == TOK_HASH)? "hash":
        (tok->type == TOK_IF)? "if":
        (tok->type == TOK_IMPORT)? "import":
        (tok->type == TOK_IN)? "in":
        (tok->type == TOK_INT)? "int":
        (tok->type == TOK_INTEGER)? "integer":
        (tok->type == TOK_LIST)? "list":
        (tok->type == TOK_LT)? "lt":
        (tok->type == TOK_LTE)? "lte":
        (tok->type == TOK_MORE_THAN_)? "more_than_":
        (tok->type == TOK_NAMESPACE)? "namespace":
        (tok->type == TOK_NEQU)? "nequ":
        (tok->type == TOK_NOT)? "not":
        (tok->type == TOK_NOTHING)? "nothing":
        (tok->type == TOK_OR)? "or":
        (tok->type == TOK_PRIVATE)? "private":
        (tok->type == TOK_PROTECTED)? "protected":
        (tok->type == TOK_PUBLIC)? "public":
        (tok->type == TOK_RAISE)? "raise":
        (tok->type == TOK_RETURN)? "return":
        (tok->type == TOK_START)? "start":
        (tok->type == TOK_STR)? "str":
        (tok->type == TOK_STRING)? "string":
        (tok->type == TOK_TRY)? "try":
        (tok->type == TOK_TYPE)? "type":
        (tok->type == TOK_WHILE)? "while":
        (tok->type == TOK_OCBRACE)? "{":
        (tok->type == TOK_BAR)? "|":
        (tok->type == TOK_CCBRACE)? "}":
        "UNKNOWN";
}

void init_token_queue(void) {

    token_queue = _ALLOC_TYPE(token_queue_t);
    add_token_queue(get_scanner_token());

    end_of_input.type = TOK_END_OF_INPUT;
    end_of_input.str = create_string(NULL);
    // everything else is NULL;
}

void destroy_token_queue(void) {

    if(token_queue != NULL) {
        token_t* crnt;
        token_t* next;
        for(crnt = token_queue->head; crnt != NULL; crnt = next) {
            next = crnt->next;
            destroy_token(crnt);
        }
        _FREE(token_queue);
    }
}

void add_token_queue(token_t* tok) {

    if(token_queue->tail != NULL)
        token_queue->tail->next = tok;
    else {
        token_queue->head = tok;
        token_queue->crnt = tok;
    }
    token_queue->tail = tok;
}

void* mark_token_queue(void) {

    if(token_queue != NULL)
        return token_queue->crnt;
    else
        return NULL;
}

void restore_token_queue(void* mark) {

    if(token_queue != NULL)
        token_queue->crnt = (token_t*)mark;
}

void consume_token_queue(void) {

    if(token_queue != NULL) {
        if(token_queue->crnt != NULL && token_queue->crnt != token_queue->head) {
            token_t* next;
            token_t* tok = token_queue->head;
            for(; tok != NULL && tok != token_queue->crnt; tok = next) {
                next = tok->next;
                destroy_token(tok);
            }

            token_queue->head = token_queue->crnt;
        }
    }
}

token_t* get_token(void) {

    if(token_queue != NULL && token_queue->crnt != NULL)
        return token_queue->crnt;
    else
        return &end_of_input;
}

token_t* consume_token(void) {

    if(token_queue != NULL)
        if(token_queue->crnt != NULL)
            token_queue->crnt = token_queue->crnt->next;

    if(token_queue->crnt == NULL) {
        // accomodate a FLEX scanner
        // add_token_queue(get_scanner_token());
        get_scanner_token();
        token_queue->crnt = token_queue->tail;
    }

    return get_token();
}

bool expect_token(token_type_t type) {

    token_t* tok = get_token();
    return (tok->type == type)? true: false;
}



