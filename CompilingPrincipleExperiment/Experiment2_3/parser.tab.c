/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

//GEN means the valid postion that you can add to in the last of string
#define GEN gen_str[nextquad]+strlen(gen_str[nextquad])
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "parser.h"

extern char *yytext;
void yyerror(char *s);
int yylex();
void printGencode();
void pplace(struct astNode *node);

/*
gen() is a method which can generate the 3AC code to gen_str[nextquad], then nextquad will ++.
there are some different usage in this method and you can look for more details in the code.
*/
void gen(struct astNode* result,char op,struct astNode* arg1,struct astNode* arg2,int extra);
//create a new temporary variable for "node", and let the type to 5
struct astNode* newtemp(struct astNode* node);
struct astNode *root;

// use "quad" backpatch all lines in "p"
void backpatch(struct listNode* p,int quad);
//the total number of temporary variable
int cnt;
//means the next line number of the 3AC code forever
int nextquad = 0;
//the starting line number
int startquad = 100;
//the space to save the 3AC code
char *gen_str[100];

#line 106 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_WHILE = 3,                      /* WHILE  */
  YYSYMBOL_IF = 4,                         /* IF  */
  YYSYMBOL_THEN = 5,                       /* THEN  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_DO = 7,                         /* DO  */
  YYSYMBOL_IDN = 8,                        /* IDN  */
  YYSYMBOL_INT8 = 9,                       /* INT8  */
  YYSYMBOL_INT10 = 10,                     /* INT10  */
  YYSYMBOL_INT16 = 11,                     /* INT16  */
  YYSYMBOL_FLOAT8 = 12,                    /* FLOAT8  */
  YYSYMBOL_FLOAT10 = 13,                   /* FLOAT10  */
  YYSYMBOL_FLOAT16 = 14,                   /* FLOAT16  */
  YYSYMBOL_15_ = 15,                       /* '<'  */
  YYSYMBOL_16_ = 16,                       /* '>'  */
  YYSYMBOL_17_ = 17,                       /* '+'  */
  YYSYMBOL_18_ = 18,                       /* '-'  */
  YYSYMBOL_19_ = 19,                       /* '*'  */
  YYSYMBOL_20_ = 20,                       /* '/'  */
  YYSYMBOL_21_ = 21,                       /* ';'  */
  YYSYMBOL_22_ = 22,                       /* '='  */
  YYSYMBOL_23_ = 23,                       /* '{'  */
  YYSYMBOL_24_ = 24,                       /* '}'  */
  YYSYMBOL_25_ = 25,                       /* '('  */
  YYSYMBOL_26_ = 26,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 27,                  /* $accept  */
  YYSYMBOL_P = 28,                         /* P  */
  YYSYMBOL_L = 29,                         /* L  */
  YYSYMBOL_S = 30,                         /* S  */
  YYSYMBOL_SP = 31,                        /* SP  */
  YYSYMBOL_C = 32,                         /* C  */
  YYSYMBOL_CP = 33,                        /* CP  */
  YYSYMBOL_E = 34,                         /* E  */
  YYSYMBOL_T = 35,                         /* T  */
  YYSYMBOL_F = 36,                         /* F  */
  YYSYMBOL_M = 37                          /* M  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   399

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  27
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  116

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   269


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      25,    26,    19,    17,     2,    18,     2,    20,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    21,
      15,    22,    16,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,     2,    24,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    70,    70,    71,    74,    77,    78,    79,    80,    81,
      82,    86,    87,    88,    89,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   104,   105,   108,   114,   115,
     119,   120,   121,   122,   123,   124,   127,   128,   129,   130,
     131,   134,   135,   136,   137,   138,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   152
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "WHILE", "IF", "THEN",
  "ELSE", "DO", "IDN", "INT8", "INT10", "INT16", "FLOAT8", "FLOAT10",
  "FLOAT16", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "';'", "'='", "'{'",
  "'}'", "'('", "')'", "$accept", "P", "L", "S", "SP", "C", "CP", "E", "T",
  "F", "M", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-45)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-56)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      86,   -19,   145,   163,   -45,    22,    86,     7,   340,    -7,
      19,   -45,   181,   107,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   374,    63,   352,    -1,   -45,    25,   199,    -2,   -45,
     -45,   -45,   -45,   181,    30,   127,    86,   217,   235,   253,
      46,   -45,    12,    50,   348,   -45,    86,    30,   271,   289,
     -45,   307,   325,   374,   374,    42,   -45,   -45,    54,    71,
     -45,    42,    86,   -45,   -45,   374,    42,   374,    42,   374,
      42,    86,   -45,   -45,    86,    86,    86,   -45,   -45,   374,
      -1,   374,    -1,   374,   -45,   374,   -45,    42,    42,   -45,
     358,    86,   -45,    51,    42,    42,    42,   -45,   -45,   -45,
     -45,    -1,    -1,   -45,   -45,    86,   -45,    86,   -45,   -45,
     -45,    86,   -45,    86,   -45,   -45
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    24,     0,     0,     0,     0,     0,
       0,    55,     0,     0,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,    36,    41,     8,     0,     0,     1,
       3,    55,     9,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,    21,     0,     0,     0,     0,
      27,     0,     0,     0,     0,     5,    19,     4,     0,     0,
      55,    23,     0,    25,    14,     0,    31,     0,    30,     0,
      32,     0,    54,    46,     0,     0,     0,    20,    28,     0,
      37,     0,    38,     0,    42,     0,    43,     6,     7,    55,
       0,     0,    22,     0,    34,    33,    35,    11,    12,    13,
      10,    39,    40,    44,    45,     0,    55,     0,    15,    55,
      16,     0,    17,     0,    18,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,     9,   -45,     0,   -35,    36,   -14,   -11,   -44,   -20,
     -10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     7,     8,    63,    64,    22,    41,    23,    24,    25,
      12
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       9,    33,    45,    10,    80,    82,     9,    29,     9,    50,
      42,    77,    46,    72,    31,    28,    55,    30,    51,    52,
      32,    57,    56,    26,    61,    62,    66,    68,    70,    48,
      49,    84,    86,    78,    76,   101,    97,   102,    73,    98,
      99,   100,    87,    88,    27,    37,    38,    53,    35,    40,
      91,    71,    39,    93,    94,    74,    95,   109,    96,    48,
      49,    89,    92,   103,    43,   104,   -55,   -55,    44,    58,
     -55,    14,    15,    16,    17,    18,    19,    20,    90,   105,
     107,     0,     0,     0,     0,     0,   -55,     1,    21,     2,
       3,   108,     0,     4,     5,     0,   111,     0,     0,   113,
       0,     0,     0,     0,     0,   110,     0,   112,    34,     6,
       0,   114,    36,   115,     0,    14,    15,    16,    17,    18,
      19,    20,    37,    38,     0,     0,     0,     0,    59,    39,
     -55,   -55,    21,     0,    60,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,    11,     0,     0,     0,
     -55,     0,    21,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
       0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
     -55,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,    21,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
      54,     0,     0,     0,     0,     0,    21,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,    65,     0,
       0,     0,     0,     0,    21,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,    67,     0,     0,     0,
       0,     0,    21,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,    69,     0,     0,     0,     0,     0,
      21,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,    21,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
      81,     0,     0,     0,     0,     0,    21,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,    21,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,    85,     0,     0,     0,
       0,     0,    21,    14,    15,    16,    17,    18,    19,    20,
      -2,     1,     0,     2,     3,     0,     0,     4,     5,    75,
      21,   -55,   -55,    47,     0,   -55,   -55,     0,     0,   106,
       0,   -55,   -55,     6,    -2,   -55,   -55,    37,    38,    48,
      49,   -55,     0,     0,    39,     0,     0,     0,     0,     0,
       0,   -55,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21
};

static const yytype_int8 yycheck[] =
{
       0,    11,    22,    22,    48,    49,     6,     0,     8,    23,
      21,    46,    22,     1,    21,     6,    27,     8,    19,    20,
       1,    31,    24,     1,    35,    35,    37,    38,    39,    17,
      18,    51,    52,    47,    44,    79,    71,    81,    26,    74,
      75,    76,    53,    54,    22,    15,    16,    22,    12,    13,
      60,     5,    22,    63,    65,     5,    67,     6,    69,    17,
      18,     7,    62,    83,     1,    85,     3,     4,     5,    33,
       7,     8,     9,    10,    11,    12,    13,    14,     7,    89,
      90,    -1,    -1,    -1,    -1,    -1,    23,     1,    25,     3,
       4,    91,    -1,     7,     8,    -1,   106,    -1,    -1,   109,
      -1,    -1,    -1,    -1,    -1,   105,    -1,   107,     1,    23,
      -1,   111,     5,   113,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,     1,    22,
       3,     4,    25,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      23,    -1,    25,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      25,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    25,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    25,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    25,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    25,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      25,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    25,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    25,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    25,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    25,     8,     9,    10,    11,    12,    13,    14,
       0,     1,    -1,     3,     4,    -1,    -1,     7,     8,     1,
      25,     3,     4,     1,    -1,     7,     8,    -1,    -1,     1,
      -1,     3,     4,    23,    24,     7,     8,    15,    16,    17,
      18,    23,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    23,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     7,     8,    23,    28,    29,    30,
      22,     1,    37,     1,     8,     9,    10,    11,    12,    13,
      14,    25,    32,    34,    35,    36,     1,    22,    28,     0,
      28,    21,     1,    37,     1,    32,     5,    15,    16,    22,
      32,    33,    34,     1,     5,    36,    37,     1,    17,    18,
      33,    19,    20,    22,     1,    34,    24,    37,    32,     1,
       7,    34,    37,    30,    31,     1,    34,     1,    34,     1,
      34,     5,     1,    26,     5,     1,    37,    31,    33,     1,
      35,     1,    35,     1,    36,     1,    36,    34,    34,     7,
       7,    37,    30,    37,    34,    34,    34,    31,    31,    31,
      31,    35,    35,    36,    36,    37,     1,    37,    30,     6,
      30,    37,    30,    37,    30,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    27,    28,    28,    29,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    31,    31,    32,    32,    32,
      33,    33,    33,    33,    33,    33,    34,    34,    34,    34,
      34,    35,    35,    35,    35,    35,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    37
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     3,     4,     4,     2,     3,
       5,     5,     5,     5,     4,     6,     7,     7,     8,     3,
       4,     3,     5,     4,     1,     1,     5,     2,     3,     2,
       2,     2,     2,     3,     3,     3,     1,     3,     3,     4,
       4,     1,     3,     3,     4,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* P: L  */
#line 70 "parser.y"
                { (yyval.node) = createAstNode(1, NULL, (yyvsp[0].node), NULL); root = (yyval.node);}
#line 1364 "parser.tab.c"
    break;

  case 3: /* P: L P  */
#line 71 "parser.y"
                { (yyval.node) = createAstNode(2, (yyvsp[-1].node), NULL, (yyvsp[0].node)); root = (yyval.node);}
#line 1370 "parser.tab.c"
    break;

  case 4: /* L: S ';' M  */
#line 74 "parser.y"
                 { (yyval.node) = createAstNode(3, NULL, (yyvsp[-2].node), NULL); backpatch((yyvsp[-2].node)->nextlist,(yyvsp[0].intval));}
#line 1376 "parser.tab.c"
    break;

  case 5: /* S: IDN '=' E  */
#line 77 "parser.y"
                        { (yyval.node) = createAstNodeIdn(4, (yyvsp[-2].strval), NULL, (yyvsp[0].node), NULL); gen((yyval.node),'=',(yyvsp[0].node),NULL,0);}
#line 1382 "parser.tab.c"
    break;

  case 6: /* S: IDN error '=' E  */
#line 78 "parser.y"
                        { yyerrok; }
#line 1388 "parser.tab.c"
    break;

  case 7: /* S: IDN '=' error E  */
#line 79 "parser.y"
                        { yyerrok; }
#line 1394 "parser.tab.c"
    break;

  case 8: /* S: IDN error  */
#line 80 "parser.y"
                        { yyerrok; }
#line 1400 "parser.tab.c"
    break;

  case 9: /* S: error '=' error  */
#line 81 "parser.y"
                        { yyerrok; }
#line 1406 "parser.tab.c"
    break;

  case 10: /* S: IF C THEN M SP  */
#line 82 "parser.y"
                        { (yyval.node) = createAstNode(5, (yyvsp[-3].node), NULL, (yyvsp[0].node)); 
                          backpatch((yyvsp[-3].node)->truelist,(yyvsp[-1].intval)); 
                          (yyval.node)->nextlist=merge((yyvsp[-3].node)->falselist,(yyvsp[0].node)->nextlist); 
                          if((yyvsp[0].node)->type==6)  backpatch((yyvsp[-3].node)->falselist,(yyvsp[0].node)->quad);}
#line 1415 "parser.tab.c"
    break;

  case 11: /* S: IF error C THEN SP  */
#line 86 "parser.y"
                         { yyerrok; }
#line 1421 "parser.tab.c"
    break;

  case 12: /* S: IF C error THEN SP  */
#line 87 "parser.y"
                         { yyerrok; }
#line 1427 "parser.tab.c"
    break;

  case 13: /* S: IF C THEN error SP  */
#line 88 "parser.y"
                         { yyerrok; }
#line 1433 "parser.tab.c"
    break;

  case 14: /* S: IF error THEN SP  */
#line 89 "parser.y"
                         { yyerrok; }
#line 1439 "parser.tab.c"
    break;

  case 15: /* S: WHILE M C DO M S  */
#line 91 "parser.y"
                            { (yyval.node) = createAstNode(6, (yyvsp[-3].node), NULL, (yyvsp[0].node)); backpatch((yyvsp[0].node)->nextlist,(yyvsp[-4].intval)); backpatch((yyvsp[-3].node)->truelist,(yyvsp[-1].intval)); (yyval.node)->nextlist=merge((yyval.node)->nextlist,(yyvsp[-3].node)->falselist); gen(NULL,'9',NULL,NULL,(yyvsp[-4].intval));}
#line 1445 "parser.tab.c"
    break;

  case 16: /* S: WHILE error M C DO M S  */
#line 92 "parser.y"
                                { yyerrok; }
#line 1451 "parser.tab.c"
    break;

  case 17: /* S: WHILE M C error DO M S  */
#line 93 "parser.y"
                                { yyerrok; }
#line 1457 "parser.tab.c"
    break;

  case 18: /* S: WHILE M C error DO error M S  */
#line 94 "parser.y"
                                    { yyerrok; }
#line 1463 "parser.tab.c"
    break;

  case 19: /* S: '{' P '}'  */
#line 95 "parser.y"
                        { (yyval.node) = createAstNode(7, NULL, (yyvsp[-1].node), NULL); }
#line 1469 "parser.tab.c"
    break;

  case 20: /* S: IF C M SP  */
#line 96 "parser.y"
                { printf("expected 'then' before '%s' ",yytext); yyerror("missing THEN"); }
#line 1475 "parser.tab.c"
    break;

  case 21: /* S: IF C F  */
#line 97 "parser.y"
                { printf("expected 'then' before '%s' ",yytext);yyerror("missing THEN"); }
#line 1481 "parser.tab.c"
    break;

  case 22: /* S: WHILE M C M S  */
#line 98 "parser.y"
                        { printf("expected 'do' before '%s' \n",yytext); yyerror("missing DO");}
#line 1487 "parser.tab.c"
    break;

  case 23: /* S: WHILE M C E  */
#line 99 "parser.y"
                { printf("expected 'do' before '%s' \n",yytext); yyerror("missing DO");}
#line 1493 "parser.tab.c"
    break;

  case 24: /* S: DO  */
#line 100 "parser.y"
        { printf("WHILE statement not detected before 'do' \n");yyerror("missing WHILE");}
#line 1499 "parser.tab.c"
    break;

  case 25: /* SP: S  */
#line 104 "parser.y"
                { (yyval.node) = createAstNode(8, NULL, (yyvsp[0].node), NULL); (yyval.node)->nextlist=(yyvsp[0].node)->nextlist;(yyval.node)->truelist=(yyvsp[0].node)->truelist;(yyval.node)->falselist=(yyvsp[0].node)->falselist;}
#line 1505 "parser.tab.c"
    break;

  case 26: /* SP: S M ELSE M S  */
#line 105 "parser.y"
                    { (yyval.node) = createAstNode(9, (yyvsp[-4].node), NULL, (yyvsp[0].node)); gen(NULL,'0',NULL,NULL,9); (yyval.node)->nextlist=merge(makelist((yyvsp[-3].intval)),(yyvsp[0].node)->nextlist); (yyval.node)->quad=(yyvsp[-1].intval); (yyval.node)->type=6; }
#line 1511 "parser.tab.c"
    break;

  case 27: /* C: E CP  */
#line 108 "parser.y"
                { (yyval.node) = createAstNode(10, (yyvsp[-1].node), NULL, (yyvsp[0].node)); 
                  (yyval.node) -> truelist = makelist(nextquad); 
                  (yyval.node) -> falselist = makelist(nextquad+1);
                  gen(NULL,(yyvsp[0].node)->relop,(yyvsp[-1].node),(yyvsp[0].node),1); 
                  gen(NULL,'0',NULL,NULL,9); }
#line 1521 "parser.tab.c"
    break;

  case 28: /* C: E error CP  */
#line 114 "parser.y"
                { yyerrok; }
#line 1527 "parser.tab.c"
    break;

  case 29: /* C: error CP  */
#line 115 "parser.y"
                { yyerrok; }
#line 1533 "parser.tab.c"
    break;

  case 30: /* CP: '>' E  */
#line 119 "parser.y"
                { (yyval.node) = createAstNode(11, NULL, (yyvsp[0].node), NULL); (yyval.node) -> relop = '>';}
#line 1539 "parser.tab.c"
    break;

  case 31: /* CP: '<' E  */
#line 120 "parser.y"
                { (yyval.node) = createAstNode(12, NULL, (yyvsp[0].node), NULL); (yyval.node) -> relop = '<';}
#line 1545 "parser.tab.c"
    break;

  case 32: /* CP: '=' E  */
#line 121 "parser.y"
                { (yyval.node) = createAstNode(13, NULL, (yyvsp[0].node), NULL); (yyval.node) -> relop = '=';}
#line 1551 "parser.tab.c"
    break;

  case 33: /* CP: '>' error E  */
#line 122 "parser.y"
                { yyerrok; }
#line 1557 "parser.tab.c"
    break;

  case 34: /* CP: '<' error E  */
#line 123 "parser.y"
                { yyerrok; }
#line 1563 "parser.tab.c"
    break;

  case 35: /* CP: '=' error E  */
#line 124 "parser.y"
                { yyerrok; }
#line 1569 "parser.tab.c"
    break;

  case 36: /* E: T  */
#line 127 "parser.y"
                { (yyval.node) = createAstNode(14, NULL, (yyvsp[0].node), NULL); (yyval.node) -> type = (yyvsp[0].node) ->type;}
#line 1575 "parser.tab.c"
    break;

  case 37: /* E: E '+' T  */
#line 128 "parser.y"
                { (yyval.node) = createAstNode(15, (yyvsp[-2].node), NULL, (yyvsp[0].node));  (yyval.node) = newtemp((yyval.node)); gen((yyval.node),'+',(yyvsp[-2].node),(yyvsp[0].node),0);}
#line 1581 "parser.tab.c"
    break;

  case 38: /* E: E '-' T  */
#line 129 "parser.y"
                { (yyval.node) = createAstNode(16, (yyvsp[-2].node), NULL, (yyvsp[0].node));  (yyval.node) = newtemp((yyval.node)); gen((yyval.node),'-',(yyvsp[-2].node),(yyvsp[0].node),0);}
#line 1587 "parser.tab.c"
    break;

  case 39: /* E: E '+' error T  */
#line 130 "parser.y"
                  { yyerrok; }
#line 1593 "parser.tab.c"
    break;

  case 40: /* E: E '-' error T  */
#line 131 "parser.y"
                  { yyerrok; }
#line 1599 "parser.tab.c"
    break;

  case 41: /* T: F  */
#line 134 "parser.y"
                { (yyval.node) = createAstNode(17, NULL, (yyvsp[0].node), NULL); (yyval.node) -> type = (yyvsp[0].node) ->type;}
#line 1605 "parser.tab.c"
    break;

  case 42: /* T: T '*' F  */
#line 135 "parser.y"
                { (yyval.node) = createAstNode(18, (yyvsp[-2].node), NULL, (yyvsp[0].node));  (yyval.node) = newtemp((yyval.node)); gen((yyval.node),'*',(yyvsp[-2].node),(yyvsp[0].node),0);}
#line 1611 "parser.tab.c"
    break;

  case 43: /* T: T '/' F  */
#line 136 "parser.y"
                { (yyval.node) = createAstNode(19, (yyvsp[-2].node), NULL, (yyvsp[0].node));  (yyval.node) = newtemp((yyval.node)); gen((yyval.node),'/',(yyvsp[-2].node),(yyvsp[0].node),0);}
#line 1617 "parser.tab.c"
    break;

  case 44: /* T: T '*' error F  */
#line 137 "parser.y"
                  { yyerrok; }
#line 1623 "parser.tab.c"
    break;

  case 45: /* T: T '/' error F  */
#line 138 "parser.y"
                  { yyerrok; }
#line 1629 "parser.tab.c"
    break;

  case 46: /* F: '(' E ')'  */
#line 141 "parser.y"
                { (yyval.node) = createAstNode(20, NULL, (yyvsp[-1].node), NULL); }
#line 1635 "parser.tab.c"
    break;

  case 47: /* F: IDN  */
#line 142 "parser.y"
                { (yyval.node) = createIdn(21, (yyvsp[0].strval)); }
#line 1641 "parser.tab.c"
    break;

  case 48: /* F: INT8  */
#line 143 "parser.y"
                { (yyval.node) = createNum(22, (yyvsp[0].intval)); }
#line 1647 "parser.tab.c"
    break;

  case 49: /* F: INT10  */
#line 144 "parser.y"
                { (yyval.node) = createNum(23, (yyvsp[0].intval)); }
#line 1653 "parser.tab.c"
    break;

  case 50: /* F: INT16  */
#line 145 "parser.y"
                { (yyval.node) = createNum(24, (yyvsp[0].intval)); }
#line 1659 "parser.tab.c"
    break;

  case 51: /* F: FLOAT8  */
#line 146 "parser.y"
                { (yyval.node) = createNum(25, (yyvsp[0].doubleval)); }
#line 1665 "parser.tab.c"
    break;

  case 52: /* F: FLOAT10  */
#line 147 "parser.y"
                { (yyval.node) = createNum(26, (yyvsp[0].doubleval)); }
#line 1671 "parser.tab.c"
    break;

  case 53: /* F: FLOAT16  */
#line 148 "parser.y"
                { (yyval.node) = createNum(27, (yyvsp[0].doubleval)); }
#line 1677 "parser.tab.c"
    break;

  case 54: /* F: '(' E error  */
#line 149 "parser.y"
                { yyerrok; }
#line 1683 "parser.tab.c"
    break;

  case 55: /* M: %empty  */
#line 152 "parser.y"
                { (yyval.intval) = nextquad; }
#line 1689 "parser.tab.c"
    break;


#line 1693 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 155 "parser.y"

int main(int argc, const char *args[])
{
	/* 去除注释开启debug模式 */
  //   yydebug = 1; 

	extern FILE *yyin;
  if(argc == 1 && (yyin = fopen("in.txt", "r")) == NULL){
    fprintf(stderr, "can not open in.txt\n");
		exit(1);
  }
	else if(argc > 1 && (yyin = fopen(args[1], "r")) == NULL) {
		fprintf(stderr, "can not open %s\n", args[1]);
		exit(1);
	}
	if(yyparse()) {
		exit(-1);
	}
  FILE * f;
  f = fopen("out.txt", "w+");
  printTree(root, f);
  printGencode(f);
  return 0;
}

struct astNode* newtemp(struct astNode* node){
  cnt++;
  node->t=cnt;
  node->type=5;
  return node;
}

void gen(struct astNode* result,char op,struct astNode* arg1,struct astNode* arg2,int extra){
  gen_str[nextquad]=(char *)malloc(sizeof(char)*100);
  sprintf(GEN,"%d:\t",nextquad+startquad);
  if(op=='9'){
    sprintf(GEN,"goto %d",extra+startquad);
  }
  else if(extra==1){
    sprintf(GEN,"if ");
    pplace(arg1);
    sprintf(GEN," %c ",op);
    pplace(arg2);
    sprintf(GEN," goto ");
  }
  else if(extra==9){
    sprintf(GEN,"goto ");
  }
  else if(extra==0){
    pplace(result);
    sprintf(GEN," := ");
    if(op=='='){
      pplace(arg1);
    }else{
      pplace(arg1);
      sprintf(GEN,"%c",op);
      pplace(arg2); 
   }
  }
  nextquad++;
}

void backpatch(struct listNode* p,int quad){
    while(p){
        sprintf(gen_str[p->quad]+strlen(gen_str[p->quad]),"%d",quad+startquad);
        p=p->next;
    }
}

//generate the variable name to 3AC
void pplace(struct astNode *node){
  switch(node->type){
    case 0:
      sprintf(GEN,"%s",node->idn);
      break;
    case 1:
      sprintf(GEN,"%g",node->num);
      break;
    case 5:
      sprintf(GEN,"t%d",node->t);
      break;
  }
}

void printGencode(FILE* f){
  fprintf(f,"\n");
  for(int i=0;i<nextquad;i++){
    fprintf(f,"%s\n",gen_str[i]);
  }
}

void yyerror(char *s)
{
    extern int yylineno;
    extern YYLTYPE yylloc;
    //extern char yytext [];
    int errflag = 1;
    int start = yylloc.first_column;
    int end = yylloc.last_column;
    int i;
    printf("Unexpected '%s' \n",yytext);
    fprintf(stderr, "Error: %s on Line: %d:c%d to %d:c%d\n\n", s, yylineno, start, yylineno, end);

}
