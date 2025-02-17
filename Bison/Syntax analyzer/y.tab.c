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
#line 1 "lex.y" /* yacc.c:339  */

#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include "symbolMain.cpp"

//#define YYDEBUG 1

using namespace std;

int yyparse(void);
int yylex(void);

string typeSp;
string vType;
string rType;
string par[10];
string parType[10];

char * undecvar= "\nError at line: %d. Undeclared variable %s\n";
char * muldec= "\nError at line: %d. Multipe declaration of %s\n";
char * nonIn= "\nError at line: %d. Not-Integer Array Index used\n";
char * nonArr="\nError at line: %d. Not an Array\n";
char * arrIn="\nError at line: %d. Trying to access array like normal variable!\n";
char * typemm= "\nError at line: %d. Type mismatched\n";
char * undecfunc="\nError at line: %d. Undeclared function %s\n";
char * moderror="\nError at ine: %d. Both operands on modulus should be Integer\n";
char * voidcall="\nError at line: %d. Can't call Void function for assignment or expression\n";

bool c;

int parNum=0;
int tperror=0;

SymbolInfo * symbolInfo;

extern char* yytext;
extern int yylineno;
extern FILE *yyin;
extern FILE *logOut,*tokenOut;
extern int terror;

void yyerror(char *s,string t=".")
{
	if(t!=".") fprintf(parseError,s,yylineno,t.c_str());
	else fprintf(parseError,s,yylineno);

	tperror++;

	//cout<<s<< " at line: "<<yylineno<<endl;
}

void addToTable(){
	for(int i=0;i<parNum;i++){
		manage('I',par[i],parType[i]);
		symbolInfo=getSymbol(par[i]);
		symbolInfo->var_type=parType[i];
	}
}

void initVtype(){
	vType="none";
}

void initRtype(){
	rType="none";
}


#line 137 "y.tab.c" /* yacc.c:339  */

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    DO = 258,
    SWITCH = 259,
    CASE = 260,
    DEFAULT = 261,
    CONTINUE = 262,
    BREAK = 263,
    DECOP = 264,
    INCOP = 265,
    BITOP = 266,
    NOT = 267,
    LTHIRD = 268,
    RTHIRD = 269,
    COMMA = 270,
    STRING = 271,
    PRINTLN = 272,
    NEWLINE = 273,
    RETURN = 274,
    ID = 275,
    INT = 276,
    FLOAT = 277,
    DOUBLE = 278,
    VOID = 279,
    CONST_CHAR = 280,
    CONST_FLOAT = 281,
    CONST_INT = 282,
    ADDOP = 283,
    MULOP = 284,
    RELOP = 285,
    LOGICOP = 286,
    ASSIGNOP = 287,
    SEMICOLON = 288,
    LCURL = 289,
    RCURL = 290,
    LPAREN = 291,
    RPAREN = 292,
    IF = 293,
    FOR = 294,
    WHILE = 295,
    LOWER_THEN_ELSE = 296,
    ELSE = 297
  };
#endif
/* Tokens.  */
#define DO 258
#define SWITCH 259
#define CASE 260
#define DEFAULT 261
#define CONTINUE 262
#define BREAK 263
#define DECOP 264
#define INCOP 265
#define BITOP 266
#define NOT 267
#define LTHIRD 268
#define RTHIRD 269
#define COMMA 270
#define STRING 271
#define PRINTLN 272
#define NEWLINE 273
#define RETURN 274
#define ID 275
#define INT 276
#define FLOAT 277
#define DOUBLE 278
#define VOID 279
#define CONST_CHAR 280
#define CONST_FLOAT 281
#define CONST_INT 282
#define ADDOP 283
#define MULOP 284
#define RELOP 285
#define LOGICOP 286
#define ASSIGNOP 287
#define SEMICOLON 288
#define LCURL 289
#define RCURL 290
#define LPAREN 291
#define RPAREN 292
#define IF 293
#define FOR 294
#define WHILE 295
#define LOWER_THEN_ELSE 296
#define ELSE 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 72 "lex.y" /* yacc.c:355  */

	SymbolInfo *symbol;
	char *str;
	int ival;
	float *dval;

#line 268 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 285 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   145

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  120

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    95,    95,   102,   107,   113,   117,   121,   127,   132,
     139,   147,   157,   163,   168,   174,   182,   182,   188,   188,
     196,   206,   211,   216,   223,   232,   242,   251,   263,   268,
     275,   279,   283,   287,   292,   297,   302,   307,   310,   318,
     322,   329,   341,   357,   361,   372,   376,   384,   388,   396,
     400,   409,   413,   429,   435,   441,   447,   452,   460,   466,
     471,   476,   482,   490,   494,   497,   502
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DO", "SWITCH", "CASE", "DEFAULT",
  "CONTINUE", "BREAK", "DECOP", "INCOP", "BITOP", "NOT", "LTHIRD",
  "RTHIRD", "COMMA", "STRING", "PRINTLN", "NEWLINE", "RETURN", "ID", "INT",
  "FLOAT", "DOUBLE", "VOID", "CONST_CHAR", "CONST_FLOAT", "CONST_INT",
  "ADDOP", "MULOP", "RELOP", "LOGICOP", "ASSIGNOP", "SEMICOLON", "LCURL",
  "RCURL", "LPAREN", "RPAREN", "IF", "FOR", "WHILE", "LOWER_THEN_ELSE",
  "ELSE", "$accept", "start", "program", "unit", "func_declaration",
  "func_definition", "parameter_list", "compound_statement", "$@1", "$@2",
  "var_declaration", "type_specifier", "declaration_list", "statements",
  "statement", "expression_statement", "variable", "expression",
  "logic_expression", "rel_expression", "simple_expression", "term",
  "unary_expression", "factor", "argument_list", "arguments", YY_NULLPTR
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
     295,   296,   297
};
# endif

#define YYPACT_NINF -69

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-69)))

#define YYTABLE_NINF -19

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      39,   -69,   -69,   -69,    13,    39,   -69,   -69,   -69,   -69,
      -4,   -69,   -69,    -5,    -3,     2,    34,     4,   -69,    29,
      51,     7,    26,    49,   -69,   -69,    33,   -69,    39,    53,
     -69,    37,    80,    38,    58,   -69,   -69,    66,    -1,    60,
      -1,     1,   -69,   -69,    -1,   -69,    -1,    62,    67,    69,
     -69,   -69,    92,    55,   -69,   -69,     8,    82,   -69,    90,
      24,    93,   -69,   -69,   -69,   -69,   -69,   101,   -69,   106,
      94,    -1,    -1,   -69,    91,    -1,    97,    -1,   116,   -69,
     -69,   -69,   -69,    -1,   -69,    -1,    -1,    -1,    -1,    95,
     -69,   117,   -69,    98,   119,   -69,    99,    97,   100,   -69,
     -69,    93,   110,   -69,   107,   -69,   -69,    -1,    80,    -1,
      80,   -69,   -69,   102,   104,   -69,    80,    80,   -69,   -69
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    21,    22,    23,     0,     2,     4,     6,     7,     5,
       0,     1,     3,    26,     0,     0,     0,     0,    20,     0,
       0,     0,    15,    24,    27,     9,    16,    11,     0,     0,
      14,     0,     0,     0,    13,     8,    10,     0,     0,     0,
       0,    41,    60,    59,     0,    39,     0,     0,     0,     0,
      32,    30,     0,     0,    28,    31,    56,     0,    43,    45,
      47,    49,    51,    55,    19,    12,    25,    56,    54,     0,
       0,     0,    64,    53,     0,     0,     0,     0,    26,    17,
      29,    62,    61,     0,    40,     0,     0,     0,     0,     0,
      38,     0,    66,     0,    63,    58,     0,     0,     0,    44,
      46,    50,    48,    52,     0,    42,    57,     0,     0,     0,
       0,    37,    65,    34,     0,    36,     0,     0,    35,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -69,   -69,   134,   -69,   -69,   -69,    22,   -69,   -69,
      23,     5,   -69,   -69,   -51,   -56,   -38,   -39,   -68,    57,
      56,    59,   -35,   -69,   -69,   -69
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    21,    50,    32,    33,
      51,    52,    14,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    93,    94
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      67,    70,    80,    68,    92,    10,    67,    74,    15,    73,
      10,    38,    17,    11,    71,    99,    13,    81,    82,    41,
      97,    22,    28,     9,    23,    42,    43,    44,     9,    19,
      18,    16,    91,    34,    67,    46,    96,    72,    98,   112,
      83,   109,    27,    24,    29,    67,    30,    67,    67,    67,
      67,    36,    86,   103,    87,     1,     2,   113,     3,   115,
       1,     2,    31,     3,    37,   118,   119,    38,   -18,    67,
     114,    20,    39,    64,    40,    41,     1,     2,    65,     3,
      66,    42,    43,    44,    25,    26,    35,    26,    45,    26,
      79,    46,    38,    47,    48,    49,    69,    39,    75,    40,
      41,     1,     2,    76,     3,    77,    42,    43,    44,    38,
      81,    82,    78,    45,    26,    84,    46,    41,    47,    48,
      49,    85,    88,    42,    43,    44,    89,    90,    95,    15,
      45,   105,   104,    46,   107,   106,   108,   110,    86,    12,
     111,   117,   100,   102,   116,   101
};

static const yytype_uint8 yycheck[] =
{
      38,    40,    53,    38,    72,     0,    44,    46,    13,    44,
       5,    12,    15,     0,    13,    83,    20,     9,    10,    20,
      76,    16,    15,     0,    20,    26,    27,    28,     5,    27,
      33,    36,    71,    28,    72,    36,    75,    36,    77,   107,
      32,    97,    20,    14,    37,    83,    20,    85,    86,    87,
      88,    29,    28,    88,    30,    21,    22,   108,    24,   110,
      21,    22,    13,    24,    27,   116,   117,    12,    35,   107,
     109,    37,    17,    35,    19,    20,    21,    22,    20,    24,
      14,    26,    27,    28,    33,    34,    33,    34,    33,    34,
      35,    36,    12,    38,    39,    40,    36,    17,    36,    19,
      20,    21,    22,    36,    24,    36,    26,    27,    28,    12,
       9,    10,    20,    33,    34,    33,    36,    20,    38,    39,
      40,    31,    29,    26,    27,    28,    20,    33,    37,    13,
      33,    14,    37,    36,    15,    37,    37,    37,    28,     5,
      33,    37,    85,    87,    42,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    24,    44,    45,    46,    47,    48,    53,
      54,     0,    46,    20,    55,    13,    36,    15,    33,    27,
      37,    49,    54,    20,    14,    33,    34,    50,    15,    37,
      20,    13,    51,    52,    54,    33,    50,    27,    12,    17,
      19,    20,    26,    27,    28,    33,    36,    38,    39,    40,
      50,    53,    54,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    35,    20,    14,    59,    65,    36,
      60,    13,    36,    65,    60,    36,    36,    36,    20,    35,
      57,     9,    10,    32,    33,    31,    28,    30,    29,    20,
      33,    60,    61,    67,    68,    37,    60,    58,    60,    61,
      62,    64,    63,    65,    37,    14,    37,    15,    37,    58,
      37,    33,    61,    57,    60,    57,    42,    37,    57,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    47,    47,
      48,    48,    49,    49,    49,    49,    51,    50,    52,    50,
      53,    54,    54,    54,    55,    55,    55,    55,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     6,     5,
       6,     5,     4,     3,     2,     1,     0,     4,     0,     3,
       3,     1,     1,     1,     3,     6,     1,     4,     1,     2,
       1,     1,     1,     7,     5,     7,     5,     5,     3,     1,
       2,     1,     4,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     2,     2,     1,     1,     4,     3,     1,
       1,     2,     2,     1,     0,     3,     1
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
        case 2:
#line 96 "lex.y" /* yacc.c:1646  */
    {
		//write your code in this block in all the similar blocks below
		manage('P',"...");
	}
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 102 "lex.y" /* yacc.c:1646  */
    {
		fprintf(parseLog, "\nAt line no : %d program : program unit\n\n",yylineno );
		(yyval.symbol)->setName((yyvsp[-1].symbol)->getName()+"\n"+(yyvsp[0].symbol)->getName());
		fprintf(parseLog,"\n%s\n",(yyvsp[-1].symbol)->getName().c_str());
		}
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 107 "lex.y" /* yacc.c:1646  */
    {
		fprintf(parseLog, "\nAt line no : %d program : unit\n\n",yylineno );
		fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str());
		}
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 113 "lex.y" /* yacc.c:1646  */
    {
			fprintf(parseLog, "\nAt line no : %d unit : var_declaration\n\n",yylineno );
			fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str());
			}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 117 "lex.y" /* yacc.c:1646  */
    {
		 	fprintf(parseLog, "\nAt line no : %d unit : func_declaration\n\n",yylineno );
			 fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str());
			 }
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 121 "lex.y" /* yacc.c:1646  */
    {
		 	fprintf(parseLog, "\nAt line no : %d unit : func_definition\n\n",yylineno );
			 fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str());
			 }
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 127 "lex.y" /* yacc.c:1646  */
    {
				fprintf(parseLog, "\nAt line no : %d func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n\n",yylineno );
				(yyval.symbol)->setName((yyvsp[-5].symbol)->getName()+" "+(yyvsp[-4].symbol)->getName()+"("+(yyvsp[-2].symbol)->getName()+");" );
				fprintf(parseLog,"%s\n",(yyvsp[-5].symbol)->getName().c_str());
				}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 132 "lex.y" /* yacc.c:1646  */
    {
				fprintf(parseLog, "\nAt line no : %d func_declaration : type_specifier ID LPAREN RPAREN SEMICOLON\n\n",yylineno );
				(yyval.symbol)->setName((yyvsp[-4].symbol)->getName()+" "+(yyvsp[-3].symbol)->getName() + "();");
				fprintf(parseLog,"%s\n",(yyvsp[-4].symbol)->getName().c_str());
				}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 139 "lex.y" /* yacc.c:1646  */
    {
				manage('I',(yyvsp[-4].symbol)->getName(),"foo"); symbolInfo=getSymbol((yyvsp[-4].symbol)->getName()); if(symbolInfo!=0){
					symbolInfo->ret_type=(yyvsp[-5].symbol)->getName();
				}
				fprintf(parseLog, "\nAt line no : %d func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement\n\n",yylineno );
				(yyval.symbol)->setName((yyvsp[-5].symbol)->getName()+" "+(yyvsp[-4].symbol)->getName()+"("+(yyvsp[-2].symbol)->getName()+")"+(yyvsp[0].symbol)->getName() );
				fprintf(parseLog,"%s\n",(yyvsp[-5].symbol)->getName().c_str());
				}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 147 "lex.y" /* yacc.c:1646  */
    {
				manage('I',(yyvsp[-3].symbol)->getName(),"foo"); symbolInfo=getSymbol((yyvsp[-3].symbol)->getName()); if(symbolInfo!=0){
					symbolInfo->ret_type=(yyvsp[-4].symbol)->getName();
				}
				fprintf(parseLog, "\nAt line no : %d func_definition : type_specifier ID LPAREN RPAREN compound_statement\n\n",yylineno );
				(yyval.symbol)->setName((yyvsp[-4].symbol)->getName()+ " "+ (yyvsp[-3].symbol)->getName()+ "( )"+(yyvsp[0].symbol)->getName());
				fprintf(parseLog,"%s\n",(yyvsp[-4].symbol)->getName().c_str());
				}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 157 "lex.y" /* yacc.c:1646  */
    {
				par[parNum]=(yyvsp[0].symbol)->getName(); parType[parNum]=(yyvsp[-1].symbol)->getName(); parNum++;
				fprintf(parseLog, "\nAt line no : %d parameter_list : parameter_list COMMA type_specifier ID\n\n",yylineno );
				(yyval.symbol)->setName((yyvsp[-3].symbol)->getName()+","+(yyvsp[-1].symbol)->getName()+" "+(yyvsp[0].symbol)->getName());
				fprintf(parseLog,"%s\n",(yyvsp[-3].symbol)->getName().c_str()); 
				}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 163 "lex.y" /* yacc.c:1646  */
    {
				fprintf(parseLog, "\nAt line no : %d parameter_list : parameter_list COMMA type_specifier\n\n",yylineno );
				(yyval.symbol)->setName((yyvsp[-2].symbol)->getName()+","+(yyvsp[0].symbol)->getName());
				fprintf(parseLog,"%s\n",(yyvsp[-2].symbol)->getName().c_str());
				}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 168 "lex.y" /* yacc.c:1646  */
    {
			 	par[parNum]=(yyvsp[0].symbol)->getName(); parType[parNum]=(yyvsp[-1].symbol)->getName(); parNum++;
				fprintf(parseLog, "\nAt line no : %d parameter_list : type_specifier ID\n\n",yylineno );
				(yyval.symbol)->setName((yyvsp[-1].symbol)->getName()+" "+(yyvsp[0].symbol)->getName());
				fprintf(parseLog,"%s\n",(yyvsp[-1].symbol)->getName().c_str());
				}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 174 "lex.y" /* yacc.c:1646  */
    {
				fprintf(parseLog, "\nAt line no : %d parameter_list : type_specifier\n\n",yylineno );
				(yyval.symbol)->setName((yyvsp[0].symbol)->getName());
				fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str());
				}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 182 "lex.y" /* yacc.c:1646  */
    {manage('S',"..."); addToTable(); }
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 182 "lex.y" /* yacc.c:1646  */
    {
					parNum=0; fprintf(parseLog, "\nAt line no : %d compound_statement : LCURL statements RCURL\n\n",yylineno );
					(yyval.symbol)->setName("{\n"+(yyvsp[-1].symbol)->getName()+"}\n");
					fprintf(parseLog,"%s\n",(yyval.symbol)->getName().c_str());
					manage('E',"...");
					}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 188 "lex.y" /* yacc.c:1646  */
    {manage('S',"..."); addToTable();}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 188 "lex.y" /* yacc.c:1646  */
    { parNum=0;
			 		fprintf(parseLog, "\nAt line no : %d compound_statement : LCURL RCURL\n\n",yylineno );
					(yyval.symbol)->setName("{\n}\n");
					fprintf(parseLog,"{\n}\n");
					manage('E',"...");
					}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 196 "lex.y" /* yacc.c:1646  */
    {
					
					if(vType=="void") yyerror("\nError at line  %d. Variable type Cannot be Void\n"),initVtype;

					fprintf(parseLog, "\nAt line no : %d var_declaration : type_specifier declaration_list SEMICOLON\n\n",yylineno );
					(yyval.symbol)->setName((yyvsp[-2].symbol)->getName()+ " "+(yyvsp[-1].symbol)->getName() + ";");
					fprintf(parseLog,"%s\n",(yyvsp[-2].symbol)->getName().c_str());
					}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 206 "lex.y" /* yacc.c:1646  */
    {
					vType="int"; rType="int";
					fprintf(parseLog, "\nAt line no : %d type_specifier : INT\n\n",yylineno );
					fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str()); 
					}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 211 "lex.y" /* yacc.c:1646  */
    {
					vType="float"; rType="float";
					fprintf(parseLog, "\nAt line no : %d type_specifier : FLOAT\n\n",yylineno );
					fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str()); 
					}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 216 "lex.y" /* yacc.c:1646  */
    {
					vType="void"; rType="void";
					fprintf(parseLog, "\nAt line no : %d type_specifier : VOID\n\n",yylineno );
					fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str());
					}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 223 "lex.y" /* yacc.c:1646  */
    {
						c=manage('I',(yyvsp[0].symbol)->getName(),"ID"); if(!c) yyerror(muldec,(yyvsp[0].symbol)->getName()); else{
						symbolInfo=getSymbol((yyvsp[0].symbol)->getName()); if(symbolInfo!=0){
							symbolInfo->var_type=vType;
						}}
						fprintf(parseLog, "\nAt line no : %d declaration_list : declaration_list COMMA ID\n\n",yylineno );
						(yyval.symbol)->setName((yyvsp[-2].symbol)->getName()+ "," + (yyvsp[0].symbol)->getName());
						fprintf(parseLog,"%s\n",(yyvsp[-2].symbol)->getName().c_str()); 
						}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 232 "lex.y" /* yacc.c:1646  */
    {
			   			c=manage('I',(yyvsp[-3].symbol)->getName()+ "[]" ,"ID"); if(!c) yyerror(muldec, (yyvsp[-3].symbol)->getName()); else {
						symbolInfo=getSymbol((yyvsp[-3].symbol)->getName()); if(symbolInfo!=0){
							symbolInfo->var_type=vType;
							symbolInfo->ret_type="array";
						}}
						fprintf(parseLog, "\nAt line no : %d declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n\n",yylineno );
						(yyval.symbol)->setName((yyvsp[-5].symbol)->getName()+"," + (yyvsp[-3].symbol)->getName()+"["+(yyvsp[-1].symbol)->getName()+"]");
						fprintf(parseLog,"%s\n",(yyvsp[-5].symbol)->getName().c_str());
						}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 242 "lex.y" /* yacc.c:1646  */
    {
			   			c=manage('I',(yyvsp[0].symbol)->getName(),"ID"); if(!c) yyerror(muldec,(yyvsp[0].symbol)->getName()); else {
						symbolInfo=getSymbol((yyvsp[0].symbol)->getName()); if(symbolInfo!=0){
							symbolInfo->var_type=vType;
						}}
						fprintf(parseLog, "\nAt line no : %d declaration_list : ID\n\n",yylineno );
						(yyval.symbol)->setName((yyvsp[0].symbol)->getName());
						fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str()); 
						}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 251 "lex.y" /* yacc.c:1646  */
    {
			   			c=manage('I',(yyvsp[-3].symbol)->getName()+"[]","ID"); if(!c) yyerror(muldec,(yyvsp[-3].symbol)->getName()); else {
						symbolInfo=getSymbol((yyvsp[-3].symbol)->getName()); if(symbolInfo!=0){
							symbolInfo->var_type=vType;
							symbolInfo->ret_type="array";
						}}
						fprintf(parseLog, "\nAt line no : %d declaration_list : ID LTHIRD CONST_INT RTHIRD\n\n",yylineno );
						(yyval.symbol)->setName((yyvsp[-3].symbol)->getName()+"["+(yyvsp[-1].symbol)->getName()+"]");
						fprintf(parseLog,"%s\n",(yyvsp[-3].symbol)->getName().c_str());
						}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 263 "lex.y" /* yacc.c:1646  */
    {
					fprintf(parseLog, "\nAt line no : %d statements : statement\n\n",yylineno );
					(yyval.symbol)->setName((yyvsp[0].symbol)->getName());
					fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str());
					}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 268 "lex.y" /* yacc.c:1646  */
    {
		   			fprintf(parseLog, "\nAt line no : %d statements : statements statement\n\n",yylineno );
					(yyval.symbol)->setName((yyvsp[-1].symbol)->getName()+"\n"+(yyvsp[0].symbol)->getName());
					fprintf(parseLog,"%s\n",(yyvsp[-1].symbol)->getName().c_str());
					}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 275 "lex.y" /* yacc.c:1646  */
    {
						fprintf(parseLog, "\nAt line no : %d statement : var_declaration\n\n",yylineno );
						fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str());
						}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 279 "lex.y" /* yacc.c:1646  */
    {
		  				fprintf(parseLog, "\nAt line no : %d statement : expression_statement\n\n",yylineno );
						fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str());
						}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 283 "lex.y" /* yacc.c:1646  */
    {
		  				fprintf(parseLog, "\nAt line no : %d statement : compound_statement\n\n",yylineno );
						fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str());
						}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 287 "lex.y" /* yacc.c:1646  */
    {
		  				fprintf(parseLog, "\nAt line no : %d statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement\n\n",yylineno );
						(yyval.symbol)->setName("for("+(yyvsp[-4].symbol)->getName()+(yyvsp[-3].symbol)->getName()+(yyvsp[-2].symbol)->getName()+")"+(yyvsp[0].symbol)->getName());
						fprintf(parseLog,"%s\n",(yyvsp[-6].symbol)->getName().c_str());
						}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 292 "lex.y" /* yacc.c:1646  */
    {
		  				fprintf(parseLog, "\nAt line no : %d statement : IF LPAREN expression RPAREN statement %prec LOWER_THEN_ELSE\n\n",yylineno );
						(yyval.symbol)->setName("if("+(yyvsp[-2].symbol)->getName()+")"+(yyvsp[0].symbol)->getName());
						fprintf(parseLog,"%s\n",(yyvsp[-4].symbol)->getName().c_str());
						}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 297 "lex.y" /* yacc.c:1646  */
    {
		  				fprintf(parseLog, "\nAt line no : %d statement : IF LPAREN expression RPAREN statement ELSE statement\n\n",yylineno );
						(yyval.symbol)->setName("if("+(yyvsp[-4].symbol)->getName()+")"+(yyvsp[-2].symbol)->getName()+" else "+(yyvsp[0].symbol)->getName());
						fprintf(parseLog,"%s\n",(yyvsp[-6].symbol)->getName().c_str());
						}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 302 "lex.y" /* yacc.c:1646  */
    {
		  				fprintf(parseLog, "\nAt line no : %d statement : WHILE LPAREN expression RPAREN statement\n\n",yylineno );
						(yyval.symbol)->setName("while("+(yyvsp[-2].symbol)->getName()+")"+(yyvsp[0].symbol)->getName());
						fprintf(parseLog,"%s\n",(yyvsp[-4].symbol)->getName().c_str());
						}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 307 "lex.y" /* yacc.c:1646  */
    {
		  				fprintf(parseLog, "\nAt line no : %d statement : PRINTLN LPAREN ID RPAREN SEMICOLON\n\n",yylineno );
						}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 310 "lex.y" /* yacc.c:1646  */
    {
		  				/*if(rType!=vType) fprintf(parseError,"\nError at line %d Function return type not matched!\n",yylineno);*/
						fprintf(parseLog, "\nAt line no : %d statement : RETURN expression SEMICOLON\n\n",yylineno );
						(yyval.symbol)->setName("return " +(yyvsp[-1].symbol)->getName()+";"); 
						fprintf(parseLog,"return %s ;\n",(yyvsp[-1].symbol)->getName().c_str());
						}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 318 "lex.y" /* yacc.c:1646  */
    { 
					fprintf(parseLog, "\nAt line no : %d expression_statement : SEMICOLON\n\n",yylineno );
					(yyval.symbol)->setName(";\n"); fprintf(parseLog,";\n"); 
					}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 322 "lex.y" /* yacc.c:1646  */
    { 
					fprintf(parseLog, "\nAt line no : %d expression_statement : expression SEMICOLON\n\n",yylineno ); 
					(yyval.symbol)->setName((yyvsp[-1].symbol)->getName()+";"); 
					fprintf(parseLog,"%s\n",(yyvsp[-1].symbol)->getName().c_str()); 
					}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 329 "lex.y" /* yacc.c:1646  */
    { 
				c=manage('L',(yyvsp[0].symbol)->getName()); if(!c) yyerror(undecvar,(yyvsp[0].symbol)->getName());
				
				symbolInfo=getSymbol((yyvsp[0].symbol)->getName()); if(symbolInfo!=0) {
					if(symbolInfo->ret_type=="array") yyerror(arrIn,(yyvsp[0].symbol)->getName()),cout<<(yyvsp[0].symbol)->getName()<<endl;
					(yyval.symbol)->var_type=symbolInfo->var_type;
				}

				fprintf(parseLog, "\nAt line no : %d variable : ID\n\n",yylineno );
				(yyval.symbol)->setName((yyvsp[0].symbol)->getName());
				fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str()); 
				}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 341 "lex.y" /* yacc.c:1646  */
    {
		 		if((yyvsp[-1].symbol)->var_type=="void") yyerror(voidcall);
		 		else if((yyvsp[-1].symbol)->var_type!="int") yyerror(nonIn);
				
				symbolInfo=getSymbol((yyvsp[-3].symbol)->getName()); if(symbolInfo!=0) {
					if(symbolInfo->ret_type!="array") yyerror(nonArr,(yyvsp[-3].symbol)->getName());
					(yyval.symbol)->var_type=symbolInfo->var_type;
				}

				c=manage('L',(yyvsp[-3].symbol)->getName()); if(!c) yyerror(undecvar,(yyvsp[-3].symbol)->getName());
				fprintf(parseLog, "\nAt line no : %d variable : ID LTHIRD expression RTHIRD\n\n",yylineno ); 
				(yyval.symbol)->setName((yyvsp[-3].symbol)->getName()+"["+(yyvsp[-1].symbol)->getName()+"]"); 
				fprintf(parseLog,"%s\n",(yyvsp[-3].symbol)->getName().c_str()); 
				}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 357 "lex.y" /* yacc.c:1646  */
    { 
					fprintf(parseLog, "\nAt line no : %d expression : logic_expression\n\n",yylineno ); 
					fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str()); 
					}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 361 "lex.y" /* yacc.c:1646  */
    {

					if((yyvsp[0].symbol)->var_type=="void") yyerror(voidcall);
					else if((yyvsp[-2].symbol)->var_type!=(yyvsp[0].symbol)->var_type) yyerror(typemm);
					
		   			fprintf(parseLog, "\nAt line no : %d expression : variable ASSIGNOP logic_expression\n\n",yylineno ); 
					(yyval.symbol)->setName((yyvsp[-2].symbol)->getName()+"="+(yyvsp[0].symbol)->getName()); 
					fprintf(parseLog,"%s\n",(yyvsp[-2].symbol)->getName().c_str()); 
					}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 372 "lex.y" /* yacc.c:1646  */
    { 
					fprintf(parseLog, "\nAt line no : %d logic_expression : rel_expression\n\n",yylineno ); 
					fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str()); 
					}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 376 "lex.y" /* yacc.c:1646  */
    {
			 		(yyval.symbol)->var_type="int";  
			 		fprintf(parseLog, "\nAt line no : %d logic_expression : rel_expression LOGICOP rel_expression\n\n",yylineno ); 
					(yyval.symbol)->setName((yyvsp[-2].symbol)->getName()+(yyvsp[-1].symbol)->getName()+(yyvsp[0].symbol)->getName()); 
					fprintf(parseLog,"%s\n",(yyvsp[-2].symbol)->getName().c_str()); 
					}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 384 "lex.y" /* yacc.c:1646  */
    { 
					fprintf(parseLog, "\nAt line no : %d rel_expression : simple_expression\n\n",yylineno ); 
					fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str()); 
					}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 388 "lex.y" /* yacc.c:1646  */
    { /* Relational Opertator type is Integer */
					(yyval.symbol)->var_type="int"; 
					fprintf(parseLog, "\nAt line no : %d rel_expression : simple_expression RELOP simple_expression\n\n",yylineno ); 
					(yyval.symbol)->setName((yyvsp[-2].symbol)->getName()+(yyvsp[-1].symbol)->getName()+(yyvsp[0].symbol)->getName()); 
					fprintf(parseLog,"%s\n",(yyvsp[-2].symbol)->getName().c_str()); 
					}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 396 "lex.y" /* yacc.c:1646  */
    { 
					fprintf(parseLog, "\nAt line no : %d simple_expression : term\n\n",yylineno ); 
					fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str()); 
					}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 400 "lex.y" /* yacc.c:1646  */
    {
			  		if((yyvsp[-2].symbol)->var_type=="float" || (yyvsp[0].symbol)->var_type=="float") (yyval.symbol)->var_type="float";
					else (yyval.symbol)->var_type="int";
			  		fprintf(parseLog, "\nAt line no : %d simple_expression : simple_expression ADDOP term\n\n",yylineno ); 
					(yyval.symbol)->setName((yyvsp[-2].symbol)->getName()+(yyvsp[-1].symbol)->getName()+(yyvsp[0].symbol)->getName()); 
					fprintf(parseLog,"%s\n",(yyvsp[-2].symbol)->getName().c_str()); 
					}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 409 "lex.y" /* yacc.c:1646  */
    { 
				fprintf(parseLog, "\nAt line no : %d term : unary_expression\n\n",yylineno ); 
				fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str()); 
				}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 413 "lex.y" /* yacc.c:1646  */
    {
		 		if((yyvsp[-1].symbol)->getName()!="%"){
					if((yyvsp[-2].symbol)->var_type=="float" || (yyvsp[0].symbol)->var_type=="float") (yyval.symbol)->var_type="float";
					else (yyval.symbol)->var_type="int";
				}else {
					if((yyvsp[-2].symbol)->var_type!="int" || (yyvsp[0].symbol)->var_type!="int"){
						yyerror(moderror);
					}else (yyval.symbol)->var_type="int";
				}
		 		
		 		fprintf(parseLog, "\nAt line no : %d term : term MULOP unary_expression\n\n",yylineno ); 
				(yyval.symbol)->setName((yyvsp[-2].symbol)->getName()+(yyvsp[-1].symbol)->getName()+(yyvsp[0].symbol)->getName()); 
				fprintf(parseLog,"%s\n",(yyvsp[-2].symbol)->getName().c_str()); 
				}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 429 "lex.y" /* yacc.c:1646  */
    {
					(yyval.symbol)->var_type=(yyvsp[0].symbol)->var_type; 
					fprintf(parseLog, "\nAt line no : %d unary_expression : ADDOP unary_expression\n\n",yylineno ); 
					(yyval.symbol)->setName((yyvsp[-1].symbol)->getName()+(yyvsp[0].symbol)->getName()); 
					fprintf(parseLog,"%s\n",(yyvsp[-1].symbol)->getName().c_str()); 
					}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 435 "lex.y" /* yacc.c:1646  */
    {
			 		(yyval.symbol)->var_type="int";
			 		fprintf(parseLog, "\nAt line no : %d unary_expression : NOT unary_expression\n\n",yylineno ); 
					(yyval.symbol)->setName("!"+(yyvsp[0].symbol)->getName()); 
					fprintf(parseLog,"%s\n",("!"+(yyvsp[0].symbol)->getName()).c_str()); 
					}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 441 "lex.y" /* yacc.c:1646  */
    {
			 		fprintf(parseLog, "\nAt line no : %d unary_expression : factor\n\n",yylineno ); 
					fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str()); 
					}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 447 "lex.y" /* yacc.c:1646  */
    { 
				fprintf(parseLog, "\nAt line no : %d factor : variable\n\n",yylineno ); 
				(yyval.symbol)->setName((yyvsp[0].symbol)->getName()); 
				fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str()); 
				}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 452 "lex.y" /* yacc.c:1646  */
    { /* Function Call */
				symbolInfo=getSymbol((yyvsp[-3].symbol)->getName()); if(symbolInfo!=0) (yyval.symbol)->var_type=symbolInfo->ret_type; else{
					yyerror(undecfunc,(yyvsp[-3].symbol)->getName());
				}
				fprintf(parseLog, "\nAt line no : %d factor : ID LPAREN argument_list RPAREN\n\n",yylineno ); 
				(yyval.symbol)->setName((yyvsp[-3].symbol)->getName()+"("+(yyvsp[-1].symbol)->getName() +")" ); 
				fprintf(parseLog,"%s\n",(yyvsp[-3].symbol)->getName().c_str()); 
				}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 460 "lex.y" /* yacc.c:1646  */
    {
				(yyval.symbol)->var_type=(yyvsp[-1].symbol)->var_type;
				fprintf(parseLog, "\nAt line no : %d factor : LPAREN expression RPAREN\n\n",yylineno ); 
				(yyval.symbol)->setName("("+(yyvsp[-1].symbol)->getName()+")"); 
				fprintf(parseLog,"%s\n",(yyvsp[-2].symbol)->getName().c_str()); 
				}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 466 "lex.y" /* yacc.c:1646  */
    { 
				vType="int"; (yyval.symbol)->var_type="int";
				fprintf(parseLog, "\nAt line no : %d factor : CONST_INT\n\n",yylineno ); 
				fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str());
				}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 471 "lex.y" /* yacc.c:1646  */
    { 
				vType="float"; (yyval.symbol)->var_type="float";
				fprintf(parseLog, "\nAt line no : %d factor : CONST_FLOAT\n\n",yylineno );
				fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str()); 
				}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 476 "lex.y" /* yacc.c:1646  */
    {
				(yyval.symbol)->var_type=(yyvsp[-1].symbol)->var_type;
				fprintf(parseLog, "\nAt line no : %d factor : variable INCOP\n\n",yylineno ); 
				(yyval.symbol)->setName((yyvsp[-1].symbol)->getName() + "++"); 
				fprintf(parseLog,"%s\n",(yyvsp[-1].symbol)->getName().c_str()); 
				}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 482 "lex.y" /* yacc.c:1646  */
    {
				(yyval.symbol)->var_type=(yyvsp[-1].symbol)->var_type;
				fprintf(parseLog, "\nAt line no : %d factor : variable DECOP\n\n",yylineno ); 
				(yyval.symbol)->setName((yyvsp[-1].symbol)->getName() + "--"); 
				fprintf(parseLog,"%s\n",(yyvsp[-1].symbol)->getName().c_str()); 
				}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 490 "lex.y" /* yacc.c:1646  */
    { 
					fprintf(parseLog, "\nAt line no : %d argument_list : arguments\n\n",yylineno ); 
					fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str()); 
					}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 494 "lex.y" /* yacc.c:1646  */
    {(yyval.symbol)=new SymbolInfo();}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 497 "lex.y" /* yacc.c:1646  */
    { 
					fprintf(parseLog, "\nAt line no : %d arguments : arguments COMMA logic_expression\n\n",yylineno ); 
					(yyval.symbol)->setName((yyvsp[-2].symbol)->getName()+","+(yyvsp[0].symbol)->getName()); 
					fprintf(parseLog,"%s\n",(yyvsp[-2].symbol)->getName().c_str());
					}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 502 "lex.y" /* yacc.c:1646  */
    {
					fprintf(parseLog, "\nAt line no : %d arguments : logic_expression\n\n",yylineno );
					fprintf(parseLog,"%s\n",(yyvsp[0].symbol)->getName().c_str());
					}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2141 "y.tab.c" /* yacc.c:1646  */
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
#line 509 "lex.y" /* yacc.c:1906  */

int main(int argc,char *argv[])
{
	

	int yydebug=1;

	
	FILE *input=fopen("input.txt","r");
	yyin=input;

	parseLog=fopen("log.txt","w");
	parseError=fopen("error.txt","w");
	if(parseLog==NULL or input==NULL or parseError==NULL){
		printf("Error. Unable to open file\n");
		exit(1);
	}

	yyparse();
	

	fprintf(parseLog,"\n\ttotal lines: %d\n\n",yylineno);
	fprintf(parseError,"\ntotal errors: %d",tperror);
	
	fclose(parseLog);
	fclose(parseError);
	fclose(input);
	
	fprintf(logOut,"\nTotal errors: %d",terror);
	fclose(logOut);
	fclose(tokenOut);
	//fclose(fp2);
	//fclose(fp3);
	
	return 0;
}

/*if((fp=fopen(argv[1],"r"))==NULL)
	{
		printf("Cannot Open Input File.\n");
		exit(1);
	}

	fp2= fopen(argv[2],"w");
	fclose(fp2);
	fp3= fopen(argv[3],"w");
	fclose(fp3);
	
	fp2= fopen(argv[2],"a");
	fp3= fopen(argv[3],"a");
	

	yyin=fp;*/
