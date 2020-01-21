/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 21 "testpatterny.y" /* yacc.c:339  */


#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include "testpattern.h"

extern int mylineno;

extern int yylex(void);
char *quotestrip(const char *i);
char *endstrip(const char *i);

extern char* yytext;

static int yyerror( const char *s )
{
	fprintf(stderr,"stdin:%d: %s before '%s'\n",mylineno,s,yytext);
	return 0;
}

typedef struct
{
  const char *name;
  int channel;
} color_t;

static color_t color_map[] =
  {
    { "black", 0 },
    { "cyan", 1 },
    { "red", 1 },
    { "magenta", 2 },
    { "green", 2 },
    { "yellow", 3 },
    { "blue", 3 },
    { "l_black", 4 },
    { "l_cyan", 5 },
    { "l_magenta", 6 },
    { "d_yellow", 4 },
    { "l_l_black", 7 },
    { NULL, -1 }
  };

static int current_index = 0;
static testpattern_t *current_testpattern;
extern FILE *yyin;

static int
find_color(const char *name)
{
  int i = 0;
  while (color_map[i].name)
    {
      if (strcasecmp(color_map[i].name, name) == 0)
	return color_map[i].channel;
      i++;
    }
  return -1;
}


#line 134 "testpatterny.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 280 "testpatterny.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  66
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   145,   145,   145,   150,   160,   170,   180,   190,   200,
     210,   220,   220,   220,   220,   220,   220,   220,   223,   231,
     231,   234,   241,   244,   254,   263,   273,   282,   289,   296,
     303,   312,   321,   330,   330,   333,   343,   352,   361,   370,
     384,   384,   384,   384,   384,   386,   393,   400,   407,   414,
     421,   428,   435,   435,   435,   435,   437,   439,   446,   453,
     461,   469,   477,   492,   492,   495,   495,   498,   501,   515,
     528,   528,   531,   531,   534,   534,   537,   537,   540,   555,
     558,   573,   584,   601,   608,   608,   611,   614,   624,   630,
     630,   633,   637,   641,   641,   641,   641,   641,   641,   642,
     642,   642,   642,   642,   642,   642,   643,   643,   643,   643,
     643,   643,   644,   644,   644,   644,   644,   644,   647,   651,
     651,   651,   651,   654,   658,   658,   661,   665,   665,   668,
     668,   671,   671,   676,   675
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tINT", "tDOUBLE", "tSTRING", "COLOR",
  "GAMMA", "LEVEL", "STEPS", "INK_LIMIT", "PRINTER", "PARAMETER",
  "PARAMETER_INT", "PARAMETER_BOOL", "PARAMETER_FLOAT", "PARAMETER_CURVE",
  "DENSITY", "TOP", "LEFT", "SIZE_MODE", "RELATIVE", "PT", "IN", "MM",
  "HSIZE", "VSIZE", "BLACKLINE", "COLORLINE", "NOSCALE", "PATTERN",
  "XPATTERN", "EXTENDED", "IMAGE", "GRID", "SEMI", "CHANNEL", "CMYK",
  "KCMY", "RGB", "CMY", "GRAY", "WHITE", "MODE", "PAGESIZE", "ROUND",
  "MESSAGE", "OUTPUT", "START_JOB", "END_JOB", "END", "$accept", "NUMBER",
  "cmykspec", "kcmyspec", "rgbspec", "cmyspec", "grayspec", "whitespec",
  "extendedspec", "modespec1", "modespec2", "modespec", "round",
  "inputspec", "level", "channel_level", "gamma", "channel_gamma",
  "global_gamma", "steps", "ink_limit", "printer", "page_size_name",
  "page_size_custom", "page_size", "parameter_string", "parameter_int",
  "parameter_bool", "parameter_float", "parameter_curve", "parameter",
  "density", "top", "left", "size_relative", "size_in", "size_pt",
  "size_mm", "size_mode_1", "size_mode", "hsize", "vsize", "blackline",
  "colorline", "noscale", "color_block1", "color_blocks1a",
  "color_blocks1b", "color_blocks1", "color_block2a", "color_block2b",
  "color_block2", "color_blocks2a", "color_blocks2", "color_blocks",
  "patvars", "pattern", "xpattern", "grid", "image", "Message", "Messages",
  "message", "Output0", "Output1", "output", "start_job", "end_job",
  "A_Rule", "Rule", "A_Pattern", "Pattern", "Patterns", "Image", "Rules",
  "Print", "EOF", "Thing", "$@1", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -146

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-146)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -146,     9,     4,    57,    -1,     5,    29,    36,    40,    41,
      62,    71,    73,    29,    29,    29,    27,    29,    29,    59,
      76,    77,    33,    37,  -146,  -146,    78,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,    46,  -146,    49,  -146,    29,  -146,    29,
    -146,    29,    29,  -146,  -146,  -146,  -146,    79,    82,    83,
      29,    84,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,    85,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,    87,  -146,  -146,    88,  -146,    89,  -146,
    -146,    90,  -146,    13,  -146,    42,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
      92,    29,     3,    93,  -146,  -146,  -146,  -146,    52,  -146,
      63,  -146,  -146,    29,     3,    29,    94,    29,    29,  -146,
    -146,  -146,  -146,    -5,  -146,  -146,  -146,  -146,  -146,    29,
    -146,    29,    29,    29,  -146,    29,  -146,  -146,    29,    29,
      29,  -146,  -146,    29,  -146,    29,  -146,  -146
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     127,   133,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    84,    87,    91,    92,   116,
     109,    95,    96,    93,    94,    97,    98,    99,   100,    33,
      34,   110,    40,    41,    44,    42,    43,   101,   102,   103,
     104,   115,   105,   106,   107,   117,   108,   111,    89,    90,
     112,   113,   114,     0,   128,   124,     1,     3,     2,     0,
      27,     0,     0,    28,     3,    29,    30,     0,     0,     0,
       0,     0,    45,    46,    47,    48,    50,    49,    51,    52,
      54,    53,    55,    56,    57,    58,    59,    60,    61,     0,
       4,     5,     6,     7,     8,     9,    11,    12,    13,    14,
      15,    16,    17,    19,    20,    22,     0,    31,    86,    88,
     118,     0,   126,   129,   130,   131,    26,    25,    24,    23,
      35,    36,    37,    38,    39,    10,    18,    32,    83,    85,
       0,     0,    74,     0,   119,   120,   121,   122,     0,   125,
       0,   134,    82,     0,    74,     0,     0,     0,    65,    76,
      70,    71,    72,    75,    77,    80,    81,   123,   132,     0,
      79,     0,     0,     0,    63,    66,    67,    73,     0,     0,
       0,    62,    64,     0,    68,     0,    78,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,    -3,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -145,  -146,  -146,  -146,  -146,
    -146,   -64,  -146,  -146,   -54,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,   -22,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   157,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    89,    90,    91,    92,    93,    51,
      52,    53,    54,    55,    56,   158,   175,   176,   159,   160,
     161,   162,   163,   164,   165,   154,   144,   145,   146,   122,
     139,   118,    57,    58,    59,    60,    61,    62,    63,    64,
     148,   149,   123,   124,     1,   125,   151,     2,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      70,   155,    71,    75,    66,    72,    74,    68,    73,   155,
      82,    83,    84,   174,    94,    95,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
     182,   156,    74,    68,    17,    18,    19,    20,    21,   156,
     116,    76,   117,   141,   142,    77,    78,   143,    85,    86,
      87,    88,    22,    23,    24,    25,    26,    27,    28,    25,
      67,    68,    96,    69,   126,    99,   127,    79,   128,   129,
     100,   101,   102,   103,   104,   105,    80,   133,    81,    97,
      98,   120,   121,   119,   130,   131,   132,   167,   135,   134,
     136,   137,   150,   140,   138,   152,   166,   172,   168,   177,
     170,   147,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     169,     0,   171,     0,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   178,     0,   179,   180,
     181,     0,     0,     0,     0,   183,   184,   185,     0,     0,
     186,     0,   187
};

static const yytype_int16 yycheck[] =
{
       3,     6,     3,     6,     0,     6,     3,     4,     3,     6,
      13,    14,    15,   158,    17,    18,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     175,    36,     3,     4,    25,    26,    27,    28,    29,    36,
       3,     5,     5,    30,    31,     5,     5,    34,    21,    22,
      23,    24,    43,    44,    45,    46,    47,    48,    49,    46,
       3,     4,     3,     6,    67,    32,    69,     5,    71,    72,
      37,    38,    39,    40,    41,    42,     5,    80,     5,     3,
       3,    35,    33,     5,     5,     3,     3,    35,     3,     5,
       3,     3,    50,     3,     5,     3,     3,     3,    35,   163,
     154,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,   155,    -1,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,   171,   172,
     173,    -1,    -1,    -1,    -1,   178,   179,   180,    -1,    -1,
     183,    -1,   185
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   125,   128,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    25,    26,    27,
      28,    29,    43,    44,    45,    46,    47,    48,    49,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    90,    91,    92,    93,    94,    95,   113,   114,   115,
     116,   117,   118,   119,   120,   129,     0,     3,     4,     6,
      52,     3,     6,     3,     3,    52,     5,     5,     5,     5,
       5,     5,    52,    52,    52,    21,    22,    23,    24,    85,
      86,    87,    88,    89,    52,    52,     3,     3,     3,    32,
      37,    38,    39,    40,    41,    42,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     3,     5,   112,     5,
      35,    33,   110,   123,   124,   126,    52,    52,    52,    52,
       5,     3,     3,    52,     5,     3,     3,     3,     5,   111,
       3,    30,    31,    34,   107,   108,   109,   113,   121,   122,
      50,   127,     3,    52,   106,     6,    36,    52,    96,    99,
     100,   101,   102,   103,   104,   105,     3,    35,    35,    52,
     105,    52,     3,    52,    96,    97,    98,   102,    52,    52,
      52,    52,    96,    52,    52,    52,    52,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    60,    60,    60,    60,    60,    60,    61,    62,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    75,    76,    77,    78,    79,    80,
      81,    81,    81,    81,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    89,    89,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    97,    98,    98,    99,   100,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   106,   107,
     108,   109,   110,   111,   112,   112,   113,   114,   115,   116,
     116,   117,   118,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   120,   121,
     121,   121,   121,   122,   123,   123,   124,   125,   125,   126,
     126,   127,   127,   129,   128
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     2,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     3,     1,     1,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     3,     1,     2,     0,     1,     2,     4,     5,
       1,     1,     1,     2,     0,     1,     1,     1,     5,     3,
       2,     2,     3,     1,     0,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     2,     0,     2,     1,     0,     2,     1,
       1,     0,     2,     0,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 146 "testpatterny.y" /* yacc.c:1646  */
    {
	}
#line 1520 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 4:
#line 151 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>cmykspec\n");
	  global_image_type = "CMYK";
	  global_channel_depth = 4;
	  global_invert_data = 0;
	}
#line 1532 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 5:
#line 161 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>kcmyspec\n");
	  global_image_type = "KCMY";
	  global_channel_depth = 4;
	  global_invert_data = 0;
	}
#line 1544 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 6:
#line 171 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>rgbspec\n");
	  global_image_type = "RGB";
	  global_channel_depth = 3;
	  global_invert_data = 1;
	}
#line 1556 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 7:
#line 181 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>cmyspec\n");
	  global_image_type = "CMY";
	  global_channel_depth = 3;
	  global_invert_data = 0;
	}
#line 1568 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 8:
#line 191 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>grayspec\n");
	  global_image_type = "Grayscale";
	  global_channel_depth = 1;
	  global_invert_data = 0;
	}
#line 1580 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 9:
#line 201 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>whitespec\n");
	  global_image_type = "Whitescale";
	  global_channel_depth = 1;
	  global_invert_data = 1;
	}
#line 1592 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 10:
#line 211 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>extendedspec %d\n", (yyvsp[0].ival));
	  global_image_type = "Raw";
	  global_invert_data = 0;
	  global_channel_depth = (yyvsp[0].ival);
	}
#line 1604 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 18:
#line 224 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>modespec2 %d\n", (yyvsp[0].ival));
	  if ((yyvsp[0].ival) == 8 || (yyvsp[0].ival) == 16)
	    global_bit_depth = (yyvsp[0].ival);
	}
#line 1615 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 21:
#line 235 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>round\n");
	  global_round_size = 1;
	}
#line 1625 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 23:
#line 245 "testpatterny.y" /* yacc.c:1646  */
    {
	  int channel = find_color((yyvsp[-1].sval));
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>level %s %f\n", (yyvsp[-1].sval), (yyvsp[0].dval));
	  if (channel >= 0)
	    global_levels[channel] = (yyvsp[0].dval);
	}
#line 1637 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 24:
#line 255 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>channel_level %d %f\n", (yyvsp[-1].ival), (yyvsp[0].dval));
	  if ((yyvsp[-1].ival) >= 0 && (yyvsp[-1].ival) <= STP_CHANNEL_LIMIT)
	    global_levels[(yyvsp[-1].ival)] = (yyvsp[0].dval);
	}
#line 1648 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 25:
#line 264 "testpatterny.y" /* yacc.c:1646  */
    {
	  int channel = find_color((yyvsp[-1].sval));
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>gamma %s %f\n", (yyvsp[-1].sval), (yyvsp[0].dval));
	  if (channel >= 0)
	    global_gammas[channel] = (yyvsp[0].dval);
	}
#line 1660 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 26:
#line 274 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>channel_gamma %d %f\n", (yyvsp[-1].ival), (yyvsp[0].dval));
	  if ((yyvsp[-1].ival) >= 0 && (yyvsp[-1].ival) <= STP_CHANNEL_LIMIT)
	    global_gammas[(yyvsp[-1].ival)] = (yyvsp[0].dval);
	}
#line 1671 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 27:
#line 283 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>global_gamma %f\n", (yyvsp[0].dval));
	  global_gamma = (yyvsp[0].dval);
	}
#line 1681 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 28:
#line 290 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>steps %d\n", (yyvsp[0].ival));
	  global_steps = (yyvsp[0].ival);
	}
#line 1691 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 29:
#line 297 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>ink_limit %f\n", (yyvsp[0].dval));
	  global_ink_limit = (yyvsp[0].dval);
	}
#line 1701 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 30:
#line 304 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>printer %s\n", (yyvsp[0].sval));
	  global_printer = stp_strdup((yyvsp[0].sval));
	  free((yyvsp[0].sval));
	}
#line 1712 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 31:
#line 313 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>page_size_name %s\n", (yyvsp[0].sval));
	  stp_set_string_parameter(global_vars, "PageSize", (yyvsp[0].sval));
	  free((yyvsp[0].sval));
	}
#line 1723 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 32:
#line 322 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>page_size_custom %d %d\n", (yyvsp[-1].ival), (yyvsp[0].ival));
	  stp_set_page_width(global_vars, (yyvsp[-1].ival));
	  stp_set_page_height(global_vars, (yyvsp[0].ival));
	}
#line 1734 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 35:
#line 334 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>parameter_string %s %s\n", (yyvsp[-1].sval), (yyvsp[0].sval));
	  stp_set_string_parameter(global_vars, (yyvsp[-1].sval), (yyvsp[0].sval));
	  free((yyvsp[-1].sval));
	  free((yyvsp[0].sval));
	}
#line 1746 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 36:
#line 344 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>parameter_int %s %d\n", (yyvsp[-1].sval), (yyvsp[0].ival));
	  stp_set_int_parameter(global_vars, (yyvsp[-1].sval), (yyvsp[0].ival));
	  free((yyvsp[-1].sval));
	}
#line 1757 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 37:
#line 353 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>parameter_bool %s %d\n", (yyvsp[-1].sval), (yyvsp[0].ival));
	  stp_set_boolean_parameter(global_vars, (yyvsp[-1].sval), (yyvsp[0].ival));
	  free((yyvsp[-1].sval));
	}
#line 1768 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 38:
#line 362 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>parameter_float %s %f\n", (yyvsp[-1].sval), (yyvsp[0].dval));
	  stp_set_float_parameter(global_vars, (yyvsp[-1].sval), (yyvsp[0].dval));
	  free((yyvsp[-1].sval));
	}
#line 1779 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 39:
#line 371 "testpatterny.y" /* yacc.c:1646  */
    {
	  stp_curve_t *curve = stp_curve_create_from_string((yyvsp[0].sval));
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>parameter_curve %s %s\n", (yyvsp[-1].sval), (yyvsp[0].sval));
	  if (curve)
	    {
	      stp_set_curve_parameter(global_vars, (yyvsp[-1].sval), curve);
	      stp_curve_destroy(curve);
	    }
	  free((yyvsp[-1].sval));
	}
#line 1795 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 45:
#line 387 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>density %f\n", (yyvsp[0].dval));
	  global_density = (yyvsp[0].dval);
	}
#line 1805 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 46:
#line 394 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>top %f\n", (yyvsp[0].dval));
	  global_xtop = (yyvsp[0].dval);
	}
#line 1815 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 47:
#line 401 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
 	    fprintf(stderr, ">>>left %f\n", (yyvsp[0].dval));
	  global_xleft = (yyvsp[0].dval);
	}
#line 1825 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 48:
#line 408 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
 	    fprintf(stderr, ">>>relative size\n");
	  global_size_mode = SIZE_RELATIVE;
	}
#line 1835 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 49:
#line 415 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
 	    fprintf(stderr, ">>>size inches\n");
	  global_size_mode = SIZE_IN;
	}
#line 1845 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 50:
#line 422 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
 	    fprintf(stderr, ">>>size pt\n");
	  global_size_mode = SIZE_PT;
	}
#line 1855 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 51:
#line 429 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
 	    fprintf(stderr, ">>>size mm\n");
	  global_size_mode = SIZE_MM;
	}
#line 1865 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 57:
#line 440 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>hsize %f\n", (yyvsp[0].dval));
	  global_hsize = (yyvsp[0].dval);
	}
#line 1875 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 58:
#line 447 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>vsize %f\n", (yyvsp[0].dval));
	  global_vsize = (yyvsp[0].dval);
	}
#line 1885 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 59:
#line 454 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>blackline %d\n", (yyvsp[0].ival));
	  global_noblackline = !((yyvsp[0].ival));
	}
#line 1895 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 60:
#line 462 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>colorline %d\n", (yyvsp[0].ival));
	  global_colorline = ((yyvsp[0].ival) != 0);
	}
#line 1905 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 61:
#line 470 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>noscale %d\n", (yyvsp[0].ival));
	  global_noscale = (yyvsp[0].ival);
	}
#line 1915 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 62:
#line 478 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>color_block1 %f %f %f (%d)\n", (yyvsp[-2].dval), (yyvsp[-1].dval), (yyvsp[0].dval),
		    current_index);
	  if (current_index < STP_CHANNEL_LIMIT)
	    {
	      current_testpattern->d.pattern.mins[current_index] = (yyvsp[-2].dval);
	      current_testpattern->d.pattern.vals[current_index] = (yyvsp[-1].dval);
	      current_testpattern->d.pattern.gammas[current_index] = (yyvsp[0].dval);
	      current_index++;
	    }
	}
#line 1932 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 68:
#line 502 "testpatterny.y" /* yacc.c:1646  */
    {
	  int channel = find_color((yyvsp[-3].sval));
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>color_block2a %s %f %f %f\n", (yyvsp[-3].sval), (yyvsp[-2].dval), (yyvsp[-1].dval), (yyvsp[0].dval));
	  if (channel >= 0 && channel < STP_CHANNEL_LIMIT)
	    {
	      current_testpattern->d.pattern.mins[channel] = (yyvsp[-2].dval);
	      current_testpattern->d.pattern.vals[channel] = (yyvsp[-1].dval);
	      current_testpattern->d.pattern.gammas[channel] = (yyvsp[0].dval);
	    }
	}
#line 1948 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 69:
#line 516 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>color_block2b %d %f %f %f\n", (yyvsp[-3].ival), (yyvsp[-2].dval), (yyvsp[-1].dval), (yyvsp[0].dval));
	  if ((yyvsp[-3].ival) >= 0 && (yyvsp[-3].ival) < STP_CHANNEL_LIMIT)
	    {
	      current_testpattern->d.pattern.mins[(yyvsp[-3].ival)] = (yyvsp[-2].dval);
	      current_testpattern->d.pattern.vals[(yyvsp[-3].ival)] = (yyvsp[-1].dval);
	      current_testpattern->d.pattern.gammas[(yyvsp[-3].ival)] = (yyvsp[0].dval);
	    }
	}
#line 1963 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 78:
#line 541 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>patvars %f %f %f %f %f\n", (yyvsp[-4].dval), (yyvsp[-3].dval), (yyvsp[-2].dval), (yyvsp[-1].dval), (yyvsp[0].dval));
	  current_testpattern->type = E_PATTERN;
	  current_testpattern->d.pattern.lower = (yyvsp[-4].dval);
	  current_testpattern->d.pattern.upper = (yyvsp[-3].dval);
	  current_testpattern->d.pattern.levels[1] = (yyvsp[-2].dval);
	  current_testpattern->d.pattern.levels[2] = (yyvsp[-1].dval);
	  current_testpattern->d.pattern.levels[3] = (yyvsp[0].dval);
	  current_testpattern = get_next_testpattern();
	  current_index = 0;
	}
#line 1980 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 80:
#line 559 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>xpattern\n");
	  if (global_channel_depth == 0)
	    {
	      fprintf(stderr, "xpattern may only be used with extended color depth\n");
	      exit(1);
	    }
	  current_testpattern->type = E_XPATTERN;
	  current_testpattern = get_next_testpattern();
	  current_index = 0;
	}
#line 1997 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 81:
#line 574 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>grid %d\n", (yyvsp[0].ival));
	  current_testpattern->type = E_GRID;
	  current_testpattern->d.grid.ticks = (yyvsp[0].ival);
	  current_testpattern = get_next_testpattern();
	  current_index = 0;
	}
#line 2010 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 82:
#line 585 "testpatterny.y" /* yacc.c:1646  */
    {
	  if (getenv("STP_TESTPATTERN_DEBUG"))
	    fprintf(stderr, ">>>image %d %d\n", (yyvsp[-1].ival), (yyvsp[0].ival));
	  current_testpattern->type = E_IMAGE;
	  current_testpattern->d.image.x = (yyvsp[-1].ival);
	  current_testpattern->d.image.y = (yyvsp[0].ival);
	  if (current_testpattern->d.image.x <= 0 ||
	      current_testpattern->d.image.y <= 0)
	    {
	      fprintf(stderr, "image width and height must be greater than zero\n");
	      exit(1);
	    }
	  return 0;
	}
#line 2029 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 83:
#line 602 "testpatterny.y" /* yacc.c:1646  */
    {
	  fprintf(stderr,"%s",(yyvsp[0].sval));
	  free((yyvsp[0].sval));
	}
#line 2038 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 87:
#line 615 "testpatterny.y" /* yacc.c:1646  */
    {
	  close_output();
	  if (global_output)
	    free(global_output);
	  global_output = NULL;
	  output = stdout;
	}
#line 2050 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 88:
#line 625 "testpatterny.y" /* yacc.c:1646  */
    {
	  global_output = (yyvsp[0].sval);
	}
#line 2058 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 91:
#line 634 "testpatterny.y" /* yacc.c:1646  */
    { start_job = 1; }
#line 2064 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 92:
#line 638 "testpatterny.y" /* yacc.c:1646  */
    { end_job = 1; }
#line 2070 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 118:
#line 648 "testpatterny.y" /* yacc.c:1646  */
    { global_did_something = 1; }
#line 2076 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 123:
#line 655 "testpatterny.y" /* yacc.c:1646  */
    { global_did_something = 1; }
#line 2082 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 126:
#line 662 "testpatterny.y" /* yacc.c:1646  */
    { global_did_something = 1; }
#line 2088 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 132:
#line 672 "testpatterny.y" /* yacc.c:1646  */
    { return 0; }
#line 2094 "testpatterny.c" /* yacc.c:1646  */
    break;

  case 133:
#line 676 "testpatterny.y" /* yacc.c:1646  */
    {
	  current_testpattern = get_next_testpattern();
	}
#line 2102 "testpatterny.c" /* yacc.c:1646  */
    break;


#line 2106 "testpatterny.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 682 "testpatterny.y" /* yacc.c:1906  */

