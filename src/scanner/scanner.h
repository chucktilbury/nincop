/**
 * @file ./out/scanner/scanner.h
 *
 * This is a generated file. If you edit this file, don't run the generator
 * in this directory. Run it in a different one and then merge the results
 * using a tool like diff.
 *
 * @date Wed May 14 14:31:37 2025
 * @author Chuck Tilbury
 *
 */

#ifndef _SCANNER_H_
#define _SCANNER_H_

/*
 * The scanner must implement these prototypes for the parser.
 */
void init_scanner(void);
void open_scanner_file(const char* fname);
token_t* get_scanner_token(void);
const char* get_scanner_fname(void);
int get_scanner_line_no(void);
int get_scanner_col_no(void);
const char* find_file(const char* fname);

#endif /* _SCANNER_H_ */


