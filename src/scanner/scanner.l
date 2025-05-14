/**
 * @file ./out/scanner/scanner.l
 *
 * This is a generated file. If you edit this file, don't run the generator
 * in this directory. Run it in a different one and then merge the results
 * using a tool like diff.
 *
 * @date Wed May 14 14:31:37 2025
 * @author Chuck Tilbury
 *
 */

%{
/*
 * This file is a template.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include "common.h"
#include "tokens.h"

int yycolumn = 1;
int inline_depth = 0;
string_t* strbuf = NULL;

extern int parser_line;
extern char* parser_file;

#define MAX_INCL 16

typedef struct _file_stack_t_ {
    const char* fname;
    FILE* fp;
    int line;
    int col;
    YY_BUFFER_STATE buffer;
    struct _file_stack_t_* next;
} file_stack_t;

file_stack_t* file_stack = NULL;

// const char* strip_quotes(const char* str) {
//     static char buf[64];
//     size_t len = strlen(str) - 2;
//     memset(buf, 0, sizeof(buf));
//     strncpy(buf, &str[1], (len < sizeof(buf))? len: sizeof(buf)-1);
//     return buf;
// }

#define YY_USER_ACTION \
  file_stack->col = yycolumn; \
  if (yylineno == prev_yylineno) yycolumn += yyleng; \
  else { \
    for (yycolumn = 1; yytext[yyleng - yycolumn] != '\n'; ++yycolumn) {} \
    prev_yylineno = yylineno; \
  }

%}

%x INLINE_BLOCK

%option yylineno
%option noinput
%option nounput
%option noyywrap

%%
   // int start_line, start_column;
   int prev_yylineno = yylineno;

"!"	{
    add_token_queue(create_token(create_string(yytext), TOK_BANG));
    return TOK_BANG;
}

"!="	{
    add_token_queue(create_token(create_string(yytext), TOK_BANG_EQUAL));
    return TOK_BANG_EQUAL;
}

"%"	{
    add_token_queue(create_token(create_string(yytext), TOK_PERCENT));
    return TOK_PERCENT;
}

"%="	{
    add_token_queue(create_token(create_string(yytext), TOK_PERCENT_EQUAL));
    return TOK_PERCENT_EQUAL;
}

"&"	{
    add_token_queue(create_token(create_string(yytext), TOK_AMP));
    return TOK_AMP;
}

"("	{
    add_token_queue(create_token(create_string(yytext), TOK_OPAREN));
    return TOK_OPAREN;
}

")"	{
    add_token_queue(create_token(create_string(yytext), TOK_CPAREN));
    return TOK_CPAREN;
}

"*"	{
    add_token_queue(create_token(create_string(yytext), TOK_STAR));
    return TOK_STAR;
}

"*="	{
    add_token_queue(create_token(create_string(yytext), TOK_STAR_EQUAL));
    return TOK_STAR_EQUAL;
}

"+"	{
    add_token_queue(create_token(create_string(yytext), TOK_PLUS));
    return TOK_PLUS;
}

"+="	{
    add_token_queue(create_token(create_string(yytext), TOK_PLUS_EQUAL));
    return TOK_PLUS_EQUAL;
}

","	{
    add_token_queue(create_token(create_string(yytext), TOK_COMMA));
    return TOK_COMMA;
}

"-"	{
    add_token_queue(create_token(create_string(yytext), TOK_MINUS));
    return TOK_MINUS;
}

"-="	{
    add_token_queue(create_token(create_string(yytext), TOK_MINUS_EQUAL));
    return TOK_MINUS_EQUAL;
}

"."	{
    add_token_queue(create_token(create_string(yytext), TOK_DOT));
    return TOK_DOT;
}

"/"	{
    add_token_queue(create_token(create_string(yytext), TOK_SLASH));
    return TOK_SLASH;
}

"/="	{
    add_token_queue(create_token(create_string(yytext), TOK_SLASH_EQUAL));
    return TOK_SLASH_EQUAL;
}

":"	{
    add_token_queue(create_token(create_string(yytext), TOK_COLON));
    return TOK_COLON;
}

"<"	{
    add_token_queue(create_token(create_string(yytext), TOK_OPBRACE));
    return TOK_OPBRACE;
}

"="	{
    add_token_queue(create_token(create_string(yytext), TOK_EQUAL));
    return TOK_EQUAL;
}

"=="	{
    add_token_queue(create_token(create_string(yytext), TOK_EQUAL_EQUAL));
    return TOK_EQUAL_EQUAL;
}

">"	{
    add_token_queue(create_token(create_string(yytext), TOK_CPBRACE));
    return TOK_CPBRACE;
}

">="	{
    add_token_queue(create_token(create_string(yytext), TOK_CPBRACE_EQUAL));
    return TOK_CPBRACE_EQUAL;
}

"ADD_SEARCH"	{
    add_token_queue(create_token(create_string(yytext), TOK_ADD_SEARCH));
    return TOK_ADD_SEARCH;
}

"BOOL_LITERAL"	{
    add_token_queue(create_token(create_string(yytext), TOK_BOOL_LITERAL));
    return TOK_BOOL_LITERAL;
}

"FLOAT_LITERAL"	{
    add_token_queue(create_token(create_string(yytext), TOK_FLOAT_LITERAL));
    return TOK_FLOAT_LITERAL;
}

"IDENTIFIER"	{
    add_token_queue(create_token(create_string(yytext), TOK_IDENTIFIER));
    return TOK_IDENTIFIER;
}

"INLINE"	{
    add_token_queue(create_token(create_string(yytext), TOK_INLINE));
    return TOK_INLINE;
}

"INT_LITERAL"	{
    add_token_queue(create_token(create_string(yytext), TOK_INT_LITERAL));
    return TOK_INT_LITERAL;
}

"STRING_LITERAL"	{
    add_token_queue(create_token(create_string(yytext), TOK_STRING_LITERAL));
    return TOK_STRING_LITERAL;
}

"["	{
    add_token_queue(create_token(create_string(yytext), TOK_OSBRACE));
    return TOK_OSBRACE;
}

"]"	{
    add_token_queue(create_token(create_string(yytext), TOK_CSBRACE));
    return TOK_CSBRACE;
}

"^"	{
    add_token_queue(create_token(create_string(yytext), TOK_CARET));
    return TOK_CARET;
}

"_add_"	{
    add_token_queue(create_token(create_string(yytext), TOK__ADD_));
    return TOK__ADD_;
}

"_add_equal_"	{
    add_token_queue(create_token(create_string(yytext), TOK__ADD_EQUAL_));
    return TOK__ADD_EQUAL_;
}

"_and_"	{
    add_token_queue(create_token(create_string(yytext), TOK__AND_));
    return TOK__AND_;
}

"_assign_"	{
    add_token_queue(create_token(create_string(yytext), TOK__ASSIGN_));
    return TOK__ASSIGN_;
}

"_create_"	{
    add_token_queue(create_token(create_string(yytext), TOK__CREATE_));
    return TOK__CREATE_;
}

"_destroy_"	{
    add_token_queue(create_token(create_string(yytext), TOK__DESTROY_));
    return TOK__DESTROY_;
}

"_divide_"	{
    add_token_queue(create_token(create_string(yytext), TOK__DIVIDE_));
    return TOK__DIVIDE_;
}

"_divide_equal_"	{
    add_token_queue(create_token(create_string(yytext), TOK__DIVIDE_EQUAL_));
    return TOK__DIVIDE_EQUAL_;
}

"_equal_"	{
    add_token_queue(create_token(create_string(yytext), TOK__EQUAL_));
    return TOK__EQUAL_;
}

"_less_or_equal_"	{
    add_token_queue(create_token(create_string(yytext), TOK__LESS_OR_EQUAL_));
    return TOK__LESS_OR_EQUAL_;
}

"_less_than_"	{
    add_token_queue(create_token(create_string(yytext), TOK__LESS_THAN_));
    return TOK__LESS_THAN_;
}

"_modulo_"	{
    add_token_queue(create_token(create_string(yytext), TOK__MODULO_));
    return TOK__MODULO_;
}

"_modulo_equal_"	{
    add_token_queue(create_token(create_string(yytext), TOK__MODULO_EQUAL_));
    return TOK__MODULO_EQUAL_;
}

"_more_or_equal_"	{
    add_token_queue(create_token(create_string(yytext), TOK__MORE_OR_EQUAL_));
    return TOK__MORE_OR_EQUAL_;
}

"_multiply_"	{
    add_token_queue(create_token(create_string(yytext), TOK__MULTIPLY_));
    return TOK__MULTIPLY_;
}

"_multiply_equal_"	{
    add_token_queue(create_token(create_string(yytext), TOK__MULTIPLY_EQUAL_));
    return TOK__MULTIPLY_EQUAL_;
}

"_not_equal_"	{
    add_token_queue(create_token(create_string(yytext), TOK__NOT_EQUAL_));
    return TOK__NOT_EQUAL_;
}

"_or_"	{
    add_token_queue(create_token(create_string(yytext), TOK__OR_));
    return TOK__OR_;
}

"_power_"	{
    add_token_queue(create_token(create_string(yytext), TOK__POWER_));
    return TOK__POWER_;
}

"_subtract_"	{
    add_token_queue(create_token(create_string(yytext), TOK__SUBTRACT_));
    return TOK__SUBTRACT_;
}

"_subtract_equal_"	{
    add_token_queue(create_token(create_string(yytext), TOK__SUBTRACT_EQUAL_));
    return TOK__SUBTRACT_EQUAL_;
}

"_unary_negate_"	{
    add_token_queue(create_token(create_string(yytext), TOK__UNARY_NEGATE_));
    return TOK__UNARY_NEGATE_;
}

"_unary_not_"	{
    add_token_queue(create_token(create_string(yytext), TOK__UNARY_NOT_));
    return TOK__UNARY_NOT_;
}

"and"	{
    add_token_queue(create_token(create_string(yytext), TOK_AND));
    return TOK_AND;
}

"as"	{
    add_token_queue(create_token(create_string(yytext), TOK_AS));
    return TOK_AS;
}

"bool"	{
    add_token_queue(create_token(create_string(yytext), TOK_BOOL));
    return TOK_BOOL;
}

"boolean"	{
    add_token_queue(create_token(create_string(yytext), TOK_BOOLEAN));
    return TOK_BOOLEAN;
}

"break"	{
    add_token_queue(create_token(create_string(yytext), TOK_BREAK));
    return TOK_BREAK;
}

"const"	{
    add_token_queue(create_token(create_string(yytext), TOK_CONST));
    return TOK_CONST;
}

"continue"	{
    add_token_queue(create_token(create_string(yytext), TOK_CONTINUE));
    return TOK_CONTINUE;
}

"do"	{
    add_token_queue(create_token(create_string(yytext), TOK_DO));
    return TOK_DO;
}

"else"	{
    add_token_queue(create_token(create_string(yytext), TOK_ELSE));
    return TOK_ELSE;
}

"equ"	{
    add_token_queue(create_token(create_string(yytext), TOK_EQU));
    return TOK_EQU;
}

"except"	{
    add_token_queue(create_token(create_string(yytext), TOK_EXCEPT));
    return TOK_EXCEPT;
}

"exit"	{
    add_token_queue(create_token(create_string(yytext), TOK_EXIT));
    return TOK_EXIT;
}

"final"	{
    add_token_queue(create_token(create_string(yytext), TOK_FINAL));
    return TOK_FINAL;
}

"float"	{
    add_token_queue(create_token(create_string(yytext), TOK_FLOAT));
    return TOK_FLOAT;
}

"for"	{
    add_token_queue(create_token(create_string(yytext), TOK_FOR));
    return TOK_FOR;
}

"gt"	{
    add_token_queue(create_token(create_string(yytext), TOK_GT));
    return TOK_GT;
}

"gte"	{
    add_token_queue(create_token(create_string(yytext), TOK_GTE));
    return TOK_GTE;
}

"hash"	{
    add_token_queue(create_token(create_string(yytext), TOK_HASH));
    return TOK_HASH;
}

"if"	{
    add_token_queue(create_token(create_string(yytext), TOK_IF));
    return TOK_IF;
}

"import"	{
    add_token_queue(create_token(create_string(yytext), TOK_IMPORT));
    return TOK_IMPORT;
}

"in"	{
    add_token_queue(create_token(create_string(yytext), TOK_IN));
    return TOK_IN;
}

"int"	{
    add_token_queue(create_token(create_string(yytext), TOK_INT));
    return TOK_INT;
}

"integer"	{
    add_token_queue(create_token(create_string(yytext), TOK_INTEGER));
    return TOK_INTEGER;
}

"list"	{
    add_token_queue(create_token(create_string(yytext), TOK_LIST));
    return TOK_LIST;
}

"lt"	{
    add_token_queue(create_token(create_string(yytext), TOK_LT));
    return TOK_LT;
}

"lte"	{
    add_token_queue(create_token(create_string(yytext), TOK_LTE));
    return TOK_LTE;
}

"more_than_"	{
    add_token_queue(create_token(create_string(yytext), TOK_MORE_THAN_));
    return TOK_MORE_THAN_;
}

"namespace"	{
    add_token_queue(create_token(create_string(yytext), TOK_NAMESPACE));
    return TOK_NAMESPACE;
}

"nequ"	{
    add_token_queue(create_token(create_string(yytext), TOK_NEQU));
    return TOK_NEQU;
}

"not"	{
    add_token_queue(create_token(create_string(yytext), TOK_NOT));
    return TOK_NOT;
}

"nothing"	{
    add_token_queue(create_token(create_string(yytext), TOK_NOTHING));
    return TOK_NOTHING;
}

"or"	{
    add_token_queue(create_token(create_string(yytext), TOK_OR));
    return TOK_OR;
}

"private"	{
    add_token_queue(create_token(create_string(yytext), TOK_PRIVATE));
    return TOK_PRIVATE;
}

"protected"	{
    add_token_queue(create_token(create_string(yytext), TOK_PROTECTED));
    return TOK_PROTECTED;
}

"public"	{
    add_token_queue(create_token(create_string(yytext), TOK_PUBLIC));
    return TOK_PUBLIC;
}

"raise"	{
    add_token_queue(create_token(create_string(yytext), TOK_RAISE));
    return TOK_RAISE;
}

"return"	{
    add_token_queue(create_token(create_string(yytext), TOK_RETURN));
    return TOK_RETURN;
}

"start"	{
    add_token_queue(create_token(create_string(yytext), TOK_START));
    return TOK_START;
}

"str"	{
    add_token_queue(create_token(create_string(yytext), TOK_STR));
    return TOK_STR;
}

"string"	{
    add_token_queue(create_token(create_string(yytext), TOK_STRING));
    return TOK_STRING;
}

"try"	{
    add_token_queue(create_token(create_string(yytext), TOK_TRY));
    return TOK_TRY;
}

"type"	{
    add_token_queue(create_token(create_string(yytext), TOK_TYPE));
    return TOK_TYPE;
}

"while"	{
    add_token_queue(create_token(create_string(yytext), TOK_WHILE));
    return TOK_WHILE;
}

"{"	{
    add_token_queue(create_token(create_string(yytext), TOK_OCBRACE));
    return TOK_OCBRACE;
}

"|"	{
    add_token_queue(create_token(create_string(yytext), TOK_BAR));
    return TOK_BAR;
}

"}"	{
    add_token_queue(create_token(create_string(yytext), TOK_CCBRACE));
    return TOK_CCBRACE;
}



    /* rules defined in the template. */

"inline"[ \n\r\t]*"{" {
    inline_depth = 0;
    if(strbuf == NULL)
        strbuf = create_string(NULL);
    BEGIN(INLINE_BLOCK);
}

<INLINE_BLOCK>"{" {
    inline_depth++;
    append_string_char(strbuf, '{');
}

<INLINE_BLOCK>[^{}\n] {
    append_string(strbuf, yytext);
}

<INLINE_BLOCK>\n {
    append_string_char(strbuf, '\n');
    file_stack->line++;
}

<INLINE_BLOCK>"}" {
    if(inline_depth > 0) {
        inline_depth--;
        append_string_char(strbuf, '}');
    }
    else {
        add_token_queue(create_token(copy_string(strbuf), TOK_INLINE));
        clear_string(strbuf);
        BEGIN(INITIAL);
        return TOK_INLINE;
    }
}

\"[^\"\n]*\" {
    add_token_queue(create_token(strip_quotes(create_string(yytext)), TOK_STRING_LITERAL));
    return TOK_STRING_LITERAL;
}

\'[^\'\n]*\' {
    add_token_queue(create_token(strip_quotes(create_string(yytext)), TOK_STRING_LITERAL));
    return TOK_STRING_LITERAL;
}

[a-zA-Z_][0-9a-zA-Z_]*  {
    add_token_queue(create_token(create_string(yytext), TOK_IDENTIFIER));
    return TOK_IDENTIFIER;
}

(([1-9][0-9]*)|0)?\.[0-9]*([eE][-+]?[0-9]+)? {
    add_token_queue(create_token(create_string(yytext), TOK_FLOAT_LITERAL));
    return TOK_FLOAT_LITERAL;
}

([1-9][0-9]*)|0 {
    add_token_queue(create_token(create_string(yytext), TOK_INT_LITERAL));
    return TOK_INT_LITERAL;
}

#[^\n]*\n  {
    /* comment */
    file_stack->line++;
}

;[^\n]*\n  {
    /* comment */
    file_stack->line++;
}

\n {
    file_stack->line++;
}

[ \t\r]+ { /* ignore spaces */ }

. { return yytext[0]; }

<<EOF>> {
    add_token_queue(create_token(create_string(NULL), TOK_END_OF_FILE));
    yyterminate(); // return NULL
}

%%

void open_scanner_file(const char* fn) {

    const char *fname = find_file(fn);
    yyin = fopen(fname, "r");
    if(yyin == NULL)
        FATAL("cannot open input file: \"%s\": %s\n", fname, strerror(errno));

    file_stack_t* fs = _ALLOC_TYPE(file_stack_t);
    fs->fname = fname;
    fs->next = NULL;
    fs->line = 1;
    fs->col = 1;

    fs->fp = yyin;
    fs->buffer = yy_create_buffer(yyin, YY_BUF_SIZE);
    yy_switch_to_buffer(fs->buffer);

    if(file_stack != NULL) {
        fs->next = file_stack;
        file_stack = fs;
    }
    else {
        file_stack = fs;
        //set_base_file_name(fs->fname);
    }

}

void close_scanner_file(void) {

    file_stack_t* fs = file_stack;
    yy_delete_buffer(fs->buffer);
    file_stack = file_stack->next;

    fclose(fs->fp);
    _FREE(fs->fname);
    _FREE(fs);

    if(file_stack != NULL)
        yy_switch_to_buffer(file_stack->buffer);
}

int get_line_no(void) {

    if(file_stack != NULL)
        return file_stack->line;
    else
        return -1;
}

int get_col_no(void) {

    if(file_stack != NULL)
        return file_stack->col;
    else
        return -1;
}

const char* get_file_name(void) {

    if(file_stack != NULL)
        return file_stack->fname;
    else
        return "no open file"; //get_base_file_name();
}

void init_scanner(void) {

    init_token_queue();
}

token_t* get_scanner_token(void) {

    yylex();
    return NULL;
}


