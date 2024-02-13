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


/* Substitute the variable and function names.  */
#define yyparse         yyjsilparse
#define yylex           yyjsillex
#define yyerror         yyjsilerror
#define yydebug         yyjsildebug
#define yynerrs         yyjsilnerrs
#define yylval          yyjsillval
#define yychar          yyjsilchar

/* First part of user prologue.  */
#line 1 "parser.y"


// #define YYDEBUG 1
#define PARSER jsil_parser

#include "jsil_parser.h"

int yyjsillex();
extern char *yyjsiltext;

#define YYSTYPE unsigned
#define YYSTYPE_IS_TRIVIAL 1

#include <util/std_expr.h>
#include <util/std_code.h>

#include <ansi-c/string_constant.h>

#include "jsil_y.tab.h"
/*** token declaration **************************************************/

#line 100 "jsil_y.tab.cpp"

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

#include "jsil_y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_SCANNER_ERROR = 3,          /* TOK_SCANNER_ERROR  */
  YYSYMBOL_TOK_NEWLINE = 4,                /* "<newline>"  */
  YYSYMBOL_TOK_PROCEDURE = 5,              /* "procedure"  */
  YYSYMBOL_TOK_RETURNS = 6,                /* "returns"  */
  YYSYMBOL_TOK_TO = 7,                     /* "to"  */
  YYSYMBOL_TOK_THROWS = 8,                 /* "throws"  */
  YYSYMBOL_TOK_EVAL = 9,                   /* "eval"  */
  YYSYMBOL_TOK_LABEL = 10,                 /* "label"  */
  YYSYMBOL_TOK_GOTO = 11,                  /* "goto"  */
  YYSYMBOL_TOK_SKIP = 12,                  /* "skip"  */
  YYSYMBOL_TOK_WITH = 13,                  /* "with"  */
  YYSYMBOL_TOK_NEW = 14,                   /* "new"  */
  YYSYMBOL_TOK_HAS_FIELD = 15,             /* "hasField"  */
  YYSYMBOL_TOK_DELETE = 16,                /* "delete"  */
  YYSYMBOL_TOK_PROTO_FIELD = 17,           /* "protoField"  */
  YYSYMBOL_TOK_PROTO_OBJ = 18,             /* "protoObj"  */
  YYSYMBOL_TOK_REF = 19,                   /* "ref"  */
  YYSYMBOL_TOK_FIELD = 20,                 /* "field"  */
  YYSYMBOL_TOK_BASE = 21,                  /* "base"  */
  YYSYMBOL_TOK_TYPEOF = 22,                /* "typeOf"  */
  YYSYMBOL_TOK_NULL = 23,                  /* "null"  */
  YYSYMBOL_TOK_UNDEFINED = 24,             /* "#undefined"  */
  YYSYMBOL_TOK_EMPTY = 25,                 /* "#empty"  */
  YYSYMBOL_TOK_TRUE = 26,                  /* "true"  */
  YYSYMBOL_TOK_FALSE = 27,                 /* "false"  */
  YYSYMBOL_TOK_PROTO = 28,                 /* "#proto"  */
  YYSYMBOL_TOK_FID = 29,                   /* "#fid"  */
  YYSYMBOL_TOK_SCOPE = 30,                 /* "#scope"  */
  YYSYMBOL_TOK_CONSTRUCTID = 31,           /* "#constructid"  */
  YYSYMBOL_TOK_PRIMVALUE = 32,             /* "#primvalue"  */
  YYSYMBOL_TOK_TARGETFUNCTION = 33,        /* "#targetfunction"  */
  YYSYMBOL_TOK_CLASS = 34,                 /* "#class"  */
  YYSYMBOL_TOK_NUM_TO_STRING = 35,         /* "num_to_string"  */
  YYSYMBOL_TOK_STRING_TO_NUM = 36,         /* "string_to_num"  */
  YYSYMBOL_TOK_NUM_TO_INT32 = 37,          /* "num_to_int32"  */
  YYSYMBOL_TOK_NUM_TO_UINT32 = 38,         /* "num_to_uint32"  */
  YYSYMBOL_TOK_MEMBER_REFERENCE = 39,      /* "#MemberReference"  */
  YYSYMBOL_TOK_VARIABLE_REFERENCE = 40,    /* "#VariableReference"  */
  YYSYMBOL_TOK_T_NULL = 41,                /* "#Null"  */
  YYSYMBOL_TOK_T_UNDEFINED = 42,           /* "#Undefined"  */
  YYSYMBOL_TOK_T_BOOLEAN = 43,             /* "#Boolean"  */
  YYSYMBOL_TOK_T_STRING = 44,              /* "#String"  */
  YYSYMBOL_TOK_T_NUMBER = 45,              /* "#Number"  */
  YYSYMBOL_TOK_T_BUILTIN_OBJECT = 46,      /* "#BuiltinObject"  */
  YYSYMBOL_TOK_T_USER_OBJECT = 47,         /* "#UserObject"  */
  YYSYMBOL_TOK_T_OBJECT = 48,              /* "#Object"  */
  YYSYMBOL_TOK_T_REFERENCE = 49,           /* "#Reference"  */
  YYSYMBOL_TOK_DEFEQ = 50,                 /* ":="  */
  YYSYMBOL_TOK_LEQ = 51,                   /* "<="  */
  YYSYMBOL_TOK_AND = 52,                   /* "and"  */
  YYSYMBOL_TOK_OR = 53,                    /* "or"  */
  YYSYMBOL_TOK_SUBTYPE_OF = 54,            /* "<:"  */
  YYSYMBOL_TOK_LEFT_SHIFT = 55,            /* "<<"  */
  YYSYMBOL_TOK_SIGNED_RIGHT_SHIFT = 56,    /* ">>"  */
  YYSYMBOL_TOK_UNSIGNED_RIGHT_SHIFT = 57,  /* ">>>"  */
  YYSYMBOL_TOK_NOT = 58,                   /* "not"  */
  YYSYMBOL_TOK_IDENTIFIER = 59,            /* TOK_IDENTIFIER  */
  YYSYMBOL_TOK_FLOATING = 60,              /* TOK_FLOATING  */
  YYSYMBOL_TOK_STRING = 61,                /* TOK_STRING  */
  YYSYMBOL_TOK_BUILTIN_LOC = 62,           /* TOK_BUILTIN_LOC  */
  YYSYMBOL_TOK_BUILTIN_IDENTIFIER = 63,    /* TOK_BUILTIN_IDENTIFIER  */
  YYSYMBOL_TOK_SPEC_IDENTIFIER = 64,       /* TOK_SPEC_IDENTIFIER  */
  YYSYMBOL_65_ = 65,                       /* '('  */
  YYSYMBOL_66_ = 66,                       /* ')'  */
  YYSYMBOL_67_ = 67,                       /* '{'  */
  YYSYMBOL_68_ = 68,                       /* '}'  */
  YYSYMBOL_69_ = 69,                       /* ','  */
  YYSYMBOL_70_ = 70,                       /* '['  */
  YYSYMBOL_71_ = 71,                       /* ']'  */
  YYSYMBOL_72_ = 72,                       /* '='  */
  YYSYMBOL_73_ = 73,                       /* '<'  */
  YYSYMBOL_74_ = 74,                       /* '+'  */
  YYSYMBOL_75_ = 75,                       /* '-'  */
  YYSYMBOL_76_ = 76,                       /* '*'  */
  YYSYMBOL_77_ = 77,                       /* '/'  */
  YYSYMBOL_78_ = 78,                       /* '%'  */
  YYSYMBOL_79_ = 79,                       /* ':'  */
  YYSYMBOL_80_ = 80,                       /* '&'  */
  YYSYMBOL_81_ = 81,                       /* '|'  */
  YYSYMBOL_82_ = 82,                       /* '^'  */
  YYSYMBOL_83_ = 83,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_program = 85,                   /* program  */
  YYSYMBOL_procedure_decls = 86,           /* procedure_decls  */
  YYSYMBOL_procedure_decl = 87,            /* procedure_decl  */
  YYSYMBOL_proc_ident = 88,                /* proc_ident  */
  YYSYMBOL_proc_ident_expr = 89,           /* proc_ident_expr  */
  YYSYMBOL_parameters_opt = 90,            /* parameters_opt  */
  YYSYMBOL_parameters = 91,                /* parameters  */
  YYSYMBOL_statements_opt = 92,            /* statements_opt  */
  YYSYMBOL_statements = 93,                /* statements  */
  YYSYMBOL_statement = 94,                 /* statement  */
  YYSYMBOL_instruction = 95,               /* instruction  */
  YYSYMBOL_rhs = 96,                       /* rhs  */
  YYSYMBOL_with_opt = 97,                  /* with_opt  */
  YYSYMBOL_expressions_opt = 98,           /* expressions_opt  */
  YYSYMBOL_expressions = 99,               /* expressions  */
  YYSYMBOL_expression = 100,               /* expression  */
  YYSYMBOL_atom_expression = 101,          /* atom_expression  */
  YYSYMBOL_literal = 102,                  /* literal  */
  YYSYMBOL_builtin_field = 103,            /* builtin_field  */
  YYSYMBOL_binary_op = 104,                /* binary_op  */
  YYSYMBOL_compare_op = 105,               /* compare_op  */
  YYSYMBOL_arithmetic_op = 106,            /* arithmetic_op  */
  YYSYMBOL_boolean_op = 107,               /* boolean_op  */
  YYSYMBOL_bitwise_op = 108,               /* bitwise_op  */
  YYSYMBOL_unary_op = 109,                 /* unary_op  */
  YYSYMBOL_jsil_type = 110,                /* jsil_type  */
  YYSYMBOL_ref_type = 111                  /* ref_type  */
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
typedef yytype_uint8 yy_state_t;

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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   858

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   319


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
       2,     2,     2,    83,     2,     2,     2,    78,    80,     2,
      65,    66,    76,    74,    69,    75,     2,    77,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,     2,
      73,    72,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,    71,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,    81,    68,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   109,   109,   112,   113,   116,   149,   150,   155,   159,
     165,   166,   174,   177,   180,   185,   193,   196,   199,   205,
     212,   216,   222,   229,   234,   246,   250,   255,   263,   264,
     279,   284,   292,   297,   305,   313,   324,   327,   334,   337,
     340,   345,   352,   353,   361,   362,   367,   371,   380,   387,
     394,   403,   404,   408,   412,   416,   420,   424,   425,   431,
     432,   433,   436,   440,   444,   448,   452,   456,   460,   466,
     467,   468,   469,   472,   476,   480,   486,   490,   494,   498,
     502,   508,   512,   516,   520,   526,   530,   534,   538,   542,
     546,   552,   556,   560,   564,   568,   572,   576,   582,   586,
     590,   594,   598,   602,   606,   610,   614,   615,   622,   626
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOK_SCANNER_ERROR",
  "\"<newline>\"", "\"procedure\"", "\"returns\"", "\"to\"", "\"throws\"",
  "\"eval\"", "\"label\"", "\"goto\"", "\"skip\"", "\"with\"", "\"new\"",
  "\"hasField\"", "\"delete\"", "\"protoField\"", "\"protoObj\"",
  "\"ref\"", "\"field\"", "\"base\"", "\"typeOf\"", "\"null\"",
  "\"#undefined\"", "\"#empty\"", "\"true\"", "\"false\"", "\"#proto\"",
  "\"#fid\"", "\"#scope\"", "\"#constructid\"", "\"#primvalue\"",
  "\"#targetfunction\"", "\"#class\"", "\"num_to_string\"",
  "\"string_to_num\"", "\"num_to_int32\"", "\"num_to_uint32\"",
  "\"#MemberReference\"", "\"#VariableReference\"", "\"#Null\"",
  "\"#Undefined\"", "\"#Boolean\"", "\"#String\"", "\"#Number\"",
  "\"#BuiltinObject\"", "\"#UserObject\"", "\"#Object\"", "\"#Reference\"",
  "\":=\"", "\"<=\"", "\"and\"", "\"or\"", "\"<:\"", "\"<<\"", "\">>\"",
  "\">>>\"", "\"not\"", "TOK_IDENTIFIER", "TOK_FLOATING", "TOK_STRING",
  "TOK_BUILTIN_LOC", "TOK_BUILTIN_IDENTIFIER", "TOK_SPEC_IDENTIFIER",
  "'('", "')'", "'{'", "'}'", "','", "'['", "']'", "'='", "'<'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "':'", "'&'", "'|'", "'^'", "'!'", "$accept",
  "program", "procedure_decls", "procedure_decl", "proc_ident",
  "proc_ident_expr", "parameters_opt", "parameters", "statements_opt",
  "statements", "statement", "instruction", "rhs", "with_opt",
  "expressions_opt", "expressions", "expression", "atom_expression",
  "literal", "builtin_field", "binary_op", "compare_op", "arithmetic_op",
  "boolean_op", "bitwise_op", "unary_op", "jsil_type", "ref_type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-147)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-12)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,    -3,     7,     0,  -147,  -147,  -147,  -147,  -147,   -52,
    -147,  -147,   -45,  -147,   -50,   -51,    11,   -39,   -38,  -147,
      12,   -37,    15,   -35,    18,   -33,   -36,    -2,  -147,   -32,
     -55,  -147,   -22,   185,   -34,    -2,  -147,    25,  -147,  -147,
     185,   120,   -30,   -29,   -26,   -25,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,   185,  -147,
    -147,    31,  -147,  -147,  -147,   185,  -147,  -147,  -147,  -147,
    -147,   200,   -24,   -23,   -21,   -20,   -18,   -17,   -16,   185,
    -147,   -15,  -147,   776,   185,   185,   185,   185,   232,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,   185,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,   185,  -147,
    -147,  -147,  -147,  -147,   -27,   -14,   185,   185,   185,   185,
     264,   185,   296,   328,   360,   392,  -147,   424,  -147,   -11,
    -147,   456,   488,   520,   552,   185,   -13,    -7,   776,   185,
    -147,  -147,  -147,     1,    -5,   185,   185,   185,   185,   584,
      17,   185,   616,   185,  -147,   648,   680,   712,   744,  -147,
      -4,  -147,   776,   -28,   776,  -147,  -147,  -147,  -147,  -147,
       3,  -147
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,     7,     6,     8,     9,     0,
       1,     4,    12,    14,     0,    13,     0,     0,     0,    15,
       0,     0,     0,     0,     0,     0,     0,    16,    20,     0,
       0,    25,     0,     0,     0,    17,    18,     0,    22,    23,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,    62,    63,    64,    65,    66,    67,    68,    93,    94,
      95,    96,   108,   109,    98,    99,   100,   101,   102,   103,
     104,   105,   107,    91,    51,    57,    58,    59,     0,    92,
      97,     0,    42,    44,    61,     0,    60,   106,     5,    19,
      21,     0,     0,     0,     0,     0,     0,    51,    58,     0,
      10,     0,    26,    28,     0,     0,     0,     0,     0,    75,
      81,    82,    83,    88,    89,    90,     0,    73,    74,    76,
      77,    78,    79,    80,    84,    85,    86,    87,     0,    69,
      70,    71,    72,    45,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,    46,     0,    43,     0,
      30,     0,     0,     0,     0,     0,     0,    39,    40,     0,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,     0,    24,     0,     0,     0,     0,    32,
       0,    29,    41,     0,    27,    31,    33,    34,    35,    37,
       0,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -147,  -147,  -147,    30,     2,  -147,  -147,  -147,  -147,  -147,
      28,  -147,  -147,  -147,  -147,  -147,   -40,   -82,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -146
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     9,   101,    14,    15,    34,    35,
      36,    37,   102,   181,   156,   157,    81,    82,    83,    84,
     128,   129,   130,   131,   132,    85,    86,    87
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,   103,    28,   133,    39,     1,     5,    10,    29,    30,
      31,    62,    63,    12,    13,    40,    16,    18,    17,    21,
      19,    20,    22,    23,    24,    25,    26,    38,    41,    90,
     180,    27,   149,    11,    88,   104,   105,   190,   108,   106,
     107,   135,   136,   100,   137,   138,   148,   139,    -6,   -11,
     141,   173,   150,   170,   174,   189,     6,    32,   164,   140,
       7,     8,   171,    89,   142,   143,   144,   145,    33,   191,
       0,     0,     0,     0,     0,     0,   147,     0,     0,     0,
       0,     0,   109,   110,   111,   112,   113,   114,   115,     0,
       0,     0,     0,     0,     0,     0,   151,   152,   153,   154,
     116,   158,     0,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   169,     0,     0,     0,   172,
       0,     0,     0,     0,     0,   175,   176,   177,   178,     5,
       0,   182,     0,   184,    92,    93,    94,    95,    96,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    97,
      75,    98,    77,     7,     8,    78,     0,     0,     0,     0,
      99,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,    80,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,    75,    76,    77,     0,     0,
      78,   109,   110,   111,   112,   113,   114,   115,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,   134,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   109,   110,   111,   112,   113,   114,   115,
       0,     0,     0,     0,     0,     0,     0,     0,   146,     0,
       0,     0,     0,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   109,   110,   111,   112,   113,
     114,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   155,     0,     0,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   109,   110,   111,
     112,   113,   114,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   159,     0,     0,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   109,
     110,   111,   112,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,   160,     0,     0,     0,     0,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   109,   110,   111,   112,   113,   114,   115,     0,     0,
       0,     0,     0,     0,     0,     0,   161,     0,     0,     0,
       0,     0,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   109,   110,   111,   112,   113,   114,   115,
       0,     0,     0,     0,     0,     0,     0,     0,   162,     0,
       0,     0,     0,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   109,   110,   111,   112,   113,
     114,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   109,   110,   111,
     112,   113,   114,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   165,     0,     0,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   109,
     110,   111,   112,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   166,     0,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   109,   110,   111,   112,   113,   114,   115,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   109,   110,   111,   112,   113,   114,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   168,     0,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   109,   110,   111,   112,   113,
     114,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   109,   110,   111,
     112,   113,   114,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,     0,     0,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   109,
     110,   111,   112,   113,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,   185,     0,     0,     0,     0,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   109,   110,   111,   112,   113,   114,   115,     0,     0,
       0,     0,     0,     0,     0,     0,   186,     0,     0,     0,
       0,     0,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   109,   110,   111,   112,   113,   114,   115,
       0,     0,     0,     0,     0,     0,     0,     0,   187,     0,
       0,     0,     0,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   109,   110,   111,   112,   113,
     114,   115,     0,     0,     0,     0,     0,     0,     0,     0,
     188,     0,     0,     0,     0,     0,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   109,   110,   111,
     112,   113,   114,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127
};

static const yytype_int16 yycheck[] =
{
      40,    41,     4,    85,    59,     5,     9,     0,    10,    11,
      12,    39,    40,    65,    59,    70,    66,     6,    69,     7,
      59,    59,    59,     8,    59,     7,    59,    59,    50,     4,
      13,    67,    59,     3,    68,    65,    65,   183,    78,    65,
      65,    65,    65,    41,    65,    65,   128,    65,    65,    65,
      65,    50,    66,    66,    59,    59,    59,    59,    69,    99,
      63,    64,    69,    35,   104,   105,   106,   107,    70,    66,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,
      69,   141,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,   155,    -1,    -1,    -1,   159,
      -1,    -1,    -1,    -1,    -1,   165,   166,   167,   168,     9,
      -1,   171,    -1,   173,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    -1,    -1,
      65,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    85,    86,    87,     9,    59,    63,    64,    88,
       0,    87,    65,    59,    90,    91,    66,    69,     6,    59,
      59,     7,    59,     8,    59,     7,    59,    67,     4,    10,
      11,    12,    59,    70,    92,    93,    94,    95,    59,    59,
      70,    50,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    58,    59,    60,    61,    62,    65,    75,
      83,   100,   101,   102,   103,   109,   110,   111,    68,    94,
       4,   100,    14,    15,    16,    17,    18,    59,    61,    70,
      88,    89,    96,   100,    65,    65,    65,    65,   100,    51,
      52,    53,    54,    55,    56,    57,    69,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,   104,   105,
     106,   107,   108,   101,    71,    65,    65,    65,    65,    65,
     100,    65,   100,   100,   100,   100,    66,   100,   101,    59,
      66,   100,   100,   100,   100,    69,    98,    99,   100,    69,
      66,    66,    66,    71,    69,    69,    69,    69,    69,   100,
      66,    69,   100,    50,    59,   100,   100,   100,   100,    71,
      13,    97,   100,    69,   100,    66,    66,    66,    66,    59,
     111,    66
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    84,    85,    86,    86,    87,    88,    88,    88,    88,
      89,    89,    90,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   101,   101,   101,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   103,   103,   103,   103,   103,   103,   103,   104,
     104,   104,   104,   105,   105,   105,   106,   106,   106,   106,
     106,   107,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,    16,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     3,     0,     1,     1,     2,
       1,     2,     2,     2,     7,     1,     3,     7,     1,     5,
       3,     6,     5,     6,     6,     6,     0,     2,     0,     1,
       1,     3,     1,     3,     1,     2,     3,     8,     4,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5: /* procedure_decl: "procedure" proc_ident '(' parameters_opt ')' "returns" TOK_IDENTIFIER "to" TOK_IDENTIFIER "throws" TOK_IDENTIFIER "to" TOK_IDENTIFIER '{' statements_opt '}'  */
#line 120 "parser.y"
              {
                symbol_exprt proc(to_symbol_expr(stack(yyvsp[-14])));
                code_typet ct;
                forall_operands(it, stack(yyvsp[-12]))
                {
                  symbol_exprt s(to_symbol_expr(*it));
                  code_typet::parametert p;
                  p.set_identifier(s.get_identifier());
                  ct.parameters().push_back(p);
                }
                proc.type().swap(ct);

                symbol_exprt rv(to_symbol_expr(stack(yyvsp[-9])));
                symbol_exprt rl(to_symbol_expr(stack(yyvsp[-7])));

                symbol_exprt tv(to_symbol_expr(stack(yyvsp[-5])));
                symbol_exprt tl(to_symbol_expr(stack(yyvsp[-3])));

                jsil_declarationt decl;
                decl.add_declarator(proc);
                decl.add_returns(rv.get_identifier(), rl.get_identifier());
                decl.add_throws(tv.get_identifier(), tl.get_identifier());
                if(stack(yyvsp[-1]).is_not_nil())
                  decl.add_value(to_code_block(to_code(stack(yyvsp[-1]))));

                PARSER.parse_tree.items.push_back(decl);
              }
#line 1768 "jsil_y.tab.cpp"
    break;

  case 7: /* proc_ident: "eval"  */
#line 151 "parser.y"
          {
            symbol_exprt e("eval");
            newstack(yyval).swap(e);
          }
#line 1777 "jsil_y.tab.cpp"
    break;

  case 8: /* proc_ident: TOK_BUILTIN_IDENTIFIER  */
#line 156 "parser.y"
          {
            stack(yyval).set("proc_type", "builtin");
          }
#line 1785 "jsil_y.tab.cpp"
    break;

  case 9: /* proc_ident: TOK_SPEC_IDENTIFIER  */
#line 160 "parser.y"
          {
            stack(yyval).set("proc_type", "spec");
          }
#line 1793 "jsil_y.tab.cpp"
    break;

  case 11: /* proc_ident_expr: TOK_STRING  */
#line 167 "parser.y"
               {
                 symbol_exprt s(to_string_constant(stack(yyval)).get_value());
                 stack(yyval).swap(s);
               }
#line 1802 "jsil_y.tab.cpp"
    break;

  case 12: /* parameters_opt: %empty  */
#line 174 "parser.y"
              {
                newstack(yyval);
              }
#line 1810 "jsil_y.tab.cpp"
    break;

  case 14: /* parameters: TOK_IDENTIFIER  */
#line 181 "parser.y"
          {
            newstack(yyval).id(ID_parameters);
            stack(yyval).move_to_operands(stack(yyvsp[0]));
          }
#line 1819 "jsil_y.tab.cpp"
    break;

  case 15: /* parameters: parameters ',' TOK_IDENTIFIER  */
#line 186 "parser.y"
          {
            yyval=yyvsp[-2];
            stack(yyval).move_to_operands(stack(yyvsp[0]));
          }
#line 1828 "jsil_y.tab.cpp"
    break;

  case 16: /* statements_opt: %empty  */
#line 193 "parser.y"
              {
                newstack(yyval);
              }
#line 1836 "jsil_y.tab.cpp"
    break;

  case 18: /* statements: statement  */
#line 200 "parser.y"
          {
            newstack(yyval).id(ID_code);
            to_code(stack(yyval)).set_statement(ID_block);
            stack(yyval).move_to_operands(stack(yyvsp[0]));
          }
#line 1846 "jsil_y.tab.cpp"
    break;

  case 19: /* statements: statements statement  */
#line 206 "parser.y"
          {
            yyval=yyvsp[-1];
            stack(yyval).move_to_operands(stack(yyvsp[0]));
          }
#line 1855 "jsil_y.tab.cpp"
    break;

  case 20: /* statement: "<newline>"  */
#line 213 "parser.y"
         {
           newstack(yyval)=code_skipt();
         }
#line 1863 "jsil_y.tab.cpp"
    break;

  case 21: /* statement: instruction "<newline>"  */
#line 217 "parser.y"
         {
           yyval=yyvsp[-1];
         }
#line 1871 "jsil_y.tab.cpp"
    break;

  case 22: /* instruction: "label" TOK_IDENTIFIER  */
#line 223 "parser.y"
           {
             code_labelt l(
               to_symbol_expr(stack(yyvsp[0])).get_identifier(),
               code_skipt());
             newstack(yyval).swap(l);
           }
#line 1882 "jsil_y.tab.cpp"
    break;

  case 23: /* instruction: "goto" TOK_IDENTIFIER  */
#line 230 "parser.y"
           {
             code_gotot g(to_symbol_expr(stack(yyvsp[0])).get_identifier());
             newstack(yyval).swap(g);
           }
#line 1891 "jsil_y.tab.cpp"
    break;

  case 24: /* instruction: "goto" '[' expression ']' TOK_IDENTIFIER ',' TOK_IDENTIFIER  */
#line 235 "parser.y"
           {
             code_gotot lt(to_symbol_expr(stack(yyvsp[-2])).get_identifier());
             code_gotot lf(to_symbol_expr(stack(yyvsp[0])).get_identifier());

             code_ifthenelset ite;
             ite.cond().swap(stack(yyvsp[-4]));
             ite.then_case().swap(lt);
             ite.else_case().swap(lf);

             newstack(yyval).swap(ite);
           }
#line 1907 "jsil_y.tab.cpp"
    break;

  case 25: /* instruction: "skip"  */
#line 247 "parser.y"
           {
             newstack(yyval)=code_skipt();
           }
#line 1915 "jsil_y.tab.cpp"
    break;

  case 26: /* instruction: TOK_IDENTIFIER ":=" rhs  */
#line 251 "parser.y"
           {
             code_assignt a(stack(yyvsp[-2]), stack(yyvsp[0]));
             newstack(yyval).swap(a);
           }
#line 1924 "jsil_y.tab.cpp"
    break;

  case 27: /* instruction: '[' expression ',' expression ']' ":=" expression  */
#line 256 "parser.y"
           {
             index_exprt i(stack(yyvsp[-5]), stack(yyvsp[-3]));
             code_assignt a(i, stack(yyvsp[0]));
             newstack(yyval).swap(a);
           }
#line 1934 "jsil_y.tab.cpp"
    break;

  case 29: /* rhs: proc_ident_expr '(' expressions_opt ')' with_opt  */
#line 265 "parser.y"
   {
     side_effect_expr_function_callt f;
     f.function().swap(stack(yyvsp[-4]));
     if(stack(yyvsp[-2]).is_not_nil())
       f.arguments().swap(stack(yyvsp[-2]).operands());

     newstack(yyval).swap(f);

     if(stack(yyvsp[0]).is_not_nil())
     {
       with_exprt w(stack(yyval), stack(yyvsp[0]), nil_exprt());
       stack(yyval).swap(w);
     }
   }
#line 1953 "jsil_y.tab.cpp"
    break;

  case 30: /* rhs: "new" '(' ')'  */
#line 280 "parser.y"
   {
     exprt n("new");
     newstack(yyval).swap(n);
   }
#line 1962 "jsil_y.tab.cpp"
    break;

  case 31: /* rhs: "hasField" '(' expression ',' expression ')'  */
#line 285 "parser.y"
   {
     exprt has_field("hasField");
     has_field.move_to_operands(stack(yyvsp[-3]));
     has_field.move_to_operands(stack(yyvsp[-1]));

     newstack(yyval).swap(has_field);
   }
#line 1974 "jsil_y.tab.cpp"
    break;

  case 32: /* rhs: '[' expression ',' expression ']'  */
#line 293 "parser.y"
   {
     index_exprt i(stack(yyvsp[-3]), stack(yyvsp[-1]));
     newstack(yyval).swap(i);
   }
#line 1983 "jsil_y.tab.cpp"
    break;

  case 33: /* rhs: "delete" '(' expression ',' expression ')'  */
#line 298 "parser.y"
   {
     exprt d("delete");
     d.move_to_operands(stack(yyvsp[-3]));
     d.move_to_operands(stack(yyvsp[-1]));

     newstack(yyval).swap(d);
   }
#line 1995 "jsil_y.tab.cpp"
    break;

  case 34: /* rhs: "protoField" '(' expression ',' expression ')'  */
#line 306 "parser.y"
   {
     exprt proto_field("protoField");
     proto_field.move_to_operands(stack(yyvsp[-3]));
     proto_field.move_to_operands(stack(yyvsp[-1]));

     newstack(yyval).swap(proto_field);
   }
#line 2007 "jsil_y.tab.cpp"
    break;

  case 35: /* rhs: "protoObj" '(' expression ',' expression ')'  */
#line 314 "parser.y"
   {
     exprt proto_obj("protoObj");
     proto_obj.move_to_operands(stack(yyvsp[-3]));
     proto_obj.move_to_operands(stack(yyvsp[-1]));

     newstack(yyval).swap(proto_obj);
   }
#line 2019 "jsil_y.tab.cpp"
    break;

  case 36: /* with_opt: %empty  */
#line 324 "parser.y"
        {
          newstack(yyval);
        }
#line 2027 "jsil_y.tab.cpp"
    break;

  case 37: /* with_opt: "with" TOK_IDENTIFIER  */
#line 328 "parser.y"
        {
          yyval=yyvsp[0];
        }
#line 2035 "jsil_y.tab.cpp"
    break;

  case 38: /* expressions_opt: %empty  */
#line 334 "parser.y"
               {
                 newstack(yyval);
               }
#line 2043 "jsil_y.tab.cpp"
    break;

  case 40: /* expressions: expression  */
#line 341 "parser.y"
           {
             newstack(yyval).id(ID_expression_list);
             stack(yyval).move_to_operands(stack(yyvsp[0]));
           }
#line 2052 "jsil_y.tab.cpp"
    break;

  case 41: /* expressions: expressions ',' expression  */
#line 346 "parser.y"
           {
             yyval=yyvsp[-2];
             stack(yyval).move_to_operands(stack(yyvsp[0]));
           }
#line 2061 "jsil_y.tab.cpp"
    break;

  case 43: /* expression: expression binary_op atom_expression  */
#line 354 "parser.y"
          {
            yyval=yyvsp[-1];
            stack(yyval).move_to_operands(stack(yyvsp[-2]));
            stack(yyval).move_to_operands(stack(yyvsp[0]));
          }
#line 2071 "jsil_y.tab.cpp"
    break;

  case 45: /* atom_expression: unary_op atom_expression  */
#line 363 "parser.y"
               {
                 yyval=yyvsp[-1];
                 stack(yyval).move_to_operands(stack(yyvsp[0]));
               }
#line 2080 "jsil_y.tab.cpp"
    break;

  case 46: /* atom_expression: '(' expression ')'  */
#line 368 "parser.y"
               {
                 yyval=yyvsp[-1];
               }
#line 2088 "jsil_y.tab.cpp"
    break;

  case 47: /* atom_expression: "ref" '(' expression ',' expression ',' ref_type ')'  */
#line 372 "parser.y"
               {
                 exprt ref("ref");
                 ref.move_to_operands(stack(yyvsp[-5]));
                 ref.move_to_operands(stack(yyvsp[-3]));
                 ref.move_to_operands(stack(yyvsp[-1]));

                 newstack(yyval).swap(ref);
               }
#line 2101 "jsil_y.tab.cpp"
    break;

  case 48: /* atom_expression: "field" '(' expression ')'  */
#line 381 "parser.y"
               {
                 exprt field("field");
                 field.move_to_operands(stack(yyvsp[-1]));

                 newstack(yyval).swap(field);
               }
#line 2112 "jsil_y.tab.cpp"
    break;

  case 49: /* atom_expression: "base" '(' expression ')'  */
#line 388 "parser.y"
               {
                 exprt base(ID_base);
                 base.move_to_operands(stack(yyvsp[-1]));

                 newstack(yyval).swap(base);
               }
#line 2123 "jsil_y.tab.cpp"
    break;

  case 50: /* atom_expression: "typeOf" '(' expression ')'  */
#line 395 "parser.y"
               {
                 exprt typeof_expr(ID_typeof);
                 typeof_expr.move_to_operands(stack(yyvsp[-1]));

                 newstack(yyval).swap(typeof_expr);
               }
#line 2134 "jsil_y.tab.cpp"
    break;

  case 52: /* literal: "null"  */
#line 405 "parser.y"
       {
         newstack(yyval).id(ID_null);
       }
#line 2142 "jsil_y.tab.cpp"
    break;

  case 53: /* literal: "#undefined"  */
#line 409 "parser.y"
       {
         newstack(yyval).id("undefined");
       }
#line 2150 "jsil_y.tab.cpp"
    break;

  case 54: /* literal: "#empty"  */
#line 413 "parser.y"
       {
         newstack(yyval).id(ID_empty);
       }
#line 2158 "jsil_y.tab.cpp"
    break;

  case 55: /* literal: "true"  */
#line 417 "parser.y"
       {
         newstack(yyval).make_true();
       }
#line 2166 "jsil_y.tab.cpp"
    break;

  case 56: /* literal: "false"  */
#line 421 "parser.y"
       {
         newstack(yyval).make_false();
       }
#line 2174 "jsil_y.tab.cpp"
    break;

  case 58: /* literal: TOK_STRING  */
#line 426 "parser.y"
       {
         constant_exprt c(to_string_constant(stack(yyval))
           .get_value(), string_typet());
         stack(yyval).swap(c);
       }
#line 2184 "jsil_y.tab.cpp"
    break;

  case 62: /* builtin_field: "#proto"  */
#line 437 "parser.y"
             {
               newstack(yyval).id("proto");
             }
#line 2192 "jsil_y.tab.cpp"
    break;

  case 63: /* builtin_field: "#fid"  */
#line 441 "parser.y"
             {
               newstack(yyval).id("fid");
             }
#line 2200 "jsil_y.tab.cpp"
    break;

  case 64: /* builtin_field: "#scope"  */
#line 445 "parser.y"
             {
               newstack(yyval).id("scope");
             }
#line 2208 "jsil_y.tab.cpp"
    break;

  case 65: /* builtin_field: "#constructid"  */
#line 449 "parser.y"
             {
               newstack(yyval).id("constructid");
             }
#line 2216 "jsil_y.tab.cpp"
    break;

  case 66: /* builtin_field: "#primvalue"  */
#line 453 "parser.y"
             {
               newstack(yyval).id("primvalue");
             }
#line 2224 "jsil_y.tab.cpp"
    break;

  case 67: /* builtin_field: "#targetfunction"  */
#line 457 "parser.y"
             {
               newstack(yyval).id("targetfunction");
             }
#line 2232 "jsil_y.tab.cpp"
    break;

  case 68: /* builtin_field: "#class"  */
#line 461 "parser.y"
             {
               newstack(yyval).id(ID_class);
             }
#line 2240 "jsil_y.tab.cpp"
    break;

  case 73: /* compare_op: '='  */
#line 473 "parser.y"
          {
            newstack(yyval).id(ID_equal);
          }
#line 2248 "jsil_y.tab.cpp"
    break;

  case 74: /* compare_op: '<'  */
#line 477 "parser.y"
          {
            newstack(yyval).id(ID_lt);
          }
#line 2256 "jsil_y.tab.cpp"
    break;

  case 75: /* compare_op: "<="  */
#line 481 "parser.y"
          {
            newstack(yyval).id(ID_le);
          }
#line 2264 "jsil_y.tab.cpp"
    break;

  case 76: /* arithmetic_op: '+'  */
#line 487 "parser.y"
             {
               newstack(yyval).id(ID_plus);
             }
#line 2272 "jsil_y.tab.cpp"
    break;

  case 77: /* arithmetic_op: '-'  */
#line 491 "parser.y"
             {
               newstack(yyval).id(ID_minus);
             }
#line 2280 "jsil_y.tab.cpp"
    break;

  case 78: /* arithmetic_op: '*'  */
#line 495 "parser.y"
             {
               newstack(yyval).id(ID_mult);
             }
#line 2288 "jsil_y.tab.cpp"
    break;

  case 79: /* arithmetic_op: '/'  */
#line 499 "parser.y"
             {
               newstack(yyval).id(ID_div);
             }
#line 2296 "jsil_y.tab.cpp"
    break;

  case 80: /* arithmetic_op: '%'  */
#line 503 "parser.y"
             {
               newstack(yyval).id(ID_mod);
             }
#line 2304 "jsil_y.tab.cpp"
    break;

  case 81: /* boolean_op: "and"  */
#line 509 "parser.y"
          {
            newstack(yyval).id(ID_and);
          }
#line 2312 "jsil_y.tab.cpp"
    break;

  case 82: /* boolean_op: "or"  */
#line 513 "parser.y"
          {
            newstack(yyval).id(ID_or);
          }
#line 2320 "jsil_y.tab.cpp"
    break;

  case 83: /* boolean_op: "<:"  */
#line 517 "parser.y"
          {
            newstack(yyval).id("subtype_of");
          }
#line 2328 "jsil_y.tab.cpp"
    break;

  case 84: /* boolean_op: ':'  */
#line 521 "parser.y"
          {
            newstack(yyval).id(ID_concatenation);
          }
#line 2336 "jsil_y.tab.cpp"
    break;

  case 85: /* bitwise_op: '&'  */
#line 527 "parser.y"
          {
            newstack(yyval).id(ID_bitand);
          }
#line 2344 "jsil_y.tab.cpp"
    break;

  case 86: /* bitwise_op: '|'  */
#line 531 "parser.y"
          {
            newstack(yyval).id(ID_bitor);
          }
#line 2352 "jsil_y.tab.cpp"
    break;

  case 87: /* bitwise_op: '^'  */
#line 535 "parser.y"
          {
            newstack(yyval).id(ID_bitxor);
          }
#line 2360 "jsil_y.tab.cpp"
    break;

  case 88: /* bitwise_op: "<<"  */
#line 539 "parser.y"
          {
            newstack(yyval).id(ID_shl);
          }
#line 2368 "jsil_y.tab.cpp"
    break;

  case 89: /* bitwise_op: ">>"  */
#line 543 "parser.y"
          {
            newstack(yyval).id(ID_shr);
          }
#line 2376 "jsil_y.tab.cpp"
    break;

  case 90: /* bitwise_op: ">>>"  */
#line 547 "parser.y"
          {
            newstack(yyval).id(ID_lshr);
          }
#line 2384 "jsil_y.tab.cpp"
    break;

  case 91: /* unary_op: "not"  */
#line 553 "parser.y"
        {
          newstack(yyval).id(ID_not);
        }
#line 2392 "jsil_y.tab.cpp"
    break;

  case 92: /* unary_op: '-'  */
#line 557 "parser.y"
        {
          newstack(yyval).id(ID_unary_minus);
        }
#line 2400 "jsil_y.tab.cpp"
    break;

  case 93: /* unary_op: "num_to_string"  */
#line 561 "parser.y"
        {
          newstack(yyval).id("num_to_string");
        }
#line 2408 "jsil_y.tab.cpp"
    break;

  case 94: /* unary_op: "string_to_num"  */
#line 565 "parser.y"
        {
          newstack(yyval).id("string_to_num");
        }
#line 2416 "jsil_y.tab.cpp"
    break;

  case 95: /* unary_op: "num_to_int32"  */
#line 569 "parser.y"
        {
          newstack(yyval).id("num_to_int32");
        }
#line 2424 "jsil_y.tab.cpp"
    break;

  case 96: /* unary_op: "num_to_uint32"  */
#line 573 "parser.y"
        {
          newstack(yyval).id("num_to_uint32");
        }
#line 2432 "jsil_y.tab.cpp"
    break;

  case 97: /* unary_op: '!'  */
#line 577 "parser.y"
        {
          newstack(yyval).id(ID_bitnot);
        }
#line 2440 "jsil_y.tab.cpp"
    break;

  case 98: /* jsil_type: "#Null"  */
#line 583 "parser.y"
         {
           newstack(yyval).id("null_type");
         }
#line 2448 "jsil_y.tab.cpp"
    break;

  case 99: /* jsil_type: "#Undefined"  */
#line 587 "parser.y"
         {
           newstack(yyval).id("undefined_type");
         }
#line 2456 "jsil_y.tab.cpp"
    break;

  case 100: /* jsil_type: "#Boolean"  */
#line 591 "parser.y"
         {
           newstack(yyval).id(ID_boolean);
         }
#line 2464 "jsil_y.tab.cpp"
    break;

  case 101: /* jsil_type: "#String"  */
#line 595 "parser.y"
         {
           newstack(yyval).id(ID_string);
         }
#line 2472 "jsil_y.tab.cpp"
    break;

  case 102: /* jsil_type: "#Number"  */
#line 599 "parser.y"
         {
           newstack(yyval).id("number");
         }
#line 2480 "jsil_y.tab.cpp"
    break;

  case 103: /* jsil_type: "#BuiltinObject"  */
#line 603 "parser.y"
         {
           newstack(yyval).id("builtin_object");
         }
#line 2488 "jsil_y.tab.cpp"
    break;

  case 104: /* jsil_type: "#UserObject"  */
#line 607 "parser.y"
         {
           newstack(yyval).id("user_object");
         }
#line 2496 "jsil_y.tab.cpp"
    break;

  case 105: /* jsil_type: "#Object"  */
#line 611 "parser.y"
         {
           newstack(yyval).id("object");
         }
#line 2504 "jsil_y.tab.cpp"
    break;

  case 107: /* jsil_type: "#Reference"  */
#line 616 "parser.y"
         {
           newstack(yyval).id(ID_pointer);
           newstack(yyval).set(ID_C_reference, true);
         }
#line 2513 "jsil_y.tab.cpp"
    break;

  case 108: /* ref_type: "#MemberReference"  */
#line 623 "parser.y"
        {
          newstack(yyval).id(ID_member);
        }
#line 2521 "jsil_y.tab.cpp"
    break;

  case 109: /* ref_type: "#VariableReference"  */
#line 627 "parser.y"
        {
          newstack(yyval).id("variable");
        }
#line 2529 "jsil_y.tab.cpp"
    break;


#line 2533 "jsil_y.tab.cpp"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 632 "parser.y"

