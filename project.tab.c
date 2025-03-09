
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "project.y"

    #include <stdio.h>    
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <ctype.h>
    
    int nb_ligne=1, Col=1;
    float resultat;
    float result;
    FILE  *file; 
    int par1;
    extern char file_name[20];
    extern char ch;
    extern char sauv_type [30];
    int Fin_if=0,deb_else=0,qc=0,sauv_BZ=0,sauv_BR=0,affect,oper,write,i=0,j=0;
    extern char tmp [90],t[20],sauvTab[30],tmp1 [20],tmp2[20],tmp3[20];
    


/* Line 189 of yacc.c  */
#line 94 "project.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     Mc_program = 258,
     Mc_end = 259,
     Mc_routine = 260,
     Mc_endr = 261,
     Mc_call = 262,
     Mc_logical = 263,
     Mc_character = 264,
     Mc_True = 265,
     Mc_False = 266,
     Mc_integer = 267,
     Mc_real = 268,
     Mc_if = 269,
     Mc_then = 270,
     Mc_else = 271,
     Mc_endif = 272,
     Mc_dowhile = 273,
     Mc_enddo = 274,
     Mc_read = 275,
     Mc_write = 276,
     Mc_equivalence = 277,
     Mc_dimension = 278,
     or = 279,
     and = 280,
     gt = 281,
     ge = 282,
     eq = 283,
     ne = 284,
     le = 285,
     lt = 286,
     add = 287,
     sub = 288,
     mult = 289,
     division = 290,
     idf = 291,
     cst = 292,
     chaine = 293,
     aff = 294,
     pvg = 295,
     vir = 296,
     point = 297,
     DP = 298,
     parOuv = 299,
     parFer = 300,
     erreur = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 21 "project.y"
 
int   entier;
char*   str;
char car;
float reel;



/* Line 214 of yacc.c  */
#line 185 "project.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 197 "project.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   395

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNRULES -- Number of states.  */
#define YYNSTATES  311

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    21,    32,    43,    54,
      60,    62,    63,    67,    69,    74,    79,    84,    89,    90,
      92,    98,   106,   108,   114,   122,   124,   125,   131,   139,
     145,   149,   153,   155,   161,   169,   173,   175,   179,   181,
     185,   187,   193,   197,   201,   203,   209,   213,   219,   223,
     226,   227,   229,   231,   233,   235,   237,   239,   241,   246,
     251,   256,   261,   269,   277,   285,   293,   303,   313,   323,
     333,   343,   352,   358,   364,   368,   370,   374,   378,   380,
     382,   386,   388,   392,   396,   398,   402,   408,   412,   416,
     423,   432,   434,   438,   440,   442,   447,   454,   459,   463,
     466,   472,   477,   482,   484,   488,   490,   494,   496,   498,
     500,   506,   512,   518,   524,   530,   536,   538,   540,   546,
     552,   556,   560,   562
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    51,    -1,    50,    49,    -1,    -1,
      12,     5,    36,    44,    52,    45,    54,    63,    65,     6,
      -1,    13,     5,    36,    44,    52,    45,    54,    63,    65,
       6,    -1,     8,     5,    36,    44,    52,    45,    54,    63,
      65,     6,    -1,     9,     5,    36,    44,    52,    45,    54,
      63,    65,     6,    -1,     3,    36,    54,    63,     4,    -1,
      53,    -1,    -1,    71,    41,    53,    -1,    71,    -1,    12,
      55,    40,    54,    -1,    13,    56,    40,    54,    -1,     8,
      57,    40,    54,    -1,     9,    58,    40,    54,    -1,    -1,
      60,    -1,    36,    23,    44,    71,    45,    -1,    36,    23,
      44,    71,    41,    71,    45,    -1,    61,    -1,    36,    23,
      44,    71,    45,    -1,    36,    23,    44,    71,    41,    71,
      45,    -1,    59,    -1,    -1,    36,    23,    44,    71,    45,
      -1,    36,    23,    44,    71,    41,    71,    45,    -1,    36,
      34,    37,    41,    58,    -1,    36,    34,    37,    -1,    36,
      41,    58,    -1,    36,    -1,    36,    23,    44,    71,    45,
      -1,    36,    23,    44,    71,    41,    71,    45,    -1,    36,
      41,    59,    -1,    36,    -1,    36,    41,    60,    -1,    36,
      -1,    36,    41,    61,    -1,    36,    -1,    36,    39,    71,
      41,    62,    -1,    36,    41,    62,    -1,    36,    39,    71,
      -1,    36,    -1,    36,    39,    10,    41,    62,    -1,    36,
      39,    10,    -1,    36,    39,    11,    41,    62,    -1,    36,
      39,    11,    -1,    63,    64,    -1,    -1,    68,    -1,    69,
      -1,    77,    -1,    66,    -1,    67,    -1,    65,    -1,    74,
      -1,    36,    39,    71,    40,    -1,    36,    39,    11,    40,
      -1,    36,    39,    10,    40,    -1,    36,    39,    38,    40,
      -1,    36,    44,    37,    45,    39,    71,    40,    -1,    36,
      44,    37,    45,    39,    38,    40,    -1,    36,    44,    37,
      45,    39,    11,    40,    -1,    36,    44,    37,    45,    39,
      10,    40,    -1,    36,    44,    37,    41,    37,    45,    39,
      71,    40,    -1,    36,    44,    37,    41,    37,    45,    39,
      38,    40,    -1,    36,    44,    37,    41,    37,    45,    39,
      11,    40,    -1,    36,    44,    37,    41,    37,    45,    39,
      10,    40,    -1,    22,    44,    53,    45,    41,    44,    53,
      45,    40,    -1,    36,    39,     7,    36,    44,    53,    45,
      40,    -1,    20,    44,    62,    45,    40,    -1,    21,    44,
      70,    45,    40,    -1,    71,    41,    70,    -1,    71,    -1,
      11,    41,    70,    -1,    38,    41,    70,    -1,    11,    -1,
      10,    -1,    10,    41,    70,    -1,    38,    -1,    71,    33,
      72,    -1,    71,    32,    72,    -1,    72,    -1,    72,    34,
      73,    -1,    72,    35,    44,    71,    45,    -1,    72,    35,
      36,    -1,    72,    35,    37,    -1,    72,    35,    36,    44,
      71,    45,    -1,    72,    35,    36,    44,    71,    41,    71,
      45,    -1,    73,    -1,    44,    71,    45,    -1,    36,    -1,
      37,    -1,    36,    44,    71,    45,    -1,    36,    44,    71,
      41,    71,    45,    -1,    75,    16,    63,    17,    -1,    76,
      63,    17,    -1,    76,    63,    -1,    14,    44,    80,    45,
      15,    -1,    78,    63,    19,    40,    -1,    79,    44,    80,
      45,    -1,    18,    -1,    80,    24,    81,    -1,    81,    -1,
      81,    25,    82,    -1,    82,    -1,    84,    -1,    83,    -1,
      84,    42,    28,    42,    84,    -1,    84,    42,    26,    42,
      84,    -1,    84,    42,    27,    42,    84,    -1,    84,    42,
      29,    42,    84,    -1,    84,    42,    30,    42,    84,    -1,
      84,    42,    31,    42,    84,    -1,    71,    -1,    85,    -1,
      44,    80,    24,    81,    45,    -1,    44,    81,    25,    82,
      45,    -1,    44,    83,    45,    -1,    44,    85,    45,    -1,
      11,    -1,    10,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    32,    32,    37,    38,    40,    41,    42,    43,    45,
      47,    48,    50,    51,    54,    55,    56,    57,    58,    62,
      63,    64,    66,    67,    68,    70,    71,    71,    72,    74,
      75,    76,    77,    78,    79,    82,    83,    85,    86,    88,
      89,    92,    93,    94,    95,    96,    97,    98,    99,   102,
     103,   105,   106,   107,   108,   109,   110,   111,   114,   115,
     116,   117,   118,   121,   123,   125,   127,   130,   132,   134,
     138,   140,   142,   144,   146,   147,   148,   149,   150,   151,
     152,   153,   156,   157,   158,   160,   161,   162,   163,   165,
     166,   167,   169,   170,   171,   172,   173,   176,   177,   179,
     181,   184,   186,   188,   191,   192,   194,   195,   197,   198,
     200,   201,   202,   203,   204,   205,   207,   208,   209,   210,
     211,   212,   215,   216
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Mc_program", "Mc_end", "Mc_routine",
  "Mc_endr", "Mc_call", "Mc_logical", "Mc_character", "Mc_True",
  "Mc_False", "Mc_integer", "Mc_real", "Mc_if", "Mc_then", "Mc_else",
  "Mc_endif", "Mc_dowhile", "Mc_enddo", "Mc_read", "Mc_write",
  "Mc_equivalence", "Mc_dimension", "or", "and", "gt", "ge", "eq", "ne",
  "le", "lt", "add", "sub", "mult", "division", "idf", "cst", "chaine",
  "aff", "pvg", "vir", "point", "DP", "parOuv", "parFer", "erreur",
  "$accept", "S", "ROUTINE_LIST", "ROUTINE", "PROGRAM", "ARGUMENT", "ARG",
  "DEC", "SUITE_DEC_INT", "SUITE_DEC_REAL", "SUITE_DEC_LOGICAL",
  "SUITE_DEC_CHAR", "LIST_IDF_LOGICAL", "LIST_IDF_INT", "LIST_IDF_REAL",
  "LIST_IDF", "List_inst", "INST", "AFFECTATION", "EQUIVALENCE",
  "FUN_CALL", "READ", "WRITE", "Message", "EXP", "EXP1", "EXP2", "IFSTAT",
  "IFSTAT1", "IFSTAT2", "DOWHILE", "DOWHILE1", "DOWHILE2", "COND",
  "COND_1", "COND_2", "COND3", "EXPR_BOOL", "LOGICAL", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    50,    51,
      52,    52,    53,    53,    54,    54,    54,    54,    54,    55,
      55,    55,    56,    56,    56,    57,    57,    57,    57,    58,
      58,    58,    58,    58,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    62,    62,    62,    62,    62,    62,    63,
      63,    64,    64,    64,    64,    64,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    67,    68,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    73,    73,    73,    73,    73,    74,    74,    75,
      76,    77,    78,    79,    80,    80,    81,    81,    82,    82,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,    10,    10,    10,    10,     5,
       1,     0,     3,     1,     4,     4,     4,     4,     0,     1,
       5,     7,     1,     5,     7,     1,     0,     5,     7,     5,
       3,     3,     1,     5,     7,     3,     1,     3,     1,     3,
       1,     5,     3,     3,     1,     5,     3,     5,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     7,     7,     7,     7,     9,     9,     9,     9,
       9,     8,     5,     5,     3,     1,     3,     3,     1,     1,
       3,     1,     3,     3,     1,     3,     5,     3,     3,     6,
       8,     1,     3,     1,     1,     4,     6,     4,     3,     2,
       5,     4,     4,     1,     3,     1,     3,     1,     1,     1,
       5,     5,     5,     5,     5,     5,     1,     1,     5,     5,
       3,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     1,     0,     2,     3,     0,     0,     0,     0,
      18,    11,    11,    11,    11,    26,     0,     0,     0,    50,
      93,    94,     0,     0,    10,    13,    84,    91,     0,     0,
       0,    36,     0,    25,    32,     0,    38,     0,    19,    40,
       0,    22,     0,     0,     0,    18,     0,     0,     0,     0,
       0,    18,    18,    18,     0,     0,    18,     0,     0,     0,
      18,     0,     0,    18,     0,     0,    18,     9,     0,   103,
       0,     0,     0,     0,    49,    56,    54,    55,    51,    52,
      57,     0,    50,    53,    50,     0,     0,    92,    50,    83,
      82,    12,    85,    87,    88,     0,    50,    50,    50,     0,
      36,    35,    16,     0,    30,    31,    17,     0,    38,    37,
      14,     0,    40,    39,    15,     0,     0,     0,     0,     0,
       0,    50,    99,     0,     0,     0,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,   122,
       0,   116,     0,   105,   107,   109,   108,   117,    44,     0,
      79,    78,    81,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     0,    56,     0,    86,
      56,    56,    56,     0,    27,     0,    33,    29,     0,    20,
       0,    23,   116,     0,   105,   109,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,    59,    61,    58,     0,     0,    97,   101,   102,
      96,     7,     0,    89,     8,     5,     6,     0,     0,     0,
       0,     0,     0,   120,   121,   104,   100,   106,     0,     0,
       0,     0,     0,     0,    46,    48,    43,    42,    72,    80,
      76,    77,    73,    74,     0,     0,     0,     0,     0,    28,
      34,    21,    24,   104,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,   118,   119,   111,   112,   110,   113,   114,   115,
      45,    47,    41,     0,     0,     0,    65,    64,    63,    62,
       0,    71,     0,     0,     0,     0,    70,    69,    68,    67,
      66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    14,    33,    34,    29,    47,    50,
      42,    45,    43,    48,    51,   159,    52,    84,    85,    86,
      87,    88,    89,   163,   151,    36,    37,    90,    91,    92,
      93,    94,    95,   152,   153,   154,   155,   156,   157
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -196
static const yytype_int16 yypact[] =
{
     280,    14,    20,    26,    39,    59,    64,   280,    47,    73,
      76,   103,  -196,   107,  -196,  -196,   109,   117,   121,   149,
     282,    36,    36,    36,    36,   111,   132,   138,   171,  -196,
     150,  -196,    36,   164,  -196,   125,    81,  -196,   174,   178,
     180,    45,   187,  -196,    79,   189,    48,   193,  -196,    58,
     195,  -196,    83,    36,   -12,   282,    36,    36,    36,    36,
     211,   282,   282,   282,   197,   218,   282,   219,   212,   132,
     282,   221,   233,   282,   229,   245,   282,  -196,   255,  -196,
     257,   258,   259,   161,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,   246,  -196,  -196,  -196,   260,   118,  -196,  -196,    81,
      81,  -196,  -196,   261,  -196,    36,  -196,  -196,  -196,    36,
     265,  -196,  -196,    36,   266,  -196,  -196,    36,   267,  -196,
    -196,    36,   268,  -196,  -196,    25,   274,     5,    36,     2,
     275,  -196,   104,   113,    25,    36,  -196,   134,    36,    78,
     134,   134,   134,   158,   163,   132,   165,   179,  -196,  -196,
      25,   213,    21,   286,  -196,  -196,   271,  -196,    89,   269,
     276,   277,   278,   270,   140,   279,   284,   281,   283,   285,
     224,    29,   124,  -196,   287,    34,   143,   310,   181,  -196,
     316,   320,   322,    36,  -196,    36,  -196,  -196,    36,  -196,
      36,  -196,   -12,   305,   306,   288,   289,    25,   315,    25,
     249,    54,   274,   292,     5,     5,     5,   295,     5,   296,
     294,  -196,  -196,  -196,  -196,   299,   300,  -196,  -196,  -196,
    -196,  -196,    36,  -196,  -196,  -196,  -196,   183,   185,   199,
     205,    25,    25,  -196,  -196,   286,  -196,  -196,   298,   301,
     302,   303,   304,   307,   309,   311,   210,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,   297,    36,   308,    16,   207,  -196,
    -196,  -196,  -196,     3,   312,    25,    25,    25,    25,    25,
      25,   274,   274,   274,    36,   313,   317,   314,   319,   321,
     226,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,   318,   324,    19,  -196,  -196,  -196,  -196,
     325,  -196,   326,   327,   328,   228,  -196,  -196,  -196,  -196,
    -196
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,   335,  -196,  -196,    71,   -53,   116,  -196,  -196,
    -196,   -63,   290,   323,   272,  -195,   -84,  -196,   130,  -196,
    -196,  -196,  -196,    92,   -21,    80,   329,  -196,  -196,  -196,
    -196,  -196,  -196,  -116,  -146,  -182,   198,    17,   201
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      35,    35,    35,    35,   194,   101,   115,   247,   132,   166,
     133,    54,   167,   168,   137,   160,   161,   237,   175,     8,
      56,    57,   140,   141,   142,     9,   277,   278,   199,   302,
     303,    10,    96,    97,   193,   148,   149,    35,    30,    31,
     169,    30,    31,   162,    11,   197,    32,   172,   282,    32,
     264,   235,    30,    31,   279,    30,    31,   304,   197,    12,
      32,    30,    31,    32,   244,   245,   198,    13,    64,   150,
     215,    71,    30,    31,   216,   165,   290,   291,   292,   219,
      32,    74,   187,    16,   139,   263,    65,    77,   143,    72,
      30,    31,   144,    38,    39,    40,   146,    78,    32,    75,
     147,    79,    67,    80,    81,    82,   164,    35,   170,    17,
      56,    57,    18,    68,   176,    59,    60,   178,    78,    83,
      69,   173,    79,   179,    80,    81,    82,    78,   201,   192,
     202,    79,   174,    80,    81,    82,    99,   100,    78,    19,
      83,   217,    79,    20,    80,    81,    82,    41,    78,    83,
      56,    57,    79,    21,    80,    81,    82,    56,    57,   135,
      83,    22,   227,   136,   228,    23,    58,   229,    44,   230,
      83,    98,    56,    57,    46,    56,    57,   106,   107,   108,
     246,   208,   112,   164,   164,   164,   116,   164,   220,   120,
      56,    57,   124,    24,    53,    56,    57,    56,    57,   183,
     129,   258,   275,   184,   185,   130,   188,    49,   186,    55,
     189,    56,    57,    56,    57,    56,    57,    56,    57,    61,
     190,   293,   222,    62,   191,    63,   223,    66,   259,    70,
     260,    56,    57,    73,    35,    76,   280,    56,    57,    56,
      57,   109,    56,    57,   261,    56,    57,   103,   104,   114,
     262,   273,   281,    35,   110,   105,    56,    57,    56,    57,
      56,    57,   131,   113,   214,   117,   299,   177,   310,   118,
     180,   181,   182,   121,   305,   238,   239,   240,   241,   242,
     243,   122,   284,   285,   286,   287,   288,   289,     1,     2,
      25,    26,     3,     4,    27,    28,   249,   250,   251,   125,
     253,   126,   127,   128,   134,   138,    65,   145,    72,    75,
     158,   199,   171,   200,   203,   207,   221,   204,   205,   206,
     210,   211,   224,   212,   209,   213,   225,   218,   226,   231,
     236,   232,   248,   233,   234,   252,   256,   254,   255,   257,
     265,   274,    15,   266,   267,   268,   269,   123,   195,   270,
     271,   196,   272,   276,   296,   111,   295,   283,   294,   297,
       0,   298,     0,   300,   301,   306,   307,   308,   309,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
       0,     0,     0,     0,     0,   119
};

static const yytype_int16 yycheck[] =
{
      21,    22,    23,    24,   150,    58,    69,   202,    92,     7,
      94,    32,    10,    11,    98,    10,    11,   199,   134,     5,
      32,    33,   106,   107,   108,     5,    10,    11,    25,    10,
      11,     5,    53,    45,   150,    10,    11,    58,    36,    37,
      38,    36,    37,    38,     5,    24,    44,   131,    45,    44,
     232,   197,    36,    37,    38,    36,    37,    38,    24,     0,
      44,    36,    37,    44,    10,    11,    45,     3,    23,    44,
      41,    23,    36,    37,    45,   128,   271,   272,   273,    45,
      44,    23,   145,    36,   105,   231,    41,     4,   109,    41,
      36,    37,   113,    22,    23,    24,   117,    14,    44,    41,
     121,    18,    23,    20,    21,    22,   127,   128,   129,    36,
      32,    33,    36,    34,   135,    34,    35,   138,    14,    36,
      41,    17,    18,    45,    20,    21,    22,    14,    39,   150,
      41,    18,    19,    20,    21,    22,    56,    57,    14,    36,
      36,    17,    18,    36,    20,    21,    22,    36,    14,    36,
      32,    33,    18,    44,    20,    21,    22,    32,    33,    41,
      36,    44,   183,    45,   185,    44,    41,   188,    36,   190,
      36,    55,    32,    33,    36,    32,    33,    61,    62,    63,
     201,    41,    66,   204,   205,   206,    70,   208,    45,    73,
      32,    33,    76,    44,    44,    32,    33,    32,    33,    41,
      39,   222,   255,    45,    41,    44,    41,    36,    45,    45,
      45,    32,    33,    32,    33,    32,    33,    32,    33,    45,
      41,   274,    41,    45,    45,    45,    45,    40,    45,    40,
      45,    32,    33,    40,   255,    40,   257,    32,    33,    32,
      33,    44,    32,    33,    45,    32,    33,    36,    37,    37,
      45,    41,    45,   274,    36,    44,    32,    33,    32,    33,
      32,    33,    16,    44,    40,    44,    40,   137,    40,    36,
     140,   141,   142,    44,   295,    26,    27,    28,    29,    30,
      31,    36,   265,   266,   267,   268,   269,   270,     8,     9,
       8,     9,    12,    13,    12,    13,   204,   205,   206,    44,
     208,    44,    44,    44,    44,    44,    41,    41,    41,    41,
      36,    25,    37,    42,    45,    45,     6,    41,    41,    41,
      36,    40,     6,    40,    45,    40,     6,    40,     6,    24,
      15,    25,    40,    45,    45,    40,    37,    41,    44,    39,
      42,    44,     7,    42,    42,    42,    42,    75,   150,    42,
      41,   150,    41,    45,    40,    65,    39,    45,    45,    40,
      -1,    40,    -1,    45,    40,    40,    40,    40,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    72
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    12,    13,    48,    49,    50,     5,     5,
       5,     5,     0,     3,    51,    49,    36,    36,    36,    36,
      36,    44,    44,    44,    44,     8,     9,    12,    13,    54,
      36,    37,    44,    52,    53,    71,    72,    73,    52,    52,
      52,    36,    57,    59,    36,    58,    36,    55,    60,    36,
      56,    61,    63,    44,    71,    45,    32,    33,    41,    34,
      35,    45,    45,    45,    23,    41,    40,    23,    34,    41,
      40,    23,    41,    40,    23,    41,    40,     4,    14,    18,
      20,    21,    22,    36,    64,    65,    66,    67,    68,    69,
      74,    75,    76,    77,    78,    79,    71,    45,    54,    72,
      72,    53,    73,    36,    37,    44,    54,    54,    54,    44,
      36,    59,    54,    44,    37,    58,    54,    44,    36,    60,
      54,    44,    36,    61,    54,    44,    44,    44,    44,    39,
      44,    16,    63,    63,    44,    41,    45,    63,    44,    71,
      63,    63,    63,    71,    71,    41,    71,    71,    10,    11,
      44,    71,    80,    81,    82,    83,    84,    85,    36,    62,
      10,    11,    38,    70,    71,    53,     7,    10,    11,    38,
      71,    37,    63,    17,    19,    80,    71,    65,    71,    45,
      65,    65,    65,    41,    45,    41,    45,    58,    41,    45,
      41,    45,    71,    80,    81,    83,    85,    24,    45,    25,
      42,    39,    41,    45,    41,    41,    41,    45,    41,    45,
      36,    40,    40,    40,    40,    41,    45,    17,    40,    45,
      45,     6,    41,    45,     6,     6,     6,    71,    71,    71,
      71,    24,    25,    45,    45,    81,    15,    82,    26,    27,
      28,    29,    30,    31,    10,    11,    71,    62,    40,    70,
      70,    70,    40,    70,    41,    44,    37,    39,    71,    45,
      45,    45,    45,    81,    82,    42,    42,    42,    42,    42,
      42,    41,    41,    41,    44,    53,    45,    10,    11,    38,
      71,    45,    45,    45,    84,    84,    84,    84,    84,    84,
      62,    62,    62,    53,    45,    39,    40,    40,    40,    40,
      45,    40,    10,    11,    38,    71,    40,    40,    40,    40,
      40
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 33 "project.y"
    {
    printf("syntaxe correct\n");
;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 40 "project.y"
    {add_type((yyvsp[(3) - (10)].str),"INTEGER");  ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 41 "project.y"
    {add_type((yyvsp[(3) - (10)].str), "REAL");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 42 "project.y"
    {add_type((yyvsp[(3) - (10)].str), "LOGICAL");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 43 "project.y"
    {add_type((yyvsp[(3) - (10)].str), "CHARACTER");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 50 "project.y"
    { write=qc;  Rpeek(); quadr("ARG",tmp,"vide","vide"); ajour_quad(write,1,tmp);   ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 51 "project.y"
    { write=qc; Rpeek(); quadr("ARG",tmp,"vide","vide"); ajour_quad(write,1,tmp);  ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 63 "project.y"
    { strcpy(tmp1,tmp); R2((yyvsp[(1) - (5)].str),tmp1); quadr("ADEC",(yyvsp[(1) - (5)].str),"vide","vide"); add_type(sauvTab,"INTEGER", nb_ligne, Col, file_name);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 64 "project.y"
    {Rpop(); strcpy(tmp2,tmp); Rpop(); strcpy(tmp1,tmp); R7((yyvsp[(1) - (7)].str),tmp1,tmp2); quadr("ADEC",(yyvsp[(1) - (7)].str),"vide","vide"); add_type(sauvTab,"INTEGER", nb_ligne, Col, file_name);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 67 "project.y"
    {strcpy(tmp1,tmp); R2((yyvsp[(1) - (5)].str),tmp1); quadr("ADEC",(yyvsp[(1) - (5)].str),"vide","vide"); add_type((yyvsp[(1) - (5)].str),"REAL", nb_ligne, Col, file_name);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 68 "project.y"
    {Rpop(); strcpy(tmp2,tmp); Rpop(); strcpy(tmp1,tmp); R7((yyvsp[(1) - (7)].str),tmp1,tmp2); quadr("ADEC",(yyvsp[(1) - (7)].str),"vide","vide"); add_type(sauvTab,"REAL", nb_ligne, Col, file_name);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 71 "project.y"
    {strcpy(tmp1,tmp); R2((yyvsp[(1) - (5)].str),tmp1); quadr("ADEC",(yyvsp[(1) - (5)].str),"vide","vide"); add_type((yyvsp[(1) - (5)].str),"LOGICAL", nb_ligne, Col, file_name);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 72 "project.y"
    {Rpop(); strcpy(tmp2,tmp); Rpop(); strcpy(tmp1,tmp); R7((yyvsp[(1) - (7)].str),tmp1,tmp2); quadr("ADEC",(yyvsp[(1) - (7)].str),"vide","vide"); add_type((yyvsp[(1) - (7)].str),"LOGICAL", nb_ligne, Col, file_name);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 74 "project.y"
    {add_type((yyvsp[(1) - (5)].str), "CHARACTER", nb_ligne, Col, file_name);  oper=qc;  quadr("*",(yyvsp[(1) - (5)].str),tmp,"vide"); sprintf(tmp,"%d",(yyvsp[(3) - (5)].entier)); ajour_quad(oper,2,tmp); add_value((yyvsp[(1) - (5)].str), tmp, nb_ligne, Col, file_name); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 75 "project.y"
    {add_type((yyvsp[(1) - (3)].str), "CHARACTER", nb_ligne, Col, file_name); oper=qc;  quadr("*",(yyvsp[(1) - (3)].str),tmp,"vide"); sprintf(tmp,"%d",(yyvsp[(3) - (3)].entier)); ajour_quad(oper,2,tmp); add_value((yyvsp[(1) - (3)].str), tmp, nb_ligne, Col, file_name);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 76 "project.y"
    {add_type((yyvsp[(1) - (3)].str), "CHARACTER", nb_ligne, Col, file_name);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 77 "project.y"
    {add_type((yyvsp[(1) - (1)].str), "CHARACTER", nb_ligne, Col, file_name);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 78 "project.y"
    {Rpeek(); strcpy(tmp1,tmp); R2((yyvsp[(1) - (5)].str),tmp1); quadr("ADEC",(yyvsp[(1) - (5)].str),"vide","vide"); add_type((yyvsp[(1) - (5)].str),"LOGICAL", nb_ligne, Col, file_name);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 79 "project.y"
    {Rpop(); strcpy(tmp2,tmp); Rpop(); strcpy(tmp1,tmp); R7((yyvsp[(1) - (7)].str),tmp1,tmp2); quadr("ADEC",(yyvsp[(1) - (7)].str),"vide","vide"); add_type(sauvTab,"LOGICAL", nb_ligne, Col, file_name);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 82 "project.y"
    {add_type((yyvsp[(1) - (3)].str),"LOGICAL", nb_ligne, Col, file_name);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 83 "project.y"
    {add_type((yyvsp[(1) - (1)].str),"LOGICAL", nb_ligne, Col, file_name);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 85 "project.y"
    {add_type((yyvsp[(1) - (3)].str),"INTEGER", nb_ligne, Col, file_name);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 86 "project.y"
    {add_type((yyvsp[(1) - (1)].str),"INTEGER", nb_ligne, Col, file_name);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 88 "project.y"
    {add_type((yyvsp[(1) - (3)].str), "REAL", nb_ligne, Col, file_name);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 89 "project.y"
    {add_type((yyvsp[(1) - (1)].str),"REAL", nb_ligne, Col, file_name);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 92 "project.y"
    {    /*comp_type($1,"INTREAL", nb_ligne, Col, file_name);*/;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 93 "project.y"
    {strcpy(tmp,(yyvsp[(1) - (3)].str));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 94 "project.y"
    {/*comp_type($1,"INTREAL", nb_ligne, Col, file_name);*/;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 95 "project.y"
    {strcpy(tmp,(yyvsp[(1) - (1)].str));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 96 "project.y"
    {comp_type((yyvsp[(1) - (5)].str),"LOGICAL", nb_ligne, Col, file_name); add_value((yyvsp[(1) - (5)].str), "TRUE", nb_ligne, Col, file_name);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 97 "project.y"
    {comp_type((yyvsp[(1) - (3)].str),"LOGICAL", nb_ligne, Col, file_name); add_value((yyvsp[(1) - (3)].str), "TRUE", nb_ligne, Col, file_name);;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 98 "project.y"
    {comp_type((yyvsp[(1) - (5)].str),"LOGICAL", nb_ligne, Col, file_name); add_value((yyvsp[(1) - (5)].str), "FALSE", nb_ligne, Col, file_name);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 99 "project.y"
    {comp_type((yyvsp[(1) - (3)].str),"LOGICAL", nb_ligne, Col, file_name); add_value((yyvsp[(1) - (3)].str), "FALSE", nb_ligne, Col, file_name);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 114 "project.y"
    {comp_type((yyvsp[(1) - (4)].str),"INTREAL", nb_ligne, Col, file_name); affect=qc; quadr("=",tmp,"vide",(yyvsp[(1) - (4)].str));  ajour_quad(affect,1,tmp); add_value((yyvsp[(1) - (4)].str), tmp, nb_ligne, Col, file_name); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 115 "project.y"
    {comp_type((yyvsp[(1) - (4)].str),"LOGICAL", nb_ligne, Col, file_name);add_value((yyvsp[(1) - (4)].str), "FALSE", nb_ligne, Col, file_name);  quadr("=","FALSE","vide",(yyvsp[(1) - (4)].str));   ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 116 "project.y"
    {comp_type((yyvsp[(1) - (4)].str),"LOGICAL");add_value((yyvsp[(1) - (4)].str), "TRUE", nb_ligne, Col, file_name);  quadr("=","TRUE","vide",(yyvsp[(1) - (4)].str));  ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 117 "project.y"
    {add_value((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].str), nb_ligne, Col, file_name);  quadr("=",(yyvsp[(3) - (4)].str),"vide",(yyvsp[(1) - (4)].str));                          ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 118 "project.y"
    {  comp_type(sauvTab,"INTREAL", nb_ligne, Col, file_name);  sprintf(tmp1,"%d",(yyvsp[(3) - (7)].entier));  R2 ((yyvsp[(1) - (7)].str),tmp1);
                                    affect=qc; quadr("=",tmp,"vide",sauvTab);  ajour_quad(affect,3,sauvTab);  ajour_quad(affect,1,tmp); 
                                      add_value(sauvTab, tmp, nb_ligne, Col, file_name);                                       ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 121 "project.y"
    {sprintf(tmp1,"%d",(yyvsp[(3) - (7)].entier));  R2 ((yyvsp[(1) - (7)].str),tmp1);  quadr("=",(yyvsp[(6) - (7)].str),"vide",sauvTab);    
                                      add_value((yyvsp[(1) - (7)].str), (yyvsp[(6) - (7)].str), nb_ligne, Col, file_name);          ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 123 "project.y"
    {sprintf(tmp1,"%d",(yyvsp[(3) - (7)].entier));  R2 ((yyvsp[(1) - (7)].str),tmp1); quadr("=","FALSE","vide",sauvTab); comp_type(sauvTab,"LOGICAL", nb_ligne, Col, file_name);
                                                    add_value(sauvTab, "FALSE", nb_ligne, Col, file_name); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 125 "project.y"
    {sprintf(tmp1,"%d",(yyvsp[(3) - (7)].entier));  R2 ((yyvsp[(1) - (7)].str),tmp1); quadr("=","TRUE","vide",sauvTab); comp_type(sauvTab,"LOGICAL", nb_ligne, Col, file_name);
                                           add_value(sauvTab, "TRUE", nb_ligne, Col, file_name); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 127 "project.y"
    { sprintf(tmp1,"%d",(yyvsp[(3) - (9)].entier)); sprintf(tmp2,"%d",(yyvsp[(5) - (9)].entier));  R7 ((yyvsp[(1) - (9)].str),tmp1,tmp2);  comp_type(sauvTab,"INTREAL", nb_ligne, Col, file_name); 
                                              affect=qc; quadr("=",tmp,"vide",sauvTab);  ajour_quad(affect,3,sauvTab);  ajour_quad(affect,1,tmp); 
                                               add_value(sauvTab, tmp, nb_ligne, Col, file_name);                                       ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 130 "project.y"
    {sprintf(tmp1,"%d",(yyvsp[(3) - (9)].entier)); sprintf(tmp2,"%d",(yyvsp[(5) - (9)].entier));  R7 ((yyvsp[(1) - (9)].str),tmp1,tmp2); affect=qc; quadr("=",(yyvsp[(8) - (9)].str),"vide",sauvTab);  ajour_quad(affect,3,sauvTab);
                                               add_value(sauvTab, (yyvsp[(8) - (9)].str), nb_ligne, Col, file_name);                                                   ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 132 "project.y"
    {sprintf(tmp1,"%d",(yyvsp[(3) - (9)].entier)); sprintf(tmp2,"%d",(yyvsp[(5) - (9)].entier));  R7((yyvsp[(1) - (9)].str),tmp1,tmp2); affect=qc; quadr("=",tmp,"vide",sauvTab);  ajour_quad(affect,3,sauvTab);
                                                comp_type(sauvTab,"LOGICAL", nb_ligne, Col, file_name);   add_value(sauvTab, "FALSE", nb_ligne, Col, file_name); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 134 "project.y"
    {sprintf(tmp1,"%d",(yyvsp[(3) - (9)].entier)); sprintf(tmp2,"%d",(yyvsp[(5) - (9)].entier)); R7((yyvsp[(1) - (9)].str),tmp1,tmp2); affect=qc; quadr("=",tmp,"vide",sauvTab);  ajour_quad(affect,3,sauvTab); 
                                                 comp_type((yyvsp[(1) - (9)].str),"LOGICAL", nb_ligne, Col, file_name);add_value((yyvsp[(1) - (9)].str), "TRUE", nb_ligne, Col, file_name); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 138 "project.y"
    {   quadr("EQUIVALENCE","vide","vide","vide");   ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 140 "project.y"
    { strcpy(tmp,(yyvsp[(4) - (8)].str)); write=qc;  quadr("CALL",tmp,"vide","vide"); ajour_quad(write,1,tmp);  ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 142 "project.y"
    { write=qc; quadr("READ","vide","vide",tmp);  ajour_quad(write,3,tmp); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 146 "project.y"
    { write=qc; quadr("WRITE", tmp, "vide", "vide");    ajour_quad(write,1,tmp); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 147 "project.y"
    {write=qc; quadr("WRITE", tmp, "vide", "vide");    ajour_quad(write,1,tmp);   ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 148 "project.y"
    {strcpy(tmp1,(yyvsp[(1) - (3)].str)); R1(tmp1); write=qc; quadr("WRITE", tmp1, "vide", "vide");    ajour_quad(write,1,tmp1);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 149 "project.y"
    {strcpy(tmp1,(yyvsp[(1) - (3)].str)); R1(tmp1); write=qc; quadr("WRITE", tmp1, "vide", "vide");    ajour_quad(write,1,tmp1);  ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 150 "project.y"
    {strcpy(tmp1,(yyvsp[(1) - (1)].str)); R1(tmp1); write=qc; quadr("WRITE", tmp1, "vide", "vide");    ajour_quad(write,1,tmp1);  ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 151 "project.y"
    {strcpy(tmp1,(yyvsp[(1) - (1)].str)); R1(tmp1); write=qc; quadr("WRITE", tmp1, "vide", "vide");    ajour_quad(write,1,tmp1);  ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 152 "project.y"
    {strcpy(tmp1,(yyvsp[(1) - (3)].str)); R1(tmp1); write=qc; quadr("WRITE", tmp1, "vide", "vide");    ajour_quad(write,1,tmp1);  ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 153 "project.y"
    {strcpy(tmp1,(yyvsp[(1) - (1)].str)); R1(tmp1); write=qc; quadr("WRITE", tmp1, "vide", "vide");    ajour_quad(write,1,tmp1);  ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 156 "project.y"
    { R5(); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 157 "project.y"
    { R6(); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 160 "project.y"
    { R4(); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 162 "project.y"
    {div_zero_idf((yyvsp[(3) - (3)].str), nb_ligne, Col, file_name);    R3((yyvsp[(3) - (3)].str)); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 163 "project.y"
    {div_zero_cst((yyvsp[(3) - (3)].entier), nb_ligne, Col, file_name); sprintf(t,"%d",(yyvsp[(3) - (3)].entier));   R3(t); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 165 "project.y"
    {Rpop(); strcpy(tmp1,tmp); R2((yyvsp[(3) - (6)].str),tmp1); search_value(sauvTab,&result,nb_ligne, Col, file_name); sprintf(tmp,"%.2f",result);  div_zero_cst(tmp, nb_ligne, Col, file_name);  R3(sauvTab); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 166 "project.y"
    {Rpop(); strcpy(tmp2,tmp); Rpop(); strcpy(tmp1,tmp);R7((yyvsp[(3) - (8)].str),tmp1,tmp2); search_value(sauvTab,&result,nb_ligne, Col, file_name); sprintf(tmp,"%.2f",result);  div_zero_cst(tmp, nb_ligne, Col, file_name);  R3(sauvTab); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 170 "project.y"
    { search_value((yyvsp[(1) - (1)].str),&result,nb_ligne, Col, file_name);  sprintf(tmp,"%.2f",result); R1(tmp); strcpy(tmp,(yyvsp[(1) - (1)].str));  R1(tmp);  ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 171 "project.y"
    { sprintf(tmp,"%d",(yyvsp[(1) - (1)].entier));   R1(tmp);  ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 172 "project.y"
    {Rpop(); strcpy(tmp1,tmp); R2((yyvsp[(1) - (4)].str),tmp1); quadr("BOUNDS",tmp1,tmp2,"vide");  search_value(sauvTab,&result,nb_ligne, Col, file_name); sprintf(tmp,"%.2f",result); R1(tmp); strcpy(tmp,sauvTab); R1(tmp); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 173 "project.y"
    {Rpop(); strcpy(tmp2,tmp); Rpop(); strcpy(tmp1,tmp); R7((yyvsp[(1) - (6)].str),tmp1,tmp2); search_value(sauvTab,&result,nb_ligne, Col, file_name); sprintf(tmp,"%.2f",result); R1(tmp); strcpy(tmp,sauvTab); R1(tmp);  ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 176 "project.y"
    { sprintf(tmp,"%d",qc);  ajour_quad(Fin_if,1,tmp);;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 177 "project.y"
    {sprintf(tmp,"%d",qc);  ajour_quad(deb_else,1,tmp);;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 179 "project.y"
    {  Fin_if=qc; quadr("BR"," ","vide", "vide"); sprintf(tmp,"%d",qc); ajour_quad(deb_else,1,tmp); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 181 "project.y"
    { deb_else=qc; quadr("BZ","","temp_cond", "vide"); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 184 "project.y"
    {  sauv_BR=qc; quadr("BR","","vide", "vide"); sprintf(tmp,"%d",sauv_BR);  ajour_quad(sauv_BZ,1,tmp); sprintf(tmp,"%d",sauv_BZ); ajour_quad(sauv_BR,1,tmp); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 186 "project.y"
    { sauv_BZ = qc;  quadr("BZ",tmp,"temp_cond", "vide");  ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 191 "project.y"
    { quadcond("OR");  ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 194 "project.y"
    {  quadcond("AND");  ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 200 "project.y"
    { quadcond("EQ"); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 201 "project.y"
    { quadcond("GT");  ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 202 "project.y"
    { quadcond("GE");  ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 203 "project.y"
    { quadcond("NE");  ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 204 "project.y"
    {quadcond("LE"); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 205 "project.y"
    {quadcond("LT");  ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 209 "project.y"
    {  quadcond("OR");;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 210 "project.y"
    {  quadcond("AND"); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 215 "project.y"
    {R1("FALSE");;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 216 "project.y"
    {R1("TRUE");;}
    break;



/* Line 1455 of yacc.c  */
#line 2283 "project.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 219 "project.y"

int yyerror(char *msg)
{
    printf(" File %s| Ligne %d | Colonne %d| %s\n", file_name, nb_ligne,Col, msg);
}

int main(int argc, char* argv[])
{
    FILE *file = fopen(argv[1], "r");
    strcpy(file_name, argv[1]);
    if (argc != 2 && !file) {
        fprintf(stderr, "Erreur : Impossible d'ouvrir le fichier.\n");
        exit(EXIT_FAILURE);
    }
    yyrestart(file);
    initialisation();    
    yyparse();
    afficher(); 
    afficher_qdr();  
    return 0;
}
yywrap(){}



