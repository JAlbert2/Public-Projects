/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PRINTRCY_H_INCLUDED
# define YY_YY_PRINTRCY_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tNUMBER = 258,
     tBOOLEAN = 259,
     tSTRING = 260,
     tWORD = 261,
     tGSWORD = 262,
     CURRENT_PRINTER = 263,
     SHOW_ALL_PAPER_SIZES = 264,
     PRINTER = 265,
     DESTINATION = 266,
     SCALING = 267,
     ORIENTATION = 268,
     AUTOSIZE_ROLL_PAPER = 269,
     UNIT = 270,
     DRIVER = 271,
     LEFT = 272,
     TOP = 273,
     CUSTOM_PAGE_WIDTH = 274,
     CUSTOM_PAGE_HEIGHT = 275,
     OUTPUT_TYPE = 276,
     PRINTRC_HDR = 277,
     PARAMETER = 278,
     QUEUE_NAME = 279,
     OUTPUT_FILENAME = 280,
     EXTRA_PRINTER_OPTIONS = 281,
     CUSTOM_COMMAND = 282,
     COMMAND_TYPE = 283,
     GLOBAL_SETTINGS = 284,
     GLOBAL = 285,
     END_GLOBAL_SETTINGS = 286,
     pINT = 287,
     pSTRING_LIST = 288,
     pFILE = 289,
     pDOUBLE = 290,
     pDIMENSION = 291,
     pBOOLEAN = 292,
     pCURVE = 293
   };
#endif
/* Tokens.  */
#define tNUMBER 258
#define tBOOLEAN 259
#define tSTRING 260
#define tWORD 261
#define tGSWORD 262
#define CURRENT_PRINTER 263
#define SHOW_ALL_PAPER_SIZES 264
#define PRINTER 265
#define DESTINATION 266
#define SCALING 267
#define ORIENTATION 268
#define AUTOSIZE_ROLL_PAPER 269
#define UNIT 270
#define DRIVER 271
#define LEFT 272
#define TOP 273
#define CUSTOM_PAGE_WIDTH 274
#define CUSTOM_PAGE_HEIGHT 275
#define OUTPUT_TYPE 276
#define PRINTRC_HDR 277
#define PARAMETER 278
#define QUEUE_NAME 279
#define OUTPUT_FILENAME 280
#define EXTRA_PRINTER_OPTIONS 281
#define CUSTOM_COMMAND 282
#define COMMAND_TYPE 283
#define GLOBAL_SETTINGS 284
#define GLOBAL 285
#define END_GLOBAL_SETTINGS 286
#define pINT 287
#define pSTRING_LIST 288
#define pFILE 289
#define pDOUBLE 290
#define pDIMENSION 291
#define pBOOLEAN 292
#define pCURVE 293



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_PRINTRCY_H_INCLUDED  */
