/**
 * @file ./out/scanner/tokens.h
 *
 * This is a generated file. If you edit this file, don't run the generator
 * in this directory. Run it in a different one and then merge the results
 * using a tool like diff.
 *
 * @date Wed May 14 14:31:37 2025
 * @author Chuck Tilbury
 *
 */

#ifndef _TOKENS_H_
#define _TOKENS_H_

#include <stdbool.h>
#include "common.h"

typedef enum {
    TOK_END_OF_FILE = 256,
    TOK_END_OF_INPUT = 257,
    TOK_ERROR = 258,
    TOK_BANG = 258,
    TOK_BANG_EQUAL = 259,
    TOK_PERCENT = 260,
    TOK_PERCENT_EQUAL = 261,
    TOK_AMP = 262,
    TOK_OPAREN = 263,
    TOK_CPAREN = 264,
    TOK_STAR = 265,
    TOK_STAR_EQUAL = 266,
    TOK_PLUS = 267,
    TOK_PLUS_EQUAL = 268,
    TOK_COMMA = 269,
    TOK_MINUS = 270,
    TOK_MINUS_EQUAL = 271,
    TOK_DOT = 272,
    TOK_SLASH = 273,
    TOK_SLASH_EQUAL = 274,
    TOK_COLON = 275,
    TOK_OPBRACE = 276,
    TOK_EQUAL = 277,
    TOK_EQUAL_EQUAL = 278,
    TOK_CPBRACE = 279,
    TOK_CPBRACE_EQUAL = 280,
    TOK_ADD_SEARCH = 281,
    TOK_BOOL_LITERAL = 282,
    TOK_FLOAT_LITERAL = 283,
    TOK_IDENTIFIER = 284,
    TOK_INLINE = 285,
    TOK_INT_LITERAL = 286,
    TOK_STRING_LITERAL = 287,
    TOK_OSBRACE = 288,
    TOK_CSBRACE = 289,
    TOK_CARET = 290,
    TOK__ADD_ = 291,
    TOK__ADD_EQUAL_ = 292,
    TOK__AND_ = 293,
    TOK__ASSIGN_ = 294,
    TOK__CREATE_ = 295,
    TOK__DESTROY_ = 296,
    TOK__DIVIDE_ = 297,
    TOK__DIVIDE_EQUAL_ = 298,
    TOK__EQUAL_ = 299,
    TOK__LESS_OR_EQUAL_ = 300,
    TOK__LESS_THAN_ = 301,
    TOK__MODULO_ = 302,
    TOK__MODULO_EQUAL_ = 303,
    TOK__MORE_OR_EQUAL_ = 304,
    TOK__MULTIPLY_ = 305,
    TOK__MULTIPLY_EQUAL_ = 306,
    TOK__NOT_EQUAL_ = 307,
    TOK__OR_ = 308,
    TOK__POWER_ = 309,
    TOK__SUBTRACT_ = 310,
    TOK__SUBTRACT_EQUAL_ = 311,
    TOK__UNARY_NEGATE_ = 312,
    TOK__UNARY_NOT_ = 313,
    TOK_AND = 314,
    TOK_AS = 315,
    TOK_BOOL = 316,
    TOK_BOOLEAN = 317,
    TOK_BREAK = 318,
    TOK_CONST = 319,
    TOK_CONTINUE = 320,
    TOK_DO = 321,
    TOK_ELSE = 322,
    TOK_EQU = 323,
    TOK_EXCEPT = 324,
    TOK_EXIT = 325,
    TOK_FINAL = 326,
    TOK_FLOAT = 327,
    TOK_FOR = 328,
    TOK_GT = 329,
    TOK_GTE = 330,
    TOK_HASH = 331,
    TOK_IF = 332,
    TOK_IMPORT = 333,
    TOK_IN = 334,
    TOK_INT = 335,
    TOK_INTEGER = 336,
    TOK_LIST = 337,
    TOK_LT = 338,
    TOK_LTE = 339,
    TOK_MORE_THAN_ = 340,
    TOK_NAMESPACE = 341,
    TOK_NEQU = 342,
    TOK_NOT = 343,
    TOK_NOTHING = 344,
    TOK_OR = 345,
    TOK_PRIVATE = 346,
    TOK_PROTECTED = 347,
    TOK_PUBLIC = 348,
    TOK_RAISE = 349,
    TOK_RETURN = 350,
    TOK_START = 351,
    TOK_STR = 352,
    TOK_STRING = 353,
    TOK_TRY = 354,
    TOK_TYPE = 355,
    TOK_WHILE = 356,
    TOK_OCBRACE = 357,
    TOK_BAR = 358,
    TOK_CCBRACE = 359
} token_type_t;

typedef struct _token_t_ {
    token_type_t type;
    string_t* str;
    const char* fname;
    int line_no;
    int col_no;
    struct _token_t_* next;
} token_t;

token_t* create_token(string_t* str, token_type_t type);
void destroy_token(token_t* tok);
const char* tok_type_to_str(token_t* tok);

void init_token_queue(void);
void destroy_token_queue(void);
void add_token_queue(token_t* tok);
void* mark_token_queue(void);
void restore_token_queue(void* mark);
void consume_token_queue(void);

token_t* get_token(void);
bool expect_token(token_type_t type);
token_t* consume_token(void);

#endif /* _TOKENS_H_ */


