/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_TESTPATTERNY_H_INCLUDED
# define YY_YY_TESTPATTERNY_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    tINT = 258,
    tDOUBLE = 259,
    tSTRING = 260,
    COLOR = 261,
    GAMMA = 262,
    LEVEL = 263,
    STEPS = 264,
    INK_LIMIT = 265,
    PRINTER = 266,
    PARAMETER = 267,
    PARAMETER_INT = 268,
    PARAMETER_BOOL = 269,
    PARAMETER_FLOAT = 270,
    PARAMETER_CURVE = 271,
    DENSITY = 272,
    TOP = 273,
    LEFT = 274,
    SIZE_MODE = 275,
    RELATIVE = 276,
    PT = 277,
    IN = 278,
    MM = 279,
    HSIZE = 280,
    VSIZE = 281,
    BLACKLINE = 282,
    COLORLINE = 283,
    NOSCALE = 284,
    PATTERN = 285,
    XPATTERN = 286,
    EXTENDED = 287,
    IMAGE = 288,
    GRID = 289,
    SEMI = 290,
    CHANNEL = 291,
    CMYK = 292,
    KCMY = 293,
    RGB = 294,
    CMY = 295,
    GRAY = 296,
    WHITE = 297,
    MODE = 298,
    PAGESIZE = 299,
    ROUND = 300,
    MESSAGE = 301,
    OUTPUT = 302,
    START_JOB = 303,
    END_JOB = 304,
    END = 305
  };
#endif
/* Tokens.  */
#define tINT 258
#define tDOUBLE 259
#define tSTRING 260
#define COLOR 261
#define GAMMA 262
#define LEVEL 263
#define STEPS 264
#define INK_LIMIT 265
#define PRINTER 266
#define PARAMETER 267
#define PARAMETER_INT 268
#define PARAMETER_BOOL 269
#define PARAMETER_FLOAT 270
#define PARAMETER_CURVE 271
#define DENSITY 272
#define TOP 273
#define LEFT 274
#define SIZE_MODE 275
#define RELATIVE 276
#define PT 277
#define IN 278
#define MM 279
#define HSIZE 280
#define VSIZE 281
#define BLACKLINE 282
#define COLORLINE 283
#define NOSCALE 284
#define PATTERN 285
#define XPATTERN 286
#define EXTENDED 287
#define IMAGE 288
#define GRID 289
#define SEMI 290
#define CHANNEL 291
#define CMYK 292
#define KCMY 293
#define RGB 294
#define CMY 295
#define GRAY 296
#define WHITE 297
#define MODE 298
#define PAGESIZE 299
#define ROUND 300
#define MESSAGE 301
#define OUTPUT 302
#define START_JOB 303
#define END_JOB 304
#define END 305

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TESTPATTERNY_H_INCLUDED  */
