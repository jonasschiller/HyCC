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
#define yyparse         yyansi_cparse
#define yylex           yyansi_clex
#define yyerror         yyansi_cerror
#define yydebug         yyansi_cdebug
#define yynerrs         yyansi_cnerrs
#define yylval          yyansi_clval
#define yychar          yyansi_cchar

/* First part of user prologue.  */
#line 1 "parser.y"


/*
 * This parser is based on:
 *
 * c5.y, a ANSI-C grammar written by James A. Roskind.
 * "Portions Copyright (c) 1989, 1990 James A. Roskind".
 * (http://www.idiom.com/free-compilers/,
 * ftp://ftp.infoseek.com/ftp/pub/c++grammar/,
 * ftp://ftp.sra.co.jp/.a/pub/cmd/c++grammar2.0.tar.gz)
 */

#ifdef ANSI_C_DEBUG
#define YYDEBUG 1
#endif
#define PARSER ansi_c_parser

#include "ansi_c_parser.h"

int yyansi_clex();
extern char *yyansi_ctext;

#include "parser_static.inc"

#include "literals/convert_integer_literal.h"

#include "ansi_c_y.tab.h"

// statements have right recursion, deep nesting of statements thus
// requires more stack space
#define YYMAXDEPTH 25600

/*** token declaration **************************************************/
#line 248 "parser.y"

/************************************************************************/
/*** rules **************************************************************/
/************************************************************************/

#line 118 "ansi_c_y.tab.cpp"

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

#include "ansi_c_y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_AUTO = 3,                   /* "auto"  */
  YYSYMBOL_TOK_BOOL = 4,                   /* "bool"  */
  YYSYMBOL_TOK_COMPLEX = 5,                /* "complex"  */
  YYSYMBOL_TOK_BREAK = 6,                  /* "break"  */
  YYSYMBOL_TOK_CASE = 7,                   /* "case"  */
  YYSYMBOL_TOK_CHAR = 8,                   /* "char"  */
  YYSYMBOL_TOK_CONST = 9,                  /* "const"  */
  YYSYMBOL_TOK_CONTINUE = 10,              /* "continue"  */
  YYSYMBOL_TOK_DEFAULT = 11,               /* "default"  */
  YYSYMBOL_TOK_DO = 12,                    /* "do"  */
  YYSYMBOL_TOK_DOUBLE = 13,                /* "double"  */
  YYSYMBOL_TOK_ELSE = 14,                  /* "else"  */
  YYSYMBOL_TOK_ENUM = 15,                  /* "enum"  */
  YYSYMBOL_TOK_EXTERN = 16,                /* "extern"  */
  YYSYMBOL_TOK_FLOAT = 17,                 /* "float"  */
  YYSYMBOL_TOK_FOR = 18,                   /* "for"  */
  YYSYMBOL_TOK_GOTO = 19,                  /* "goto"  */
  YYSYMBOL_TOK_IF = 20,                    /* "if"  */
  YYSYMBOL_TOK_INLINE = 21,                /* "inline"  */
  YYSYMBOL_TOK_INT = 22,                   /* "int"  */
  YYSYMBOL_TOK_LONG = 23,                  /* "long"  */
  YYSYMBOL_TOK_REGISTER = 24,              /* "register"  */
  YYSYMBOL_TOK_RESTRICT = 25,              /* "restrict"  */
  YYSYMBOL_TOK_RETURN = 26,                /* "return"  */
  YYSYMBOL_TOK_SHORT = 27,                 /* "short"  */
  YYSYMBOL_TOK_SIGNED = 28,                /* "signed"  */
  YYSYMBOL_TOK_SIZEOF = 29,                /* "sizeof"  */
  YYSYMBOL_TOK_STATIC = 30,                /* "static"  */
  YYSYMBOL_TOK_STRUCT = 31,                /* "struct"  */
  YYSYMBOL_TOK_SWITCH = 32,                /* "switch"  */
  YYSYMBOL_TOK_TYPEDEF = 33,               /* "typedef"  */
  YYSYMBOL_TOK_UNION = 34,                 /* "union"  */
  YYSYMBOL_TOK_UNSIGNED = 35,              /* "unsigned"  */
  YYSYMBOL_TOK_VOID = 36,                  /* "void"  */
  YYSYMBOL_TOK_VOLATILE = 37,              /* "volatile"  */
  YYSYMBOL_TOK_WCHAR_T = 38,               /* "wchar_t"  */
  YYSYMBOL_TOK_WHILE = 39,                 /* "while"  */
  YYSYMBOL_TOK_ARROW = 40,                 /* "->"  */
  YYSYMBOL_TOK_INCR = 41,                  /* "++"  */
  YYSYMBOL_TOK_DECR = 42,                  /* "--"  */
  YYSYMBOL_TOK_SHIFTLEFT = 43,             /* "<<"  */
  YYSYMBOL_TOK_SHIFTRIGHT = 44,            /* ">>"  */
  YYSYMBOL_TOK_LE = 45,                    /* "<="  */
  YYSYMBOL_TOK_GE = 46,                    /* ">="  */
  YYSYMBOL_TOK_EQ = 47,                    /* "=="  */
  YYSYMBOL_TOK_NE = 48,                    /* "!="  */
  YYSYMBOL_TOK_ANDAND = 49,                /* "&&"  */
  YYSYMBOL_TOK_OROR = 50,                  /* "||"  */
  YYSYMBOL_TOK_ELLIPSIS = 51,              /* "..."  */
  YYSYMBOL_TOK_MULTASSIGN = 52,            /* "*="  */
  YYSYMBOL_TOK_DIVASSIGN = 53,             /* "/="  */
  YYSYMBOL_TOK_MODASSIGN = 54,             /* "%="  */
  YYSYMBOL_TOK_PLUSASSIGN = 55,            /* "+="  */
  YYSYMBOL_TOK_MINUSASSIGN = 56,           /* "-="  */
  YYSYMBOL_TOK_SHLASSIGN = 57,             /* "<<="  */
  YYSYMBOL_TOK_SHRASSIGN = 58,             /* ">>="  */
  YYSYMBOL_TOK_ANDASSIGN = 59,             /* "&="  */
  YYSYMBOL_TOK_XORASSIGN = 60,             /* "^="  */
  YYSYMBOL_TOK_ORASSIGN = 61,              /* "|="  */
  YYSYMBOL_TOK_IDENTIFIER = 62,            /* TOK_IDENTIFIER  */
  YYSYMBOL_TOK_TYPEDEFNAME = 63,           /* TOK_TYPEDEFNAME  */
  YYSYMBOL_TOK_INTEGER = 64,               /* TOK_INTEGER  */
  YYSYMBOL_TOK_FLOATING = 65,              /* TOK_FLOATING  */
  YYSYMBOL_TOK_CHARACTER = 66,             /* TOK_CHARACTER  */
  YYSYMBOL_TOK_STRING = 67,                /* TOK_STRING  */
  YYSYMBOL_TOK_ASM_STRING = 68,            /* TOK_ASM_STRING  */
  YYSYMBOL_TOK_INT8 = 69,                  /* "__int8"  */
  YYSYMBOL_TOK_INT16 = 70,                 /* "__int16"  */
  YYSYMBOL_TOK_INT32 = 71,                 /* "__int32"  */
  YYSYMBOL_TOK_INT64 = 72,                 /* "__int64"  */
  YYSYMBOL_TOK_PTR32 = 73,                 /* "__ptr32"  */
  YYSYMBOL_TOK_PTR64 = 74,                 /* "__ptr64"  */
  YYSYMBOL_TOK_TYPEOF = 75,                /* "typeof"  */
  YYSYMBOL_TOK_GCC_AUTO_TYPE = 76,         /* "__auto_type"  */
  YYSYMBOL_TOK_GCC_FLOAT80 = 77,           /* "__float80"  */
  YYSYMBOL_TOK_GCC_FLOAT128 = 78,          /* "__float128"  */
  YYSYMBOL_TOK_GCC_INT128 = 79,            /* "__int128"  */
  YYSYMBOL_TOK_GCC_DECIMAL32 = 80,         /* "_Decimal32"  */
  YYSYMBOL_TOK_GCC_DECIMAL64 = 81,         /* "_Decimal64"  */
  YYSYMBOL_TOK_GCC_DECIMAL128 = 82,        /* "_Decimal128"  */
  YYSYMBOL_TOK_GCC_ASM = 83,               /* "__asm__"  */
  YYSYMBOL_TOK_GCC_ASM_PAREN = 84,         /* "__asm__ (with parentheses)"  */
  YYSYMBOL_TOK_GCC_ATTRIBUTE = 85,         /* "__attribute__"  */
  YYSYMBOL_TOK_GCC_ATTRIBUTE_ALIGNED = 86, /* "aligned"  */
  YYSYMBOL_TOK_GCC_ATTRIBUTE_TRANSPARENT_UNION = 87, /* "transparent_union"  */
  YYSYMBOL_TOK_GCC_ATTRIBUTE_PACKED = 88,  /* "packed"  */
  YYSYMBOL_TOK_GCC_ATTRIBUTE_VECTOR_SIZE = 89, /* "vector_size"  */
  YYSYMBOL_TOK_GCC_ATTRIBUTE_MODE = 90,    /* "mode"  */
  YYSYMBOL_TOK_GCC_ATTRIBUTE_GNU_INLINE = 91, /* "__gnu_inline__"  */
  YYSYMBOL_TOK_GCC_ATTRIBUTE_WEAK = 92,    /* "weak"  */
  YYSYMBOL_TOK_GCC_ATTRIBUTE_ALIAS = 93,   /* "alias"  */
  YYSYMBOL_TOK_GCC_ATTRIBUTE_SECTION = 94, /* "section"  */
  YYSYMBOL_TOK_GCC_ATTRIBUTE_NORETURN = 95, /* "noreturn"  */
  YYSYMBOL_TOK_GCC_ATTRIBUTE_CONSTRUCTOR = 96, /* "constructor"  */
  YYSYMBOL_TOK_GCC_ATTRIBUTE_DESTRUCTOR = 97, /* "destructor"  */
  YYSYMBOL_TOK_GCC_LABEL = 98,             /* "__label__"  */
  YYSYMBOL_TOK_MSC_ASM = 99,               /* "__asm"  */
  YYSYMBOL_TOK_MSC_BASED = 100,            /* "__based"  */
  YYSYMBOL_TOK_CW_VAR_ARG_TYPEOF = 101,    /* "_var_arg_typeof"  */
  YYSYMBOL_TOK_BUILTIN_VA_ARG = 102,       /* "__builtin_va_arg"  */
  YYSYMBOL_TOK_GCC_BUILTIN_TYPES_COMPATIBLE_P = 103, /* "__builtin_types_compatible_p"  */
  YYSYMBOL_TOK_CLANG_BUILTIN_CONVERTVECTOR = 104, /* "__builtin_convertvector"  */
  YYSYMBOL_TOK_OFFSETOF = 105,             /* "__offsetof"  */
  YYSYMBOL_TOK_ALIGNOF = 106,              /* "__alignof__"  */
  YYSYMBOL_TOK_MSC_TRY = 107,              /* "__try"  */
  YYSYMBOL_TOK_MSC_FINALLY = 108,          /* "__finally"  */
  YYSYMBOL_TOK_MSC_EXCEPT = 109,           /* "__except"  */
  YYSYMBOL_TOK_MSC_LEAVE = 110,            /* "__leave"  */
  YYSYMBOL_TOK_MSC_DECLSPEC = 111,         /* "__declspec"  */
  YYSYMBOL_TOK_INTERFACE = 112,            /* "__interface"  */
  YYSYMBOL_TOK_CDECL = 113,                /* "__cdecl"  */
  YYSYMBOL_TOK_STDCALL = 114,              /* "__stdcall"  */
  YYSYMBOL_TOK_FASTCALL = 115,             /* "__fastcall"  */
  YYSYMBOL_TOK_CLRCALL = 116,              /* "__clrcall"  */
  YYSYMBOL_TOK_FORALL = 117,               /* "forall"  */
  YYSYMBOL_TOK_EXISTS = 118,               /* "exists"  */
  YYSYMBOL_TOK_ACSL_FORALL = 119,          /* "\\forall"  */
  YYSYMBOL_TOK_ACSL_EXISTS = 120,          /* "\\exists"  */
  YYSYMBOL_TOK_ARRAY_OF = 121,             /* "array_of"  */
  YYSYMBOL_TOK_CPROVER_BITVECTOR = 122,    /* "__CPROVER_bitvector"  */
  YYSYMBOL_TOK_CPROVER_FLOATBV = 123,      /* "__CPROVER_floatbv"  */
  YYSYMBOL_TOK_CPROVER_FIXEDBV = 124,      /* "__CPROVER_fixedbv"  */
  YYSYMBOL_TOK_CPROVER_ATOMIC = 125,       /* "__CPROVER_atomic"  */
  YYSYMBOL_TOK_CPROVER_BOOL = 126,         /* "__CPROVER_bool"  */
  YYSYMBOL_TOK_CPROVER_THROW = 127,        /* "__CPROVER_throw"  */
  YYSYMBOL_TOK_CPROVER_CATCH = 128,        /* "__CPROVER_catch"  */
  YYSYMBOL_TOK_CPROVER_TRY = 129,          /* "__CPROVER_try"  */
  YYSYMBOL_TOK_CPROVER_FINALLY = 130,      /* "__CPROVER_finally"  */
  YYSYMBOL_TOK_CPROVER_ID = 131,           /* "__CPROVER_ID"  */
  YYSYMBOL_TOK_CPROVER_LOOP_INVARIANT = 132, /* "__CPROVER_loop_invariant"  */
  YYSYMBOL_TOK_CPROVER_REQUIRES = 133,     /* "__CPROVER_requires"  */
  YYSYMBOL_TOK_CPROVER_ENSURES = 134,      /* "__CPROVER_ensures"  */
  YYSYMBOL_TOK_IMPLIES = 135,              /* "==>"  */
  YYSYMBOL_TOK_EQUIVALENT = 136,           /* "<==>"  */
  YYSYMBOL_TOK_TRUE = 137,                 /* "TRUE"  */
  YYSYMBOL_TOK_FALSE = 138,                /* "FALSE"  */
  YYSYMBOL_TOK_REAL = 139,                 /* "__real__"  */
  YYSYMBOL_TOK_IMAG = 140,                 /* "__imag__"  */
  YYSYMBOL_TOK_ALIGNAS = 141,              /* "_Alignas"  */
  YYSYMBOL_TOK_ATOMIC_TYPE_QUALIFIER = 142, /* "_Atomic"  */
  YYSYMBOL_TOK_ATOMIC_TYPE_SPECIFIER = 143, /* "_Atomic()"  */
  YYSYMBOL_TOK_GENERIC = 144,              /* "_Generic"  */
  YYSYMBOL_TOK_IMAGINARY = 145,            /* "_Imaginary"  */
  YYSYMBOL_TOK_NORETURN = 146,             /* "_Noreturn"  */
  YYSYMBOL_TOK_STATIC_ASSERT = 147,        /* "_Static_assert"  */
  YYSYMBOL_TOK_THREAD_LOCAL = 148,         /* "_Thread_local"  */
  YYSYMBOL_TOK_NULLPTR = 149,              /* "nullptr"  */
  YYSYMBOL_TOK_CONSTEXPR = 150,            /* "constexpr"  */
  YYSYMBOL_TOK_SCANNER_ERROR = 151,        /* TOK_SCANNER_ERROR  */
  YYSYMBOL_TOK_SCANNER_EOF = 152,          /* TOK_SCANNER_EOF  */
  YYSYMBOL_TOK_CATCH = 153,                /* "catch"  */
  YYSYMBOL_TOK_CHAR16_T = 154,             /* "char16_t"  */
  YYSYMBOL_TOK_CHAR32_T = 155,             /* "char32_t"  */
  YYSYMBOL_TOK_CLASS = 156,                /* "class"  */
  YYSYMBOL_TOK_DELETE = 157,               /* "delete"  */
  YYSYMBOL_TOK_DECLTYPE = 158,             /* "decltype"  */
  YYSYMBOL_TOK_EXPLICIT = 159,             /* "explicit"  */
  YYSYMBOL_TOK_FRIEND = 160,               /* "friend"  */
  YYSYMBOL_TOK_MUTABLE = 161,              /* "mutable"  */
  YYSYMBOL_TOK_NAMESPACE = 162,            /* "namespace"  */
  YYSYMBOL_TOK_NEW = 163,                  /* "new"  */
  YYSYMBOL_TOK_NOEXCEPT = 164,             /* "noexcept"  */
  YYSYMBOL_TOK_OPERATOR = 165,             /* "operator"  */
  YYSYMBOL_TOK_PRIVATE = 166,              /* "private"  */
  YYSYMBOL_TOK_PROTECTED = 167,            /* "protected"  */
  YYSYMBOL_TOK_PUBLIC = 168,               /* "public"  */
  YYSYMBOL_TOK_TEMPLATE = 169,             /* "template"  */
  YYSYMBOL_TOK_THIS = 170,                 /* "this"  */
  YYSYMBOL_TOK_THROW = 171,                /* "throw"  */
  YYSYMBOL_TOK_TYPEID = 172,               /* "typeid"  */
  YYSYMBOL_TOK_TYPENAME = 173,             /* "typename"  */
  YYSYMBOL_TOK_TRY = 174,                  /* "try"  */
  YYSYMBOL_TOK_USING = 175,                /* "using"  */
  YYSYMBOL_TOK_VIRTUAL = 176,              /* "virtual"  */
  YYSYMBOL_TOK_SCOPE = 177,                /* "::"  */
  YYSYMBOL_TOK_DOTPM = 178,                /* ".*"  */
  YYSYMBOL_TOK_ARROWPM = 179,              /* "->*"  */
  YYSYMBOL_TOK_UNARY_TYPE_PREDICATE = 180, /* TOK_UNARY_TYPE_PREDICATE  */
  YYSYMBOL_TOK_BINARY_TYPE_PREDICATE = 181, /* TOK_BINARY_TYPE_PREDICATE  */
  YYSYMBOL_TOK_MSC_UUIDOF = 182,           /* "__uuidof"  */
  YYSYMBOL_TOK_MSC_IF_EXISTS = 183,        /* "__if_exists"  */
  YYSYMBOL_TOK_MSC_IF_NOT_EXISTS = 184,    /* "__if_not_exists"  */
  YYSYMBOL_TOK_UNDERLYING_TYPE = 185,      /* "__underlying_type"  */
  YYSYMBOL_186_ = 186,                     /* '('  */
  YYSYMBOL_187_ = 187,                     /* ')'  */
  YYSYMBOL_188_ = 188,                     /* ','  */
  YYSYMBOL_189_ = 189,                     /* ':'  */
  YYSYMBOL_190_ = 190,                     /* '.'  */
  YYSYMBOL_191_ = 191,                     /* '['  */
  YYSYMBOL_192_ = 192,                     /* ']'  */
  YYSYMBOL_193_ = 193,                     /* '{'  */
  YYSYMBOL_194_ = 194,                     /* '}'  */
  YYSYMBOL_195_ = 195,                     /* '&'  */
  YYSYMBOL_196_ = 196,                     /* '*'  */
  YYSYMBOL_197_ = 197,                     /* '+'  */
  YYSYMBOL_198_ = 198,                     /* '-'  */
  YYSYMBOL_199_ = 199,                     /* '~'  */
  YYSYMBOL_200_ = 200,                     /* '!'  */
  YYSYMBOL_201_ = 201,                     /* '/'  */
  YYSYMBOL_202_ = 202,                     /* '%'  */
  YYSYMBOL_203_ = 203,                     /* '<'  */
  YYSYMBOL_204_ = 204,                     /* '>'  */
  YYSYMBOL_205_ = 205,                     /* '^'  */
  YYSYMBOL_206_ = 206,                     /* '|'  */
  YYSYMBOL_207_ = 207,                     /* '?'  */
  YYSYMBOL_208_ = 208,                     /* '='  */
  YYSYMBOL_209_ = 209,                     /* ';'  */
  YYSYMBOL_YYACCEPT = 210,                 /* $accept  */
  YYSYMBOL_grammar = 211,                  /* grammar  */
  YYSYMBOL_identifier = 212,               /* identifier  */
  YYSYMBOL_typedef_name = 213,             /* typedef_name  */
  YYSYMBOL_integer = 214,                  /* integer  */
  YYSYMBOL_floating = 215,                 /* floating  */
  YYSYMBOL_character = 216,                /* character  */
  YYSYMBOL_string = 217,                   /* string  */
  YYSYMBOL_constant = 218,                 /* constant  */
  YYSYMBOL_primary_expression = 219,       /* primary_expression  */
  YYSYMBOL_generic_selection = 220,        /* generic_selection  */
  YYSYMBOL_generic_assoc_list = 221,       /* generic_assoc_list  */
  YYSYMBOL_generic_association = 222,      /* generic_association  */
  YYSYMBOL_gcc_builtin_expressions = 223,  /* gcc_builtin_expressions  */
  YYSYMBOL_clang_builtin_expressions = 224, /* clang_builtin_expressions  */
  YYSYMBOL_cw_builtin_expressions = 225,   /* cw_builtin_expressions  */
  YYSYMBOL_offsetof = 226,                 /* offsetof  */
  YYSYMBOL_offsetof_member_designator = 227, /* offsetof_member_designator  */
  YYSYMBOL_quantifier_expression = 228,    /* quantifier_expression  */
  YYSYMBOL_loop_invariant_opt = 229,       /* loop_invariant_opt  */
  YYSYMBOL_requires_opt = 230,             /* requires_opt  */
  YYSYMBOL_ensures_opt = 231,              /* ensures_opt  */
  YYSYMBOL_statement_expression = 232,     /* statement_expression  */
  YYSYMBOL_postfix_expression = 233,       /* postfix_expression  */
  YYSYMBOL_member_name = 234,              /* member_name  */
  YYSYMBOL_argument_expression_list = 235, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 236,         /* unary_expression  */
  YYSYMBOL_cast_expression = 237,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 238, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 239,      /* additive_expression  */
  YYSYMBOL_shift_expression = 240,         /* shift_expression  */
  YYSYMBOL_relational_expression = 241,    /* relational_expression  */
  YYSYMBOL_equality_expression = 242,      /* equality_expression  */
  YYSYMBOL_and_expression = 243,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 244,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 245,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 246,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 247,    /* logical_or_expression  */
  YYSYMBOL_logical_implication_expression = 248, /* logical_implication_expression  */
  YYSYMBOL_logical_equivalence_expression = 249, /* logical_equivalence_expression  */
  YYSYMBOL_conditional_expression = 250,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 251,    /* assignment_expression  */
  YYSYMBOL_comma_expression = 252,         /* comma_expression  */
  YYSYMBOL_constant_expression = 253,      /* constant_expression  */
  YYSYMBOL_comma_expression_opt = 254,     /* comma_expression_opt  */
  YYSYMBOL_declaration = 255,              /* declaration  */
  YYSYMBOL_static_assert_declaration = 256, /* static_assert_declaration  */
  YYSYMBOL_default_declaring_list = 257,   /* default_declaring_list  */
  YYSYMBOL_258_1 = 258,                    /* @1  */
  YYSYMBOL_259_2 = 259,                    /* @2  */
  YYSYMBOL_260_3 = 260,                    /* $@3  */
  YYSYMBOL_post_declarator_attribute = 261, /* post_declarator_attribute  */
  YYSYMBOL_post_declarator_attributes = 262, /* post_declarator_attributes  */
  YYSYMBOL_post_declarator_attributes_opt = 263, /* post_declarator_attributes_opt  */
  YYSYMBOL_declaring_list = 264,           /* declaring_list  */
  YYSYMBOL_265_4 = 265,                    /* @4  */
  YYSYMBOL_266_5 = 266,                    /* @5  */
  YYSYMBOL_267_6 = 267,                    /* $@6  */
  YYSYMBOL_declaration_specifier = 268,    /* declaration_specifier  */
  YYSYMBOL_type_specifier = 269,           /* type_specifier  */
  YYSYMBOL_declaration_qualifier_list = 270, /* declaration_qualifier_list  */
  YYSYMBOL_type_qualifier_list = 271,      /* type_qualifier_list  */
  YYSYMBOL_attribute_type_qualifier_list = 272, /* attribute_type_qualifier_list  */
  YYSYMBOL_declaration_qualifier = 273,    /* declaration_qualifier  */
  YYSYMBOL_type_qualifier = 274,           /* type_qualifier  */
  YYSYMBOL_alignas_specifier = 275,        /* alignas_specifier  */
  YYSYMBOL_attribute_or_type_qualifier = 276, /* attribute_or_type_qualifier  */
  YYSYMBOL_attribute_or_type_qualifier_or_storage_class = 277, /* attribute_or_type_qualifier_or_storage_class  */
  YYSYMBOL_attribute_type_qualifier_storage_class_list = 278, /* attribute_type_qualifier_storage_class_list  */
  YYSYMBOL_basic_declaration_specifier = 279, /* basic_declaration_specifier  */
  YYSYMBOL_basic_type_specifier = 280,     /* basic_type_specifier  */
  YYSYMBOL_sue_declaration_specifier = 281, /* sue_declaration_specifier  */
  YYSYMBOL_sue_type_specifier = 282,       /* sue_type_specifier  */
  YYSYMBOL_typedef_declaration_specifier = 283, /* typedef_declaration_specifier  */
  YYSYMBOL_typeof_declaration_specifier = 284, /* typeof_declaration_specifier  */
  YYSYMBOL_atomic_declaration_specifier = 285, /* atomic_declaration_specifier  */
  YYSYMBOL_typedef_type_specifier = 286,   /* typedef_type_specifier  */
  YYSYMBOL_typeof_specifier = 287,         /* typeof_specifier  */
  YYSYMBOL_typeof_type_specifier = 288,    /* typeof_type_specifier  */
  YYSYMBOL_atomic_specifier = 289,         /* atomic_specifier  */
  YYSYMBOL_atomic_type_specifier = 290,    /* atomic_type_specifier  */
  YYSYMBOL_msc_decl_identifier = 291,      /* msc_decl_identifier  */
  YYSYMBOL_msc_decl_modifier = 292,        /* msc_decl_modifier  */
  YYSYMBOL_msc_declspec_seq = 293,         /* msc_declspec_seq  */
  YYSYMBOL_msc_declspec = 294,             /* msc_declspec  */
  YYSYMBOL_msc_declspec_opt = 295,         /* msc_declspec_opt  */
  YYSYMBOL_storage_class = 296,            /* storage_class  */
  YYSYMBOL_basic_type_name = 297,          /* basic_type_name  */
  YYSYMBOL_elaborated_type_name = 298,     /* elaborated_type_name  */
  YYSYMBOL_array_of_construct = 299,       /* array_of_construct  */
  YYSYMBOL_pragma_packed = 300,            /* pragma_packed  */
  YYSYMBOL_aggregate_name = 301,           /* aggregate_name  */
  YYSYMBOL_302_7 = 302,                    /* $@7  */
  YYSYMBOL_303_8 = 303,                    /* $@8  */
  YYSYMBOL_304_9 = 304,                    /* $@9  */
  YYSYMBOL_aggregate_key = 305,            /* aggregate_key  */
  YYSYMBOL_gcc_type_attribute = 306,       /* gcc_type_attribute  */
  YYSYMBOL_gcc_attribute = 307,            /* gcc_attribute  */
  YYSYMBOL_gcc_attribute_list = 308,       /* gcc_attribute_list  */
  YYSYMBOL_gcc_attribute_specifier = 309,  /* gcc_attribute_specifier  */
  YYSYMBOL_gcc_type_attribute_opt = 310,   /* gcc_type_attribute_opt  */
  YYSYMBOL_gcc_type_attribute_list = 311,  /* gcc_type_attribute_list  */
  YYSYMBOL_member_declaration_list_opt = 312, /* member_declaration_list_opt  */
  YYSYMBOL_member_declaration_list = 313,  /* member_declaration_list  */
  YYSYMBOL_member_declaration = 314,       /* member_declaration  */
  YYSYMBOL_member_default_declaring_list = 315, /* member_default_declaring_list  */
  YYSYMBOL_member_declaring_list = 316,    /* member_declaring_list  */
  YYSYMBOL_member_declarator = 317,        /* member_declarator  */
  YYSYMBOL_member_identifier_declarator = 318, /* member_identifier_declarator  */
  YYSYMBOL_bit_field_size_opt = 319,       /* bit_field_size_opt  */
  YYSYMBOL_bit_field_size = 320,           /* bit_field_size  */
  YYSYMBOL_enum_name = 321,                /* enum_name  */
  YYSYMBOL_322_10 = 322,                   /* $@10  */
  YYSYMBOL_323_11 = 323,                   /* $@11  */
  YYSYMBOL_enum_key = 324,                 /* enum_key  */
  YYSYMBOL_enumerator_list_opt = 325,      /* enumerator_list_opt  */
  YYSYMBOL_enumerator_list = 326,          /* enumerator_list  */
  YYSYMBOL_enumerator_declaration = 327,   /* enumerator_declaration  */
  YYSYMBOL_enumerator_value_opt = 328,     /* enumerator_value_opt  */
  YYSYMBOL_parameter_type_list = 329,      /* parameter_type_list  */
  YYSYMBOL_KnR_parameter_list = 330,       /* KnR_parameter_list  */
  YYSYMBOL_KnR_parameter = 331,            /* KnR_parameter  */
  YYSYMBOL_parameter_list = 332,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 333,    /* parameter_declaration  */
  YYSYMBOL_identifier_or_typedef_name = 334, /* identifier_or_typedef_name  */
  YYSYMBOL_type_name = 335,                /* type_name  */
  YYSYMBOL_initializer_opt = 336,          /* initializer_opt  */
  YYSYMBOL_initializer = 337,              /* initializer  */
  YYSYMBOL_initializer_list = 338,         /* initializer_list  */
  YYSYMBOL_initializer_list_opt = 339,     /* initializer_list_opt  */
  YYSYMBOL_designated_initializer = 340,   /* designated_initializer  */
  YYSYMBOL_designator = 341,               /* designator  */
  YYSYMBOL_statement = 342,                /* statement  */
  YYSYMBOL_declaration_statement = 343,    /* declaration_statement  */
  YYSYMBOL_labeled_statement = 344,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 345,       /* compound_statement  */
  YYSYMBOL_compound_scope = 346,           /* compound_scope  */
  YYSYMBOL_statement_list = 347,           /* statement_list  */
  YYSYMBOL_expression_statement = 348,     /* expression_statement  */
  YYSYMBOL_selection_statement = 349,      /* selection_statement  */
  YYSYMBOL_declaration_or_expression_statement = 350, /* declaration_or_expression_statement  */
  YYSYMBOL_iteration_statement = 351,      /* iteration_statement  */
  YYSYMBOL_352_12 = 352,                   /* $@12  */
  YYSYMBOL_jump_statement = 353,           /* jump_statement  */
  YYSYMBOL_gcc_local_label_statement = 354, /* gcc_local_label_statement  */
  YYSYMBOL_gcc_local_label_list = 355,     /* gcc_local_label_list  */
  YYSYMBOL_gcc_local_label = 356,          /* gcc_local_label  */
  YYSYMBOL_gcc_asm_statement = 357,        /* gcc_asm_statement  */
  YYSYMBOL_msc_asm_statement = 358,        /* msc_asm_statement  */
  YYSYMBOL_msc_seh_statement = 359,        /* msc_seh_statement  */
  YYSYMBOL_cprover_exception_statement = 360, /* cprover_exception_statement  */
  YYSYMBOL_volatile_or_goto_opt = 361,     /* volatile_or_goto_opt  */
  YYSYMBOL_gcc_asm_commands = 362,         /* gcc_asm_commands  */
  YYSYMBOL_gcc_asm_assembler_template = 363, /* gcc_asm_assembler_template  */
  YYSYMBOL_gcc_asm_outputs = 364,          /* gcc_asm_outputs  */
  YYSYMBOL_gcc_asm_output = 365,           /* gcc_asm_output  */
  YYSYMBOL_gcc_asm_output_list = 366,      /* gcc_asm_output_list  */
  YYSYMBOL_gcc_asm_inputs = 367,           /* gcc_asm_inputs  */
  YYSYMBOL_gcc_asm_input = 368,            /* gcc_asm_input  */
  YYSYMBOL_gcc_asm_input_list = 369,       /* gcc_asm_input_list  */
  YYSYMBOL_gcc_asm_clobbered_registers = 370, /* gcc_asm_clobbered_registers  */
  YYSYMBOL_gcc_asm_clobbered_register = 371, /* gcc_asm_clobbered_register  */
  YYSYMBOL_gcc_asm_clobbered_registers_list = 372, /* gcc_asm_clobbered_registers_list  */
  YYSYMBOL_gcc_asm_labels = 373,           /* gcc_asm_labels  */
  YYSYMBOL_gcc_asm_labels_list = 374,      /* gcc_asm_labels_list  */
  YYSYMBOL_gcc_asm_label = 375,            /* gcc_asm_label  */
  YYSYMBOL_translation_unit = 376,         /* translation_unit  */
  YYSYMBOL_external_definition_list = 377, /* external_definition_list  */
  YYSYMBOL_external_definition = 378,      /* external_definition  */
  YYSYMBOL_asm_definition = 379,           /* asm_definition  */
  YYSYMBOL_function_definition = 380,      /* function_definition  */
  YYSYMBOL_function_body = 381,            /* function_body  */
  YYSYMBOL_KnR_parameter_header_opt = 382, /* KnR_parameter_header_opt  */
  YYSYMBOL_KnR_parameter_header = 383,     /* KnR_parameter_header  */
  YYSYMBOL_KnR_parameter_declaration = 384, /* KnR_parameter_declaration  */
  YYSYMBOL_KnR_declaration_qualifier_list = 385, /* KnR_declaration_qualifier_list  */
  YYSYMBOL_KnR_basic_declaration_specifier = 386, /* KnR_basic_declaration_specifier  */
  YYSYMBOL_KnR_typedef_declaration_specifier = 387, /* KnR_typedef_declaration_specifier  */
  YYSYMBOL_KnR_sue_declaration_specifier = 388, /* KnR_sue_declaration_specifier  */
  YYSYMBOL_KnR_declaration_specifier = 389, /* KnR_declaration_specifier  */
  YYSYMBOL_KnR_parameter_declaring_list = 390, /* KnR_parameter_declaring_list  */
  YYSYMBOL_function_head = 391,            /* function_head  */
  YYSYMBOL_declarator = 392,               /* declarator  */
  YYSYMBOL_paren_attribute_declarator = 393, /* paren_attribute_declarator  */
  YYSYMBOL_typedef_declarator = 394,       /* typedef_declarator  */
  YYSYMBOL_parameter_typedef_declarator = 395, /* parameter_typedef_declarator  */
  YYSYMBOL_clean_typedef_declarator = 396, /* clean_typedef_declarator  */
  YYSYMBOL_clean_postfix_typedef_declarator = 397, /* clean_postfix_typedef_declarator  */
  YYSYMBOL_paren_typedef_declarator = 398, /* paren_typedef_declarator  */
  YYSYMBOL_paren_postfix_typedef_declarator = 399, /* paren_postfix_typedef_declarator  */
  YYSYMBOL_simple_paren_typedef_declarator = 400, /* simple_paren_typedef_declarator  */
  YYSYMBOL_identifier_declarator = 401,    /* identifier_declarator  */
  YYSYMBOL_unary_identifier_declarator = 402, /* unary_identifier_declarator  */
  YYSYMBOL_postfix_identifier_declarator = 403, /* postfix_identifier_declarator  */
  YYSYMBOL_paren_identifier_declarator = 404, /* paren_identifier_declarator  */
  YYSYMBOL_abstract_declarator = 405,      /* abstract_declarator  */
  YYSYMBOL_parameter_abstract_declarator = 406, /* parameter_abstract_declarator  */
  YYSYMBOL_postfixing_abstract_declarator = 407, /* postfixing_abstract_declarator  */
  YYSYMBOL_408_13 = 408,                   /* $@13  */
  YYSYMBOL_parameter_postfixing_abstract_declarator = 409, /* parameter_postfixing_abstract_declarator  */
  YYSYMBOL_410_14 = 410,                   /* $@14  */
  YYSYMBOL_array_abstract_declarator = 411, /* array_abstract_declarator  */
  YYSYMBOL_unary_abstract_declarator = 412, /* unary_abstract_declarator  */
  YYSYMBOL_parameter_unary_abstract_declarator = 413, /* parameter_unary_abstract_declarator  */
  YYSYMBOL_postfix_abstract_declarator = 414, /* postfix_abstract_declarator  */
  YYSYMBOL_parameter_postfix_abstract_declarator = 415 /* parameter_postfix_abstract_declarator  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  142
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6197

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  210
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  206
/* YYNRULES -- Number of rules.  */
#define YYNRULES  602
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1089

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   440


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   200,     2,     2,     2,   202,   195,     2,
     186,   187,   196,   197,   188,   198,   190,   201,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   189,   209,
     203,   208,   204,   207,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   191,     2,   192,   205,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   193,   206,   194,   199,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   256,   256,   262,   263,   276,   280,   284,   288,   292,
     297,   298,   299,   300,   306,   307,   308,   310,   311,   312,
     313,   314,   315,   316,   320,   330,   334,   341,   348,   358,
     365,   379,   389,   398,   408,   416,   423,   430,   444,   452,
     462,   470,   484,   485,   491,   492,   498,   499,   503,   513,
     514,   516,   525,   534,   540,   546,   552,   559,   569,   583,
     584,   588,   593,   601,   602,   608,   614,   619,   629,   634,
     639,   644,   649,   654,   659,   664,   670,   679,   680,   687,
     692,   700,   701,   703,   705,   710,   711,   713,   718,   719,
     721,   726,   727,   729,   731,   733,   738,   739,   741,   746,
     747,   752,   753,   758,   759,   764,   765,   770,   771,   779,
     780,   788,   789,   794,   795,   802,   812,   813,   815,   817,
     819,   821,   823,   825,   827,   829,   831,   833,   838,   839,
     844,   849,   850,   856,   862,   868,   869,   870,   874,   886,
     885,   898,   897,   910,   909,   925,   932,   936,   940,   945,
     948,   954,   952,   970,   968,   984,  1002,  1000,  1017,  1018,
    1019,  1020,  1021,  1025,  1026,  1027,  1028,  1029,  1033,  1034,
    1038,  1039,  1043,  1050,  1051,  1058,  1065,  1066,  1073,  1074,
    1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1090,
    1095,  1103,  1104,  1108,  1109,  1110,  1114,  1115,  1122,  1126,
    1130,  1134,  1141,  1145,  1149,  1153,  1161,  1165,  1169,  1177,
    1178,  1182,  1189,  1193,  1197,  1204,  1208,  1212,  1219,  1223,
    1227,  1234,  1238,  1242,  1249,  1254,  1262,  1263,  1267,  1271,
    1278,  1287,  1288,  1292,  1296,  1303,  1307,  1311,  1318,  1319,
    1323,  1327,  1331,  1335,  1339,  1343,  1350,  1355,  1363,  1366,
    1370,  1371,  1372,  1373,  1374,  1375,  1376,  1377,  1378,  1382,
    1383,  1384,  1385,  1386,  1387,  1388,  1389,  1390,  1391,  1392,
    1393,  1394,  1395,  1396,  1397,  1398,  1399,  1400,  1401,  1402,
    1403,  1409,  1416,  1423,  1427,  1428,  1429,  1433,  1438,  1450,
    1447,  1468,  1464,  1488,  1484,  1501,  1503,  1508,  1510,  1512,
    1514,  1516,  1518,  1520,  1522,  1524,  1526,  1528,  1530,  1532,
    1538,  1541,  1545,  1546,  1553,  1555,  1561,  1564,  1568,  1569,
    1577,  1580,  1584,  1589,  1597,  1598,  1599,  1603,  1610,  1621,
    1629,  1656,  1664,  1675,  1678,  1689,  1698,  1710,  1713,  1717,
    1729,  1727,  1741,  1738,  1751,  1762,  1771,  1774,  1778,  1783,
    1788,  1795,  1806,  1810,  1817,  1818,  1827,  1832,  1839,  1848,
    1853,  1861,  1869,  1876,  1884,  1893,  1901,  1908,  1916,  1924,
    1931,  1939,  1947,  1955,  1962,  1973,  1974,  1978,  1982,  1987,
    1991,  2000,  2004,  2014,  2015,  2021,  2030,  2038,  2046,  2048,
    2056,  2057,  2065,  2071,  2086,  2093,  2100,  2108,  2115,  2123,
    2135,  2136,  2137,  2138,  2139,  2140,  2141,  2142,  2143,  2144,
    2145,  2146,  2150,  2159,  2171,  2179,  2186,  2195,  2206,  2213,
    2221,  2233,  2240,  2245,  2252,  2267,  2276,  2285,  2296,  2297,
    2301,  2313,  2326,  2325,  2357,  2374,  2381,  2383,  2385,  2387,
    2392,  2414,  2419,  2426,  2430,  2436,  2447,  2453,  2462,  2471,
    2479,  2487,  2492,  2500,  2510,  2512,  2513,  2514,  2515,  2527,
    2533,  2540,  2548,  2557,  2569,  2573,  2577,  2581,  2587,  2597,
    2602,  2610,  2614,  2618,  2624,  2634,  2639,  2647,  2651,  2655,
    2663,  2668,  2676,  2680,  2684,  2689,  2697,  2705,  2707,  2711,
    2712,  2716,  2721,  2725,  2726,  2730,  2734,  2741,  2768,  2773,
    2776,  2780,  2785,  2793,  2798,  2799,  2803,  2810,  2814,  2818,
    2822,  2830,  2834,  2838,  2846,  2851,  2861,  2862,  2863,  2867,
    2873,  2879,  2887,  2895,  2902,  2909,  2916,  2926,  2927,  2928,
    2932,  2939,  2949,  2957,  2958,  2962,  2963,  2968,  2972,  2973,
    2978,  2986,  2988,  2998,  2999,  3004,  3010,  3015,  3023,  3025,
    3030,  3040,  3041,  3046,  3047,  3051,  3052,  3057,  3064,  3079,
    3085,  3087,  3097,  3104,  3109,  3110,  3111,  3115,  3116,  3120,
    3122,  3133,  3132,  3155,  3156,  3164,  3163,  3189,  3196,  3206,
    3214,  3221,  3230,  3239,  3252,  3260,  3270,  3275,  3287,  3298,
    3306,  3316,  3321,  3333,  3344,  3346,  3348,  3350,  3356,  3365,
    3367,  3369,  3370
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
  "\"end of file\"", "error", "\"invalid token\"", "\"auto\"", "\"bool\"",
  "\"complex\"", "\"break\"", "\"case\"", "\"char\"", "\"const\"",
  "\"continue\"", "\"default\"", "\"do\"", "\"double\"", "\"else\"",
  "\"enum\"", "\"extern\"", "\"float\"", "\"for\"", "\"goto\"", "\"if\"",
  "\"inline\"", "\"int\"", "\"long\"", "\"register\"", "\"restrict\"",
  "\"return\"", "\"short\"", "\"signed\"", "\"sizeof\"", "\"static\"",
  "\"struct\"", "\"switch\"", "\"typedef\"", "\"union\"", "\"unsigned\"",
  "\"void\"", "\"volatile\"", "\"wchar_t\"", "\"while\"", "\"->\"",
  "\"++\"", "\"--\"", "\"<<\"", "\">>\"", "\"<=\"", "\">=\"", "\"==\"",
  "\"!=\"", "\"&&\"", "\"||\"", "\"...\"", "\"*=\"", "\"/=\"", "\"%=\"",
  "\"+=\"", "\"-=\"", "\"<<=\"", "\">>=\"", "\"&=\"", "\"^=\"", "\"|=\"",
  "TOK_IDENTIFIER", "TOK_TYPEDEFNAME", "TOK_INTEGER", "TOK_FLOATING",
  "TOK_CHARACTER", "TOK_STRING", "TOK_ASM_STRING", "\"__int8\"",
  "\"__int16\"", "\"__int32\"", "\"__int64\"", "\"__ptr32\"",
  "\"__ptr64\"", "\"typeof\"", "\"__auto_type\"", "\"__float80\"",
  "\"__float128\"", "\"__int128\"", "\"_Decimal32\"", "\"_Decimal64\"",
  "\"_Decimal128\"", "\"__asm__\"", "\"__asm__ (with parentheses)\"",
  "\"__attribute__\"", "\"aligned\"", "\"transparent_union\"",
  "\"packed\"", "\"vector_size\"", "\"mode\"", "\"__gnu_inline__\"",
  "\"weak\"", "\"alias\"", "\"section\"", "\"noreturn\"",
  "\"constructor\"", "\"destructor\"", "\"__label__\"", "\"__asm\"",
  "\"__based\"", "\"_var_arg_typeof\"", "\"__builtin_va_arg\"",
  "\"__builtin_types_compatible_p\"", "\"__builtin_convertvector\"",
  "\"__offsetof\"", "\"__alignof__\"", "\"__try\"", "\"__finally\"",
  "\"__except\"", "\"__leave\"", "\"__declspec\"", "\"__interface\"",
  "\"__cdecl\"", "\"__stdcall\"", "\"__fastcall\"", "\"__clrcall\"",
  "\"forall\"", "\"exists\"", "\"\\\\forall\"", "\"\\\\exists\"",
  "\"array_of\"", "\"__CPROVER_bitvector\"", "\"__CPROVER_floatbv\"",
  "\"__CPROVER_fixedbv\"", "\"__CPROVER_atomic\"", "\"__CPROVER_bool\"",
  "\"__CPROVER_throw\"", "\"__CPROVER_catch\"", "\"__CPROVER_try\"",
  "\"__CPROVER_finally\"", "\"__CPROVER_ID\"",
  "\"__CPROVER_loop_invariant\"", "\"__CPROVER_requires\"",
  "\"__CPROVER_ensures\"", "\"==>\"", "\"<==>\"", "\"TRUE\"", "\"FALSE\"",
  "\"__real__\"", "\"__imag__\"", "\"_Alignas\"", "\"_Atomic\"",
  "\"_Atomic()\"", "\"_Generic\"", "\"_Imaginary\"", "\"_Noreturn\"",
  "\"_Static_assert\"", "\"_Thread_local\"", "\"nullptr\"",
  "\"constexpr\"", "TOK_SCANNER_ERROR", "TOK_SCANNER_EOF", "\"catch\"",
  "\"char16_t\"", "\"char32_t\"", "\"class\"", "\"delete\"",
  "\"decltype\"", "\"explicit\"", "\"friend\"", "\"mutable\"",
  "\"namespace\"", "\"new\"", "\"noexcept\"", "\"operator\"",
  "\"private\"", "\"protected\"", "\"public\"", "\"template\"", "\"this\"",
  "\"throw\"", "\"typeid\"", "\"typename\"", "\"try\"", "\"using\"",
  "\"virtual\"", "\"::\"", "\".*\"", "\"->*\"", "TOK_UNARY_TYPE_PREDICATE",
  "TOK_BINARY_TYPE_PREDICATE", "\"__uuidof\"", "\"__if_exists\"",
  "\"__if_not_exists\"", "\"__underlying_type\"", "'('", "')'", "','",
  "':'", "'.'", "'['", "']'", "'{'", "'}'", "'&'", "'*'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'='",
  "';'", "$accept", "grammar", "identifier", "typedef_name", "integer",
  "floating", "character", "string", "constant", "primary_expression",
  "generic_selection", "generic_assoc_list", "generic_association",
  "gcc_builtin_expressions", "clang_builtin_expressions",
  "cw_builtin_expressions", "offsetof", "offsetof_member_designator",
  "quantifier_expression", "loop_invariant_opt", "requires_opt",
  "ensures_opt", "statement_expression", "postfix_expression",
  "member_name", "argument_expression_list", "unary_expression",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "logical_implication_expression", "logical_equivalence_expression",
  "conditional_expression", "assignment_expression", "comma_expression",
  "constant_expression", "comma_expression_opt", "declaration",
  "static_assert_declaration", "default_declaring_list", "@1", "@2", "$@3",
  "post_declarator_attribute", "post_declarator_attributes",
  "post_declarator_attributes_opt", "declaring_list", "@4", "@5", "$@6",
  "declaration_specifier", "type_specifier", "declaration_qualifier_list",
  "type_qualifier_list", "attribute_type_qualifier_list",
  "declaration_qualifier", "type_qualifier", "alignas_specifier",
  "attribute_or_type_qualifier",
  "attribute_or_type_qualifier_or_storage_class",
  "attribute_type_qualifier_storage_class_list",
  "basic_declaration_specifier", "basic_type_specifier",
  "sue_declaration_specifier", "sue_type_specifier",
  "typedef_declaration_specifier", "typeof_declaration_specifier",
  "atomic_declaration_specifier", "typedef_type_specifier",
  "typeof_specifier", "typeof_type_specifier", "atomic_specifier",
  "atomic_type_specifier", "msc_decl_identifier", "msc_decl_modifier",
  "msc_declspec_seq", "msc_declspec", "msc_declspec_opt", "storage_class",
  "basic_type_name", "elaborated_type_name", "array_of_construct",
  "pragma_packed", "aggregate_name", "$@7", "$@8", "$@9", "aggregate_key",
  "gcc_type_attribute", "gcc_attribute", "gcc_attribute_list",
  "gcc_attribute_specifier", "gcc_type_attribute_opt",
  "gcc_type_attribute_list", "member_declaration_list_opt",
  "member_declaration_list", "member_declaration",
  "member_default_declaring_list", "member_declaring_list",
  "member_declarator", "member_identifier_declarator",
  "bit_field_size_opt", "bit_field_size", "enum_name", "$@10", "$@11",
  "enum_key", "enumerator_list_opt", "enumerator_list",
  "enumerator_declaration", "enumerator_value_opt", "parameter_type_list",
  "KnR_parameter_list", "KnR_parameter", "parameter_list",
  "parameter_declaration", "identifier_or_typedef_name", "type_name",
  "initializer_opt", "initializer", "initializer_list",
  "initializer_list_opt", "designated_initializer", "designator",
  "statement", "declaration_statement", "labeled_statement",
  "compound_statement", "compound_scope", "statement_list",
  "expression_statement", "selection_statement",
  "declaration_or_expression_statement", "iteration_statement", "$@12",
  "jump_statement", "gcc_local_label_statement", "gcc_local_label_list",
  "gcc_local_label", "gcc_asm_statement", "msc_asm_statement",
  "msc_seh_statement", "cprover_exception_statement",
  "volatile_or_goto_opt", "gcc_asm_commands", "gcc_asm_assembler_template",
  "gcc_asm_outputs", "gcc_asm_output", "gcc_asm_output_list",
  "gcc_asm_inputs", "gcc_asm_input", "gcc_asm_input_list",
  "gcc_asm_clobbered_registers", "gcc_asm_clobbered_register",
  "gcc_asm_clobbered_registers_list", "gcc_asm_labels",
  "gcc_asm_labels_list", "gcc_asm_label", "translation_unit",
  "external_definition_list", "external_definition", "asm_definition",
  "function_definition", "function_body", "KnR_parameter_header_opt",
  "KnR_parameter_header", "KnR_parameter_declaration",
  "KnR_declaration_qualifier_list", "KnR_basic_declaration_specifier",
  "KnR_typedef_declaration_specifier", "KnR_sue_declaration_specifier",
  "KnR_declaration_specifier", "KnR_parameter_declaring_list",
  "function_head", "declarator", "paren_attribute_declarator",
  "typedef_declarator", "parameter_typedef_declarator",
  "clean_typedef_declarator", "clean_postfix_typedef_declarator",
  "paren_typedef_declarator", "paren_postfix_typedef_declarator",
  "simple_paren_typedef_declarator", "identifier_declarator",
  "unary_identifier_declarator", "postfix_identifier_declarator",
  "paren_identifier_declarator", "abstract_declarator",
  "parameter_abstract_declarator", "postfixing_abstract_declarator",
  "$@13", "parameter_postfixing_abstract_declarator", "$@14",
  "array_abstract_declarator", "unary_abstract_declarator",
  "parameter_unary_abstract_declarator", "postfix_abstract_declarator",
  "parameter_postfix_abstract_declarator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1005)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-572)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1896, -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005,
   -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005,
   -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005,
   -1005, -1005,  -127,   840, -1005, -1005, -1005, -1005, -1005, -1005,
   -1005,  -103,   -92,   -28,   -12,  -117,    26,    33,    64, -1005,
   -1005,   191,    80, -1005,    83, -1005,   131, -1005,    65,   258,
    1675,    65, -1005,   337, -1005,   101, -1005,   147,   -70,    25,
     145,   604,  2190,  2190, -1005, -1005,  5731,  5731,  5813,  5813,
    5813,  5813,  5813,  5813,  1284,  1034,  1284,  1034, -1005, -1005,
     101, -1005, -1005, -1005,   101, -1005, -1005,   101, -1005,  1896,
   -1005, -1005, -1005,   239, -1005, -1005, -1005,    87,  4130,   910,
    1251,    87,   -31, -1005, -1005, -1005, -1005, -1005, -1005, -1005,
   -1005,   320,   208,  4721,    14,   101,  4721,  4721,  4721, -1005,
    4130,   101,  4721,   212,   309,   203,  1675, -1005, -1005, -1005,
   -1005, -1005, -1005, -1005, -1005,   101, -1005,    65, -1005,   101,
   -1005, -1005,   190, -1005,   860,   101, -1005, -1005,   101,   101,
   -1005,   101, -1005, -1005,   123,   101, -1005,  1284,  1284, -1005,
     101, -1005, -1005,   168,   101,   101, -1005,   101,   101, -1005,
   -1005, -1005,   101,   101,   101,   101,   101,  1338,   101,  1338,
     101, -1005,   333,     1, -1005,   273,   319,    19,  3357, -1005,
   -1005,   278,  4873,  4905,  4905,     1, -1005, -1005, -1005, -1005,
     304,   313,   322,   329,   354,  4991, -1005, -1005, -1005, -1005,
    4721,  4721,   370,  4044,  4721,  4721,  4721,  4721,  4721,  4721,
   -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005,
   -1005, -1005, -1005, -1005,   124, -1005,   465,   227,   -84,   105,
      42,   404,   279,   296,   360,   515,   -18, -1005,  -100, -1005,
   -1005,   297,  5976,   382,   934,  1527, -1005,   997,   395,   397,
      87,   910,  1534, -1005, -1005, -1005, -1005,   193, -1005,   -31,
     391, -1005,   435,  1749,   305, -1005, -1005, -1005, -1005, -1005,
     442, -1005,    75,   430,   172,   204,   288,   384,   445,   451,
     456,    87, -1005, -1005, -1005, -1005, -1005, -1005,   840, -1005,
   -1005, -1005, -1005, -1005, -1005,   446, -1005,  1338,  1338, -1005,
     446, -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005,
   -1005, -1005, -1005,     1, -1005, -1005,   458,    -1,  4721,   473,
   -1005,  5567,    12,  5421, -1005,  4162, -1005,   472, -1005, -1005,
    3497, -1005, -1005,  4766,  4044, -1005,  4044, -1005, -1005, -1005,
   -1005,   101,  4721,   101,  4721,   101,  4044, -1005,   479,   490,
    5129,  5129, -1005, -1005,  4721,   409,   499,   509,   506, -1005,
   -1005, -1005, -1005, -1005, -1005,     1, -1005, -1005,  4269,     1,
    4721,  4721,  4721,  4721,  4721,  4721,  4721,  4721,  4721,  4721,
    4721,  4721,  4721,  4721,  4721,  4721,  4721,  4721,  4721,  4721,
    4721,  4721,  4721,  4721,  4721,  4721,  4721,  4721,  4721,  4721,
    4721,  4721,  4314, -1005,  4721,   230,  2475,  6055,  1284,  1284,
   -1005, -1005, -1005,   357,   934,   520,    87,    87,   524,   366,
     934, -1005, -1005,   665,   694,   531, -1005,  4421,   525,   553,
   -1005, -1005,   567,   569, -1005, -1005,   571,   575, -1005, -1005,
   -1005, -1005, -1005,   417, -1005,   735, -1005, -1005, -1005, -1005,
     587,   591, -1005, -1005, -1005,  4721, -1005,   446,   -31,   446,
     446,  4421, -1005, -1005,   573,   594,     1, -1005,   596, -1005,
     606,  4721, -1005, -1005,   840,  5894,  1034,  5731,  5813, -1005,
    5567, -1005,  5649,  5731,  5813, -1005,   840,    51, -1005,   438,
   -1005,   769,   769,  2044,  2044,   616,   603, -1005, -1005, -1005,
   -1005,   635, -1005,  4453,   645,   659,   669,   674,   664,   678,
     684,   685,   689,  5129,  5129,  1386,   145,   604,  2190,  2190,
    1386,   690, -1005,  4560, -1005,  2621, -1005, -1005, -1005, -1005,
     443, -1005, -1005,   342, -1005, -1005, -1005, -1005, -1005, -1005,
   -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005,   227,   227,
     -84,   -84,   105,   105,   105,   105,    42,    42,   404,   279,
     296,   360,   515, -1005, -1005,  4721,   448, -1005,    63,  1682,
   -1005, -1005, -1005, -1005, -1005, -1005, -1005,    87, -1005, -1005,
   -1005, -1005,   376, -1005, -1005,   320,  3944, -1005, -1005, -1005,
    4721,  4721,    12,   810,   812,   693,  1749,   695,   696,   676,
    4721,  4721,   700, -1005, -1005, -1005, -1005, -1005,   153,   701,
     101,   702,   709, -1005,   101,     1, -1005,   712, -1005, -1005,
     101,   101, -1005,   101, -1005,   101,     1,     1,   101,   101,
     101, -1005,   840, -1005,  5567,    12,   578,  1249,    65, -1005,
     101, -1005, -1005, -1005, -1005, -1005,   101, -1005,   642,  1662,
     101, -1005,   101, -1005,  5567,  5275, -1005, -1005, -1005,   711,
     711, -1005,   101,   101,   101,     1,   711,  4721,  4721,  4721,
   -1005,   -31,   -31, -1005, -1005, -1005,    68,  3944, -1005,   679,
    4721,   703,   725,  3017, -1005,  4605,   729,  3605,   733,   736,
     730,   193,     1,   -33, -1005, -1005,   716, -1005, -1005,   738,
     -34,   742,   726, -1005,   745, -1005, -1005, -1005, -1005,  2819,
   -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005, -1005,
    4721, -1005, -1005,  4721,   749,   750,   752,  1682, -1005, -1005,
   -1005, -1005,   753,   758,     1,  4721,   760,   772, -1005,   754,
     768, -1005,  3636,   455,   462,   776,   781,   782, -1005, -1005,
   -1005, -1005,   315,   358,   399, -1005,   446, -1005,   766,  5976,
     783,   192, -1005,   156,   157,   153, -1005,   101,     1,   770,
     786, -1005, -1005, -1005, -1005, -1005,   101,   101, -1005, -1005,
   -1005, -1005, -1005,  5567, -1005, -1005,   789,   796,  1249, -1005,
   -1005, -1005,  1662, -1005, -1005, -1005, -1005, -1005,   798,   802,
     805,    38, -1005,   125,   243,   820,   475, -1005,   821,   813,
     817, -1005,   -21, -1005,  3017,   974,   830,   808,   210,  4721,
   -1005,   218,  4721,  4721, -1005,    30,   224, -1005, -1005,   950,
     562, -1005,   176, -1005,  3017, -1005, -1005, -1005, -1005, -1005,
      87,    87, -1005, -1005,    28,   833, -1005,   -17,  4421,  3744,
   -1005,     1,  4721,  4421, -1005, -1005, -1005, -1005, -1005, -1005,
     488, -1005, -1005, -1005, -1005,   795,  2335,   101, -1005,   618,
   -1005,   795, -1005,   831, -1005, -1005,  4721, -1005,   101, -1005,
   -1005,   162, -1005, -1005, -1005, -1005, -1005,     1, -1005,     1,
    4721, -1005, -1005,  4721, -1005,    68,  4721,  3844, -1005,  4721,
    3017, -1005,   838,  3215, -1005, -1005,   491, -1005,   501,   841,
     320,   961,     1, -1005,   836, -1005,   845, -1005, -1005,   843,
   -1005, -1005, -1005,     1,   856, -1005,   859,    29,   865,  4721,
   -1005, -1005, -1005, -1005, -1005,   -11, -1005, -1005,   315,  4721,
   -1005,   101,   868, -1005,   101,   868, -1005, -1005, -1005,   101,
   -1005, -1005,   873, -1005, -1005, -1005,   402, -1005, -1005, -1005,
   -1005,   872, -1005,  4721, -1005, -1005,  4721,  3017,  3017,   930,
     876,   875, -1005, -1005, -1005,  4721, -1005, -1005, -1005,   880,
    4721,    28,     1,   892, -1005,   891,   320,   897,   410,  4721,
   -1005,   881, -1005, -1005,   101, -1005, -1005,   101, -1005, -1005,
   -1005,  3017,   550,   879,  1067, -1005,   904,  3017,   882, -1005,
     584,   320,   593, -1005,   900,  4721,    29, -1005, -1005,   905,
       1, -1005, -1005,   429,   315, -1005, -1005, -1005, -1005,   930,
    4721,  3017,  4721, -1005, -1005, -1005,   908, -1005,   320,   597,
   -1005,   320, -1005,   911, -1005, -1005,   913,   896,   932, -1005,
     937, -1005,  4721,   939, -1005, -1005,     1, -1005, -1005,   930,
   -1005,   608,  4721, -1005,  3017, -1005,   623, -1005, -1005
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     487,   253,   278,   279,   264,   181,   274,   345,   251,   267,
     255,   259,   266,   254,   182,   265,   275,   252,   295,   250,
     296,   276,   277,   183,     3,     5,   260,   261,   262,   263,
     185,   186,     0,     0,   268,   269,   270,   271,   272,   273,
     257,     0,     0,     0,     0,     0,     0,     0,     0,   184,
     283,     0,     0,   180,     0,   315,     0,   256,     0,     0,
       0,     0,   494,     0,   562,   316,   492,     0,     0,     0,
       0,     0,     0,     0,   173,   188,   158,   163,   159,   164,
     160,   161,   162,   165,   226,   166,   231,   167,   258,   168,
     316,   209,   286,   284,   316,   170,   285,   316,     2,   488,
     489,   493,   491,    44,   522,   553,   555,   554,   316,     0,
       0,   535,   149,   529,   528,   534,   537,   538,   533,   543,
     527,     0,     0,     0,     0,   316,     0,     0,     0,     4,
     316,   316,     0,     0,     0,     0,     0,   191,   176,   192,
     556,   557,     1,   318,   221,   317,   135,     0,   137,   316,
     136,   133,   149,   134,   149,   316,   172,   179,   316,   316,
     178,   316,   206,   171,   139,   316,   174,   227,   232,   169,
     316,   210,   175,   141,   316,   316,   204,   316,   316,   208,
     211,   207,   316,   316,   316,   316,   316,   229,   316,   234,
     316,   202,   248,   340,   490,     0,    46,   575,     0,   559,
     569,   573,     0,     0,     0,     0,     6,     7,     8,     9,
       0,     0,     0,     0,     0,     0,   421,   421,   421,   421,
       0,     0,     0,   316,     0,     0,     0,     0,     0,     0,
      14,    10,    11,    12,    13,    15,    49,    23,    18,    19,
      20,    21,    22,    17,    63,    77,    81,    85,    88,    91,
      96,    99,   101,   103,   105,   107,   109,   111,   113,   116,
     128,     0,     0,     0,     0,     0,   551,     0,     0,     0,
       0,     0,     0,   532,   539,   546,   536,   454,   148,   150,
       0,   146,     0,   310,     0,   237,   235,   236,   247,   243,
     238,   244,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   560,   563,   496,   177,   558,   319,   143,     0,   151,
     153,   213,   216,   219,   198,   381,   222,   228,   233,   203,
     381,   200,   201,   199,   205,   214,   217,   220,   223,   212,
     215,   218,   249,   289,   375,   376,     0,   316,     0,     0,
     421,   574,     0,     0,   577,     0,   130,     0,   193,   196,
       0,   195,   194,     0,   316,    73,   316,    64,    65,   443,
      67,   316,     0,   316,     0,   316,   316,    75,     0,     0,
       0,     0,    79,    80,     0,     0,     0,     0,     0,    66,
      68,    69,    70,    71,    72,     0,    55,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,     0,   377,   379,   163,   164,   165,
     166,   167,   225,     0,     0,     0,   541,   548,     0,     0,
       0,   540,   547,   456,   455,     0,   147,     0,     0,   300,
     298,   297,     0,     0,   303,   304,     0,     0,   307,   308,
     309,   311,   312,     0,   187,     0,   246,   245,   287,   280,
       0,     0,   189,   190,   230,     0,   561,   381,   149,   381,
     381,     0,   140,   142,     0,   293,   346,   344,     0,    81,
       0,     0,   498,   497,     0,     0,   173,   163,   165,   504,
     570,   501,     0,   516,   517,   518,     0,     0,   358,     0,
     356,   361,   368,   365,   372,     0,   354,   359,   579,   580,
     578,     0,   197,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,    48,   131,    59,    60,    54,    51,
       0,    61,    53,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   117,    82,    83,    84,    86,    87,
      89,    90,    94,    95,    92,    93,    97,    98,   100,   102,
     104,   106,   108,   110,   112,     0,     0,   129,   575,   584,
     588,   378,   566,   564,   565,   380,   552,   530,   542,   550,
     549,   544,     0,   457,   458,     0,   389,   383,   155,   495,
       0,     0,     0,     0,     0,     0,   310,     0,     0,     0,
       0,     0,     0,   144,   156,   152,   154,   382,   316,     0,
     316,     0,   347,   348,   316,   346,    45,     0,   520,   505,
     316,   316,   502,   316,   506,   316,     0,     0,   316,   316,
     316,   519,     0,   503,   499,     0,   575,   589,   593,   364,
     316,   362,   601,   567,   568,   371,   316,   369,   575,   589,
     316,   366,   316,   373,   499,     0,   581,   583,   582,    74,
       0,    32,   316,   316,   316,     0,    76,     0,     0,   421,
      39,   149,   149,   139,   141,    41,   316,   389,    78,     0,
       0,     0,     0,   131,   432,     0,     0,     0,     0,     0,
       0,   454,     0,     0,   421,   450,     0,   421,   418,    14,
     316,   132,     0,   412,     0,   422,   402,   400,   401,   131,
     403,   404,   405,   406,   408,   407,   409,   410,   411,    52,
       0,    50,   115,     0,     0,     0,     0,   585,   586,   531,
     545,   464,     0,   459,     0,     0,    14,     0,   390,   388,
       0,   386,     0,     0,     0,     0,     0,     0,   314,   313,
     240,   239,     0,     0,     0,   138,   381,   326,     0,     0,
       0,   316,   322,     0,     0,   316,   294,   316,   350,   352,
       0,    47,   508,   511,   512,   507,   316,   316,   509,   510,
     513,   521,   572,   500,   357,   574,     0,     0,   590,   591,
     363,   370,   590,   367,   374,   576,   355,   360,     0,     0,
       0,     0,    34,     0,     0,     0,     0,    25,     0,   388,
       0,   437,     0,   436,   131,     0,     0,     0,     0,     0,
     438,     0,     0,   131,   420,     0,     0,   441,   447,     0,
       0,   451,     0,   424,   131,   419,   423,    62,   114,   596,
     594,   595,   587,   145,   466,   460,   394,     0,     0,     0,
     384,     0,     0,     0,   392,   301,   299,   302,   305,   306,
       0,   281,   282,   157,   327,   333,     0,   316,   323,     0,
     325,   333,   324,     0,   341,   349,     0,   351,   316,   514,
     515,   599,   600,   592,    29,    30,    31,     0,    33,     0,
       0,    38,    40,     0,    24,   316,     0,     0,    57,     0,
     131,   417,     0,   131,   435,   434,     0,   439,     0,     0,
       0,     0,     0,   440,     0,   421,     0,   421,   421,   170,
     414,   598,   597,     0,     0,   469,   465,   472,   461,     0,
     395,   393,   385,   387,   399,     0,   391,   241,     0,     0,
     330,   316,   337,   328,   316,   337,   288,   329,   331,   316,
     353,   343,   575,   602,    37,    35,     0,    28,    26,    27,
      58,     0,   415,     0,   428,   429,   131,   131,   131,    42,
       0,     0,   442,   446,   449,     0,   452,   453,   413,     0,
       0,     0,     0,     0,   475,   471,   478,   462,     0,     0,
     397,     0,   339,   334,   316,   338,   336,   316,   290,   288,
      36,   131,     0,     0,   425,   427,     0,   131,     0,   445,
       0,     0,     0,   470,     0,     0,     0,   479,   480,   477,
     483,   463,   396,     0,     0,   332,   335,   292,   416,    42,
     131,   131,     0,   430,   444,   421,     0,   467,     0,     0,
     476,     0,   486,   482,   484,   398,     0,     0,     0,   426,
       0,   448,     0,     0,   473,   481,     0,   242,   431,    42,
      43,     0,     0,   485,   131,   468,     0,   433,   474
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1005, -1005,     0,    47, -1005, -1005, -1005,  -108, -1005,  -308,
   -1005, -1005,   214, -1005, -1005, -1005, -1005, -1005, -1005, -1004,
   -1005, -1005, -1005, -1005,  -339, -1005,   246,  -123,   400,   433,
     336,   411,   719,   720,   718,   722,   727, -1005,   428, -1005,
    -273,   825,     3,  -191,  -817,    85,  -586, -1005, -1005, -1005,
   -1005,   858, -1005,   -97, -1005, -1005, -1005, -1005,     9,    41,
      52,   236,   -54,   107,  1288, -1005,  -131,   797, -1005, -1005,
    -252, -1005,    -9, -1005, -1005, -1005,    89,   -71,   267,   -50,
     292,  -451,   857, -1005,   958, -1005,  1031,   -56,   -35, -1005,
     132, -1005, -1005, -1005, -1005,   650, -1005,   538, -1005,   588,
     983,   -81,   371, -1005,   374, -1005, -1005,   271,   275,   205,
    -765, -1005, -1005, -1005,   670,   539, -1005,   388, -1005, -1005,
   -1005,   526, -1005,   504,  -181,   874,  -301,  -290,   483,   487,
    -826, -1005,  -613,   262, -1005,  -212,   600, -1005,   263, -1005,
   -1005, -1005, -1005, -1005, -1005, -1005,  -202, -1005, -1005, -1005,
   -1005,   477,   260, -1005, -1005,   196, -1005, -1005,   155, -1005,
   -1005,   133, -1005, -1005, -1005,   116, -1005, -1005,  1099, -1005,
   -1005, -1005,   527,   862,  -475, -1005, -1005, -1005, -1005, -1005,
   -1005, -1005,    22,  1090, -1005,  -102,   -91, -1005,   -61, -1005,
     -82,    62,   -29, -1005,   -27,  -422,  -445,   607, -1005,   351,
   -1005, -1005,   617,  -612,   619,  -425
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    63,   230,   111,   231,   232,   233,   234,   235,   236,
     237,   826,   827,   238,   239,   240,   241,   821,   242,  1027,
     196,   340,   243,   244,   757,   550,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   721,   607,   722,   723,    67,    68,   315,   320,
     477,   278,   279,   309,    69,   479,   480,   776,   536,   537,
     538,   539,   272,   156,    74,    75,   138,   349,   350,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,   290,   291,   292,    88,   333,    89,    90,    91,    92,
    1018,    93,   484,   629,   630,    94,   461,   462,   463,   143,
     262,   145,   780,   781,   782,   783,   784,   960,   963,  1014,
     961,    96,   336,   488,    97,   631,   632,   633,   897,   515,
     509,   510,   516,   517,   724,   828,   482,   758,   759,   760,
     761,   762,   725,   726,   727,   728,   378,   729,   730,   731,
     986,   732,   836,   733,   734,   846,  1062,   735,   736,   737,
     738,   445,   752,   753,   865,   945,   946,   948,  1004,  1005,
    1007,  1038,  1039,  1041,  1063,  1064,    98,    99,   100,   101,
     102,   493,   802,   803,   501,   502,   503,   504,   505,   506,
     507,   103,   962,   113,   114,   115,   116,   117,   118,   119,
     439,   120,   105,   106,   107,   591,   809,   438,   342,   200,
     343,   201,   593,   663,   594,   664
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,   158,   167,   360,   595,   304,   136,   347,   274,    70,
     427,   377,   337,   282,   619,   280,   161,   170,   268,   483,
     175,   178,   159,   168,   359,   642,   929,   270,   267,   133,
     919,   134,   419,    64,   949,   848,   421,   162,   171,   285,
    1009,    71,   778,   953,   806,  1067,   548,    65,   269,   275,
     552,    42,    72,   277,    42,   112,   806,   310,    64,   108,
      64,    64,   104,    24,    25,   490,   661,   667,   671,   673,
      64,    64,    64,    64,    24,  1084,   286,   287,   907,   825,
     133,  -571,   134,   121,    42,    66,   125,   409,   410,   497,
     835,   953,   152,   154,   122,   209,   209,   372,   373,    64,
     285,   379,   380,   381,   382,   383,   384,   422,    70,    64,
      64,   261,    55,   405,   406,    55,   856,   420,   147,   155,
     165,   964,   140,   141,   964,  -571,   284,    24,   492,   294,
     295,   296,    51,   297,   164,   173,    64,   286,   287,   148,
      71,   304,   377,    51,   377,    55,    65,    64,   407,   408,
    -571,    72,   485,    42,   377,  -376,   266,   608,   123,   521,
     849,   104,   524,   274,   385,   386,   387,   748,   920,  1023,
     441,   424,   140,   268,   124,   950,   623,   424,   625,   626,
     268,  1010,   433,   174,    66,   179,    42,   182,   183,   184,
     267,   627,  -342,   334,  -571,   778,    51,  1015,   305,   778,
    1015,   288,   289,   269,   275,   334,   341,    24,    25,   307,
     269,   442,   443,   149,    55,   489,   930,   126,   637,   943,
    1002,   921,   380,   931,   127,   908,   375,   690,   909,   910,
     444,   807,   695,  1068,   150,   133,    73,   134,    42,   652,
     335,   940,   133,   807,   134,   411,   412,    55,   497,   588,
     341,    58,   335,   428,   198,   128,  -525,  -525,   129,   589,
     653,    60,   466,   289,    64,    64,   130,    64,   590,   131,
      61,    64,    64,   197,   277,    42,    51,    42,   198,   565,
     566,   567,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,    55,
      56,  -526,  -526,   425,   937,   634,   938,   982,    64,    65,
     388,   266,   742,   424,   389,   390,  -525,   132,   266,   911,
     187,   880,   189,  -523,  -523,   862,   135,   140,   642,   435,
     478,   109,   428,   334,   305,    73,    55,   142,    55,    56,
     285,   110,   508,   268,   889,   891,   822,  -320,   972,   268,
      61,   429,   511,   198,   151,   167,   146,   375,   602,   375,
     424,  -526,   777,   903,   469,   890,   892,   903,   489,   375,
     170,   178,   195,   269,  1024,  1025,   168,   286,   287,   269,
     335,   624,   494,  -523,   512,   546,  -321,   209,    65,   546,
      65,   171,   424,   553,   283,   513,   470,   303,   424,   301,
     380,   777,   497,   317,   318,   133,   424,   134,  1048,   659,
     665,   133,   932,   134,  1053,   866,   588,    65,    65,   925,
     698,   198,   497,   402,   167,   586,   589,   927,   403,   404,
     498,   424,   547,   933,    64,   590,   547,   912,  1069,   170,
      64,   178,   158,   167,    44,   168,   645,   649,   355,   357,
     358,   413,   414,   339,   634,   535,   540,   161,   170,   338,
     171,   367,   489,   159,   168,   796,   797,   158,   167,   353,
     858,  1087,   874,   165,   415,   883,   424,   377,   162,   171,
     471,   266,   161,   170,   423,   424,   334,   266,   159,   168,
     361,   428,   464,   424,    64,   197,   302,   751,   426,   362,
     198,   416,   850,   162,   171,   852,    64,  1011,   363,   832,
     847,    64,    64,    64,    64,   364,   638,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   427,   651,   430,
     424,   359,   954,   335,   741,   747,    64,    64,    64,    64,
     365,   494,   165,   197,   596,   719,   424,    65,   198,   643,
     881,   497,   197,   601,   431,   274,   374,   198,   691,   692,
     155,   165,   197,   750,   418,   268,   417,   198,   974,   432,
     975,   472,   424,   660,   666,   670,   672,   495,   951,   514,
      65,    65,   436,   956,   437,   155,   165,   424,    95,   498,
     424,   882,   720,  1066,  1020,   310,   542,   424,   424,   447,
     693,   694,  1042,   808,   615,   616,   756,   634,   430,   644,
     648,   650,   765,   763,   764,   812,   304,   424,   687,   688,
     489,  1065,   448,   773,   774,   654,   655,   133,   465,   134,
     739,   740,   473,   431,   468,   334,   424,   743,   474,   133,
      24,   134,   875,   424,   475,   428,   334,   334,   139,   876,
     424,   486,    64,   547,   481,   508,    64,    64,    64,   491,
     163,   172,   914,   915,   519,   428,    24,    25,    64,    64,
     935,   936,   533,   401,   801,   957,   958,   304,   987,   424,
      24,   304,   335,   534,   511,   546,   543,    95,   988,   424,
     823,   824,   375,   335,   335,   494,   544,   756,   139,   545,
     281,    65,   603,   719,    24,   970,   441,   597,   838,    51,
     841,   600,   334,   604,   199,   494,   512,   605,   276,   140,
     141,    65,    65,   994,   139,   996,   997,   513,   981,   719,
     992,   140,   547,   306,   609,    51,   495,  1049,   424,   610,
     281,   199,   281,   498,   547,   572,   573,   574,   575,    51,
     720,   359,   837,   611,   546,   612,   944,   613,   867,   335,
     285,   614,   999,   498,   656,   805,   628,   430,  1012,   198,
     428,  1055,   424,    51,   657,   172,   720,   172,   620,  1070,
    1057,   424,   621,   658,  1074,   424,   352,  -291,   334,   635,
     109,   675,   431,   636,   428,  1085,   424,   286,   287,   617,
     110,   547,   618,   674,    58,   568,   569,   959,    64,    61,
    1088,   424,    64,   153,    60,   167,   368,   369,   370,   371,
     885,  1034,   751,    61,   576,   577,    65,   676,   668,   805,
     170,    24,    25,   198,   719,   335,   168,   678,   669,  1003,
     570,   571,   926,  1071,   494,   928,   679,   658,   583,   584,
      65,   171,   682,   139,   719,   306,   680,    24,    25,   359,
     139,   681,   662,   662,   662,   662,   683,   281,   429,   756,
     305,   546,   684,   685,   305,   955,   686,   766,   696,   767,
     768,   720,   770,   771,   772,    64,    64,   775,   831,    64,
     495,    64,   498,   944,   785,   359,   787,   788,  1037,   791,
      51,   720,    24,    25,   697,   172,   172,   546,   476,   546,
     495,   514,   833,   976,   834,   839,   547,   756,   547,   842,
     719,   430,   843,  1056,   844,   851,    51,  -375,  1003,   489,
     424,    95,   334,   165,   854,   853,   859,   860,   352,   861,
     863,   430,   869,   334,   277,    42,   431,   864,   965,   -59,
    1073,   965,  1008,  1037,   547,   656,   547,   300,    95,    95,
     198,   868,   870,   877,   547,   657,   431,   720,   878,   879,
      65,    51,    24,    25,   658,   884,   901,   887,   896,   335,
     898,   109,   263,   902,   959,   904,  1022,   719,   719,   905,
     335,   110,   906,  -524,  -524,    42,    24,    25,  1030,   293,
      61,   917,   334,  1032,   298,   299,    55,   662,   662,   913,
     916,   918,  1043,   922,   172,   886,   923,   924,   934,   662,
     662,   719,   947,   346,   983,   969,   109,   719,   989,   991,
     993,   995,   592,   592,   720,   720,   110,     1,  1059,   495,
     334,    51,  1000,   598,   599,    61,   430,  1001,   144,   335,
       8,   719,   998,  -524,  1006,    10,    55,   959,    13,    24,
     805,  1021,  1026,  1028,    17,    51,   281,    19,   720,  1029,
     430,   431,  1031,   191,   720,  1081,   334,   192,  1035,  1036,
     193,  1051,    42,   172,   719,  1086,  1040,   335,  1050,  1044,
    1052,  1054,  1058,  1061,  1072,   431,   264,   376,   720,  1076,
    1077,   163,   172,   160,   169,  1078,   265,   160,   177,   160,
     181,   160,   160,   160,   186,    61,   188,    40,   190,  1079,
     264,    95,    95,   335,  1080,  1082,   163,   172,    51,   978,
     265,   720,   308,    95,   578,   580,   579,   446,   311,    61,
     581,   312,   313,    55,   314,    44,   582,   522,   316,   467,
     332,  1047,   646,   319,   769,   888,   893,   321,   322,   662,
     323,   324,   968,   662,   967,   325,   326,   327,   328,   329,
    1017,   330,   647,   331,   790,   346,   895,   139,   346,   817,
     829,   804,    57,    58,   830,   984,   985,   528,   845,   530,
     990,  1060,  1083,    60,  1075,   744,   592,  1033,   194,   541,
     273,   815,    61,   500,   749,   745,     0,   746,     0,     0,
       0,     0,     0,   551,     0,     0,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   564,     0,   525,   351,
     526,     0,     0,     0,     0,   527,     0,   529,     0,   531,
     532,     0,     0,     0,     0,   139,     0,     0,     0,   587,
       0,     0,   973,     0,     0,     0,     0,   139,     5,     0,
       5,     0,     0,    95,     0,     0,     0,     0,     0,     0,
       0,     0,   346,     0,    14,     0,    14,     0,     0,   281,
     281,     0,     0,     0,     0,     0,    23,     0,    23,     0,
       0,    95,     0,     5,     0,     0,     0,     0,     0,     0,
     622,     0,     0,     0,     0,     0,   346,     0,     0,    14,
       0,    24,    25,    24,    25,     0,     0,    95,     0,     0,
     487,    23,    30,    31,    30,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    42,   139,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,   137,    43,
       0,    43,     0,     0,   592,     0,     0,    30,    31,     0,
     157,   166,     0,    14,   157,   176,   157,   180,   157,   157,
     157,   185,   499,     0,    49,    23,    49,     0,     0,     0,
      51,   351,    51,     0,    43,     0,     0,     0,     0,     0,
      52,    53,    52,    53,     0,    55,   139,    55,   137,     0,
     139,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    42,   137,    52,    53,     0,     0,     0,
       0,   346,     0,     0,     0,   656,     0,   271,    43,     0,
     198,     0,   939,     0,     0,   657,     0,   110,    24,     0,
     206,   207,   208,   209,   658,     0,    61,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,   941,   942,     0,
       0,     0,     0,     0,   172,   166,     0,   166,     0,    52,
      53,     0,     0,     0,    55,     0,   348,   210,   211,   212,
     213,   214,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   217,   218,   219,     0,    95,     0,
       0,    95,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,   346,     0,     0,   346,     0,   639,   640,   641,
     222,   499,     0,   160,   160,   160,     5,     0,     0,     0,
       0,     0,     0,     5,   160,   169,     0,     0,     0,     0,
       0,     0,    14,   137,     0,     0,   818,   819,   820,    14,
     137,     0,     0,     0,    23,   857,     0,     0,     0,   160,
     169,    23,   689,     0,     0,    95,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   346,     0,    24,
      25,     0,     0,     0,     0,     0,    24,    25,     0,     0,
      30,    31,     0,     0,     0,   166,   166,    30,    31,    95,
       0,   779,    42,   786,     0,    95,     0,   789,     0,    42,
       0,     0,     0,   792,   793,     0,   794,    43,   795,   496,
       0,   798,   799,   800,    43,     0,     0,     0,   348,    95,
       0,     0,     0,   810,     0,     0,     0,     0,     0,   811,
       0,     0,    49,   813,     0,   814,     0,     0,    51,    49,
       0,     0,     0,     0,     0,    51,     0,     0,    52,    53,
       0,     5,    95,    55,     0,    52,    53,     0,     0,     0,
      55,     0,     0,     0,     5,   499,     0,    14,     0,     0,
       0,     5,     0,   346,   346,     0,     0,     0,   346,    23,
      14,     0,     0,   144,     0,   499,     0,    14,     0,     0,
       0,     0,    23,   434,   166,   176,   180,   185,     0,    23,
     440,   346,     0,   265,    24,     0,     0,     0,     0,     0,
     265,     0,    61,     0,     0,    30,    31,    24,   977,    61,
       0,   979,   346,     0,   346,     0,     0,    42,    30,    31,
       0,     0,     0,     0,     0,    30,    31,     0,     0,     0,
      42,     0,    43,     0,   779,     0,     0,    42,   779,     0,
     894,     0,     0,     0,     0,    43,     0,     0,     0,   899,
     900,     0,    43,   166,   346,   176,   185,    49,   496,     0,
     157,   157,   157,    51,     0,     0,     0,     0,     0,     0,
      49,   157,   166,    52,    53,     0,    51,    49,    55,     0,
       0,     0,     0,     0,     0,     0,    52,    53,     0,     0,
       0,    55,     0,    52,    53,     0,   157,   166,    55,     0,
       0,     0,     0,     0,   499,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,     0,   668,     0,
       0,     0,     0,   198,     0,     0,     0,     0,   669,     0,
       0,    58,     0,     0,     0,     0,     0,   658,   588,     0,
     966,    60,     0,   198,     0,     0,     0,   137,   589,     0,
      61,   971,     0,     0,     0,     0,     0,   590,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     0,     0,     4,     5,     0,     0,     0,     6,
       0,     7,     8,     9,     0,     0,     0,    10,    11,    12,
      13,    14,     0,    15,    16,     0,    17,    18,     0,    19,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,   496,     0,  1013,   137,     0,  1016,     0,     0,
       0,     0,  1019,     0,     0,     0,     0,   137,    24,    25,
       0,     0,   496,     0,     0,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,  1045,     0,     0,
    1046,     0,     0,     0,     0,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,    46,    47,
      48,    49,    50,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,   137,     0,    52,    53,    54,
       0,     0,    55,    56,    57,     0,     0,     1,     2,     3,
       0,     0,     4,     5,     0,     0,     0,     6,     0,     7,
       8,     9,     0,     0,     0,    10,    11,    12,    13,    14,
       0,    15,    16,     0,    17,    18,     0,    19,    20,    21,
      22,    23,    58,     0,     0,     0,     0,     0,     0,    59,
       0,   496,    60,     0,     0,     0,   137,     0,     0,     0,
     137,    61,     0,     0,     0,    62,    24,    25,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
       0,    34,    35,    36,    37,    38,    39,    40,     0,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,    46,    47,    48,    49,
      50,     0,     0,     0,   166,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,     0,     0,
      55,     0,    57,     1,     2,     3,     0,     0,     4,     5,
       0,     0,     0,     6,     0,     7,     8,     9,     0,     0,
       0,    10,    11,    12,    13,    14,     0,    15,    16,     0,
      17,    18,     0,    19,    20,    21,    22,    23,     0,     0,
     668,     0,     0,     0,     0,   198,     0,     0,     0,     0,
     669,     0,     0,     0,     0,     0,     0,     0,     0,   658,
       0,     0,    24,    25,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,     0,    34,    35,    36,
      37,    38,    39,    40,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,    46,    47,    48,    49,    50,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,     0,     0,    55,     0,    57,     2,
       3,     0,     0,     4,     5,     0,     0,     0,     6,     0,
       7,     0,     9,     0,     0,     0,     0,    11,    12,     0,
      14,     0,    15,    16,     0,     0,    18,     0,     0,    20,
      21,    22,    23,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    61,     0,    24,    25,     0,
       0,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,     0,    34,    35,    36,    37,    38,    39,     0,     0,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,     2,
       3,    55,     0,     4,     5,     0,     0,     0,     6,     0,
       7,     0,     9,     0,     0,     0,     0,    11,    12,     0,
      14,     0,    15,    16,     0,     0,    18,     0,     0,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,   959,     0,     0,     0,     0,     0,
       0,    60,     0,     0,     0,     0,     0,     0,    25,     0,
      61,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,     0,    34,    35,    36,    37,    38,    39,     0,     0,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,     0,
       0,    55,     0,     0,     1,     2,     3,   699,   700,     4,
       5,   701,   702,   703,     6,     0,     7,     8,     9,   704,
     705,   706,    10,    11,    12,    13,    14,   707,    15,    16,
     202,    17,    18,   708,    19,    20,    21,    22,    23,     0,
     709,   588,   203,   204,     0,     0,   198,     0,     0,     0,
     205,   589,     0,     0,     0,     0,     0,     0,     0,     0,
     590,     0,     0,    24,    25,   206,   207,   208,   209,   710,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,   711,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   712,
     713,    43,   210,   211,   212,   213,   214,   215,   714,     0,
       0,   715,    44,     0,     0,     0,     0,     0,   216,   217,
     218,   219,    45,    46,    47,    48,    49,    50,   716,     0,
     717,     0,    51,     0,     0,     0,     0,     0,     0,     0,
     220,   221,    52,    53,    54,   222,     0,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,     0,     0,
       0,     0,     0,     0,  -421,   718,   224,   225,   226,   227,
     228,   229,     1,     2,     3,   699,   700,     4,     5,   701,
     702,   703,     6,     0,     7,     8,     9,   704,   705,   706,
      10,    11,    12,    13,    14,   707,    15,    16,   202,    17,
      18,   708,    19,    20,    21,    22,    23,     0,   709,     0,
     203,   204,     0,     0,     0,     0,     0,     0,   205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,   206,   207,   208,   209,     0,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   711,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   712,   713,    43,
     210,   211,   212,   213,   214,   215,   714,     0,     0,   715,
      44,     0,     0,     0,     0,     0,   216,   217,   218,   219,
      45,    46,    47,    48,    49,    50,   716,     0,   717,     0,
      51,     0,     0,     0,     0,     0,     0,     0,   220,   221,
      52,    53,    54,   222,     0,    55,    56,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,     0,     0,     0,     0,
       0,     0,  -421,   855,   224,   225,   226,   227,   228,   229,
       1,     2,     3,   699,   700,     4,     5,   701,   702,   703,
       6,     0,     7,     8,     9,   704,   705,   706,    10,    11,
      12,    13,    14,   707,    15,    16,   202,    17,    18,   708,
      19,    20,    21,    22,    23,     0,   709,     0,   203,   204,
       0,     0,     0,     0,     0,     0,   205,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,   206,   207,   208,   209,     0,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,   711,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   712,   713,    43,   210,   211,
     212,   213,   214,   215,   714,     0,     0,   715,    44,     0,
       0,     0,     0,     0,   216,   217,   218,   219,    45,    46,
      47,    48,    49,    50,   716,     0,   717,     0,    51,     0,
       0,     0,     0,     0,     0,     0,   220,   221,    52,    53,
      54,   222,     0,    55,    56,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,     0,     0,     0,     0,     0,     0,
    -421,     0,   224,   225,   226,   227,   228,   229,     1,     2,
       3,     0,     0,     4,     5,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,    10,    11,    12,    13,
      14,     0,    15,    16,   202,    17,    18,     0,    19,    20,
      21,    22,    23,     0,     0,     0,   203,   204,     0,     0,
       0,     0,     0,     0,   205,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,   206,
     207,   208,   209,     0,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,   210,   211,   212,   213,
     214,   215,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,   216,   217,   218,   219,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,     0,     0,   220,   221,    52,    53,    54,   222,
       1,    55,    56,    57,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     8,     0,     0,     0,     0,    10,     0,
       0,    13,    14,     0,     0,     0,   202,    17,     0,     0,
      19,     0,     0,     0,    23,     0,     0,     0,   203,   204,
       0,   223,     0,     0,     0,     0,   205,     0,     0,     0,
     224,   225,   226,   227,   228,   229,     0,     0,     0,    24,
       0,   206,   207,   208,   209,     0,     0,     0,     0,     0,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
      40,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,   210,   211,
     212,   213,   214,   215,     0,     0,     0,     0,    44,     0,
       0,     0,     0,     0,   216,   217,   218,   219,     0,     0,
       0,     0,    49,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,     0,     0,   220,   221,    52,    53,
       1,   222,     0,    55,     0,    57,     5,     0,     0,     0,
       0,     0,     0,     8,     0,     0,     0,     0,    10,     0,
       0,    13,    14,     0,     0,     0,   202,    17,     0,     0,
      19,     0,     0,     0,    23,     0,     0,     0,   203,   204,
       0,     0,     0,   223,     0,     0,   205,     0,     0,   344,
       0,     0,   224,   345,   226,   227,   228,   229,     0,    24,
       0,   206,   207,   208,   209,     0,     0,     0,     0,     0,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
      40,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,   210,   211,
     212,   213,   214,   215,     0,     0,     0,     0,    44,     0,
       0,     0,     0,     0,   216,   217,   218,   219,     0,     0,
       0,     0,    49,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,   202,     0,   220,   221,    52,    53,
       0,   222,     0,    55,     0,    57,   203,   204,     0,     0,
       0,     0,     0,     0,   205,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   202,     0,    24,     0,   206,
     207,   208,   209,     0,     0,     0,     0,   203,   204,     0,
       0,     0,     0,   223,     0,   205,     0,     0,     0,   520,
       0,     0,   224,   225,   226,   227,   228,   229,    24,     0,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,   217,   218,   219,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,   210,   211,   212,
     213,   214,   215,     0,   220,   221,     0,     0,     0,   222,
       0,     0,     0,   216,   217,   218,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,   202,     0,   220,   221,     0,     0,     0,
     222,     0,     0,     0,     0,   203,   204,     0,     0,     0,
       0,   223,     0,   205,     0,     0,     0,     0,     0,     0,
     224,   225,   226,   227,   228,   229,    24,    25,   206,   207,
     208,   209,     0,     0,   840,     0,     0,     0,     0,     0,
       0,     0,   223,     0,     0,     0,   871,   872,     0,   606,
       0,   224,   225,   226,   227,   228,   229,     0,     0,     0,
       0,     0,     0,     0,   873,   210,   211,   212,   213,   214,
     215,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   216,   217,   218,   219,     0,     0,     0,     0,     0,
       0,     0,     0,   202,     0,    51,     0,     0,     0,     0,
       0,     0,     0,   220,   221,   203,   204,     0,   222,     0,
       0,     0,     0,   205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,   206,   207,
     208,   209,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     223,     0,     0,     0,   754,   755,     0,   606,   952,   224,
     225,   226,   227,   228,   229,   210,   211,   212,   213,   214,
     215,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   216,   217,   218,   219,     0,     0,     0,     0,     0,
       0,     0,     0,   202,     0,    51,     0,     0,     0,     0,
       0,     0,     0,   220,   221,   203,   204,     0,   222,     0,
       0,     0,     0,   205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,   206,   207,
     208,   209,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     223,     0,     0,     0,   754,   755,     0,   606,   980,   224,
     225,   226,   227,   228,   229,   210,   211,   212,   213,   214,
     215,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   216,   217,   218,   219,     0,     0,     0,     0,     0,
       0,     0,     0,   202,     0,    51,     0,     0,     0,     0,
       0,     0,     0,   220,   221,   203,   204,     0,   222,     0,
       0,     0,     0,   205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     0,   206,   207,
     208,   209,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
     223,     0,     0,     0,   754,   755,     0,   606,     0,   224,
     225,   226,   227,   228,   229,   210,   211,   212,   213,   214,
     215,     0,     0,     0,     0,     0,     0,     0,     0,   202,
       0,   216,   217,   218,   219,     0,     0,     0,     0,     0,
       0,   203,   204,     0,     0,    51,     0,     0,     0,   205,
       0,     0,     0,   220,   221,     0,     0,     0,   222,     0,
      55,   202,    24,     0,   206,   207,   208,   209,     0,     0,
       0,     0,     0,   203,   204,     0,     0,     0,     0,     0,
       0,   205,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,   206,   207,   208,   209,
     223,   210,   211,   212,   213,   214,   215,  -421,     0,   224,
     225,   226,   227,   228,   229,     0,     0,   216,   217,   218,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,   210,   211,   212,   213,   214,   215,   220,
     221,     0,     0,     0,   222,     0,    55,     0,     0,   216,
     217,   218,   219,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,   202,     0,
       0,   220,   221,     0,     0,     0,   222,     0,     0,     0,
     203,   204,     0,     0,     0,     0,   223,     0,   205,     0,
       0,     0,     0,     0,     0,   224,   225,   226,   227,   228,
     229,    24,     0,   206,   207,   208,   209,     0,     0,     0,
       0,     0,     0,   202,     0,     0,     0,     0,   223,     0,
       0,     0,     0,     0,   518,   203,   204,   224,   225,   226,
     227,   228,   229,   205,     0,     0,     0,     0,     0,     0,
     210,   211,   212,   213,   214,   215,    24,     0,   206,   207,
     208,   209,     0,     0,     0,     0,   216,   217,   218,   219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,     0,   220,   221,
       0,     0,     0,   222,     0,   210,   211,   212,   213,   214,
     215,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   216,   217,   218,   219,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
     202,     0,     0,   220,   221,   223,   549,     0,   222,     0,
       0,     0,   203,   204,   224,   225,   226,   227,   228,   229,
     205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   202,    24,     0,   206,   207,   208,   209,     0,
       0,     0,     0,     0,   203,   204,     0,     0,     0,     0,
     223,     0,   205,   585,     0,     0,     0,     0,     0,   224,
     225,   226,   227,   228,   229,    24,     0,   206,   207,   208,
     209,     0,   210,   211,   212,   213,   214,   215,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   217,
     218,   219,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,   210,   211,   212,   213,   214,   215,
     220,   221,     0,     0,     0,   222,     0,     0,     0,     0,
     216,   217,   218,   219,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,   202,
       0,     0,   220,   221,     0,     0,     0,   222,     0,     0,
       0,   203,   204,     0,     0,     0,     0,   223,     0,   205,
       0,     0,     0,     0,   606,     0,   224,   225,   226,   227,
     228,   229,    24,     0,   206,   207,   208,   209,     0,     0,
       0,     0,     0,     0,   202,     0,     0,     0,     0,   223,
       0,     0,     0,     0,     0,   677,   203,   204,   224,   225,
     226,   227,   228,   229,   205,     0,     0,     0,     0,     0,
       0,   210,   211,   212,   213,   214,   215,    24,    25,   206,
     207,   208,   209,     0,     0,     0,     0,   216,   217,   218,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,   220,
     221,     0,     0,     0,   222,     0,   210,   211,   212,   213,
     214,   215,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,   217,   218,   219,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,     0,     0,   220,   221,   223,     0,     0,   222,
     202,     0,     0,   697,     0,   224,   225,   226,   227,   228,
     229,     0,   203,   204,     0,     0,     0,     0,     0,     0,
     205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,   206,   207,   208,   209,     0,
       0,   223,     0,     0,     0,   202,     0,     0,     0,     0,
     224,   225,   226,   227,   228,   229,     0,   203,   204,     0,
       0,     0,     0,     0,     0,   205,     0,     0,     0,     0,
       0,     0,   210,   211,   212,   213,   214,   215,    24,     0,
     206,   207,   208,   209,     0,     0,     0,     0,   216,   217,
     218,   219,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,     0,     0,
     220,   221,     0,     0,     0,   222,     0,   210,   211,   212,
     213,   214,   215,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   217,   218,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,   202,     0,     0,   220,   221,   223,     0,     0,
     222,     0,     0,     0,   203,   204,   224,   225,   226,   227,
     228,   229,   205,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   202,    24,     0,   206,   207,   208,
     209,     0,     0,     0,     0,     0,   203,   204,     0,     0,
       0,     0,   223,     0,   205,     0,     0,     0,     0,     0,
       0,   224,   523,   226,   227,   228,   229,    24,     0,   206,
     207,   208,   209,     0,   210,   211,   212,   213,   214,   215,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,   217,   218,   219,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,   210,   211,   212,   213,
     214,   215,     0,     0,     0,     0,     0,   222,     0,     0,
     202,     0,   216,   217,   218,   219,     0,     0,     0,     0,
       0,     0,   203,   204,     0,     0,    51,     0,     0,     0,
     205,     0,     0,     0,     0,     0,     0,     0,     0,   222,
       0,     0,     0,    24,     0,   206,   207,   208,   209,   354,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   225,
     226,   227,   228,   229,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   356,   210,   211,   212,   213,   214,   215,     0,     0,
     224,   225,   226,   227,   228,   229,     0,     0,   216,   217,
     218,   219,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,   222,     0,     4,     5,     0,
       0,     0,     6,     0,     7,     8,     9,     0,     0,     0,
      10,    11,    12,    13,    14,     0,    15,    16,     0,    17,
      18,     0,    19,    20,    21,    22,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   366,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   225,   226,   227,
     228,   229,    25,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,     0,     0,    55,    56,    57,     1,     2,
       3,     0,     0,     4,     5,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,    10,    11,    12,    13,
      14,     0,    15,    16,     0,    17,    18,     0,    19,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   816,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,     0,    34,    35,    36,    37,    38,    39,    40,     0,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,     0,
       0,    55,     0,    57,     1,     2,     3,     0,     0,     4,
       5,     0,     0,     0,     6,     0,     7,     8,     9,     0,
       0,     0,    10,    11,    12,    13,    14,     0,    15,    16,
       0,    17,    18,     0,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     0,     0,     0,
      26,    27,    28,    29,    30,    31,    32,     0,    34,    35,
      36,    37,    38,    39,    40,     0,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,    54,     0,     0,    55,     0,    57,
       1,     2,     3,     0,     0,     4,     5,     0,     0,     0,
       6,     0,     7,     8,     9,     0,     0,     0,    10,    11,
      12,    13,    14,     0,    15,    16,     0,    17,    18,     0,
      19,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,     0,    34,    35,    36,    37,    38,    39,
      40,     0,     1,     2,     3,     0,     0,     4,     5,     0,
       0,     0,     6,     0,     7,     8,     9,    43,     0,     0,
      10,    11,    12,    13,    14,     0,    15,    16,    44,    17,
      18,     0,    19,    20,    21,    22,    23,     0,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,     0,    25,     0,     0,    57,     0,     0,    26,    27,
      28,    29,    30,    31,     0,     0,    34,    35,    36,    37,
      38,    39,    40,     0,     1,     2,     3,     0,     0,     4,
       5,     0,     0,     0,     6,     0,     0,     8,     9,    43,
       0,     0,    10,    11,    12,    13,    14,     0,    15,    16,
      44,    17,     0,     0,    19,     0,    21,    22,    23,     0,
       0,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,     0,     0,     0,     0,     0,    57,     0,     0,
      26,    27,    28,    29,    30,    31,     0,     0,    34,    35,
      36,    37,    38,    39,    40,     0,     1,     0,     0,     0,
       0,     0,     5,     0,     0,     0,     0,     0,     0,     8,
       0,    43,     0,     0,    10,     0,     0,    13,    14,     0,
       0,     0,    44,    17,     0,     0,    19,     0,     0,     0,
      23,     0,     0,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,     0,     0,     0,     0,     0,    57,
       0,     0,     0,     0,     0,     0,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    40,     0,     2,     3,
       0,     0,     4,     5,     0,     0,     0,     6,     0,     7,
       0,     9,     0,    43,     0,     0,    11,    12,     0,    14,
       0,    15,    16,     0,    44,    18,     0,     0,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    53,     0,    25,     0,     0,
       0,    57,     0,    26,    27,    28,    29,    30,    31,    32,
       0,    34,    35,    36,    37,    38,    39,     0,     0,    42,
       2,     3,     0,     0,     4,     5,     0,     0,     0,     6,
       0,     7,     0,     9,    43,     0,     0,     0,    11,    12,
       0,    14,     0,    15,    16,     0,     0,    18,     0,     0,
      20,    21,    22,    23,     0,    45,    46,    47,    48,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,     0,    25,
      55,     0,     0,     0,     0,    26,    27,    28,    29,    30,
      31,    32,     0,    34,    35,    36,    37,    38,    39,     2,
       3,     0,     0,     4,     5,     0,     0,     0,     6,     0,
       0,     0,     9,     0,     0,     0,    43,    11,    12,     0,
      14,     0,    15,    16,     0,     0,     0,     0,     0,     0,
      21,    22,    23,     0,     0,     0,     0,    45,    46,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
       0,     0,     0,     0,    26,    27,    28,    29,    30,    31,
       0,     0,    34,    35,    36,    37,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53
};

static const yytype_int16 yycheck[] =
{
       0,    72,    73,   205,   426,   136,    60,   198,   110,     0,
     262,   223,   193,   121,   465,   112,    72,    73,   109,   320,
      76,    77,    72,    73,   205,   500,   843,   109,   109,    58,
      51,    58,    50,    33,    51,    68,   136,    72,    73,    25,
      51,     0,   628,   869,   656,  1049,   385,     0,   109,   110,
     389,    85,     0,    84,    85,    33,   668,   154,    58,   186,
      60,    61,     0,    62,    63,   338,   511,   512,   513,   514,
      70,    71,    72,    73,    62,  1079,    62,    63,    40,    11,
     109,    62,   109,   186,    85,     0,   203,    45,    46,   341,
     703,   917,    70,    71,   186,    67,    67,   220,   221,    99,
      25,   224,   225,   226,   227,   228,   229,   207,    99,   109,
     110,   108,   146,   197,   198,   146,   729,   135,   188,    72,
      73,   886,    60,    61,   889,    62,   123,    62,   340,   126,
     127,   128,   131,   130,    72,    73,   136,    62,    63,   209,
      99,   272,   354,   131,   356,   146,    99,   147,    43,    44,
     131,    99,   333,    85,   366,   189,   109,   447,   186,   350,
     193,    99,   353,   265,    40,    41,    42,   589,   189,   986,
     272,   188,   110,   264,   186,   192,   477,   188,   479,   480,
     271,   192,   264,    76,    99,    78,    85,    80,    81,    82,
     271,   481,   193,   193,   131,   781,   131,   962,   136,   785,
     965,   187,   188,   264,   265,   205,   187,    62,    63,   147,
     271,   272,    19,   188,   146,   338,   186,   191,   491,   191,
     191,   834,   345,   193,   191,   187,   223,   535,   190,   191,
      37,   656,   540,  1050,   209,   264,     0,   264,    85,   188,
     193,   854,   271,   668,   271,   203,   204,   146,   500,   186,
     187,   186,   205,   262,   191,   191,   133,   134,    67,   196,
     209,   196,   187,   188,   264,   265,   186,   267,   205,   186,
     205,   271,   272,   186,    84,    85,   131,    85,   191,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   146,
     147,   133,   134,   262,   128,   486,   130,   920,   308,   262,
     186,   264,   585,   188,   190,   191,   193,   186,   271,   194,
      84,   772,    86,   133,   134,   747,    68,   265,   803,   267,
     308,   186,   341,   333,   272,    99,   146,     0,   146,   147,
      25,   196,   342,   434,   188,   188,   685,   194,   186,   440,
     205,   262,   343,   191,   209,   426,   209,   354,   440,   356,
     188,   193,   209,   808,   192,   209,   209,   812,   491,   366,
     426,   427,   133,   434,   987,   988,   426,    62,    63,   440,
     333,   478,   341,   193,   343,   385,   194,    67,   341,   389,
     343,   426,   188,   390,   186,   343,   192,   194,   188,   187,
     523,   209,   654,   167,   168,   434,   188,   434,  1021,   511,
     512,   440,   188,   440,  1027,   754,   186,   370,   371,   209,
     543,   191,   674,   196,   495,   422,   196,   209,   201,   202,
     341,   188,   385,   209,   434,   205,   389,   194,  1051,   495,
     440,   497,   513,   514,   111,   495,   502,   503,   202,   203,
     204,    47,    48,   134,   635,   370,   371,   513,   514,   186,
     495,   215,   585,   513,   514,   646,   647,   538,   539,   191,
     743,  1084,   762,   426,   195,   776,   188,   689,   513,   514,
     192,   434,   538,   539,   187,   188,   486,   440,   538,   539,
     186,   500,   187,   188,   494,   186,   187,   605,   262,   186,
     191,   205,   714,   538,   539,   717,   506,   958,   186,   700,
     712,   511,   512,   513,   514,   186,   494,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,   779,   506,   262,
     188,   712,   871,   486,   192,   589,   536,   537,   538,   539,
     186,   500,   495,   186,   187,   545,   188,   500,   191,   502,
     192,   803,   186,   187,   262,   657,   186,   191,   536,   537,
     513,   514,   186,   187,    49,   656,   206,   191,   907,   187,
     909,   187,   188,   511,   512,   513,   514,   341,   868,   343,
     533,   534,   187,   873,   187,   538,   539,   188,     0,   500,
     188,   192,   545,  1044,   192,   692,   187,   188,   188,   208,
     538,   539,   192,   657,   187,   188,   606,   788,   341,   502,
     503,   504,   612,   610,   611,   669,   747,   188,   533,   534,
     743,   192,   187,   620,   621,   187,   188,   656,   186,   656,
     187,   188,   187,   341,   204,   635,   188,   189,   187,   668,
      62,   668,   187,   188,   188,   654,   646,   647,    60,   187,
     188,   193,   652,   606,   208,   655,   656,   657,   658,   186,
      72,    73,   187,   188,   192,   674,    62,    63,   668,   669,
     108,   109,   193,   208,   652,   187,   188,   808,   187,   188,
      62,   812,   635,   193,   675,   685,   187,    99,   187,   188,
     687,   688,   689,   646,   647,   654,   187,   697,   110,   193,
     112,   654,    37,   703,    62,   896,   808,   187,   705,   131,
     707,   187,   712,    19,   107,   674,   675,   186,   111,   657,
     658,   674,   675,   935,   136,   937,   938,   675,   919,   729,
     932,   669,   685,   145,   209,   131,   500,   187,   188,   186,
     152,   134,   154,   654,   697,   409,   410,   411,   412,   131,
     703,   932,   705,   186,   754,   186,   864,   186,   755,   712,
      25,   186,   943,   674,   186,   187,   193,   500,   959,   191,
     779,   187,   188,   131,   196,   187,   729,   189,   191,  1052,
     187,   188,   191,   205,   187,   188,   198,   193,   788,   193,
     186,   188,   500,   187,   803,   187,   188,    62,    63,    64,
     196,   754,    67,   187,   186,   405,   406,   189,   808,   205,
     187,   188,   812,   209,   196,   886,   216,   217,   218,   219,
     779,  1002,   930,   205,   413,   414,   779,   192,   186,   187,
     886,    62,    63,   191,   834,   788,   886,   192,   196,   947,
     407,   408,   839,  1055,   803,   842,   187,   205,   420,   421,
     803,   886,   188,   265,   854,   267,   187,    62,    63,  1040,
     272,   187,   511,   512,   513,   514,   188,   279,   779,   869,
     808,   871,   188,   188,   812,   872,   187,    67,   188,    67,
     187,   834,   187,   187,   208,   885,   886,   187,   209,   889,
     654,   891,   803,  1001,   193,  1076,   194,   188,  1006,   187,
     131,   854,    62,    63,   193,   317,   318,   907,   301,   909,
     674,   675,   209,   910,   189,   186,   869,   917,   871,   186,
     920,   654,   186,  1031,   194,   209,   131,   189,  1036,  1052,
     188,   343,   932,   886,   189,   209,   187,   187,   350,   187,
     187,   674,   188,   943,    84,    85,   654,   189,   886,   189,
    1058,   889,   949,  1061,   907,   186,   909,   132,   370,   371,
     191,   189,   194,   187,   917,   196,   674,   920,   187,   187,
     923,   131,    62,    63,   205,   209,   187,   194,   208,   932,
     194,   186,   108,   187,   189,   187,   983,   987,   988,   187,
     943,   196,   187,   133,   134,    85,    62,    63,   995,   125,
     205,   188,  1002,  1000,   130,   131,   146,   656,   657,   189,
     189,   194,  1009,    39,   426,   779,   186,   209,    68,   668,
     669,  1021,   189,   198,   186,   194,   186,  1027,   187,    68,
     194,   186,   425,   426,   987,   988,   196,     3,  1035,   803,
    1040,   131,   186,   436,   437,   205,   779,   188,    65,  1002,
      16,  1051,   209,   193,   189,    21,   146,   189,    24,    62,
     187,   189,   132,   187,    30,   131,   478,    33,  1021,   194,
     803,   779,   192,    90,  1027,  1072,  1076,    94,   186,   188,
      97,    14,    85,   495,  1084,  1082,   189,  1040,   209,   208,
     186,   209,   192,   188,   186,   803,   186,   223,  1051,   188,
     187,   513,   514,    72,    73,   209,   196,    76,    77,    78,
      79,    80,    81,    82,    83,   205,    85,    83,    87,   187,
     186,   533,   534,  1076,   187,   186,   538,   539,   131,   915,
     196,  1084,   149,   545,   415,   417,   416,   279,   155,   205,
     418,   158,   159,   146,   161,   111,   419,   350,   165,   292,
     192,  1019,   502,   170,   616,   781,   785,   174,   175,   808,
     177,   178,   891,   812,   889,   182,   183,   184,   185,   186,
     965,   188,   502,   190,   635,   350,   788,   589,   353,   675,
     697,   655,   148,   186,   697,   923,   923,   362,   711,   364,
     930,  1036,  1076,   196,  1061,   588,   589,  1001,    99,   374,
     110,   674,   205,   341,   597,   588,    -1,   588,    -1,    -1,
      -1,    -1,    -1,   388,    -1,    -1,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,    -1,   354,   198,
     356,    -1,    -1,    -1,    -1,   361,    -1,   363,    -1,   365,
     366,    -1,    -1,    -1,    -1,   657,    -1,    -1,    -1,   424,
      -1,    -1,   901,    -1,    -1,    -1,    -1,   669,     9,    -1,
       9,    -1,    -1,   675,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   447,    -1,    25,    -1,    25,    -1,    -1,   691,
     692,    -1,    -1,    -1,    -1,    -1,    37,    -1,    37,    -1,
      -1,   703,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
     475,    -1,    -1,    -1,    -1,    -1,   481,    -1,    -1,    25,
      -1,    62,    63,    62,    63,    -1,    -1,   729,    -1,    -1,
     337,    37,    73,    74,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,   747,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    60,   100,
      -1,   100,    -1,    -1,   747,    -1,    -1,    73,    74,    -1,
      72,    73,    -1,    25,    76,    77,    78,    79,    80,    81,
      82,    83,   341,    -1,   125,    37,   125,    -1,    -1,    -1,
     131,   350,   131,    -1,   100,    -1,    -1,    -1,    -1,    -1,
     141,   142,   141,   142,    -1,   146,   808,   146,   110,    -1,
     812,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   834,    85,   136,   141,   142,    -1,    -1,    -1,
      -1,   606,    -1,    -1,    -1,   186,    -1,   186,   100,    -1,
     191,    -1,   854,    -1,    -1,   196,    -1,   196,    62,    -1,
      64,    65,    66,    67,   205,    -1,   205,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,   860,   861,    -1,
      -1,    -1,    -1,    -1,   886,   187,    -1,   189,    -1,   141,
     142,    -1,    -1,    -1,   146,    -1,   198,   101,   102,   103,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,   920,    -1,
      -1,   923,    -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,
      -1,    -1,   697,    -1,    -1,   700,    -1,   496,   497,   498,
     144,   500,    -1,   502,   503,   504,     9,    -1,    -1,    -1,
      -1,    -1,    -1,     9,   513,   514,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   265,    -1,    -1,   682,   683,   684,    25,
     272,    -1,    -1,    -1,    37,   740,    -1,    -1,    -1,   538,
     539,    37,   186,    -1,    -1,   987,   988,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   762,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      73,    74,    -1,    -1,    -1,   317,   318,    73,    74,  1021,
      -1,   628,    85,   630,    -1,  1027,    -1,   634,    -1,    85,
      -1,    -1,    -1,   640,   641,    -1,   643,   100,   645,   341,
      -1,   648,   649,   650,   100,    -1,    -1,    -1,   350,  1051,
      -1,    -1,    -1,   660,    -1,    -1,    -1,    -1,    -1,   666,
      -1,    -1,   125,   670,    -1,   672,    -1,    -1,   131,   125,
      -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,   141,   142,
      -1,     9,  1084,   146,    -1,   141,   142,    -1,    -1,    -1,
     146,    -1,    -1,    -1,     9,   654,    -1,    25,    -1,    -1,
      -1,     9,    -1,   868,   869,    -1,    -1,    -1,   873,    37,
      25,    -1,    -1,   720,    -1,   674,    -1,    25,    -1,    -1,
      -1,    -1,    37,   186,   426,   427,   428,   429,    -1,    37,
     186,   896,    -1,   196,    62,    -1,    -1,    -1,    -1,    -1,
     196,    -1,   205,    -1,    -1,    73,    74,    62,   913,   205,
      -1,   916,   917,    -1,   919,    -1,    -1,    85,    73,    74,
      -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,
      85,    -1,   100,    -1,   781,    -1,    -1,    85,   785,    -1,
     787,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,   796,
     797,    -1,   100,   495,   959,   497,   498,   125,   500,    -1,
     502,   503,   504,   131,    -1,    -1,    -1,    -1,    -1,    -1,
     125,   513,   514,   141,   142,    -1,   131,   125,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,
      -1,   146,    -1,   141,   142,    -1,   538,   539,   146,    -1,
      -1,    -1,    -1,    -1,   803,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,   186,    -1,
      -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,   196,    -1,
      -1,   186,    -1,    -1,    -1,    -1,    -1,   205,   186,    -1,
     887,   196,    -1,   191,    -1,    -1,    -1,   589,   196,    -1,
     205,   898,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,
      -1,    15,    16,    17,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    -1,    27,    28,    -1,    30,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   654,    -1,   961,   657,    -1,   964,    -1,    -1,
      -1,    -1,   969,    -1,    -1,    -1,    -1,   669,    62,    63,
      -1,    -1,   674,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,  1014,    -1,    -1,
    1017,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,    -1,    -1,    -1,    -1,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   747,    -1,   141,   142,   143,
      -1,    -1,   146,   147,   148,    -1,    -1,     3,     4,     5,
      -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,    15,
      16,    17,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      -1,    27,    28,    -1,    30,    31,    -1,    33,    34,    35,
      36,    37,   186,    -1,    -1,    -1,    -1,    -1,    -1,   193,
      -1,   803,   196,    -1,    -1,    -1,   808,    -1,    -1,    -1,
     812,   205,    -1,    -1,    -1,   209,    62,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,   886,   131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,    -1,
     146,    -1,   148,     3,     4,     5,    -1,    -1,     8,     9,
      -1,    -1,    -1,    13,    -1,    15,    16,    17,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    27,    28,    -1,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
     186,    -1,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,
     196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      80,    81,    82,    83,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,    -1,    -1,   146,    -1,   148,     4,
       5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,
      15,    -1,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,
      25,    -1,    27,    28,    -1,    -1,    31,    -1,    -1,    34,
      35,    36,    37,    -1,    -1,    -1,   186,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    80,    81,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,     4,
       5,   146,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,
      15,    -1,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,
      25,    -1,    27,    28,    -1,    -1,    31,    -1,    -1,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   186,    -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,
      -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
     205,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    80,    81,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
      -1,   146,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      39,   186,    41,    42,    -1,    -1,   191,    -1,    -1,    -1,
      49,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     205,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,   110,   111,    -1,    -1,    -1,    -1,    -1,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    -1,
     129,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,
      -1,    -1,    -1,    -1,   193,   194,   195,   196,   197,   198,
     199,   200,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,   110,
     111,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,    -1,   129,    -1,
     131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,   144,    -1,   146,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,   193,   194,   195,   196,   197,   198,   199,   200,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,   110,   111,    -1,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,    -1,   129,    -1,   131,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,   144,    -1,   146,   147,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
     193,    -1,   195,   196,   197,   198,   199,   200,     3,     4,
       5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,   144,
       3,   146,   147,   148,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,
      33,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      -1,   186,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
     195,   196,   197,   198,   199,   200,    -1,    -1,    -1,    62,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,   131,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
       3,   144,    -1,   146,    -1,   148,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,
      33,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,   186,    -1,    -1,    49,    -1,    -1,   192,
      -1,    -1,   195,   196,   197,   198,   199,   200,    -1,    62,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,   131,    -1,
      -1,    -1,    -1,    -1,    29,    -1,   139,   140,   141,   142,
      -1,   144,    -1,   146,    -1,   148,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    62,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    -1,   186,    -1,    49,    -1,    -1,    -1,   192,
      -1,    -1,   195,   196,   197,   198,   199,   200,    62,    -1,
      64,    65,    66,    67,    -1,    -1,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   101,   102,   103,
     104,   105,   106,    -1,   139,   140,    -1,    -1,    -1,   144,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,
      -1,    -1,    -1,    29,    -1,   139,   140,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,   186,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
     195,   196,   197,   198,   199,   200,    62,    63,    64,    65,
      66,    67,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,    -1,    -1,    -1,   190,   191,    -1,   193,
      -1,   195,   196,   197,   198,   199,   200,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   208,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,   131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    41,    42,    -1,   144,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,    -1,    -1,    -1,   190,   191,    -1,   193,   194,   195,
     196,   197,   198,   199,   200,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,   131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    41,    42,    -1,   144,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,    -1,    -1,    -1,   190,   191,    -1,   193,   194,   195,
     196,   197,   198,   199,   200,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,   131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    41,    42,    -1,   144,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
     186,    -1,    -1,    -1,   190,   191,    -1,   193,    -1,   195,
     196,   197,   198,   199,   200,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,   131,    -1,    -1,    -1,    49,
      -1,    -1,    -1,   139,   140,    -1,    -1,    -1,   144,    -1,
     146,    29,    62,    -1,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
     186,   101,   102,   103,   104,   105,   106,   193,    -1,   195,
     196,   197,   198,   199,   200,    -1,    -1,   117,   118,   119,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,    -1,   101,   102,   103,   104,   105,   106,   139,
     140,    -1,    -1,    -1,   144,    -1,   146,    -1,    -1,   117,
     118,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,    29,    -1,
      -1,   139,   140,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      41,    42,    -1,    -1,    -1,    -1,   186,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,   195,   196,   197,   198,   199,
     200,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,   186,    -1,
      -1,    -1,    -1,    -1,   192,    41,    42,   195,   196,   197,
     198,   199,   200,    49,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,   103,   104,   105,   106,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,    -1,    -1,   144,    -1,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,
      29,    -1,    -1,   139,   140,   186,   187,    -1,   144,    -1,
      -1,    -1,    41,    42,   195,   196,   197,   198,   199,   200,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
     186,    -1,    49,   189,    -1,    -1,    -1,    -1,    -1,   195,
     196,   197,   198,   199,   200,    62,    -1,    64,    65,    66,
      67,    -1,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,    -1,   101,   102,   103,   104,   105,   106,
     139,   140,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,    29,
      -1,    -1,   139,   140,    -1,    -1,    -1,   144,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,   186,    -1,    49,
      -1,    -1,    -1,    -1,   193,    -1,   195,   196,   197,   198,
     199,   200,    62,    -1,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,   186,
      -1,    -1,    -1,    -1,    -1,   192,    41,    42,   195,   196,
     197,   198,   199,   200,    49,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,   103,   104,   105,   106,    62,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,    -1,    -1,   144,    -1,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   186,    -1,    -1,   144,
      29,    -1,    -1,   193,    -1,   195,   196,   197,   198,   199,
     200,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,    -1,
      -1,   186,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
     195,   196,   197,   198,   199,   200,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,   103,   104,   105,   106,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,   117,   118,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,    -1,    -1,   144,    -1,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,
      -1,    -1,    29,    -1,    -1,   139,   140,   186,    -1,    -1,
     144,    -1,    -1,    -1,    41,    42,   195,   196,   197,   198,
     199,   200,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,   186,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,   195,   196,   197,   198,   199,   200,    62,    -1,    64,
      65,    66,    67,    -1,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,    -1,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,
      29,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,   131,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
      -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,   186,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,   196,
     197,   198,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   186,   101,   102,   103,   104,   105,   106,    -1,    -1,
     195,   196,   197,   198,   199,   200,    -1,    -1,   117,   118,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,   144,    -1,     8,     9,    -1,
      -1,    -1,    13,    -1,    15,    16,    17,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    -1,    27,    28,    -1,    30,
      31,    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   195,   196,   197,   198,
     199,   200,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,    -1,    -1,   146,   147,   148,     3,     4,
       5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    27,    28,    -1,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    80,    81,    82,    83,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
      -1,   146,    -1,   148,     3,     4,     5,    -1,    -1,     8,
       9,    -1,    -1,    -1,    13,    -1,    15,    16,    17,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    -1,    27,    28,
      -1,    30,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,    -1,    -1,   146,    -1,   148,
       3,     4,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,
      13,    -1,    15,    16,    17,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    -1,    27,    28,    -1,    30,    31,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    79,    80,    81,    82,
      83,    -1,     3,     4,     5,    -1,    -1,     8,     9,    -1,
      -1,    -1,    13,    -1,    15,    16,    17,   100,    -1,    -1,
      21,    22,    23,    24,    25,    -1,    27,    28,   111,    30,
      31,    -1,    33,    34,    35,    36,    37,    -1,   121,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,    -1,    63,    -1,    -1,   148,    -1,    -1,    69,    70,
      71,    72,    73,    74,    -1,    -1,    77,    78,    79,    80,
      81,    82,    83,    -1,     3,     4,     5,    -1,    -1,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,   100,
      -1,    -1,    21,    22,    23,    24,    25,    -1,    27,    28,
     111,    30,    -1,    -1,    33,    -1,    35,    36,    37,    -1,
      -1,   122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,    -1,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    -1,     3,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      -1,   100,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    -1,   111,    30,    -1,    -1,    33,    -1,    -1,    -1,
      37,    -1,    -1,   122,   123,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,     4,     5,
      -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,    15,
      -1,    17,    -1,   100,    -1,    -1,    22,    23,    -1,    25,
      -1,    27,    28,    -1,   111,    31,    -1,    -1,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,    63,    -1,    -1,
      -1,   148,    -1,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    -1,    -1,    85,
       4,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,
      -1,    15,    -1,    17,   100,    -1,    -1,    -1,    22,    23,
      -1,    25,    -1,    27,    28,    -1,    -1,    31,    -1,    -1,
      34,    35,    36,    37,    -1,   121,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,    63,
     146,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,     4,
       5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    17,    -1,    -1,    -1,   100,    22,    23,    -1,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    77,    78,    79,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     4,     5,     8,     9,    13,    15,    16,    17,
      21,    22,    23,    24,    25,    27,    28,    30,    31,    33,
      34,    35,    36,    37,    62,    63,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   100,   111,   121,   122,   123,   124,   125,
     126,   131,   141,   142,   143,   146,   147,   148,   186,   193,
     196,   205,   209,   211,   212,   213,   255,   256,   257,   264,
     268,   269,   270,   271,   274,   275,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   294,   296,
     297,   298,   299,   301,   305,   309,   321,   324,   376,   377,
     378,   379,   380,   391,   401,   402,   403,   404,   186,   186,
     196,   213,   392,   393,   394,   395,   396,   397,   398,   399,
     401,   186,   186,   186,   186,   203,   191,   191,   191,    67,
     186,   186,   186,   402,   404,    68,   272,   274,   276,   309,
     401,   401,     0,   309,   310,   311,   209,   188,   209,   188,
     209,   209,   392,   209,   392,   213,   273,   274,   287,   289,
     296,   297,   298,   309,   401,   213,   274,   287,   289,   296,
     297,   298,   309,   401,   273,   297,   274,   296,   297,   273,
     274,   296,   273,   273,   273,   274,   296,   271,   296,   271,
     296,   310,   310,   310,   378,   133,   230,   186,   191,   407,
     409,   411,    29,    41,    42,    49,    64,    65,    66,    67,
     101,   102,   103,   104,   105,   106,   117,   118,   119,   120,
     139,   140,   144,   186,   195,   196,   197,   198,   199,   200,
     212,   214,   215,   216,   217,   218,   219,   220,   223,   224,
     225,   226,   228,   232,   233,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   310,   335,   186,   196,   213,   311,   396,   398,
     400,   186,   272,   393,   395,   398,   407,    84,   261,   262,
     263,   309,   217,   186,   252,    25,    62,    63,   187,   188,
     291,   292,   293,   335,   252,   252,   252,   252,   335,   335,
     251,   187,   187,   194,   276,   401,   309,   401,   310,   263,
     263,   310,   310,   310,   310,   258,   310,   271,   271,   310,
     259,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   294,   295,   212,   213,   322,   334,   186,   134,
     231,   187,   408,   410,   192,   196,   251,   253,   274,   277,
     278,   296,   309,   191,   186,   236,   186,   236,   236,   334,
     356,   186,   186,   186,   186,   186,   186,   236,   346,   346,
     346,   346,   237,   237,   186,   252,   335,   345,   346,   237,
     237,   237,   237,   237,   237,    40,    41,    42,   186,   190,
     191,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,   208,   196,   201,   202,   197,   198,    43,    44,    45,
      46,   203,   204,    47,    48,   195,   205,   206,    49,    50,
     135,   136,   207,   187,   188,   269,   271,   280,   282,   286,
     288,   290,   187,   400,   186,   401,   187,   187,   407,   400,
     186,   395,   398,    19,    37,   361,   261,   208,   187,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   306,   307,   308,   187,   186,   187,   292,   204,   192,
     192,   192,   187,   187,   187,   188,   407,   260,   392,   265,
     266,   208,   336,   336,   302,   334,   193,   310,   323,   237,
     250,   186,   345,   381,   269,   271,   274,   280,   286,   296,
     383,   384,   385,   386,   387,   388,   389,   390,   212,   330,
     331,   268,   269,   270,   271,   329,   332,   333,   192,   192,
     192,   253,   277,   196,   253,   335,   335,   335,   251,   335,
     251,   335,   335,   193,   193,   255,   268,   269,   270,   271,
     255,   251,   187,   187,   187,   193,   212,   213,   234,   187,
     235,   251,   234,   252,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   237,   237,   237,   238,   238,
     239,   239,   240,   240,   240,   240,   241,   241,   242,   243,
     244,   245,   246,   248,   248,   189,   252,   251,   186,   196,
     205,   405,   407,   412,   414,   405,   187,   187,   407,   407,
     187,   187,   400,    37,    19,   186,   193,   253,   337,   209,
     186,   186,   186,   186,   186,   187,   188,    64,    67,   291,
     191,   191,   251,   336,   263,   336,   336,   337,   193,   303,
     304,   325,   326,   327,   334,   193,   187,   250,   392,   296,
     296,   296,   384,   213,   273,   297,   305,   324,   273,   297,
     273,   392,   188,   209,   187,   188,   186,   196,   205,   395,
     401,   406,   409,   413,   415,   395,   401,   406,   186,   196,
     401,   406,   401,   406,   187,   188,   192,   192,   192,   187,
     187,   187,   188,   188,   188,   188,   187,   255,   255,   186,
     219,   392,   392,   401,   401,   219,   188,   193,   237,     6,
       7,    10,    11,    12,    18,    19,    20,    26,    32,    39,
      68,    84,    98,    99,   107,   110,   127,   129,   194,   212,
     213,   252,   254,   255,   334,   342,   343,   344,   345,   347,
     348,   349,   351,   353,   354,   357,   358,   359,   360,   187,
     188,   192,   250,   189,   407,   412,   414,   272,   405,   407,
     187,   217,   362,   363,   190,   191,   212,   234,   337,   338,
     339,   340,   341,   252,   252,   212,    67,    67,   187,   307,
     187,   187,   208,   252,   252,   187,   267,   209,   256,   310,
     312,   313,   314,   315,   316,   193,   310,   194,   188,   310,
     325,   187,   310,   310,   310,   310,   334,   334,   310,   310,
     310,   392,   382,   383,   331,   187,   413,   415,   272,   406,
     310,   310,   272,   310,   310,   382,    51,   333,   335,   335,
     335,   227,   234,   252,   252,    11,   221,   222,   335,   338,
     339,   209,   253,   209,   189,   342,   352,   213,   252,   186,
     209,   252,   186,   186,   194,   361,   355,   356,    68,   193,
     345,   209,   345,   209,   189,   194,   342,   251,   250,   187,
     187,   187,   405,   187,   189,   364,   234,   252,   189,   188,
     194,   190,   191,   208,   337,   187,   187,   187,   187,   187,
     291,   192,   192,   336,   209,   269,   271,   194,   314,   188,
     209,   188,   209,   312,   310,   327,   208,   328,   194,   310,
     310,   187,   187,   406,   187,   187,   187,    40,   187,   190,
     191,   194,   194,   189,   187,   188,   189,   188,   194,    51,
     189,   342,    39,   186,   209,   209,   252,   209,   252,   254,
     186,   193,   188,   209,    68,   108,   109,   128,   130,   309,
     342,   407,   407,   191,   217,   365,   366,   189,   367,    51,
     192,   337,   194,   340,   234,   252,   337,   187,   188,   189,
     317,   320,   392,   318,   320,   401,   310,   318,   317,   194,
     253,   310,   186,   409,   234,   234,   252,   251,   222,   251,
     194,   253,   342,   186,   343,   348,   350,   187,   187,   187,
     362,    68,   356,   194,   345,   186,   345,   345,   209,   334,
     186,   188,   191,   217,   368,   369,   189,   370,   252,    51,
     192,   291,   253,   310,   319,   320,   310,   319,   300,   310,
     192,   189,   252,   254,   342,   342,   132,   229,   187,   194,
     252,   192,   252,   365,   334,   186,   188,   217,   371,   372,
     189,   373,   192,   252,   208,   310,   310,   300,   342,   187,
     209,    14,   186,   342,   209,   187,   217,   187,   192,   252,
     368,   188,   356,   374,   375,   192,   291,   229,   254,   342,
     250,   345,   186,   217,   187,   371,   188,   187,   209,   187,
     187,   252,   186,   375,   229,   187,   252,   342,   187
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   210,   211,   212,   212,   213,   214,   215,   216,   217,
     218,   218,   218,   218,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   220,   221,   221,   222,   222,   223,
     223,   224,   225,   226,   227,   227,   227,   227,   228,   228,
     228,   228,   229,   229,   230,   230,   231,   231,   232,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   234,
     234,   235,   235,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   237,   237,   237,
     237,   238,   238,   238,   238,   239,   239,   239,   240,   240,
     240,   241,   241,   241,   241,   241,   242,   242,   242,   243,
     243,   244,   244,   245,   245,   246,   246,   247,   247,   248,
     248,   249,   249,   250,   250,   250,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   252,   252,
     253,   254,   254,   255,   255,   255,   255,   255,   256,   258,
     257,   259,   257,   260,   257,   261,   261,   262,   262,   263,
     263,   265,   264,   266,   264,   264,   267,   264,   268,   268,
     268,   268,   268,   269,   269,   269,   269,   269,   270,   270,
     270,   270,   270,   271,   271,   271,   272,   272,   273,   273,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   275,
     275,   276,   276,   277,   277,   277,   278,   278,   279,   279,
     279,   279,   280,   280,   280,   280,   281,   281,   281,   282,
     282,   282,   283,   283,   283,   284,   284,   284,   285,   285,
     285,   286,   286,   286,   287,   287,   288,   288,   288,   288,
     289,   290,   290,   290,   290,   291,   291,   291,   292,   292,
     292,   292,   292,   292,   293,   293,   294,   294,   295,   295,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   298,   298,   298,   299,   300,   302,
     301,   303,   301,   304,   301,   305,   305,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     307,   307,   308,   308,   309,   309,   310,   310,   311,   311,
     312,   312,   313,   313,   314,   314,   314,   314,   315,   315,
     316,   316,   317,   317,   317,   318,   318,   319,   319,   320,
     322,   321,   323,   321,   321,   324,   325,   325,   326,   326,
     326,   327,   328,   328,   329,   329,   330,   330,   331,   332,
     332,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   334,   334,   335,   335,   335,
     335,   336,   336,   337,   337,   337,   338,   338,   339,   339,
     340,   340,   340,   340,   341,   341,   341,   341,   341,   341,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   343,   344,   344,   344,   344,   344,   345,   345,
     345,   346,   347,   347,   348,   349,   349,   349,   350,   350,
     351,   351,   352,   351,   353,   353,   353,   353,   353,   353,
     354,   355,   355,   356,   357,   357,   358,   358,   359,   359,
     359,   360,   360,   360,   361,   361,   361,   361,   361,   362,
     362,   362,   362,   362,   363,   364,   364,   365,   365,   366,
     366,   367,   367,   368,   368,   369,   369,   370,   370,   371,
     372,   372,   373,   373,   374,   374,   375,   376,   376,   377,
     377,   378,   378,   378,   378,   379,   379,   380,   381,   382,
     382,   383,   383,   384,   385,   385,   385,   386,   386,   386,
     386,   387,   387,   387,   388,   388,   389,   389,   389,   390,
     390,   390,   391,   391,   391,   391,   391,   392,   392,   392,
     393,   393,   393,   394,   394,   395,   395,   395,   396,   396,
     396,   397,   397,   398,   398,   398,   398,   398,   399,   399,
     399,   400,   400,   401,   401,   402,   402,   402,   402,   403,
     403,   403,   404,   404,   405,   405,   405,   406,   406,   407,
     407,   408,   407,   409,   409,   410,   409,   411,   411,   411,
     411,   411,   411,   411,   412,   412,   412,   412,   412,   413,
     413,   413,   413,   413,   414,   414,   414,   414,   414,   415,
     415,   415,   415
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     6,     1,     3,     3,     3,     6,
       6,     6,     4,     6,     1,     3,     4,     3,     6,     4,
       6,     4,     0,     4,     0,     4,     0,     4,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       1,     1,     3,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     2,     4,     1,     4,     2,
       2,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     0,     1,     2,     2,     2,     2,     2,     6,     0,
       4,     0,     4,     0,     5,     5,     1,     2,     1,     0,
       1,     0,     5,     0,     5,     5,     0,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     4,
       4,     1,     1,     1,     1,     1,     1,     2,     3,     3,
       3,     3,     2,     3,     2,     3,     2,     2,     2,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     4,     4,     1,     2,     3,     2,
       4,     1,     2,     3,     2,     1,     1,     1,     1,     4,
       4,     6,    10,     1,     1,     2,     4,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     7,     7,     1,     1,     1,     1,     4,     0,     0,
       9,     0,    10,     0,     6,     1,     1,     1,     1,     4,
       1,     4,     4,     1,     1,     4,     4,     1,     1,     1,
       0,     1,     1,     3,     6,     1,     0,     1,     1,     2,
       0,     1,     1,     2,     2,     2,     1,     2,     3,     3,
       3,     3,     3,     0,     2,     3,     2,     0,     1,     2,
       0,     7,     0,     8,     4,     1,     0,     1,     1,     3,
       2,     3,     0,     2,     1,     3,     1,     3,     1,     1,
       3,     1,     2,     3,     2,     1,     2,     3,     1,     2,
       3,     2,     1,     2,     3,     1,     1,     2,     3,     2,
       3,     0,     2,     1,     3,     4,     1,     3,     1,     0,
       1,     3,     2,     3,     2,     3,     5,     4,     6,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     4,     6,     3,     3,     4,
       4,     0,     1,     2,     2,     5,     7,     5,     1,     1,
       6,     8,     0,    10,     3,     3,     2,     2,     2,     3,
       3,     1,     3,     1,     6,     5,     4,     2,     7,     4,
       1,     2,     4,     4,     0,     1,     1,     2,     2,     1,
       2,     3,     4,     5,     1,     2,     1,     4,     7,     1,
       3,     2,     1,     4,     7,     1,     3,     2,     1,     1,
       1,     3,     2,     1,     1,     3,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     5,     3,     4,     1,     0,
       1,     1,     2,     2,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     1,     1,     1,     2,
       2,     3,     1,     2,     2,     2,     2,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     1,     1,     2,
       3,     3,     4,     1,     4,     5,     2,     3,     3,     4,
       4,     1,     3,     1,     1,     1,     2,     2,     3,     2,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     0,     5,     1,     2,     0,     5,     2,     3,     3,
       3,     4,     4,     4,     1,     2,     2,     3,     1,     1,
       2,     2,     3,     1,     3,     3,     3,     4,     4,     3,
       3,     1,     4
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
  case 4: /* identifier: "__CPROVER_ID" TOK_STRING  */
#line 264 "parser.y"
        {
          yyval=yyvsp[-1];
          stack(yyval).id(ID_symbol);
          irep_idt value=stack(yyvsp[0]).get(ID_value);
          stack(yyval).set(ID_C_base_name, value);
          stack(yyval).set(ID_identifier, value);
          stack(yyval).set(
            ID_C_id_class, static_cast<int>(ansi_c_id_classt::ANSI_C_SYMBOL));
        }
#line 3437 "ansi_c_y.tab.cpp"
    break;

  case 16: /* primary_expression: '(' comma_expression ')'  */
#line 309 "parser.y"
        { yyval = yyvsp[-1]; }
#line 3443 "ansi_c_y.tab.cpp"
    break;

  case 24: /* generic_selection: "_Generic" '(' assignment_expression ',' generic_assoc_list ')'  */
#line 321 "parser.y"
        {
          yyval=yyvsp[-5];
          set(yyval, ID_generic_selection);
          mto(yyval, yyvsp[-3]);
          stack(yyval).add(ID_generic_associations).get_sub().swap((irept::subt&)stack(yyvsp[-1]).operands());
        }
#line 3454 "ansi_c_y.tab.cpp"
    break;

  case 25: /* generic_assoc_list: generic_association  */
#line 331 "parser.y"
        {
          init(yyval); mto(yyval, yyvsp[0]);
        }
#line 3462 "ansi_c_y.tab.cpp"
    break;

  case 26: /* generic_assoc_list: generic_assoc_list ',' generic_association  */
#line 335 "parser.y"
        {
          yyval=yyvsp[-2]; mto(yyval, yyvsp[0]);
        }
#line 3470 "ansi_c_y.tab.cpp"
    break;

  case 27: /* generic_association: type_name ':' assignment_expression  */
#line 342 "parser.y"
        {
          yyval=yyvsp[-1];
          stack(yyval).id(ID_generic_association);
          stack(yyval).set(ID_type_arg, stack(yyvsp[-2]));
          stack(yyval).set(ID_value, stack(yyvsp[0]));
        }
#line 3481 "ansi_c_y.tab.cpp"
    break;

  case 28: /* generic_association: "default" ':' assignment_expression  */
#line 349 "parser.y"
        {
          yyval=yyvsp[-1];
          stack(yyval).id(ID_generic_association);
          stack(yyval).set(ID_type_arg, irept(ID_default));
          stack(yyval).set(ID_value, stack(yyvsp[0]));
        }
#line 3492 "ansi_c_y.tab.cpp"
    break;

  case 29: /* gcc_builtin_expressions: "__builtin_va_arg" '(' assignment_expression ',' type_name ')'  */
#line 359 "parser.y"
        {
          yyval=yyvsp[-5];
          stack(yyval).id(ID_gcc_builtin_va_arg);
          mto(yyval, yyvsp[-3]);
          stack(yyval).type().swap(stack(yyvsp[-1]));
        }
#line 3503 "ansi_c_y.tab.cpp"
    break;

  case 30: /* gcc_builtin_expressions: "__builtin_types_compatible_p" '(' type_name ',' type_name ')'  */
#line 367 "parser.y"
        {
          yyval=yyvsp[-5];
          stack(yyval).id(ID_gcc_builtin_types_compatible_p);
          typet &type_arg=(typet &)(stack(yyval).add(ID_type_arg));
          typet::subtypest &subtypes=type_arg.subtypes();
          subtypes.resize(2);
          subtypes[0].swap(stack(yyvsp[-3]));
          subtypes[1].swap(stack(yyvsp[-1]));
        }
#line 3517 "ansi_c_y.tab.cpp"
    break;

  case 31: /* clang_builtin_expressions: "__builtin_convertvector" '(' assignment_expression ',' type_name ')'  */
#line 380 "parser.y"
        {
          yyval=yyvsp[-5];
          stack(yyval).id(ID_clang_builtin_convertvector);
          mto(yyval, yyvsp[-3]);
          stack(yyval).type().swap(stack(yyvsp[-1]));
        }
#line 3528 "ansi_c_y.tab.cpp"
    break;

  case 32: /* cw_builtin_expressions: "_var_arg_typeof" '(' type_name ')'  */
#line 390 "parser.y"
        {
          yyval=yyvsp[-3];
          stack(yyval).id(ID_cw_va_arg_typeof);
          stack(yyval).add(ID_type_arg).swap(stack(yyvsp[-1]));
        }
#line 3538 "ansi_c_y.tab.cpp"
    break;

  case 33: /* offsetof: "__offsetof" '(' type_name ',' offsetof_member_designator ')'  */
#line 399 "parser.y"
        {
          yyval=yyvsp[-5];
          stack(yyval).id(ID_builtin_offsetof);
          stack(yyval).add(ID_type_arg).swap(stack(yyvsp[-3]));
          stack(yyval).add(ID_designator).swap(stack(yyvsp[-1]));
        }
#line 3549 "ansi_c_y.tab.cpp"
    break;

  case 34: /* offsetof_member_designator: member_name  */
#line 409 "parser.y"
        {
          init(yyval, ID_designated_initializer);
          stack(yyval).operands().resize(1);
          stack(yyval).op0().id(ID_member);
          stack(yyval).op0().add_source_location()=stack(yyvsp[0]).source_location();
          stack(yyval).op0().set(ID_component_name, stack(yyvsp[0]).get(ID_C_base_name));
        }
#line 3561 "ansi_c_y.tab.cpp"
    break;

  case 35: /* offsetof_member_designator: offsetof_member_designator '.' member_name  */
#line 417 "parser.y"
        {
          yyval=yyvsp[-2];
          set(yyvsp[-1], ID_member);
          stack(yyvsp[-1]).set(ID_component_name, stack(yyvsp[0]).get(ID_C_base_name));
          mto(yyval, yyvsp[-1]);
        }
#line 3572 "ansi_c_y.tab.cpp"
    break;

  case 36: /* offsetof_member_designator: offsetof_member_designator '[' comma_expression ']'  */
#line 424 "parser.y"
        {
          yyval=yyvsp[-3];
          set(yyvsp[-2], ID_index);
          mto(yyvsp[-2], yyvsp[-1]);
          mto(yyval, yyvsp[-2]);
        }
#line 3583 "ansi_c_y.tab.cpp"
    break;

  case 37: /* offsetof_member_designator: offsetof_member_designator "->" member_name  */
#line 431 "parser.y"
        {
          yyval=yyvsp[-2];
          set(yyvsp[-1], ID_index);
          exprt tmp=convert_integer_literal("0");
          stack(yyvsp[-1]).move_to_operands(tmp);
          mto(yyval, yyvsp[-1]);
          set(yyvsp[-1], ID_member);
          stack(yyvsp[-1]).set(ID_component_name, stack(yyvsp[0]).get(ID_C_base_name));
          mto(yyval, yyvsp[-1]);
        }
#line 3598 "ansi_c_y.tab.cpp"
    break;

  case 38: /* quantifier_expression: "forall" compound_scope '{' declaration comma_expression '}'  */
#line 445 "parser.y"
        {
          yyval=yyvsp[-5];
          set(yyval, ID_forall);
          mto(yyval, yyvsp[-2]);
          mto(yyval, yyvsp[-1]);
          PARSER.pop_scope();
        }
#line 3610 "ansi_c_y.tab.cpp"
    break;

  case 39: /* quantifier_expression: "\\forall" compound_scope declaration primary_expression  */
#line 453 "parser.y"
        {
          // The precedence of this operator is too high; it is meant
          // to bind only very weakly.
          yyval=yyvsp[-3];
          set(yyval, ID_forall);
          mto(yyval, yyvsp[-1]);
          mto(yyval, yyvsp[0]);
          PARSER.pop_scope();
        }
#line 3624 "ansi_c_y.tab.cpp"
    break;

  case 40: /* quantifier_expression: "exists" compound_scope '{' declaration comma_expression '}'  */
#line 463 "parser.y"
        {
          yyval=yyvsp[-5];
          set(yyval, ID_exists);
          mto(yyval, yyvsp[-2]);
          mto(yyval, yyvsp[-1]);
          PARSER.pop_scope();
        }
#line 3636 "ansi_c_y.tab.cpp"
    break;

  case 41: /* quantifier_expression: "\\exists" compound_scope declaration primary_expression  */
#line 471 "parser.y"
        {
          // The precedence of this operator is too high; it is meant
          // to bind only very weakly.
          yyval=yyvsp[-3];
          set(yyval, ID_exists);
          mto(yyval, yyvsp[-1]);
          mto(yyval, yyvsp[0]);
          PARSER.pop_scope();
        }
#line 3650 "ansi_c_y.tab.cpp"
    break;

  case 42: /* loop_invariant_opt: %empty  */
#line 484 "parser.y"
        { init(yyval); stack(yyval).make_nil(); }
#line 3656 "ansi_c_y.tab.cpp"
    break;

  case 43: /* loop_invariant_opt: "__CPROVER_loop_invariant" '(' conditional_expression ')'  */
#line 486 "parser.y"
        { yyval=yyvsp[-1]; }
#line 3662 "ansi_c_y.tab.cpp"
    break;

  case 44: /* requires_opt: %empty  */
#line 491 "parser.y"
        { init(yyval); stack(yyval).make_nil(); }
#line 3668 "ansi_c_y.tab.cpp"
    break;

  case 45: /* requires_opt: "__CPROVER_requires" '(' conditional_expression ')'  */
#line 493 "parser.y"
        { yyval=yyvsp[-1]; }
#line 3674 "ansi_c_y.tab.cpp"
    break;

  case 46: /* ensures_opt: %empty  */
#line 498 "parser.y"
        { init(yyval); stack(yyval).make_nil(); }
#line 3680 "ansi_c_y.tab.cpp"
    break;

  case 47: /* ensures_opt: "__CPROVER_ensures" '(' conditional_expression ')'  */
#line 500 "parser.y"
        { yyval=yyvsp[-1]; }
#line 3686 "ansi_c_y.tab.cpp"
    break;

  case 48: /* statement_expression: '(' compound_statement ')'  */
#line 504 "parser.y"
        { 
          yyval=yyvsp[-2];
          set(yyval, ID_side_effect);
          stack(yyval).set(ID_statement, ID_statement_expression);
          mto(yyval, yyvsp[-1]);
        }
#line 3697 "ansi_c_y.tab.cpp"
    break;

  case 50: /* postfix_expression: postfix_expression '[' comma_expression ']'  */
#line 515 "parser.y"
        { binary(yyval, yyvsp[-3], yyvsp[-2], ID_index, yyvsp[-1]); }
#line 3703 "ansi_c_y.tab.cpp"
    break;

  case 51: /* postfix_expression: postfix_expression '(' ')'  */
#line 517 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_side_effect);
          stack(yyval).set(ID_statement, ID_function_call);
          stack(yyval).operands().resize(2);
          stack(yyval).op0().swap(stack(yyvsp[-2]));
          stack(yyval).op1().clear();
          stack(yyval).op1().id(ID_arguments);
        }
#line 3716 "ansi_c_y.tab.cpp"
    break;

  case 52: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 526 "parser.y"
        { yyval=yyvsp[-2];
          set(yyval, ID_side_effect);
          stack(yyval).set(ID_statement, ID_function_call);
          stack(yyval).operands().resize(2);
          stack(yyval).op0().swap(stack(yyvsp[-3]));
          stack(yyval).op1().swap(stack(yyvsp[-1]));
          stack(yyval).op1().id(ID_arguments);
        }
#line 3729 "ansi_c_y.tab.cpp"
    break;

  case 53: /* postfix_expression: postfix_expression '.' member_name  */
#line 535 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_member);
          mto(yyval, yyvsp[-2]);
          stack(yyval).set(ID_component_name, stack(yyvsp[0]).get(ID_C_base_name));
        }
#line 3739 "ansi_c_y.tab.cpp"
    break;

  case 54: /* postfix_expression: postfix_expression "->" member_name  */
#line 541 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_ptrmember);
          mto(yyval, yyvsp[-2]);
          stack(yyval).set(ID_component_name, stack(yyvsp[0]).get(ID_C_base_name));
        }
#line 3749 "ansi_c_y.tab.cpp"
    break;

  case 55: /* postfix_expression: postfix_expression "++"  */
#line 547 "parser.y"
        { yyval=yyvsp[0];
          set(yyval, ID_side_effect);
          stack(yyval).set(ID_statement, ID_postincrement);
          mto(yyval, yyvsp[-1]);
        }
#line 3759 "ansi_c_y.tab.cpp"
    break;

  case 56: /* postfix_expression: postfix_expression "--"  */
#line 553 "parser.y"
        { yyval=yyvsp[0];
          set(yyval, ID_side_effect);
          stack(yyval).set(ID_statement, ID_postdecrement);
          mto(yyval, yyvsp[-1]);
        }
#line 3769 "ansi_c_y.tab.cpp"
    break;

  case 57: /* postfix_expression: '(' type_name ')' '{' initializer_list_opt '}'  */
#line 560 "parser.y"
        {
          exprt tmp(ID_initializer_list);
          tmp.add_source_location()=stack(yyvsp[-2]).source_location();
          tmp.operands().swap(stack(yyvsp[-1]).operands());
          yyval=yyvsp[-5];
          set(yyval, ID_typecast);
          stack(yyval).move_to_operands(tmp);
          stack(yyval).type().swap(stack(yyvsp[-4]));
        }
#line 3783 "ansi_c_y.tab.cpp"
    break;

  case 58: /* postfix_expression: '(' type_name ')' '{' initializer_list ',' '}'  */
#line 570 "parser.y"
        {
          // same as above
          exprt tmp(ID_initializer_list);
          tmp.add_source_location()=stack(yyvsp[-3]).source_location();
          tmp.operands().swap(stack(yyvsp[-2]).operands());
          yyval=yyvsp[-6];
          set(yyval, ID_typecast);
          stack(yyval).move_to_operands(tmp);
          stack(yyval).type().swap(stack(yyvsp[-5]));
        }
#line 3798 "ansi_c_y.tab.cpp"
    break;

  case 61: /* argument_expression_list: assignment_expression  */
#line 589 "parser.y"
        {
          init(yyval, ID_expression_list);
          mto(yyval, yyvsp[0]);
        }
#line 3807 "ansi_c_y.tab.cpp"
    break;

  case 62: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 594 "parser.y"
        {
          yyval=yyvsp[-2];
          mto(yyval, yyvsp[0]);
        }
#line 3816 "ansi_c_y.tab.cpp"
    break;

  case 64: /* unary_expression: "++" unary_expression  */
#line 603 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_side_effect);
          stack(yyval).set(ID_statement, ID_preincrement);
          mto(yyval, yyvsp[0]);
        }
#line 3826 "ansi_c_y.tab.cpp"
    break;

  case 65: /* unary_expression: "--" unary_expression  */
#line 609 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_side_effect);
          stack(yyval).set(ID_statement, ID_predecrement);
          mto(yyval, yyvsp[0]);
        }
#line 3836 "ansi_c_y.tab.cpp"
    break;

  case 66: /* unary_expression: '&' cast_expression  */
#line 615 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_address_of);
          mto(yyval, yyvsp[0]);
        }
#line 3845 "ansi_c_y.tab.cpp"
    break;

  case 67: /* unary_expression: "&&" gcc_local_label  */
#line 620 "parser.y"
        { // this takes the address of a label (a gcc extension)
          yyval=yyvsp[-1];
          irep_idt identifier=PARSER.lookup_label(stack(yyvsp[0]).get(ID_C_base_name));
          set(yyval, ID_address_of);
          stack(yyval).operands().resize(1);
          stack(yyval).op0()=stack(yyvsp[0]);
          stack(yyval).op0().id(ID_label);
          stack(yyval).op0().set(ID_identifier, identifier);
        }
#line 3859 "ansi_c_y.tab.cpp"
    break;

  case 68: /* unary_expression: '*' cast_expression  */
#line 630 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_dereference);
          mto(yyval, yyvsp[0]);
        }
#line 3868 "ansi_c_y.tab.cpp"
    break;

  case 69: /* unary_expression: '+' cast_expression  */
#line 635 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_unary_plus);
          mto(yyval, yyvsp[0]);
        }
#line 3877 "ansi_c_y.tab.cpp"
    break;

  case 70: /* unary_expression: '-' cast_expression  */
#line 640 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_unary_minus);
          mto(yyval, yyvsp[0]);
        }
#line 3886 "ansi_c_y.tab.cpp"
    break;

  case 71: /* unary_expression: '~' cast_expression  */
#line 645 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_bitnot);
          mto(yyval, yyvsp[0]);
        }
#line 3895 "ansi_c_y.tab.cpp"
    break;

  case 72: /* unary_expression: '!' cast_expression  */
#line 650 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_not);
          mto(yyval, yyvsp[0]);
        }
#line 3904 "ansi_c_y.tab.cpp"
    break;

  case 73: /* unary_expression: "sizeof" unary_expression  */
#line 655 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_sizeof);
          mto(yyval, yyvsp[0]);
        }
#line 3913 "ansi_c_y.tab.cpp"
    break;

  case 74: /* unary_expression: "sizeof" '(' type_name ')'  */
#line 660 "parser.y"
        { yyval=yyvsp[-3];
          set(yyval, ID_sizeof);
          stack(yyval).add(ID_type_arg).swap(stack(yyvsp[-1]));
        }
#line 3922 "ansi_c_y.tab.cpp"
    break;

  case 75: /* unary_expression: "__alignof__" unary_expression  */
#line 665 "parser.y"
        { // note no parentheses for expressions, just like sizeof
          yyval=yyvsp[-1];
          set(yyval, ID_alignof);
          mto(yyval, yyvsp[0]);
        }
#line 3932 "ansi_c_y.tab.cpp"
    break;

  case 76: /* unary_expression: "__alignof__" '(' type_name ')'  */
#line 671 "parser.y"
        {
          yyval=yyvsp[-3];
          stack(yyval).id(ID_alignof);
          stack(yyval).add(ID_type_arg).swap(stack(yyvsp[-1]));
        }
#line 3942 "ansi_c_y.tab.cpp"
    break;

  case 78: /* cast_expression: '(' type_name ')' cast_expression  */
#line 681 "parser.y"
        {
          yyval=yyvsp[-3];
          set(yyval, ID_typecast);
          mto(yyval, yyvsp[0]);
          stack(yyval).type().swap(stack(yyvsp[-2]));
        }
#line 3953 "ansi_c_y.tab.cpp"
    break;

  case 79: /* cast_expression: "__real__" cast_expression  */
#line 688 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_complex_real);
          mto(yyval, yyvsp[0]);
        }
#line 3962 "ansi_c_y.tab.cpp"
    break;

  case 80: /* cast_expression: "__imag__" cast_expression  */
#line 693 "parser.y"
        { yyval=yyvsp[-1];
          set(yyval, ID_complex_imag);
          mto(yyval, yyvsp[0]);
        }
#line 3971 "ansi_c_y.tab.cpp"
    break;

  case 82: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 702 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_mult, yyvsp[0]); }
#line 3977 "ansi_c_y.tab.cpp"
    break;

  case 83: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 704 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_div, yyvsp[0]); }
#line 3983 "ansi_c_y.tab.cpp"
    break;

  case 84: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 706 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_mod, yyvsp[0]); }
#line 3989 "ansi_c_y.tab.cpp"
    break;

  case 86: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 712 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_plus, yyvsp[0]); }
#line 3995 "ansi_c_y.tab.cpp"
    break;

  case 87: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 714 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_minus, yyvsp[0]); }
#line 4001 "ansi_c_y.tab.cpp"
    break;

  case 89: /* shift_expression: shift_expression "<<" additive_expression  */
#line 720 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_shl, yyvsp[0]); }
#line 4007 "ansi_c_y.tab.cpp"
    break;

  case 90: /* shift_expression: shift_expression ">>" additive_expression  */
#line 722 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_shr, yyvsp[0]); }
#line 4013 "ansi_c_y.tab.cpp"
    break;

  case 92: /* relational_expression: relational_expression '<' shift_expression  */
#line 728 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_lt, yyvsp[0]); }
#line 4019 "ansi_c_y.tab.cpp"
    break;

  case 93: /* relational_expression: relational_expression '>' shift_expression  */
#line 730 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_gt, yyvsp[0]); }
#line 4025 "ansi_c_y.tab.cpp"
    break;

  case 94: /* relational_expression: relational_expression "<=" shift_expression  */
#line 732 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_le, yyvsp[0]); }
#line 4031 "ansi_c_y.tab.cpp"
    break;

  case 95: /* relational_expression: relational_expression ">=" shift_expression  */
#line 734 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_ge, yyvsp[0]); }
#line 4037 "ansi_c_y.tab.cpp"
    break;

  case 97: /* equality_expression: equality_expression "==" relational_expression  */
#line 740 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_equal, yyvsp[0]); }
#line 4043 "ansi_c_y.tab.cpp"
    break;

  case 98: /* equality_expression: equality_expression "!=" relational_expression  */
#line 742 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_notequal, yyvsp[0]); }
#line 4049 "ansi_c_y.tab.cpp"
    break;

  case 100: /* and_expression: and_expression '&' equality_expression  */
#line 748 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_bitand, yyvsp[0]); }
#line 4055 "ansi_c_y.tab.cpp"
    break;

  case 102: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 754 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_bitxor, yyvsp[0]); }
#line 4061 "ansi_c_y.tab.cpp"
    break;

  case 104: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 760 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_bitor, yyvsp[0]); }
#line 4067 "ansi_c_y.tab.cpp"
    break;

  case 106: /* logical_and_expression: logical_and_expression "&&" inclusive_or_expression  */
#line 766 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_and, yyvsp[0]); }
#line 4073 "ansi_c_y.tab.cpp"
    break;

  case 108: /* logical_or_expression: logical_or_expression "||" logical_and_expression  */
#line 772 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_or, yyvsp[0]); }
#line 4079 "ansi_c_y.tab.cpp"
    break;

  case 110: /* logical_implication_expression: logical_or_expression "==>" logical_implication_expression  */
#line 781 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_implies, yyvsp[0]); }
#line 4085 "ansi_c_y.tab.cpp"
    break;

  case 112: /* logical_equivalence_expression: logical_equivalence_expression "<==>" logical_implication_expression  */
#line 790 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_equal, yyvsp[0]); }
#line 4091 "ansi_c_y.tab.cpp"
    break;

  case 114: /* conditional_expression: logical_equivalence_expression '?' comma_expression ':' conditional_expression  */
#line 796 "parser.y"
        { yyval=yyvsp[-3];
          stack(yyval).id(ID_if);
          mto(yyval, yyvsp[-4]);
          mto(yyval, yyvsp[-2]);
          mto(yyval, yyvsp[0]);
        }
#line 4102 "ansi_c_y.tab.cpp"
    break;

  case 115: /* conditional_expression: logical_equivalence_expression '?' ':' conditional_expression  */
#line 803 "parser.y"
        { yyval=yyvsp[-2];
          stack(yyval).id(ID_side_effect);
          stack(yyval).set(ID_statement, ID_gcc_conditional_expression);
          mto(yyval, yyvsp[-3]);
          mto(yyval, yyvsp[0]);
        }
#line 4113 "ansi_c_y.tab.cpp"
    break;

  case 117: /* assignment_expression: cast_expression '=' assignment_expression  */
#line 814 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_side_effect, yyvsp[0]); stack(yyval).set(ID_statement, ID_assign); }
#line 4119 "ansi_c_y.tab.cpp"
    break;

  case 118: /* assignment_expression: cast_expression "*=" assignment_expression  */
#line 816 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_side_effect, yyvsp[0]); stack(yyval).set(ID_statement, ID_assign_mult); }
#line 4125 "ansi_c_y.tab.cpp"
    break;

  case 119: /* assignment_expression: cast_expression "/=" assignment_expression  */
#line 818 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_side_effect, yyvsp[0]); stack(yyval).set(ID_statement, ID_assign_div); }
#line 4131 "ansi_c_y.tab.cpp"
    break;

  case 120: /* assignment_expression: cast_expression "%=" assignment_expression  */
#line 820 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_side_effect, yyvsp[0]); stack(yyval).set(ID_statement, ID_assign_mod); }
#line 4137 "ansi_c_y.tab.cpp"
    break;

  case 121: /* assignment_expression: cast_expression "+=" assignment_expression  */
#line 822 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_side_effect, yyvsp[0]); stack(yyval).set(ID_statement, ID_assign_plus); }
#line 4143 "ansi_c_y.tab.cpp"
    break;

  case 122: /* assignment_expression: cast_expression "-=" assignment_expression  */
#line 824 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_side_effect, yyvsp[0]); stack(yyval).set(ID_statement, ID_assign_minus); }
#line 4149 "ansi_c_y.tab.cpp"
    break;

  case 123: /* assignment_expression: cast_expression "<<=" assignment_expression  */
#line 826 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_side_effect, yyvsp[0]); stack(yyval).set(ID_statement, ID_assign_shl); }
#line 4155 "ansi_c_y.tab.cpp"
    break;

  case 124: /* assignment_expression: cast_expression ">>=" assignment_expression  */
#line 828 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_side_effect, yyvsp[0]); stack(yyval).set(ID_statement, ID_assign_shr); }
#line 4161 "ansi_c_y.tab.cpp"
    break;

  case 125: /* assignment_expression: cast_expression "&=" assignment_expression  */
#line 830 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_side_effect, yyvsp[0]); stack(yyval).set(ID_statement, ID_assign_bitand); }
#line 4167 "ansi_c_y.tab.cpp"
    break;

  case 126: /* assignment_expression: cast_expression "^=" assignment_expression  */
#line 832 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_side_effect, yyvsp[0]); stack(yyval).set(ID_statement, ID_assign_bitxor); }
#line 4173 "ansi_c_y.tab.cpp"
    break;

  case 127: /* assignment_expression: cast_expression "|=" assignment_expression  */
#line 834 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_side_effect, yyvsp[0]); stack(yyval).set(ID_statement, ID_assign_bitor); }
#line 4179 "ansi_c_y.tab.cpp"
    break;

  case 129: /* comma_expression: comma_expression ',' assignment_expression  */
#line 840 "parser.y"
        { binary(yyval, yyvsp[-2], yyvsp[-1], ID_comma, yyvsp[0]); }
#line 4185 "ansi_c_y.tab.cpp"
    break;

  case 131: /* comma_expression_opt: %empty  */
#line 849 "parser.y"
        { init(yyval); stack(yyval).make_nil(); }
#line 4191 "ansi_c_y.tab.cpp"
    break;

  case 133: /* declaration: declaration_specifier ';'  */
#line 857 "parser.y"
        {
          // type only, no declarator!
          init(yyval, ID_declaration);
          stack(yyval).type().swap(stack(yyvsp[-1]));
        }
#line 4201 "ansi_c_y.tab.cpp"
    break;

  case 134: /* declaration: type_specifier ';'  */
#line 863 "parser.y"
        {
          // type only, no identifier!
          init(yyval, ID_declaration);
          stack(yyval).type().swap(stack(yyvsp[-1]));
        }
#line 4211 "ansi_c_y.tab.cpp"
    break;

  case 138: /* static_assert_declaration: "_Static_assert" '(' assignment_expression ',' assignment_expression ')'  */
#line 875 "parser.y"
        {
          yyval=yyvsp[-5];
          set(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_static_assert(true);
          mto(yyval, yyvsp[-3]);
          mto(yyval, yyvsp[-1]);
        }
#line 4223 "ansi_c_y.tab.cpp"
    break;

  case 139: /* @1: %empty  */
#line 886 "parser.y"
          {
            init(yyval, ID_declaration);
            stack(yyval).type().swap(stack(yyvsp[-1]));
            PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
          }
#line 4233 "ansi_c_y.tab.cpp"
    break;

  case 140: /* default_declaring_list: declaration_qualifier_list identifier_declarator @1 initializer_opt  */
#line 892 "parser.y"
        {
          // patch on the initializer
          yyval=yyvsp[-1];
          to_ansi_c_declaration(stack(yyval)).add_initializer(stack(yyvsp[0]));
        }
#line 4243 "ansi_c_y.tab.cpp"
    break;

  case 141: /* @2: %empty  */
#line 898 "parser.y"
          {
            init(yyval, ID_declaration);
            stack(yyval).type().swap(stack(yyvsp[-1]));
            PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
          }
#line 4253 "ansi_c_y.tab.cpp"
    break;

  case 142: /* default_declaring_list: type_qualifier_list identifier_declarator @2 initializer_opt  */
#line 904 "parser.y"
        {
          // patch on the initializer
          yyval=yyvsp[-1];
          to_ansi_c_declaration(stack(yyval)).add_initializer(stack(yyvsp[0]));
        }
#line 4263 "ansi_c_y.tab.cpp"
    break;

  case 143: /* $@3: %empty  */
#line 910 "parser.y"
          {
            // just add the declarator
            PARSER.add_declarator(stack(yyvsp[-2]), stack(yyvsp[0]));
            // Needs to be done before initializer, as we want to see that identifier
            // already there!
          }
#line 4274 "ansi_c_y.tab.cpp"
    break;

  case 144: /* default_declaring_list: default_declaring_list ',' identifier_declarator $@3 initializer_opt  */
#line 917 "parser.y"
        {
          // patch on the initializer
          yyval=yyvsp[-4];
          to_ansi_c_declaration(stack(yyval)).add_initializer(stack(yyvsp[0]));
        }
#line 4284 "ansi_c_y.tab.cpp"
    break;

  case 145: /* post_declarator_attribute: "__asm__ (with parentheses)" volatile_or_goto_opt '(' gcc_asm_commands ')'  */
#line 926 "parser.y"
        {
          yyval=yyvsp[-4];
          stack(yyval).id(ID_asm);
          stack(yyval).set(ID_flavor, ID_gcc);
          stack(yyval).operands().swap(stack(yyvsp[-1]).operands());
        }
#line 4295 "ansi_c_y.tab.cpp"
    break;

  case 147: /* post_declarator_attributes: post_declarator_attributes post_declarator_attribute  */
#line 937 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4303 "ansi_c_y.tab.cpp"
    break;

  case 149: /* post_declarator_attributes_opt: %empty  */
#line 945 "parser.y"
        {
          init(yyval);
        }
#line 4311 "ansi_c_y.tab.cpp"
    break;

  case 151: /* @4: %empty  */
#line 954 "parser.y"
          {
            yyvsp[-1]=merge(yyvsp[0], yyvsp[-1]); // type attribute
            
            // the symbol has to be visible during initialization
            init(yyval, ID_declaration);
            stack(yyval).type().swap(stack(yyvsp[-2]));
            PARSER.add_declarator(stack(yyval), stack(yyvsp[-1]));
          }
#line 4324 "ansi_c_y.tab.cpp"
    break;

  case 152: /* declaring_list: declaration_specifier declarator post_declarator_attributes_opt @4 initializer_opt  */
#line 963 "parser.y"
        {
          // add the initializer
          yyval=yyvsp[-1];
          to_ansi_c_declaration(stack(yyval)).add_initializer(stack(yyvsp[0]));
        }
#line 4334 "ansi_c_y.tab.cpp"
    break;

  case 153: /* @5: %empty  */
#line 970 "parser.y"
          {
            yyvsp[-1]=merge(yyvsp[0], yyvsp[-1]);
            
            // the symbol has to be visible during initialization
            init(yyval, ID_declaration);
            stack(yyval).type().swap(stack(yyvsp[-2]));
            PARSER.add_declarator(stack(yyval), stack(yyvsp[-1]));
          }
#line 4347 "ansi_c_y.tab.cpp"
    break;

  case 154: /* declaring_list: type_specifier declarator post_declarator_attributes_opt @5 initializer_opt  */
#line 979 "parser.y"
        {
          // add the initializer
          yyval=yyvsp[-1];
          to_ansi_c_declaration(stack(yyval)).add_initializer(stack(yyvsp[0]));
        }
#line 4357 "ansi_c_y.tab.cpp"
    break;

  case 155: /* declaring_list: "__auto_type" declarator post_declarator_attributes_opt '=' initializer  */
#line 986 "parser.y"
        {
          // handled as typeof(initializer)
          stack(yyvsp[-4]).id(ID_typeof);
          stack(yyvsp[-4]).copy_to_operands(stack(yyvsp[0]));

          yyvsp[-3]=merge(yyvsp[-2], yyvsp[-3]);

          // the symbol has to be visible during initialization
          init(yyval, ID_declaration);
          stack(yyval).type().swap(stack(yyvsp[-4]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[-3]));
          // add the initializer
          to_ansi_c_declaration(stack(yyval)).add_initializer(stack(yyvsp[0]));
        }
#line 4376 "ansi_c_y.tab.cpp"
    break;

  case 156: /* $@6: %empty  */
#line 1002 "parser.y"
          {
            // type attribute goes into declarator
            yyvsp[0]=merge(yyvsp[0], yyvsp[-2]);
            yyvsp[-1]=merge(yyvsp[0], yyvsp[-1]);
            PARSER.add_declarator(stack(yyvsp[-4]), stack(yyvsp[-1]));
          }
#line 4387 "ansi_c_y.tab.cpp"
    break;

  case 157: /* declaring_list: declaring_list ',' gcc_type_attribute_opt declarator post_declarator_attributes_opt $@6 initializer_opt  */
#line 1009 "parser.y"
        {
          // add in the initializer
          yyval=yyvsp[-6];
          to_ansi_c_declaration(stack(yyval)).add_initializer(stack(yyvsp[0]));
        }
#line 4397 "ansi_c_y.tab.cpp"
    break;

  case 169: /* declaration_qualifier_list: type_qualifier_list storage_class  */
#line 1035 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4405 "ansi_c_y.tab.cpp"
    break;

  case 171: /* declaration_qualifier_list: declaration_qualifier_list gcc_attribute_specifier  */
#line 1040 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4413 "ansi_c_y.tab.cpp"
    break;

  case 172: /* declaration_qualifier_list: declaration_qualifier_list declaration_qualifier  */
#line 1044 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4421 "ansi_c_y.tab.cpp"
    break;

  case 174: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 1052 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4429 "ansi_c_y.tab.cpp"
    break;

  case 175: /* type_qualifier_list: type_qualifier_list gcc_attribute_specifier  */
#line 1059 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4437 "ansi_c_y.tab.cpp"
    break;

  case 177: /* attribute_type_qualifier_list: attribute_type_qualifier_list attribute_or_type_qualifier  */
#line 1067 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4445 "ansi_c_y.tab.cpp"
    break;

  case 180: /* type_qualifier: "_Atomic"  */
#line 1078 "parser.y"
                                    { yyval=yyvsp[0]; set(yyval, ID_atomic); }
#line 4451 "ansi_c_y.tab.cpp"
    break;

  case 181: /* type_qualifier: "const"  */
#line 1079 "parser.y"
                                    { yyval=yyvsp[0]; set(yyval, ID_const); }
#line 4457 "ansi_c_y.tab.cpp"
    break;

  case 182: /* type_qualifier: "restrict"  */
#line 1080 "parser.y"
                                    { yyval=yyvsp[0]; set(yyval, ID_restrict); }
#line 4463 "ansi_c_y.tab.cpp"
    break;

  case 183: /* type_qualifier: "volatile"  */
#line 1081 "parser.y"
                                    { yyval=yyvsp[0]; set(yyval, ID_volatile); }
#line 4469 "ansi_c_y.tab.cpp"
    break;

  case 184: /* type_qualifier: "__CPROVER_atomic"  */
#line 1082 "parser.y"
                                    { yyval=yyvsp[0]; set(yyval, ID_cprover_atomic); }
#line 4475 "ansi_c_y.tab.cpp"
    break;

  case 185: /* type_qualifier: "__ptr32"  */
#line 1083 "parser.y"
                                    { yyval=yyvsp[0]; set(yyval, ID_ptr32); }
#line 4481 "ansi_c_y.tab.cpp"
    break;

  case 186: /* type_qualifier: "__ptr64"  */
#line 1084 "parser.y"
                                    { yyval=yyvsp[0]; set(yyval, ID_ptr64); }
#line 4487 "ansi_c_y.tab.cpp"
    break;

  case 187: /* type_qualifier: "__based" '(' comma_expression ')'  */
#line 1085 "parser.y"
                                                 { yyval=yyvsp[-3]; set(yyval, ID_msc_based); mto(yyval, yyvsp[-1]); }
#line 4493 "ansi_c_y.tab.cpp"
    break;

  case 189: /* alignas_specifier: "_Alignas" '(' comma_expression ')'  */
#line 1091 "parser.y"
        { yyval = yyvsp[-3];
          stack(yyval).id(ID_aligned);
          stack(yyval).set(ID_size, stack(yyvsp[-1]));
        }
#line 4502 "ansi_c_y.tab.cpp"
    break;

  case 190: /* alignas_specifier: "_Alignas" '(' type_name ')'  */
#line 1096 "parser.y"
        { yyval = yyvsp[-3];
          stack(yyval).id(ID_aligned);
          stack(yyvsp[-1]).set(ID_type_arg, stack(yyvsp[-1]));
        }
#line 4511 "ansi_c_y.tab.cpp"
    break;

  case 197: /* attribute_type_qualifier_storage_class_list: attribute_type_qualifier_storage_class_list attribute_or_type_qualifier_or_storage_class  */
#line 1116 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4519 "ansi_c_y.tab.cpp"
    break;

  case 198: /* basic_declaration_specifier: declaration_qualifier_list basic_type_name gcc_type_attribute_opt  */
#line 1123 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4527 "ansi_c_y.tab.cpp"
    break;

  case 199: /* basic_declaration_specifier: basic_type_specifier storage_class gcc_type_attribute_opt  */
#line 1127 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4535 "ansi_c_y.tab.cpp"
    break;

  case 200: /* basic_declaration_specifier: basic_declaration_specifier declaration_qualifier gcc_type_attribute_opt  */
#line 1131 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4543 "ansi_c_y.tab.cpp"
    break;

  case 201: /* basic_declaration_specifier: basic_declaration_specifier basic_type_name gcc_type_attribute_opt  */
#line 1135 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4551 "ansi_c_y.tab.cpp"
    break;

  case 202: /* basic_type_specifier: basic_type_name gcc_type_attribute_opt  */
#line 1142 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]); // type attribute
        }
#line 4559 "ansi_c_y.tab.cpp"
    break;

  case 203: /* basic_type_specifier: type_qualifier_list basic_type_name gcc_type_attribute_opt  */
#line 1146 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4567 "ansi_c_y.tab.cpp"
    break;

  case 204: /* basic_type_specifier: basic_type_specifier type_qualifier  */
#line 1150 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4575 "ansi_c_y.tab.cpp"
    break;

  case 205: /* basic_type_specifier: basic_type_specifier basic_type_name gcc_type_attribute_opt  */
#line 1154 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4583 "ansi_c_y.tab.cpp"
    break;

  case 206: /* sue_declaration_specifier: declaration_qualifier_list elaborated_type_name  */
#line 1162 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4591 "ansi_c_y.tab.cpp"
    break;

  case 207: /* sue_declaration_specifier: sue_type_specifier storage_class  */
#line 1166 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4599 "ansi_c_y.tab.cpp"
    break;

  case 208: /* sue_declaration_specifier: sue_declaration_specifier declaration_qualifier  */
#line 1170 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4607 "ansi_c_y.tab.cpp"
    break;

  case 210: /* sue_type_specifier: type_qualifier_list elaborated_type_name  */
#line 1179 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4615 "ansi_c_y.tab.cpp"
    break;

  case 211: /* sue_type_specifier: sue_type_specifier type_qualifier  */
#line 1183 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4623 "ansi_c_y.tab.cpp"
    break;

  case 212: /* typedef_declaration_specifier: typedef_type_specifier storage_class gcc_type_attribute_opt  */
#line 1190 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4631 "ansi_c_y.tab.cpp"
    break;

  case 213: /* typedef_declaration_specifier: declaration_qualifier_list typedef_name gcc_type_attribute_opt  */
#line 1194 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4639 "ansi_c_y.tab.cpp"
    break;

  case 214: /* typedef_declaration_specifier: typedef_declaration_specifier declaration_qualifier gcc_type_attribute_opt  */
#line 1198 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4647 "ansi_c_y.tab.cpp"
    break;

  case 215: /* typeof_declaration_specifier: typeof_type_specifier storage_class gcc_type_attribute_opt  */
#line 1205 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4655 "ansi_c_y.tab.cpp"
    break;

  case 216: /* typeof_declaration_specifier: declaration_qualifier_list typeof_specifier gcc_type_attribute_opt  */
#line 1209 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4663 "ansi_c_y.tab.cpp"
    break;

  case 217: /* typeof_declaration_specifier: typeof_declaration_specifier declaration_qualifier gcc_type_attribute_opt  */
#line 1213 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4671 "ansi_c_y.tab.cpp"
    break;

  case 218: /* atomic_declaration_specifier: atomic_type_specifier storage_class gcc_type_attribute_opt  */
#line 1220 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4679 "ansi_c_y.tab.cpp"
    break;

  case 219: /* atomic_declaration_specifier: declaration_qualifier_list atomic_specifier gcc_type_attribute_opt  */
#line 1224 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4687 "ansi_c_y.tab.cpp"
    break;

  case 220: /* atomic_declaration_specifier: atomic_declaration_specifier declaration_qualifier gcc_type_attribute_opt  */
#line 1228 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4695 "ansi_c_y.tab.cpp"
    break;

  case 221: /* typedef_type_specifier: typedef_name gcc_type_attribute_opt  */
#line 1235 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4703 "ansi_c_y.tab.cpp"
    break;

  case 222: /* typedef_type_specifier: type_qualifier_list typedef_name gcc_type_attribute_opt  */
#line 1239 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4711 "ansi_c_y.tab.cpp"
    break;

  case 223: /* typedef_type_specifier: typedef_type_specifier type_qualifier gcc_type_attribute_opt  */
#line 1243 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4719 "ansi_c_y.tab.cpp"
    break;

  case 224: /* typeof_specifier: "typeof" '(' comma_expression ')'  */
#line 1250 "parser.y"
        { yyval = yyvsp[-3];
          stack(yyval).id(ID_typeof);
          mto(yyval, yyvsp[-1]);
        }
#line 4728 "ansi_c_y.tab.cpp"
    break;

  case 225: /* typeof_specifier: "typeof" '(' type_name ')'  */
#line 1255 "parser.y"
        { yyval = yyvsp[-3];
          stack(yyval).id(ID_typeof);
          stack(yyval).set(ID_type_arg, stack(yyvsp[-1]));
        }
#line 4737 "ansi_c_y.tab.cpp"
    break;

  case 227: /* typeof_type_specifier: type_qualifier_list typeof_specifier  */
#line 1264 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4745 "ansi_c_y.tab.cpp"
    break;

  case 228: /* typeof_type_specifier: type_qualifier_list typeof_specifier type_qualifier_list  */
#line 1268 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4753 "ansi_c_y.tab.cpp"
    break;

  case 229: /* typeof_type_specifier: typeof_specifier type_qualifier_list  */
#line 1272 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4761 "ansi_c_y.tab.cpp"
    break;

  case 230: /* atomic_specifier: "_Atomic()" '(' type_name ')'  */
#line 1279 "parser.y"
        {
          yyval=yyvsp[-3];
          stack(yyval).id(ID_atomic_type_specifier);
          stack_type(yyval).subtype()=stack_type(yyvsp[-1]);
        }
#line 4771 "ansi_c_y.tab.cpp"
    break;

  case 232: /* atomic_type_specifier: type_qualifier_list atomic_specifier  */
#line 1289 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4779 "ansi_c_y.tab.cpp"
    break;

  case 233: /* atomic_type_specifier: type_qualifier_list atomic_specifier type_qualifier_list  */
#line 1293 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 4787 "ansi_c_y.tab.cpp"
    break;

  case 234: /* atomic_type_specifier: atomic_specifier type_qualifier_list  */
#line 1297 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 4795 "ansi_c_y.tab.cpp"
    break;

  case 235: /* msc_decl_identifier: TOK_IDENTIFIER  */
#line 1304 "parser.y"
        {
          stack(yyval).id(stack(yyval).get(ID_identifier));
        }
#line 4803 "ansi_c_y.tab.cpp"
    break;

  case 236: /* msc_decl_identifier: TOK_TYPEDEFNAME  */
#line 1308 "parser.y"
        {
          stack(yyval).id(stack(yyval).get(ID_identifier));
        }
#line 4811 "ansi_c_y.tab.cpp"
    break;

  case 237: /* msc_decl_identifier: "restrict"  */
#line 1312 "parser.y"
        {
          stack(yyval).id(ID_restrict);
        }
#line 4819 "ansi_c_y.tab.cpp"
    break;

  case 239: /* msc_decl_modifier: msc_decl_identifier '(' TOK_STRING ')'  */
#line 1320 "parser.y"
        {
          yyval=yyvsp[-3]; mto(yyval, yyvsp[-1]);
        }
#line 4827 "ansi_c_y.tab.cpp"
    break;

  case 240: /* msc_decl_modifier: msc_decl_identifier '(' TOK_INTEGER ')'  */
#line 1324 "parser.y"
        {
          yyval=yyvsp[-3]; mto(yyval, yyvsp[-1]);
        }
#line 4835 "ansi_c_y.tab.cpp"
    break;

  case 241: /* msc_decl_modifier: msc_decl_identifier '(' msc_decl_identifier '=' msc_decl_identifier ')'  */
#line 1328 "parser.y"
        {
          yyval=yyvsp[-5]; mto(yyval, yyvsp[-3]); mto(yyval, yyvsp[-1]);
        }
#line 4843 "ansi_c_y.tab.cpp"
    break;

  case 242: /* msc_decl_modifier: msc_decl_identifier '(' msc_decl_identifier '=' msc_decl_identifier ',' msc_decl_identifier '=' msc_decl_identifier ')'  */
#line 1332 "parser.y"
        {
          yyval=yyvsp[-9]; mto(yyval, yyvsp[-7]); mto(yyval, yyvsp[-5]); mto(yyval, yyvsp[-3]); mto(yyval, yyvsp[-1]);
        }
#line 4851 "ansi_c_y.tab.cpp"
    break;

  case 243: /* msc_decl_modifier: ','  */
#line 1335 "parser.y"
              { init(yyval, ID_nil); }
#line 4857 "ansi_c_y.tab.cpp"
    break;

  case 244: /* msc_declspec_seq: msc_decl_modifier  */
#line 1340 "parser.y"
        {
          init(yyval); mto(yyval, yyvsp[0]);
        }
#line 4865 "ansi_c_y.tab.cpp"
    break;

  case 245: /* msc_declspec_seq: msc_declspec_seq msc_decl_modifier  */
#line 1344 "parser.y"
        {
          yyval=yyvsp[-1]; mto(yyval, yyvsp[0]);
        }
#line 4873 "ansi_c_y.tab.cpp"
    break;

  case 246: /* msc_declspec: "__declspec" '(' msc_declspec_seq ')'  */
#line 1351 "parser.y"
        {
          yyval=yyvsp[-3]; set(yyval, ID_msc_declspec);
          stack(yyval).operands().swap(stack(yyvsp[-1]).operands());
        }
#line 4882 "ansi_c_y.tab.cpp"
    break;

  case 247: /* msc_declspec: "__declspec" '(' ')'  */
#line 1356 "parser.y"
        {
          yyval=yyvsp[-2]; set(yyval, ID_msc_declspec);
        }
#line 4890 "ansi_c_y.tab.cpp"
    break;

  case 248: /* msc_declspec_opt: %empty  */
#line 1363 "parser.y"
        {
          init(yyval, ID_nil);
        }
#line 4898 "ansi_c_y.tab.cpp"
    break;

  case 250: /* storage_class: "typedef"  */
#line 1370 "parser.y"
                           { yyval=yyvsp[0]; set(yyval, ID_typedef); }
#line 4904 "ansi_c_y.tab.cpp"
    break;

  case 251: /* storage_class: "extern"  */
#line 1371 "parser.y"
                           { yyval=yyvsp[0]; set(yyval, ID_extern); }
#line 4910 "ansi_c_y.tab.cpp"
    break;

  case 252: /* storage_class: "static"  */
#line 1372 "parser.y"
                           { yyval=yyvsp[0]; set(yyval, ID_static); }
#line 4916 "ansi_c_y.tab.cpp"
    break;

  case 253: /* storage_class: "auto"  */
#line 1373 "parser.y"
                           { yyval=yyvsp[0]; set(yyval, ID_auto); }
#line 4922 "ansi_c_y.tab.cpp"
    break;

  case 254: /* storage_class: "register"  */
#line 1374 "parser.y"
                           { yyval=yyvsp[0]; set(yyval, ID_register); }
#line 4928 "ansi_c_y.tab.cpp"
    break;

  case 255: /* storage_class: "inline"  */
#line 1375 "parser.y"
                           { yyval=yyvsp[0]; set(yyval, ID_inline); }
#line 4934 "ansi_c_y.tab.cpp"
    break;

  case 256: /* storage_class: "_Thread_local"  */
#line 1376 "parser.y"
                           { yyval=yyvsp[0]; set(yyval, ID_thread_local); }
#line 4940 "ansi_c_y.tab.cpp"
    break;

  case 257: /* storage_class: "__asm__"  */
#line 1377 "parser.y"
                           { yyval=yyvsp[0]; set(yyval, ID_asm); }
#line 4946 "ansi_c_y.tab.cpp"
    break;

  case 258: /* storage_class: msc_declspec  */
#line 1378 "parser.y"
                           { yyval=yyvsp[0]; }
#line 4952 "ansi_c_y.tab.cpp"
    break;

  case 259: /* basic_type_name: "int"  */
#line 1382 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_int); }
#line 4958 "ansi_c_y.tab.cpp"
    break;

  case 260: /* basic_type_name: "__int8"  */
#line 1383 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_int8); }
#line 4964 "ansi_c_y.tab.cpp"
    break;

  case 261: /* basic_type_name: "__int16"  */
#line 1384 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_int16); }
#line 4970 "ansi_c_y.tab.cpp"
    break;

  case 262: /* basic_type_name: "__int32"  */
#line 1385 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_int32); }
#line 4976 "ansi_c_y.tab.cpp"
    break;

  case 263: /* basic_type_name: "__int64"  */
#line 1386 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_int64); }
#line 4982 "ansi_c_y.tab.cpp"
    break;

  case 264: /* basic_type_name: "char"  */
#line 1387 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_char); }
#line 4988 "ansi_c_y.tab.cpp"
    break;

  case 265: /* basic_type_name: "short"  */
#line 1388 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_short); }
#line 4994 "ansi_c_y.tab.cpp"
    break;

  case 266: /* basic_type_name: "long"  */
#line 1389 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_long); }
#line 5000 "ansi_c_y.tab.cpp"
    break;

  case 267: /* basic_type_name: "float"  */
#line 1390 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_float); }
#line 5006 "ansi_c_y.tab.cpp"
    break;

  case 268: /* basic_type_name: "__float80"  */
#line 1391 "parser.y"
                          { yyval=yyvsp[0]; set(yyval, ID_gcc_float80); }
#line 5012 "ansi_c_y.tab.cpp"
    break;

  case 269: /* basic_type_name: "__float128"  */
#line 1392 "parser.y"
                           { yyval=yyvsp[0]; set(yyval, ID_gcc_float128); }
#line 5018 "ansi_c_y.tab.cpp"
    break;

  case 270: /* basic_type_name: "__int128"  */
#line 1393 "parser.y"
                         { yyval=yyvsp[0]; set(yyval, ID_gcc_int128); }
#line 5024 "ansi_c_y.tab.cpp"
    break;

  case 271: /* basic_type_name: "_Decimal32"  */
#line 1394 "parser.y"
                            { yyval=yyvsp[0]; set(yyval, ID_gcc_decimal32); }
#line 5030 "ansi_c_y.tab.cpp"
    break;

  case 272: /* basic_type_name: "_Decimal64"  */
#line 1395 "parser.y"
                            { yyval=yyvsp[0]; set(yyval, ID_gcc_decimal64); }
#line 5036 "ansi_c_y.tab.cpp"
    break;

  case 273: /* basic_type_name: "_Decimal128"  */
#line 1396 "parser.y"
                             { yyval=yyvsp[0]; set(yyval, ID_gcc_decimal128); }
#line 5042 "ansi_c_y.tab.cpp"
    break;

  case 274: /* basic_type_name: "double"  */
#line 1397 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_double); }
#line 5048 "ansi_c_y.tab.cpp"
    break;

  case 275: /* basic_type_name: "signed"  */
#line 1398 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_signed); }
#line 5054 "ansi_c_y.tab.cpp"
    break;

  case 276: /* basic_type_name: "unsigned"  */
#line 1399 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_unsigned); }
#line 5060 "ansi_c_y.tab.cpp"
    break;

  case 277: /* basic_type_name: "void"  */
#line 1400 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_void); }
#line 5066 "ansi_c_y.tab.cpp"
    break;

  case 278: /* basic_type_name: "bool"  */
#line 1401 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_c_bool); }
#line 5072 "ansi_c_y.tab.cpp"
    break;

  case 279: /* basic_type_name: "complex"  */
#line 1402 "parser.y"
                       { yyval=yyvsp[0]; set(yyval, ID_complex); }
#line 5078 "ansi_c_y.tab.cpp"
    break;

  case 280: /* basic_type_name: "__CPROVER_bitvector" '[' comma_expression ']'  */
#line 1404 "parser.y"
        {
          yyval=yyvsp[-3];
          set(yyval, ID_custom_bv);
          stack(yyval).add(ID_size).swap(stack(yyvsp[-1]));
        }
#line 5088 "ansi_c_y.tab.cpp"
    break;

  case 281: /* basic_type_name: "__CPROVER_floatbv" '[' comma_expression ']' '[' comma_expression ']'  */
#line 1410 "parser.y"
        {
          yyval=yyvsp[-6];
          set(yyval, ID_custom_floatbv);
          stack(yyval).add(ID_size).swap(stack(yyvsp[-4]));
          stack(yyval).add(ID_f).swap(stack(yyvsp[-1]));
        }
#line 5099 "ansi_c_y.tab.cpp"
    break;

  case 282: /* basic_type_name: "__CPROVER_fixedbv" '[' comma_expression ']' '[' comma_expression ']'  */
#line 1417 "parser.y"
        {
          yyval=yyvsp[-6];
          set(yyval, ID_custom_fixedbv);
          stack(yyval).add(ID_size).swap(stack(yyvsp[-4]));
          stack(yyval).add(ID_f).swap(stack(yyvsp[-1]));
        }
#line 5110 "ansi_c_y.tab.cpp"
    break;

  case 283: /* basic_type_name: "__CPROVER_bool"  */
#line 1423 "parser.y"
                           { yyval=yyvsp[0]; set(yyval, ID_proper_bool); }
#line 5116 "ansi_c_y.tab.cpp"
    break;

  case 287: /* array_of_construct: "array_of" '<' type_name '>'  */
#line 1434 "parser.y"
        { yyval=yyvsp[-3]; stack_type(yyval).subtype().swap(stack(yyvsp[-2])); }
#line 5122 "ansi_c_y.tab.cpp"
    break;

  case 288: /* pragma_packed: %empty  */
#line 1438 "parser.y"
        {
          init(yyval);
          if(!PARSER.pragma_pack.empty() &&
             PARSER.pragma_pack.back().is_one())
            set(yyval, ID_packed);
        }
#line 5133 "ansi_c_y.tab.cpp"
    break;

  case 289: /* $@7: %empty  */
#line 1450 "parser.y"
          {
            // an anon struct/union with body
          }
#line 5141 "ansi_c_y.tab.cpp"
    break;

  case 290: /* aggregate_name: aggregate_key gcc_type_attribute_opt msc_declspec_opt $@7 '{' member_declaration_list_opt '}' gcc_type_attribute_opt pragma_packed  */
#line 1456 "parser.y"
        {
          // save the members
          stack(yyvsp[-8]).add(ID_components).get_sub().swap(
            (irept::subt &)stack(yyvsp[-3]).operands());

          // throw in the gcc attributes
          yyval=merge(yyvsp[-8], merge(yyvsp[-7], merge(yyvsp[-1], yyvsp[0])));
        }
#line 5154 "ansi_c_y.tab.cpp"
    break;

  case 291: /* $@8: %empty  */
#line 1468 "parser.y"
          {
            // A struct/union with tag and body.
            PARSER.add_tag_with_body(stack(yyvsp[0]));
            stack(yyvsp[-3]).set(ID_tag, stack(yyvsp[0]));
          }
#line 5164 "ansi_c_y.tab.cpp"
    break;

  case 292: /* aggregate_name: aggregate_key gcc_type_attribute_opt msc_declspec_opt identifier_or_typedef_name $@8 '{' member_declaration_list_opt '}' gcc_type_attribute_opt pragma_packed  */
#line 1476 "parser.y"
        {
          // save the members
          stack(yyvsp[-9]).add(ID_components).get_sub().swap(
            (irept::subt &)stack(yyvsp[-3]).operands());

          // throw in the gcc attributes
          yyval=merge(yyvsp[-9], merge(yyvsp[-8], merge(yyvsp[-1], yyvsp[0])));
        }
#line 5177 "ansi_c_y.tab.cpp"
    break;

  case 293: /* $@9: %empty  */
#line 1488 "parser.y"
          {
            // a struct/union with tag but without body
            stack(yyvsp[-3]).set(ID_tag, stack(yyvsp[0]));
          }
#line 5186 "ansi_c_y.tab.cpp"
    break;

  case 294: /* aggregate_name: aggregate_key gcc_type_attribute_opt msc_declspec_opt identifier_or_typedef_name $@9 gcc_type_attribute_opt  */
#line 1493 "parser.y"
        {
          stack(yyvsp[-5]).set(ID_components, ID_nil);
          // type attributes
          yyval=merge(yyvsp[-5], merge(yyvsp[-4], yyvsp[0]));
        }
#line 5196 "ansi_c_y.tab.cpp"
    break;

  case 295: /* aggregate_key: "struct"  */
#line 1502 "parser.y"
        { yyval=yyvsp[0]; set(yyval, ID_struct); }
#line 5202 "ansi_c_y.tab.cpp"
    break;

  case 296: /* aggregate_key: "union"  */
#line 1504 "parser.y"
        { yyval=yyvsp[0]; set(yyval, ID_union); }
#line 5208 "ansi_c_y.tab.cpp"
    break;

  case 297: /* gcc_type_attribute: "packed"  */
#line 1509 "parser.y"
        { yyval=yyvsp[0]; set(yyval, ID_packed); }
#line 5214 "ansi_c_y.tab.cpp"
    break;

  case 298: /* gcc_type_attribute: "transparent_union"  */
#line 1511 "parser.y"
        { yyval=yyvsp[0]; set(yyval, ID_transparent_union); }
#line 5220 "ansi_c_y.tab.cpp"
    break;

  case 299: /* gcc_type_attribute: "vector_size" '(' comma_expression ')'  */
#line 1513 "parser.y"
        { yyval=yyvsp[-3]; set(yyval, ID_vector); stack(yyval).add(ID_size)=stack(yyvsp[-1]); }
#line 5226 "ansi_c_y.tab.cpp"
    break;

  case 300: /* gcc_type_attribute: "aligned"  */
#line 1515 "parser.y"
        { yyval=yyvsp[0]; set(yyval, ID_aligned); }
#line 5232 "ansi_c_y.tab.cpp"
    break;

  case 301: /* gcc_type_attribute: "aligned" '(' comma_expression ')'  */
#line 1517 "parser.y"
        { yyval=yyvsp[-3]; set(yyval, ID_aligned); stack(yyval).set(ID_size, stack(yyvsp[-1])); }
#line 5238 "ansi_c_y.tab.cpp"
    break;

  case 302: /* gcc_type_attribute: "mode" '(' identifier ')'  */
#line 1519 "parser.y"
        { yyval=yyvsp[-3]; set(yyval, ID_gcc_attribute_mode); stack(yyval).set(ID_size, stack(yyvsp[-1]).get(ID_identifier)); }
#line 5244 "ansi_c_y.tab.cpp"
    break;

  case 303: /* gcc_type_attribute: "__gnu_inline__"  */
#line 1521 "parser.y"
        { yyval=yyvsp[0]; set(yyval, ID_static); }
#line 5250 "ansi_c_y.tab.cpp"
    break;

  case 304: /* gcc_type_attribute: "weak"  */
#line 1523 "parser.y"
        { yyval=yyvsp[0]; set(yyval, ID_weak); }
#line 5256 "ansi_c_y.tab.cpp"
    break;

  case 305: /* gcc_type_attribute: "alias" '(' TOK_STRING ')'  */
#line 1525 "parser.y"
        { yyval=yyvsp[-3]; set(yyval, ID_alias); mto(yyval, yyvsp[-1]); }
#line 5262 "ansi_c_y.tab.cpp"
    break;

  case 306: /* gcc_type_attribute: "section" '(' TOK_STRING ')'  */
#line 1527 "parser.y"
        { yyval=yyvsp[-3]; set(yyval, ID_section); mto(yyval, yyvsp[-1]); }
#line 5268 "ansi_c_y.tab.cpp"
    break;

  case 307: /* gcc_type_attribute: "noreturn"  */
#line 1529 "parser.y"
        { yyval=yyvsp[0]; set(yyval, ID_noreturn); }
#line 5274 "ansi_c_y.tab.cpp"
    break;

  case 308: /* gcc_type_attribute: "constructor"  */
#line 1531 "parser.y"
        { yyval=yyvsp[0]; set(yyval, ID_constructor); }
#line 5280 "ansi_c_y.tab.cpp"
    break;

  case 309: /* gcc_type_attribute: "destructor"  */
#line 1533 "parser.y"
        { yyval=yyvsp[0]; set(yyval, ID_destructor); }
#line 5286 "ansi_c_y.tab.cpp"
    break;

  case 310: /* gcc_attribute: %empty  */
#line 1538 "parser.y"
        {
          init(yyval);
        }
#line 5294 "ansi_c_y.tab.cpp"
    break;

  case 313: /* gcc_attribute_list: gcc_attribute_list ',' gcc_attribute  */
#line 1547 "parser.y"
        {
          yyval=merge(yyvsp[-2], yyvsp[0]);
        }
#line 5302 "ansi_c_y.tab.cpp"
    break;

  case 314: /* gcc_attribute_specifier: "__attribute__" '(' '(' gcc_attribute_list ')' ')'  */
#line 1554 "parser.y"
        { yyval=yyvsp[-2]; }
#line 5308 "ansi_c_y.tab.cpp"
    break;

  case 315: /* gcc_attribute_specifier: "_Noreturn"  */
#line 1556 "parser.y"
        { yyval=yyvsp[0]; set(yyval, ID_noreturn); }
#line 5314 "ansi_c_y.tab.cpp"
    break;

  case 316: /* gcc_type_attribute_opt: %empty  */
#line 1561 "parser.y"
        {
          init(yyval);
        }
#line 5322 "ansi_c_y.tab.cpp"
    break;

  case 319: /* gcc_type_attribute_list: gcc_type_attribute_list gcc_attribute_specifier  */
#line 1570 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
        }
#line 5330 "ansi_c_y.tab.cpp"
    break;

  case 320: /* member_declaration_list_opt: %empty  */
#line 1577 "parser.y"
        {
          init(yyval, ID_declaration_list);
        }
#line 5338 "ansi_c_y.tab.cpp"
    break;

  case 322: /* member_declaration_list: member_declaration  */
#line 1585 "parser.y"
        {
          init(yyval, ID_declaration_list);
          mto(yyval, yyvsp[0]);
        }
#line 5347 "ansi_c_y.tab.cpp"
    break;

  case 323: /* member_declaration_list: member_declaration_list member_declaration  */
#line 1590 "parser.y"
        {
          yyval=yyvsp[-1];
          mto(yyval, yyvsp[0]);
        }
#line 5356 "ansi_c_y.tab.cpp"
    break;

  case 326: /* member_declaration: ';'  */
#line 1600 "parser.y"
        {
          init(yyval, ID_declaration);
        }
#line 5364 "ansi_c_y.tab.cpp"
    break;

  case 328: /* member_default_declaring_list: gcc_type_attribute_opt type_qualifier_list member_identifier_declarator  */
#line 1613 "parser.y"
        {
          yyvsp[-1]=merge(yyvsp[-1], yyvsp[-2]);

          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_member(true);
          stack(yyval).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 5377 "ansi_c_y.tab.cpp"
    break;

  case 329: /* member_default_declaring_list: member_default_declaring_list ',' member_identifier_declarator  */
#line 1622 "parser.y"
        {
          yyval=yyvsp[-2];
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 5386 "ansi_c_y.tab.cpp"
    break;

  case 330: /* member_declaring_list: gcc_type_attribute_opt type_specifier member_declarator  */
#line 1632 "parser.y"
        {
          if(!PARSER.pragma_pack.empty() &&
             !PARSER.pragma_pack.back().is_zero())
          {
            // communicate #pragma pack(n) alignment constraints by
            // by both setting packing AND alignment; see padding.cpp
            // for more details
            init(yyval);
            set(yyval, ID_packed);
            yyvsp[-1]=merge(yyvsp[-1], yyval);

            init(yyval);
            set(yyval, ID_aligned);
            stack(yyval).set(ID_size, PARSER.pragma_pack.back());
            yyvsp[-1]=merge(yyvsp[-1], yyval);
          }

          yyvsp[-1]=merge(yyvsp[-1], yyvsp[-2]);

          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_member(true);
          stack(yyval).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 5415 "ansi_c_y.tab.cpp"
    break;

  case 331: /* member_declaring_list: member_declaring_list ',' member_declarator  */
#line 1657 "parser.y"
        {
          yyval=yyvsp[-2];
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 5424 "ansi_c_y.tab.cpp"
    break;

  case 332: /* member_declarator: declarator bit_field_size_opt gcc_type_attribute_opt  */
#line 1665 "parser.y"
        {
          yyval=yyvsp[-2];

          if(stack(yyvsp[-1]).is_not_nil())
            make_subtype(yyval, yyvsp[-1]);

          if(stack(yyvsp[0]).is_not_nil()) // type attribute
            yyval=merge(yyvsp[0], yyval);
        }
#line 5438 "ansi_c_y.tab.cpp"
    break;

  case 333: /* member_declarator: %empty  */
#line 1675 "parser.y"
        {
          init(yyval, ID_abstract);
        }
#line 5446 "ansi_c_y.tab.cpp"
    break;

  case 334: /* member_declarator: bit_field_size gcc_type_attribute_opt  */
#line 1679 "parser.y"
        {
          yyval=yyvsp[-1];
          stack_type(yyval).subtype()=typet(ID_abstract);

          if(stack(yyvsp[0]).is_not_nil()) // type attribute
            yyval=merge(yyvsp[0], yyval);
        }
#line 5458 "ansi_c_y.tab.cpp"
    break;

  case 335: /* member_identifier_declarator: identifier_declarator bit_field_size_opt gcc_type_attribute_opt  */
#line 1690 "parser.y"
        {
          yyval=yyvsp[-2];
          if(stack(yyvsp[-1]).is_not_nil())
            make_subtype(yyval, yyvsp[-1]);
          
          if(stack(yyvsp[0]).is_not_nil()) // type attribute
            yyval=merge(yyvsp[0], yyval);
        }
#line 5471 "ansi_c_y.tab.cpp"
    break;

  case 336: /* member_identifier_declarator: bit_field_size gcc_type_attribute_opt  */
#line 1699 "parser.y"
        {
          yyval=yyvsp[-1];
          stack_type(yyval).subtype()=typet(ID_abstract);

          if(stack(yyvsp[0]).is_not_nil()) // type attribute
            yyval=merge(yyvsp[0], yyval);
        }
#line 5483 "ansi_c_y.tab.cpp"
    break;

  case 337: /* bit_field_size_opt: %empty  */
#line 1710 "parser.y"
        {
          init(yyval, ID_nil);
        }
#line 5491 "ansi_c_y.tab.cpp"
    break;

  case 339: /* bit_field_size: ':' constant_expression  */
#line 1718 "parser.y"
        {
          yyval=yyvsp[-1];
          set(yyval, ID_c_bit_field);
          stack_type(yyval).set(ID_size, stack(yyvsp[0]));
          stack_type(yyval).subtype().id(ID_abstract);
        }
#line 5502 "ansi_c_y.tab.cpp"
    break;

  case 340: /* $@10: %empty  */
#line 1729 "parser.y"
          {
            // an anon enum
          }
#line 5510 "ansi_c_y.tab.cpp"
    break;

  case 341: /* enum_name: enum_key gcc_type_attribute_opt $@10 '{' enumerator_list_opt '}' gcc_type_attribute_opt  */
#line 1734 "parser.y"
        {
          stack(yyvsp[-6]).operands().swap(stack(yyvsp[-2]).operands());
          yyval=merge(yyvsp[-6], merge(yyvsp[-5], yyvsp[0])); // throw in the gcc attributes
        }
#line 5519 "ansi_c_y.tab.cpp"
    break;

  case 342: /* $@11: %empty  */
#line 1741 "parser.y"
          {
            // an enum with tag
            stack(yyvsp[-2]).set(ID_tag, stack(yyvsp[0]));
          }
#line 5528 "ansi_c_y.tab.cpp"
    break;

  case 343: /* enum_name: enum_key gcc_type_attribute_opt identifier_or_typedef_name $@11 '{' enumerator_list_opt '}' gcc_type_attribute_opt  */
#line 1747 "parser.y"
        {
          stack(yyvsp[-7]).operands().swap(stack(yyvsp[-2]).operands());
          yyval=merge(yyvsp[-7], merge(yyvsp[-6], yyvsp[0])); // throw in the gcc attributes
        }
#line 5537 "ansi_c_y.tab.cpp"
    break;

  case 344: /* enum_name: enum_key gcc_type_attribute_opt identifier_or_typedef_name gcc_type_attribute_opt  */
#line 1755 "parser.y"
        {
          stack(yyvsp[-3]).id(ID_c_enum_tag); // tag only
          stack(yyvsp[-3]).set(ID_tag, stack(yyvsp[-1]));
          yyval=merge(yyvsp[-3], merge(yyvsp[-2], yyvsp[0])); // throw in the gcc attributes
        }
#line 5547 "ansi_c_y.tab.cpp"
    break;

  case 345: /* enum_key: "enum"  */
#line 1763 "parser.y"
        {
          yyval=yyvsp[0];
          set(yyval, ID_c_enum);
        }
#line 5556 "ansi_c_y.tab.cpp"
    break;

  case 346: /* enumerator_list_opt: %empty  */
#line 1771 "parser.y"
        {
          init(yyval, ID_declaration_list);
        }
#line 5564 "ansi_c_y.tab.cpp"
    break;

  case 348: /* enumerator_list: enumerator_declaration  */
#line 1779 "parser.y"
        {
          init(yyval, ID_declaration_list);
          mto(yyval, yyvsp[0]);
        }
#line 5573 "ansi_c_y.tab.cpp"
    break;

  case 349: /* enumerator_list: enumerator_list ',' enumerator_declaration  */
#line 1784 "parser.y"
        {
          yyval=yyvsp[-2];
          mto(yyval, yyvsp[0]);
        }
#line 5582 "ansi_c_y.tab.cpp"
    break;

  case 350: /* enumerator_list: enumerator_list ','  */
#line 1789 "parser.y"
        {
          yyval=yyvsp[-1];
        }
#line 5590 "ansi_c_y.tab.cpp"
    break;

  case 351: /* enumerator_declaration: identifier_or_typedef_name gcc_type_attribute_opt enumerator_value_opt  */
#line 1796 "parser.y"
        {
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_enum_constant(true);
          PARSER.add_declarator(stack(yyval), stack(yyvsp[-2]));
          to_ansi_c_declaration(stack(yyval)).add_initializer(stack(yyvsp[0]));
        }
#line 5601 "ansi_c_y.tab.cpp"
    break;

  case 352: /* enumerator_value_opt: %empty  */
#line 1806 "parser.y"
        {
          init(yyval);
          stack(yyval).make_nil();
        }
#line 5610 "ansi_c_y.tab.cpp"
    break;

  case 353: /* enumerator_value_opt: '=' constant_expression  */
#line 1811 "parser.y"
        {
          yyval=yyvsp[0];
        }
#line 5618 "ansi_c_y.tab.cpp"
    break;

  case 355: /* parameter_type_list: parameter_list ',' "..."  */
#line 1819 "parser.y"
        {
          typet tmp(ID_ellipsis);
          yyval=yyvsp[-2];
          stack_type(yyval).move_to_subtypes(tmp);
        }
#line 5628 "ansi_c_y.tab.cpp"
    break;

  case 356: /* KnR_parameter_list: KnR_parameter  */
#line 1828 "parser.y"
        {
          init(yyval, ID_parameters);
          mts(yyval, yyvsp[0]);
        }
#line 5637 "ansi_c_y.tab.cpp"
    break;

  case 357: /* KnR_parameter_list: KnR_parameter_list ',' KnR_parameter  */
#line 1833 "parser.y"
        {
          yyval=yyvsp[-2];
          mts(yyval, yyvsp[0]);
        }
#line 5646 "ansi_c_y.tab.cpp"
    break;

  case 358: /* KnR_parameter: identifier  */
#line 1840 "parser.y"
        {
          init(yyval, ID_declaration);
          stack(yyval).type()=typet(ID_KnR);
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 5656 "ansi_c_y.tab.cpp"
    break;

  case 359: /* parameter_list: parameter_declaration  */
#line 1849 "parser.y"
        {
          init(yyval, ID_parameters);
          mts(yyval, yyvsp[0]);
        }
#line 5665 "ansi_c_y.tab.cpp"
    break;

  case 360: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 1854 "parser.y"
        {
          yyval=yyvsp[-2];
          mts(yyval, yyvsp[0]);
        }
#line 5674 "ansi_c_y.tab.cpp"
    break;

  case 361: /* parameter_declaration: declaration_specifier  */
#line 1862 "parser.y"
        {
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[0]));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack(yyval), declarator);
        }
#line 5686 "ansi_c_y.tab.cpp"
    break;

  case 362: /* parameter_declaration: declaration_specifier parameter_abstract_declarator  */
#line 1870 "parser.y"
        {
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 5697 "ansi_c_y.tab.cpp"
    break;

  case 363: /* parameter_declaration: declaration_specifier identifier_declarator gcc_type_attribute_opt  */
#line 1877 "parser.y"
        {
          yyvsp[-1]=merge(yyvsp[0], yyvsp[-1]); // type attribute to go into declarator
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[-2]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[-1]));
        }
#line 5709 "ansi_c_y.tab.cpp"
    break;

  case 364: /* parameter_declaration: declaration_specifier parameter_typedef_declarator  */
#line 1885 "parser.y"
        {
          // the second tree is really the declarator -- not part
          // of the type!
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 5722 "ansi_c_y.tab.cpp"
    break;

  case 365: /* parameter_declaration: declaration_qualifier_list  */
#line 1894 "parser.y"
        {
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[0]));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack(yyval), declarator);
        }
#line 5734 "ansi_c_y.tab.cpp"
    break;

  case 366: /* parameter_declaration: declaration_qualifier_list parameter_abstract_declarator  */
#line 1902 "parser.y"
        {
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 5745 "ansi_c_y.tab.cpp"
    break;

  case 367: /* parameter_declaration: declaration_qualifier_list identifier_declarator gcc_type_attribute_opt  */
#line 1909 "parser.y"
        {
          yyvsp[-1]=merge(yyvsp[0], yyvsp[-1]); // type attribute to go into declarator
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[-2]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[-1]));
        }
#line 5757 "ansi_c_y.tab.cpp"
    break;

  case 368: /* parameter_declaration: type_specifier  */
#line 1917 "parser.y"
        {
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[0]));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack(yyval), declarator);
        }
#line 5769 "ansi_c_y.tab.cpp"
    break;

  case 369: /* parameter_declaration: type_specifier parameter_abstract_declarator  */
#line 1925 "parser.y"
        {
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 5780 "ansi_c_y.tab.cpp"
    break;

  case 370: /* parameter_declaration: type_specifier identifier_declarator gcc_type_attribute_opt  */
#line 1932 "parser.y"
        {
          yyvsp[-1]=merge(yyvsp[0], yyvsp[-1]); // type attribute to go into declarator
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[-2]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[-1]));
        }
#line 5792 "ansi_c_y.tab.cpp"
    break;

  case 371: /* parameter_declaration: type_specifier parameter_typedef_declarator  */
#line 1940 "parser.y"
        {
          // the second tree is really the declarator -- not part of the type!
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 5804 "ansi_c_y.tab.cpp"
    break;

  case 372: /* parameter_declaration: type_qualifier_list  */
#line 1948 "parser.y"
        {
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[0]));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack(yyval), declarator);
        }
#line 5816 "ansi_c_y.tab.cpp"
    break;

  case 373: /* parameter_declaration: type_qualifier_list parameter_abstract_declarator  */
#line 1956 "parser.y"
        {
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 5827 "ansi_c_y.tab.cpp"
    break;

  case 374: /* parameter_declaration: type_qualifier_list identifier_declarator gcc_type_attribute_opt  */
#line 1963 "parser.y"
        {
          yyvsp[-1]=merge(yyvsp[0], yyvsp[-1]); // type attribute to go into declarator
          init(yyval, ID_declaration);
          to_ansi_c_declaration(stack(yyval)).set_is_parameter(true);
          to_ansi_c_declaration(stack(yyval)).type().swap(stack(yyvsp[-2]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[-1]));
        }
#line 5839 "ansi_c_y.tab.cpp"
    break;

  case 377: /* type_name: gcc_type_attribute_opt type_specifier  */
#line 1979 "parser.y"
        {
          yyval=merge(yyvsp[0], yyvsp[-1]);
        }
#line 5847 "ansi_c_y.tab.cpp"
    break;

  case 378: /* type_name: gcc_type_attribute_opt type_specifier abstract_declarator  */
#line 1983 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[-2]);
          make_subtype(yyval, yyvsp[0]);
        }
#line 5856 "ansi_c_y.tab.cpp"
    break;

  case 379: /* type_name: gcc_type_attribute_opt type_qualifier_list  */
#line 1988 "parser.y"
        {
          yyval=merge(yyvsp[0], yyvsp[-1]);
        }
#line 5864 "ansi_c_y.tab.cpp"
    break;

  case 380: /* type_name: gcc_type_attribute_opt type_qualifier_list abstract_declarator  */
#line 1992 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[-2]);
          make_subtype(yyval, yyvsp[0]);
        }
#line 5873 "ansi_c_y.tab.cpp"
    break;

  case 381: /* initializer_opt: %empty  */
#line 2000 "parser.y"
        {
          init(yyval);
          stack(yyval).make_nil();
        }
#line 5882 "ansi_c_y.tab.cpp"
    break;

  case 382: /* initializer_opt: '=' initializer  */
#line 2005 "parser.y"
        { yyval = yyvsp[0]; }
#line 5888 "ansi_c_y.tab.cpp"
    break;

  case 384: /* initializer: '{' initializer_list_opt '}'  */
#line 2016 "parser.y"
        {
          yyval=yyvsp[-2];
          set(yyval, ID_initializer_list);
          stack(yyval).operands().swap(stack(yyvsp[-1]).operands());
        }
#line 5898 "ansi_c_y.tab.cpp"
    break;

  case 385: /* initializer: '{' initializer_list ',' '}'  */
#line 2022 "parser.y"
        {
          yyval=yyvsp[-3];
          set(yyval, ID_initializer_list);
          stack(yyval).operands().swap(stack(yyvsp[-2]).operands());
        }
#line 5908 "ansi_c_y.tab.cpp"
    break;

  case 386: /* initializer_list: designated_initializer  */
#line 2031 "parser.y"
        {
          yyval=yyvsp[0];
          exprt tmp;
          tmp.swap(stack(yyval));
          stack(yyval).clear();
          stack(yyval).move_to_operands(tmp);
        }
#line 5920 "ansi_c_y.tab.cpp"
    break;

  case 387: /* initializer_list: initializer_list ',' designated_initializer  */
#line 2039 "parser.y"
        {
          yyval=yyvsp[-2];
          mto(yyval, yyvsp[0]);
        }
#line 5929 "ansi_c_y.tab.cpp"
    break;

  case 389: /* initializer_list_opt: %empty  */
#line 2048 "parser.y"
        {
          init(yyval);
          set(yyval, ID_initializer_list);
          stack(yyval).operands().clear();
        }
#line 5939 "ansi_c_y.tab.cpp"
    break;

  case 391: /* designated_initializer: designator '=' initializer  */
#line 2058 "parser.y"
        {
          yyval=yyvsp[-1];
          stack(yyval).id(ID_designated_initializer);
          stack(yyval).add(ID_designator).swap(stack(yyvsp[-2]));
          mto(yyval, yyvsp[0]);
        }
#line 5950 "ansi_c_y.tab.cpp"
    break;

  case 392: /* designated_initializer: designator initializer  */
#line 2066 "parser.y"
        {
          init(yyval, ID_designated_initializer);
          stack(yyval).add(ID_designator).swap(stack(yyvsp[-1]));
          mto(yyval, yyvsp[0]);
        }
#line 5960 "ansi_c_y.tab.cpp"
    break;

  case 393: /* designated_initializer: member_name ':' initializer  */
#line 2072 "parser.y"
        {
          // yet another GCC speciality
          yyval=yyvsp[-1];
          stack(yyval).id(ID_designated_initializer);
          exprt designator;
          exprt member(ID_member);
          member.set(ID_component_name, stack(yyvsp[-2]).get(ID_C_base_name));
          designator.move_to_operands(member);
          stack(yyval).add(ID_designator).swap(designator);
          mto(yyval, yyvsp[0]);
        }
#line 5976 "ansi_c_y.tab.cpp"
    break;

  case 394: /* designator: '.' member_name  */
#line 2087 "parser.y"
        {
          init(yyval);
          stack(yyvsp[-1]).id(ID_member);
          stack(yyvsp[-1]).set(ID_component_name, stack(yyvsp[0]).get(ID_C_base_name));
          mto(yyval, yyvsp[-1]);
        }
#line 5987 "ansi_c_y.tab.cpp"
    break;

  case 395: /* designator: '[' comma_expression ']'  */
#line 2094 "parser.y"
        {
          init(yyval);
          stack(yyvsp[-2]).id(ID_index);
          mto(yyvsp[-2], yyvsp[-1]);
          mto(yyval, yyvsp[-2]);
        }
#line 5998 "ansi_c_y.tab.cpp"
    break;

  case 396: /* designator: '[' comma_expression "..." comma_expression ']'  */
#line 2101 "parser.y"
        {
          // TODO
          init(yyval);
          stack(yyvsp[-4]).id(ID_index);
          mto(yyvsp[-4], yyvsp[-3]);
          mto(yyval, yyvsp[-4]);
        }
#line 6010 "ansi_c_y.tab.cpp"
    break;

  case 397: /* designator: designator '[' comma_expression ']'  */
#line 2109 "parser.y"
        {
          yyval=yyvsp[-3];
          stack(yyvsp[-2]).id(ID_index);
          mto(yyvsp[-2], yyvsp[-1]);
          mto(yyval, yyvsp[-2]);
        }
#line 6021 "ansi_c_y.tab.cpp"
    break;

  case 398: /* designator: designator '[' comma_expression "..." comma_expression ']'  */
#line 2116 "parser.y"
        {
          // TODO
          yyval=yyvsp[-5];
          stack(yyvsp[-4]).id(ID_index);
          mto(yyvsp[-4], yyvsp[-3]);
          mto(yyval, yyvsp[-4]);
        }
#line 6033 "ansi_c_y.tab.cpp"
    break;

  case 399: /* designator: designator '.' member_name  */
#line 2124 "parser.y"
        {
          yyval=yyvsp[-2];
          stack(yyvsp[-1]).id(ID_member);
          stack(yyvsp[-1]).set(ID_component_name, stack(yyvsp[0]).get(ID_C_base_name));
          mto(yyval, yyvsp[-1]);
        }
#line 6044 "ansi_c_y.tab.cpp"
    break;

  case 412: /* declaration_statement: declaration  */
#line 2151 "parser.y"
        {
          init(yyval);
          statement(yyval, ID_decl);
          mto(yyval, yyvsp[0]);
        }
#line 6054 "ansi_c_y.tab.cpp"
    break;

  case 413: /* labeled_statement: identifier_or_typedef_name ':' gcc_attribute_specifier ';'  */
#line 2160 "parser.y"
        {
          /* Only semicolons permitted after the attribute:
             https://gcc.gnu.org/onlinedocs/gcc/Label-Attributes.html */
          yyval=yyvsp[-2];
          statement(yyval, ID_label);
          irep_idt identifier=PARSER.lookup_label(stack(yyvsp[-3]).get(ID_C_base_name));
          stack(yyval).set(ID_label, identifier);
          // attribute ignored
          statement(yyvsp[-1], ID_skip);
          mto(yyval, yyvsp[-1]);
        }
#line 6070 "ansi_c_y.tab.cpp"
    break;

  case 414: /* labeled_statement: identifier_or_typedef_name ':' statement  */
#line 2172 "parser.y"
        {
          yyval=yyvsp[-1];
          statement(yyval, ID_label);
          irep_idt identifier=PARSER.lookup_label(stack(yyvsp[-2]).get(ID_C_base_name));
          stack(yyval).set(ID_label, identifier);
          mto(yyval, yyvsp[0]);
        }
#line 6082 "ansi_c_y.tab.cpp"
    break;

  case 415: /* labeled_statement: "case" constant_expression ':' statement  */
#line 2180 "parser.y"
        {
          yyval=yyvsp[-3];
          statement(yyval, ID_switch_case);
          mto(yyval, yyvsp[-2]);
          mto(yyval, yyvsp[0]);
        }
#line 6093 "ansi_c_y.tab.cpp"
    break;

  case 416: /* labeled_statement: "case" constant_expression "..." constant_expression ':' statement  */
#line 2187 "parser.y"
        {
          // this is a GCC extension
          yyval=yyvsp[-5];
          statement(yyval, ID_gcc_switch_case_range);
          mto(yyval, yyvsp[-4]);
          mto(yyval, yyvsp[-2]);
          mto(yyval, yyvsp[0]);
        }
#line 6106 "ansi_c_y.tab.cpp"
    break;

  case 417: /* labeled_statement: "default" ':' statement  */
#line 2196 "parser.y"
        {
          yyval=yyvsp[-2];
          statement(yyval, ID_switch_case);
          stack(yyval).operands().push_back(nil_exprt());
          mto(yyval, yyvsp[0]);
          stack(yyval).set(ID_default, true);
        }
#line 6118 "ansi_c_y.tab.cpp"
    break;

  case 418: /* compound_statement: compound_scope '{' '}'  */
#line 2207 "parser.y"
        {
          yyval=yyvsp[-1];
          statement(yyval, ID_block);
          stack(yyval).set(ID_C_end_location, stack(yyvsp[0]).source_location());
          PARSER.pop_scope();
        }
#line 6129 "ansi_c_y.tab.cpp"
    break;

  case 419: /* compound_statement: compound_scope '{' statement_list '}'  */
#line 2214 "parser.y"
        {
          yyval=yyvsp[-2];
          statement(yyval, ID_block);
          stack(yyval).set(ID_C_end_location, stack(yyvsp[0]).source_location());
          stack(yyval).operands().swap(stack(yyvsp[-1]).operands());
          PARSER.pop_scope();
        }
#line 6141 "ansi_c_y.tab.cpp"
    break;

  case 420: /* compound_statement: compound_scope '{' TOK_ASM_STRING '}'  */
#line 2222 "parser.y"
        {
          yyval=yyvsp[-2];
          statement(yyval, ID_asm);
          stack(yyval).set(ID_C_end_location, stack(yyvsp[0]).source_location());
          mto(yyval, yyvsp[-1]);
          PARSER.pop_scope();
        }
#line 6153 "ansi_c_y.tab.cpp"
    break;

  case 421: /* compound_scope: %empty  */
#line 2233 "parser.y"
        {
          unsigned prefix=++PARSER.current_scope().compound_counter;
          PARSER.new_scope(std::to_string(prefix)+"::");
        }
#line 6162 "ansi_c_y.tab.cpp"
    break;

  case 422: /* statement_list: statement  */
#line 2241 "parser.y"
        {
          init(yyval);
          mto(yyval, yyvsp[0]);
        }
#line 6171 "ansi_c_y.tab.cpp"
    break;

  case 423: /* statement_list: statement_list statement  */
#line 2246 "parser.y"
        {
          mto(yyval, yyvsp[0]);
        }
#line 6179 "ansi_c_y.tab.cpp"
    break;

  case 424: /* expression_statement: comma_expression_opt ';'  */
#line 2253 "parser.y"
        {
          yyval=yyvsp[0];

          if(stack(yyvsp[-1]).is_nil())
            statement(yyval, ID_skip);
          else
          {
            statement(yyval, ID_expression);
            mto(yyval, yyvsp[-1]);
          }
        }
#line 6195 "ansi_c_y.tab.cpp"
    break;

  case 425: /* selection_statement: "if" '(' comma_expression ')' statement  */
#line 2268 "parser.y"
        {
          yyval=yyvsp[-4];
          statement(yyval, ID_ifthenelse);
          stack(yyval).operands().reserve(3);
          mto(yyval, yyvsp[-2]);
          mto(yyval, yyvsp[0]);
          stack(yyval).copy_to_operands(nil_exprt());
        }
#line 6208 "ansi_c_y.tab.cpp"
    break;

  case 426: /* selection_statement: "if" '(' comma_expression ')' statement "else" statement  */
#line 2277 "parser.y"
        {
          yyval=yyvsp[-6];
          statement(yyval, ID_ifthenelse);
          stack(yyval).operands().reserve(3);
          mto(yyval, yyvsp[-4]);
          mto(yyval, yyvsp[-2]);
          mto(yyval, yyvsp[0]);
        }
#line 6221 "ansi_c_y.tab.cpp"
    break;

  case 427: /* selection_statement: "switch" '(' comma_expression ')' statement  */
#line 2286 "parser.y"
        {
          yyval=yyvsp[-4];
          statement(yyval, ID_switch);
          stack(yyval).operands().reserve(2);
          mto(yyval, yyvsp[-2]);
          mto(yyval, yyvsp[0]);
        }
#line 6233 "ansi_c_y.tab.cpp"
    break;

  case 430: /* iteration_statement: "while" '(' comma_expression_opt ')' loop_invariant_opt statement  */
#line 2303 "parser.y"
        {
          yyval=yyvsp[-5];
          statement(yyval, ID_while);
          stack(yyval).operands().reserve(2);
          mto(yyval, yyvsp[-3]);
          mto(yyval, yyvsp[0]);

          if(stack(yyvsp[-1]).is_not_nil())
            stack(yyval).add(ID_C_spec_loop_invariant).swap(stack(yyvsp[-1]));
        }
#line 6248 "ansi_c_y.tab.cpp"
    break;

  case 431: /* iteration_statement: "do" statement "while" '(' comma_expression ')' loop_invariant_opt ';'  */
#line 2315 "parser.y"
        {
          yyval=yyvsp[-7];
          statement(yyval, ID_dowhile);
          stack(yyval).operands().reserve(2);
          mto(yyval, yyvsp[-3]);
          mto(yyval, yyvsp[-6]);

          if(stack(yyvsp[-1]).is_not_nil())
            stack(yyval).add(ID_C_spec_loop_invariant).swap(stack(yyvsp[-1]));
        }
#line 6263 "ansi_c_y.tab.cpp"
    break;

  case 432: /* $@12: %empty  */
#line 2326 "parser.y"
          {
            // In C99 and upwards, for(;;) has a scope
            if(PARSER.for_has_scope)
            {
              unsigned prefix=++PARSER.current_scope().compound_counter;
              PARSER.new_scope(std::to_string(prefix)+"::");
            }
          }
#line 6276 "ansi_c_y.tab.cpp"
    break;

  case 433: /* iteration_statement: "for" $@12 '(' declaration_or_expression_statement comma_expression_opt ';' comma_expression_opt ')' loop_invariant_opt statement  */
#line 2339 "parser.y"
        {
          yyval=yyvsp[-9];
          statement(yyval, ID_for);
          stack(yyval).operands().reserve(4);
          mto(yyval, yyvsp[-6]);
          mto(yyval, yyvsp[-5]);
          mto(yyval, yyvsp[-3]);
          mto(yyval, yyvsp[0]);

          if(stack(yyvsp[-1]).is_not_nil())
            stack(yyval).add(ID_C_spec_loop_invariant).swap(stack(yyvsp[-1]));

          if(PARSER.for_has_scope)
            PARSER.pop_scope(); // remove the C99 for-scope
        }
#line 6296 "ansi_c_y.tab.cpp"
    break;

  case 434: /* jump_statement: "goto" comma_expression ';'  */
#line 2358 "parser.y"
        {
          yyval=yyvsp[-2];
          if(stack(yyvsp[-1]).id()==ID_symbol)
          {
            statement(yyval, ID_goto);
            irep_idt identifier=PARSER.lookup_label(stack(yyvsp[-1]).get(ID_C_base_name));
            stack(yyval).set(ID_destination, identifier);
          }
          else
          {
            // this is a gcc extension.
            // the original grammar uses identifier_or_typedef_name
            statement(yyval, ID_gcc_computed_goto);
            mto(yyval, yyvsp[-1]);
          }
        }
#line 6317 "ansi_c_y.tab.cpp"
    break;

  case 435: /* jump_statement: "goto" typedef_name ';'  */
#line 2375 "parser.y"
        {
          yyval=yyvsp[-2];
          statement(yyval, ID_goto);
          irep_idt identifier=PARSER.lookup_label(stack(yyvsp[-1]).get(ID_C_base_name));
          stack(yyval).set(ID_destination, identifier);
        }
#line 6328 "ansi_c_y.tab.cpp"
    break;

  case 436: /* jump_statement: "continue" ';'  */
#line 2382 "parser.y"
        { yyval=yyvsp[-1]; statement(yyval, ID_continue); }
#line 6334 "ansi_c_y.tab.cpp"
    break;

  case 437: /* jump_statement: "break" ';'  */
#line 2384 "parser.y"
        { yyval=yyvsp[-1]; statement(yyval, ID_break); }
#line 6340 "ansi_c_y.tab.cpp"
    break;

  case 438: /* jump_statement: "return" ';'  */
#line 2386 "parser.y"
        { yyval=yyvsp[-1]; statement(yyval, ID_return); }
#line 6346 "ansi_c_y.tab.cpp"
    break;

  case 439: /* jump_statement: "return" comma_expression ';'  */
#line 2388 "parser.y"
        { yyval=yyvsp[-2]; statement(yyval, ID_return); mto(yyval, yyvsp[-1]); }
#line 6352 "ansi_c_y.tab.cpp"
    break;

  case 440: /* gcc_local_label_statement: "__label__" gcc_local_label_list ';'  */
#line 2393 "parser.y"
        { 
          yyval=yyvsp[-2];
          statement(yyval, ID_gcc_local_label);
          
          // put these into the scope
          forall_operands(it, stack(yyvsp[-1]))
          {
            // labels have a separate name space
            irep_idt base_name=it->get(ID_identifier);
            irep_idt id="label-"+id2string(base_name);
            ansi_c_parsert::identifiert &i=PARSER.current_scope().name_map[id];
            i.id_class=ansi_c_id_classt::ANSI_C_LOCAL_LABEL;
            i.prefixed_name=PARSER.current_scope().prefix+id2string(id);
            i.base_name=base_name;
          }

          stack(yyval).add(ID_label).get_sub().swap((irept::subt&)stack(yyvsp[-1]).operands());
        }
#line 6375 "ansi_c_y.tab.cpp"
    break;

  case 441: /* gcc_local_label_list: gcc_local_label  */
#line 2415 "parser.y"
        {
          init(yyval);
          mto(yyval, yyvsp[0]);
        }
#line 6384 "ansi_c_y.tab.cpp"
    break;

  case 442: /* gcc_local_label_list: gcc_local_label_list ',' gcc_local_label  */
#line 2420 "parser.y"
        {
          yyval=yyvsp[-2];
          mto(yyval, yyvsp[0]);
        }
#line 6393 "ansi_c_y.tab.cpp"
    break;

  case 444: /* gcc_asm_statement: "__asm__ (with parentheses)" volatile_or_goto_opt '(' gcc_asm_commands ')' ';'  */
#line 2431 "parser.y"
        { yyval=yyvsp[-5];
          statement(yyval, ID_asm);
          stack(yyval).set(ID_flavor, ID_gcc);
          stack(yyval).operands().swap(stack(yyvsp[-2]).operands());
        }
#line 6403 "ansi_c_y.tab.cpp"
    break;

  case 445: /* gcc_asm_statement: "__asm__ (with parentheses)" volatile_or_goto_opt '{' TOK_ASM_STRING '}'  */
#line 2437 "parser.y"
        {
          yyval=yyvsp[-4];
          statement(yyval, ID_asm);
          stack(yyval).set(ID_flavor, ID_gcc);
          stack(yyval).operands().resize(5);
          stack(yyval).op0()=stack(yyvsp[-1]);
        }
#line 6415 "ansi_c_y.tab.cpp"
    break;

  case 446: /* msc_asm_statement: "__asm" '{' TOK_ASM_STRING '}'  */
#line 2448 "parser.y"
        { yyval=yyvsp[-3];
          statement(yyval, ID_asm);
          stack(yyval).set(ID_flavor, ID_msc);
          mto(yyval, yyvsp[-1]);
        }
#line 6425 "ansi_c_y.tab.cpp"
    break;

  case 447: /* msc_asm_statement: "__asm" TOK_ASM_STRING  */
#line 2454 "parser.y"
        { yyval=yyvsp[-1];
          statement(yyval, ID_asm);
          stack(yyval).set(ID_flavor, ID_msc);
          mto(yyval, yyvsp[0]);
        }
#line 6435 "ansi_c_y.tab.cpp"
    break;

  case 448: /* msc_seh_statement: "__try" compound_statement "__except" '(' comma_expression ')' compound_statement  */
#line 2464 "parser.y"
        {
          yyval=yyvsp[-6];
          statement(yyval, ID_msc_try_except);
          mto(yyval, yyvsp[-5]);
          mto(yyval, yyvsp[-2]);
          mto(yyval, yyvsp[0]);
        }
#line 6447 "ansi_c_y.tab.cpp"
    break;

  case 449: /* msc_seh_statement: "__try" compound_statement "__finally" compound_statement  */
#line 2473 "parser.y"
        {
          yyval=yyvsp[-3];
          statement(yyval, ID_msc_try_finally);
          mto(yyval, yyvsp[-2]);
          mto(yyval, yyvsp[0]);
        }
#line 6458 "ansi_c_y.tab.cpp"
    break;

  case 450: /* msc_seh_statement: "__leave"  */
#line 2480 "parser.y"
        {
          yyval=yyvsp[0];
          statement(yyval, ID_msc_leave);
        }
#line 6467 "ansi_c_y.tab.cpp"
    break;

  case 451: /* cprover_exception_statement: "__CPROVER_throw" ';'  */
#line 2488 "parser.y"
        {
          yyval=yyvsp[-1];
          statement(yyval, ID_CPROVER_throw);
        }
#line 6476 "ansi_c_y.tab.cpp"
    break;

  case 452: /* cprover_exception_statement: "__CPROVER_try" compound_statement "__CPROVER_catch" compound_statement  */
#line 2494 "parser.y"
        {
          yyval=yyvsp[-3];
          statement(yyval, ID_CPROVER_try_catch);
          mto(yyval, yyvsp[-2]);
          mto(yyval, yyvsp[0]);
        }
#line 6487 "ansi_c_y.tab.cpp"
    break;

  case 453: /* cprover_exception_statement: "__CPROVER_try" compound_statement "__CPROVER_finally" compound_statement  */
#line 2502 "parser.y"
        {
          yyval=yyvsp[-3];
          statement(yyval, ID_CPROVER_try_finally);
          mto(yyval, yyvsp[-2]);
          mto(yyval, yyvsp[0]);
        }
#line 6498 "ansi_c_y.tab.cpp"
    break;

  case 459: /* gcc_asm_commands: gcc_asm_assembler_template  */
#line 2528 "parser.y"
        {
          init(yyval);
          stack(yyval).operands().resize(5);
          stack(yyval).operands()[0]=stack(yyvsp[0]);
        }
#line 6508 "ansi_c_y.tab.cpp"
    break;

  case 460: /* gcc_asm_commands: gcc_asm_assembler_template gcc_asm_outputs  */
#line 2534 "parser.y"
        {
          init(yyval);
          stack(yyval).operands().resize(5);
          stack(yyval).operands()[0]=stack(yyvsp[-1]);
          stack(yyval).operands()[1]=stack(yyvsp[0]);
        }
#line 6519 "ansi_c_y.tab.cpp"
    break;

  case 461: /* gcc_asm_commands: gcc_asm_assembler_template gcc_asm_outputs gcc_asm_inputs  */
#line 2541 "parser.y"
        {
          init(yyval);
          stack(yyval).operands().resize(5);
          stack(yyval).operands()[0]=stack(yyvsp[-2]);
          stack(yyval).operands()[1]=stack(yyvsp[-1]);
          stack(yyval).operands()[2]=stack(yyvsp[0]);
        }
#line 6531 "ansi_c_y.tab.cpp"
    break;

  case 462: /* gcc_asm_commands: gcc_asm_assembler_template gcc_asm_outputs gcc_asm_inputs gcc_asm_clobbered_registers  */
#line 2549 "parser.y"
        {
          init(yyval);
          stack(yyval).operands().resize(5);
          stack(yyval).operands()[0]=stack(yyvsp[-3]);
          stack(yyval).operands()[1]=stack(yyvsp[-2]);
          stack(yyval).operands()[2]=stack(yyvsp[-1]);
          stack(yyval).operands()[3]=stack(yyvsp[0]);
        }
#line 6544 "ansi_c_y.tab.cpp"
    break;

  case 463: /* gcc_asm_commands: gcc_asm_assembler_template gcc_asm_outputs gcc_asm_inputs gcc_asm_clobbered_registers gcc_asm_labels  */
#line 2558 "parser.y"
        {
          init(yyval);
          stack(yyval).operands().resize(5);
          stack(yyval).operands()[0]=stack(yyvsp[-4]);
          stack(yyval).operands()[1]=stack(yyvsp[-3]);
          stack(yyval).operands()[2]=stack(yyvsp[-2]);
          stack(yyval).operands()[3]=stack(yyvsp[-1]);
          stack(yyval).operands()[4]=stack(yyvsp[0]);
        }
#line 6558 "ansi_c_y.tab.cpp"
    break;

  case 465: /* gcc_asm_outputs: ':' gcc_asm_output_list  */
#line 2574 "parser.y"
        {
          yyval=yyvsp[0];
        }
#line 6566 "ansi_c_y.tab.cpp"
    break;

  case 467: /* gcc_asm_output: string '(' comma_expression ')'  */
#line 2582 "parser.y"
        {
          yyval=yyvsp[-2];
          stack(yyval).id(ID_gcc_asm_output);
          stack(yyval).move_to_operands(stack(yyvsp[-3]), stack(yyvsp[-1])); 
        }
#line 6576 "ansi_c_y.tab.cpp"
    break;

  case 468: /* gcc_asm_output: '[' identifier_or_typedef_name ']' string '(' comma_expression ')'  */
#line 2589 "parser.y"
        {
          yyval=yyvsp[-2];
          stack(yyval).id(ID_gcc_asm_output);
          stack(yyval).move_to_operands(stack(yyvsp[-3]), stack(yyvsp[-1])); 
        }
#line 6586 "ansi_c_y.tab.cpp"
    break;

  case 469: /* gcc_asm_output_list: gcc_asm_output  */
#line 2598 "parser.y"
        {
          init(yyval, irep_idt());
          mto(yyval, yyvsp[0]);
        }
#line 6595 "ansi_c_y.tab.cpp"
    break;

  case 470: /* gcc_asm_output_list: gcc_asm_output_list ',' gcc_asm_output  */
#line 2603 "parser.y"
        {
          yyval=yyvsp[-2];
          mto(yyval, yyvsp[0]);
        }
#line 6604 "ansi_c_y.tab.cpp"
    break;

  case 471: /* gcc_asm_inputs: ':' gcc_asm_input_list  */
#line 2611 "parser.y"
        {
          yyval=yyvsp[0];
        }
#line 6612 "ansi_c_y.tab.cpp"
    break;

  case 473: /* gcc_asm_input: string '(' comma_expression ')'  */
#line 2619 "parser.y"
        {
          yyval=yyvsp[-2];
          stack(yyval).id(ID_gcc_asm_input);
          stack(yyval).move_to_operands(stack(yyvsp[-3]), stack(yyvsp[-1])); 
        }
#line 6622 "ansi_c_y.tab.cpp"
    break;

  case 474: /* gcc_asm_input: '[' identifier_or_typedef_name ']' string '(' comma_expression ')'  */
#line 2626 "parser.y"
        {
          yyval=yyvsp[-2];
          stack(yyval).id(ID_gcc_asm_input);
          stack(yyval).move_to_operands(stack(yyvsp[-3]), stack(yyvsp[-1])); 
        }
#line 6632 "ansi_c_y.tab.cpp"
    break;

  case 475: /* gcc_asm_input_list: gcc_asm_input  */
#line 2635 "parser.y"
        {
          init(yyval, irep_idt());
          mto(yyval, yyvsp[0]);
        }
#line 6641 "ansi_c_y.tab.cpp"
    break;

  case 476: /* gcc_asm_input_list: gcc_asm_input_list ',' gcc_asm_input  */
#line 2640 "parser.y"
        {
          yyval=yyvsp[-2];
          mto(yyval, yyvsp[0]);
        }
#line 6650 "ansi_c_y.tab.cpp"
    break;

  case 477: /* gcc_asm_clobbered_registers: ':' gcc_asm_clobbered_registers_list  */
#line 2648 "parser.y"
        {
          yyval=yyvsp[0];
        }
#line 6658 "ansi_c_y.tab.cpp"
    break;

  case 479: /* gcc_asm_clobbered_register: string  */
#line 2656 "parser.y"
        {
          init(yyval, ID_gcc_asm_clobbered_register);
          mto(yyval, yyvsp[0]);
        }
#line 6667 "ansi_c_y.tab.cpp"
    break;

  case 480: /* gcc_asm_clobbered_registers_list: gcc_asm_clobbered_register  */
#line 2664 "parser.y"
        {
          init(yyval, irep_idt());
          mto(yyval, yyvsp[0]);
        }
#line 6676 "ansi_c_y.tab.cpp"
    break;

  case 481: /* gcc_asm_clobbered_registers_list: gcc_asm_clobbered_registers_list ',' gcc_asm_clobbered_register  */
#line 2669 "parser.y"
        {
          yyval=yyvsp[-2];
          mto(yyval, yyvsp[0]);
        }
#line 6685 "ansi_c_y.tab.cpp"
    break;

  case 482: /* gcc_asm_labels: ':' gcc_asm_labels_list  */
#line 2677 "parser.y"
        {
          yyval=yyvsp[0];
        }
#line 6693 "ansi_c_y.tab.cpp"
    break;

  case 484: /* gcc_asm_labels_list: gcc_asm_label  */
#line 2685 "parser.y"
        {
          init(yyval);
          mto(yyval, yyvsp[0]);
        }
#line 6702 "ansi_c_y.tab.cpp"
    break;

  case 485: /* gcc_asm_labels_list: gcc_asm_labels_list ',' gcc_asm_label  */
#line 2690 "parser.y"
        {
          yyval=yyvsp[-2];
          mto(yyval, yyvsp[0]);
        }
#line 6711 "ansi_c_y.tab.cpp"
    break;

  case 486: /* gcc_asm_label: gcc_local_label  */
#line 2698 "parser.y"
        {
          yyval=yyvsp[0];
          irep_idt identifier=PARSER.lookup_label(stack(yyval).get(ID_C_base_name));
          stack(yyval).id(ID_label);
          stack(yyval).set(ID_identifier, identifier);
        }
#line 6722 "ansi_c_y.tab.cpp"
    break;

  case 491: /* external_definition: function_definition  */
#line 2717 "parser.y"
        {
          // put into global list of items
          PARSER.copy_item(to_ansi_c_declaration(stack(yyvsp[0])));
        }
#line 6731 "ansi_c_y.tab.cpp"
    break;

  case 492: /* external_definition: declaration  */
#line 2722 "parser.y"
        {
          PARSER.copy_item(to_ansi_c_declaration(stack(yyvsp[0])));
        }
#line 6739 "ansi_c_y.tab.cpp"
    break;

  case 495: /* asm_definition: "__asm__ (with parentheses)" '(' string ')' ';'  */
#line 2731 "parser.y"
        {
          // Not obvious what to do with this.
        }
#line 6747 "ansi_c_y.tab.cpp"
    break;

  case 496: /* asm_definition: '{' TOK_ASM_STRING '}'  */
#line 2735 "parser.y"
        {
          // Not obvious what to do with this.
        }
#line 6755 "ansi_c_y.tab.cpp"
    break;

  case 497: /* function_definition: function_head requires_opt ensures_opt function_body  */
#line 2745 "parser.y"
        {
          if(stack(yyvsp[-2]).is_not_nil())
            stack(yyvsp[-3]).add(ID_C_spec_requires).swap(stack(yyvsp[-2]));
          if(stack(yyvsp[-1]).is_not_nil())
            stack(yyvsp[-3]).add(ID_C_spec_ensures).swap(stack(yyvsp[-1]));
          // The head is a declaration with one declarator,
          // and the body becomes the 'value'.
          yyval=yyvsp[-3];
          ansi_c_declarationt &ansi_c_declaration=
            to_ansi_c_declaration(stack(yyval));
            
          assert(ansi_c_declaration.declarators().size()==1);
          ansi_c_declaration.add_initializer(stack(yyvsp[0]));
          
          // Kill the scope that 'function_head' creates.
          PARSER.pop_scope();
          
          // We are no longer in any function.
          PARSER.set_function(irep_idt());
        }
#line 6780 "ansi_c_y.tab.cpp"
    break;

  case 499: /* KnR_parameter_header_opt: %empty  */
#line 2773 "parser.y"
        {
          init(yyval);
        }
#line 6788 "ansi_c_y.tab.cpp"
    break;

  case 501: /* KnR_parameter_header: KnR_parameter_declaration  */
#line 2781 "parser.y"
        {
          init(yyval, ID_decl_block);
          mto(yyval, yyvsp[0]);
        }
#line 6797 "ansi_c_y.tab.cpp"
    break;

  case 502: /* KnR_parameter_header: KnR_parameter_header KnR_parameter_declaration  */
#line 2786 "parser.y"
        {
          yyval=yyvsp[-1];
          mto(yyval, yyvsp[0]);
        }
#line 6806 "ansi_c_y.tab.cpp"
    break;

  case 505: /* KnR_declaration_qualifier_list: type_qualifier storage_class  */
#line 2800 "parser.y"
        {
          yyval=merge(yyvsp[0], yyvsp[-1]);
        }
#line 6814 "ansi_c_y.tab.cpp"
    break;

  case 506: /* KnR_declaration_qualifier_list: KnR_declaration_qualifier_list declaration_qualifier  */
#line 2804 "parser.y"
        {
          yyval=merge(yyvsp[0], yyvsp[-1]);
        }
#line 6822 "ansi_c_y.tab.cpp"
    break;

  case 507: /* KnR_basic_declaration_specifier: KnR_declaration_qualifier_list basic_type_name gcc_type_attribute_opt  */
#line 2811 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 6830 "ansi_c_y.tab.cpp"
    break;

  case 508: /* KnR_basic_declaration_specifier: basic_type_specifier storage_class gcc_type_attribute_opt  */
#line 2815 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 6838 "ansi_c_y.tab.cpp"
    break;

  case 509: /* KnR_basic_declaration_specifier: KnR_basic_declaration_specifier declaration_qualifier gcc_type_attribute_opt  */
#line 2819 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 6846 "ansi_c_y.tab.cpp"
    break;

  case 510: /* KnR_basic_declaration_specifier: KnR_basic_declaration_specifier basic_type_name gcc_type_attribute_opt  */
#line 2823 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 6854 "ansi_c_y.tab.cpp"
    break;

  case 511: /* KnR_typedef_declaration_specifier: typedef_type_specifier storage_class gcc_type_attribute_opt  */
#line 2831 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 6862 "ansi_c_y.tab.cpp"
    break;

  case 512: /* KnR_typedef_declaration_specifier: KnR_declaration_qualifier_list typedef_name gcc_type_attribute_opt  */
#line 2835 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 6870 "ansi_c_y.tab.cpp"
    break;

  case 513: /* KnR_typedef_declaration_specifier: KnR_typedef_declaration_specifier declaration_qualifier gcc_type_attribute_opt  */
#line 2839 "parser.y"
        {
          yyval=merge(yyvsp[-2], merge(yyvsp[-1], yyvsp[0]));
        }
#line 6878 "ansi_c_y.tab.cpp"
    break;

  case 514: /* KnR_sue_declaration_specifier: KnR_declaration_qualifier_list aggregate_key identifier_or_typedef_name gcc_type_attribute_opt  */
#line 2847 "parser.y"
        {
          stack(yyvsp[-2]).set(ID_tag, stack(yyvsp[-1]));
          yyval=merge(yyvsp[-3], merge(yyvsp[-2], yyvsp[0]));
        }
#line 6887 "ansi_c_y.tab.cpp"
    break;

  case 515: /* KnR_sue_declaration_specifier: KnR_declaration_qualifier_list enum_key identifier_or_typedef_name gcc_type_attribute_opt  */
#line 2852 "parser.y"
        {
          stack(yyvsp[-2]).id(ID_c_enum_tag);
          stack(yyvsp[-2]).set(ID_tag, stack(yyvsp[-1]));
          yyval=merge(yyvsp[-3], merge(yyvsp[-2], yyvsp[0]));
        }
#line 6897 "ansi_c_y.tab.cpp"
    break;

  case 519: /* KnR_parameter_declaring_list: KnR_declaration_specifier declarator  */
#line 2868 "parser.y"
        {
          init(yyval, ID_declaration);
          stack(yyval).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 6907 "ansi_c_y.tab.cpp"
    break;

  case 520: /* KnR_parameter_declaring_list: type_specifier declarator  */
#line 2874 "parser.y"
        {
          init(yyval, ID_declaration);
          stack(yyval).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 6917 "ansi_c_y.tab.cpp"
    break;

  case 521: /* KnR_parameter_declaring_list: KnR_parameter_declaring_list ',' declarator  */
#line 2880 "parser.y"
        {
          yyval=yyvsp[-2];
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
        }
#line 6926 "ansi_c_y.tab.cpp"
    break;

  case 522: /* function_head: identifier_declarator  */
#line 2888 "parser.y"
        {
          init(yyval, ID_declaration);
          irept return_type(ID_int);
          stack(yyval).type().swap(return_type);
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
          create_function_scope(yyval);
        }
#line 6938 "ansi_c_y.tab.cpp"
    break;

  case 523: /* function_head: declaration_specifier declarator  */
#line 2896 "parser.y"
        {
          init(yyval, ID_declaration);
          stack(yyval).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
          create_function_scope(yyval);
        }
#line 6949 "ansi_c_y.tab.cpp"
    break;

  case 524: /* function_head: type_specifier declarator  */
#line 2903 "parser.y"
        {
          init(yyval, ID_declaration);
          stack(yyval).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
          create_function_scope(yyval);
        }
#line 6960 "ansi_c_y.tab.cpp"
    break;

  case 525: /* function_head: declaration_qualifier_list identifier_declarator  */
#line 2910 "parser.y"
        {
          init(yyval, ID_declaration);
          stack(yyval).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
          create_function_scope(yyval);
        }
#line 6971 "ansi_c_y.tab.cpp"
    break;

  case 526: /* function_head: type_qualifier_list identifier_declarator  */
#line 2917 "parser.y"
        {
          init(yyval, ID_declaration);
          stack(yyval).type().swap(stack(yyvsp[-1]));
          PARSER.add_declarator(stack(yyval), stack(yyvsp[0]));
          create_function_scope(yyval);
        }
#line 6982 "ansi_c_y.tab.cpp"
    break;

  case 530: /* paren_attribute_declarator: '(' gcc_type_attribute_list identifier_declarator ')'  */
#line 2933 "parser.y"
        {
          stack_type(yyvsp[-3])=typet(ID_abstract);
          yyvsp[-2]=merge(yyvsp[-2], yyvsp[-3]); // dest=$2
          make_subtype(yyvsp[-1], yyvsp[-2]); // dest=$3
          yyval=yyvsp[-1];
        }
#line 6993 "ansi_c_y.tab.cpp"
    break;

  case 531: /* paren_attribute_declarator: '(' gcc_type_attribute_list identifier_declarator ')' postfixing_abstract_declarator  */
#line 2940 "parser.y"
        {
          stack_type(yyvsp[-4])=typet(ID_abstract);
          yyvsp[-3]=merge(yyvsp[-3], yyvsp[-4]); // dest=$2
          make_subtype(yyvsp[-2], yyvsp[-3]); // dest=$3
          /* note: this is (a pointer to) a function ($5) */
          /* or an array ($5) with name ($3) */
          yyval=yyvsp[-2];
          make_subtype(yyval, yyvsp[0]);
        }
#line 7007 "ansi_c_y.tab.cpp"
    break;

  case 532: /* paren_attribute_declarator: '*' paren_attribute_declarator  */
#line 2950 "parser.y"
        {
          yyval=yyvsp[0];
          do_pointer(yyvsp[-1], yyvsp[0]);
        }
#line 7016 "ansi_c_y.tab.cpp"
    break;

  case 536: /* parameter_typedef_declarator: typedef_name postfixing_abstract_declarator  */
#line 2964 "parser.y"
        {
          yyval=yyvsp[-1];
          make_subtype(yyval, yyvsp[0]);
        }
#line 7025 "ansi_c_y.tab.cpp"
    break;

  case 539: /* clean_typedef_declarator: '*' parameter_typedef_declarator  */
#line 2974 "parser.y"
        {
          yyval=yyvsp[0];
          do_pointer(yyvsp[-1], yyvsp[0]);
        }
#line 7034 "ansi_c_y.tab.cpp"
    break;

  case 540: /* clean_typedef_declarator: '*' attribute_type_qualifier_list parameter_typedef_declarator  */
#line 2979 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
          do_pointer(yyvsp[-2], yyvsp[-1]);
        }
#line 7043 "ansi_c_y.tab.cpp"
    break;

  case 541: /* clean_postfix_typedef_declarator: '(' clean_typedef_declarator ')'  */
#line 2987 "parser.y"
        { yyval = yyvsp[-1]; }
#line 7049 "ansi_c_y.tab.cpp"
    break;

  case 542: /* clean_postfix_typedef_declarator: '(' clean_typedef_declarator ')' postfixing_abstract_declarator  */
#line 2989 "parser.y"
        {
          /* note: this is a pointer ($2) to a function ($4) */
          /* or an array ($4)! */
          yyval=yyvsp[-2];
          make_subtype(yyval, yyvsp[0]);
        }
#line 7060 "ansi_c_y.tab.cpp"
    break;

  case 544: /* paren_typedef_declarator: '*' '(' simple_paren_typedef_declarator ')'  */
#line 3000 "parser.y"
        {
          yyval=yyvsp[-1];
          do_pointer(yyvsp[-3], yyvsp[-1]);
        }
#line 7069 "ansi_c_y.tab.cpp"
    break;

  case 545: /* paren_typedef_declarator: '*' attribute_type_qualifier_list '(' simple_paren_typedef_declarator ')'  */
#line 3005 "parser.y"
        {
          // not sure where the type qualifiers belong
          yyval=merge(yyvsp[-3], yyvsp[-1]);
          do_pointer(yyvsp[-4], yyvsp[-3]);
        }
#line 7079 "ansi_c_y.tab.cpp"
    break;

  case 546: /* paren_typedef_declarator: '*' paren_typedef_declarator  */
#line 3011 "parser.y"
        {
          yyval=yyvsp[0];
          do_pointer(yyvsp[-1], yyvsp[0]);
        }
#line 7088 "ansi_c_y.tab.cpp"
    break;

  case 547: /* paren_typedef_declarator: '*' attribute_type_qualifier_list paren_typedef_declarator  */
#line 3016 "parser.y"
        {
          yyval=merge(yyvsp[-1], yyvsp[0]);
          do_pointer(yyvsp[-2], yyvsp[-1]);
        }
#line 7097 "ansi_c_y.tab.cpp"
    break;

  case 548: /* paren_postfix_typedef_declarator: '(' paren_typedef_declarator ')'  */
#line 3024 "parser.y"
        { yyval = yyvsp[-1]; }
#line 7103 "ansi_c_y.tab.cpp"
    break;

  case 549: /* paren_postfix_typedef_declarator: '(' simple_paren_typedef_declarator postfixing_abstract_declarator ')'  */
#line 3026 "parser.y"
        {        /* note: this is a function ($3) with a typedef name ($2) */
          yyval=yyvsp[-2];
          make_subtype(yyval, yyvsp[-1]);
        }
#line 7112 "ansi_c_y.tab.cpp"
    break;

  case 550: /* paren_postfix_typedef_declarator: '(' paren_typedef_declarator ')' postfixing_abstract_declarator  */
#line 3031 "parser.y"
        {
          /* note: this is a pointer ($2) to a function ($4) */
          /* or an array ($4)! */
          yyval=yyvsp[-2];
          make_subtype(yyval, yyvsp[0]);
        }
#line 7123 "ansi_c_y.tab.cpp"
    break;

  case 552: /* simple_paren_typedef_declarator: '(' simple_paren_typedef_declarator ')'  */
#line 3042 "parser.y"
        { yyval=yyvsp[-1]; }
#line 7129 "ansi_c_y.tab.cpp"
    break;

  case 556: /* unary_identifier_declarator: '*' identifier_declarator  */
#line 3053 "parser.y"
        {
          yyval=yyvsp[0];
          do_pointer(yyvsp[-1], yyvsp[0]);
        }
#line 7138 "ansi_c_y.tab.cpp"
    break;

  case 557: /* unary_identifier_declarator: '^' identifier_declarator  */
#line 3058 "parser.y"
        {
          // This is an Apple extension to C/C++/Objective C.
          // http://en.wikipedia.org/wiki/Blocks_(C_language_extension)
          yyval=yyvsp[0];
          do_pointer(yyvsp[-1], yyvsp[0]);
        }
#line 7149 "ansi_c_y.tab.cpp"
    break;

  case 558: /* unary_identifier_declarator: '*' attribute_type_qualifier_list identifier_declarator  */
#line 3065 "parser.y"
        {
          // the type_qualifier_list is for the pointer,
          // and not the identifier_declarator
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type(yyvsp[-2]).id(ID_frontend_pointer);
          stack_type(yyvsp[-2]).subtype()=typet(ID_abstract);
          yyvsp[-1]=merge(yyvsp[-1], yyvsp[-2]); // dest=$2
          make_subtype(yyvsp[0], yyvsp[-1]); // dest=$3
          yyval=yyvsp[0];
        }
#line 7165 "ansi_c_y.tab.cpp"
    break;

  case 559: /* postfix_identifier_declarator: paren_identifier_declarator postfixing_abstract_declarator  */
#line 3080 "parser.y"
        {
          /* note: this is a function or array ($2) with name ($1) */
          yyval=yyvsp[-1];
          make_subtype(yyval, yyvsp[0]);
        }
#line 7175 "ansi_c_y.tab.cpp"
    break;

  case 560: /* postfix_identifier_declarator: '(' unary_identifier_declarator ')'  */
#line 3086 "parser.y"
        { yyval = yyvsp[-1]; }
#line 7181 "ansi_c_y.tab.cpp"
    break;

  case 561: /* postfix_identifier_declarator: '(' unary_identifier_declarator ')' postfixing_abstract_declarator  */
#line 3088 "parser.y"
        {
          /* note: this is a pointer ($2) to a function ($4) */
          /* or an array ($4)! */
          yyval=yyvsp[-2];
          make_subtype(yyval, yyvsp[0]);
        }
#line 7192 "ansi_c_y.tab.cpp"
    break;

  case 562: /* paren_identifier_declarator: identifier  */
#line 3098 "parser.y"
        {
          // We remember the last declarator for the benefit
          // of function argument scoping.
          PARSER.current_scope().last_declarator=
            stack(yyvsp[0]).get(ID_identifier);
        }
#line 7203 "ansi_c_y.tab.cpp"
    break;

  case 563: /* paren_identifier_declarator: '(' paren_identifier_declarator ')'  */
#line 3105 "parser.y"
        { yyval=yyvsp[-1]; }
#line 7209 "ansi_c_y.tab.cpp"
    break;

  case 570: /* postfixing_abstract_declarator: '(' ')' KnR_parameter_header  */
#line 3125 "parser.y"
        {
          yyval=yyvsp[-2];
          set(yyval, ID_code);
          stack_type(yyval).subtype()=typet(ID_abstract);
          stack_type(yyval).add(ID_parameters);
          stack_type(yyval).set(ID_C_KnR, true);
        }
#line 7221 "ansi_c_y.tab.cpp"
    break;

  case 571: /* $@13: %empty  */
#line 3133 "parser.y"
          {
            // Use last declarator (i.e., function name) to name
            // the scope.
            PARSER.new_scope(
              id2string(PARSER.current_scope().last_declarator)+"::");
          }
#line 7232 "ansi_c_y.tab.cpp"
    break;

  case 572: /* postfixing_abstract_declarator: '(' $@13 KnR_parameter_list ')' KnR_parameter_header_opt  */
#line 3142 "parser.y"
        {
          yyval=yyvsp[-4];
          set(yyval, ID_code);
          stack_type(yyval).subtype()=typet(ID_abstract);
          stack_type(yyval).add(ID_parameters).get_sub().
            swap((irept::subt &)(stack_type(yyvsp[-2]).subtypes()));
          PARSER.pop_scope();
          adjust_KnR_parameters(stack(yyval).add(ID_parameters), stack(yyvsp[0]));
          stack(yyval).set(ID_C_KnR, true);
        }
#line 7247 "ansi_c_y.tab.cpp"
    break;

  case 574: /* parameter_postfixing_abstract_declarator: '(' ')'  */
#line 3157 "parser.y"
        {
          yyval=yyvsp[-1];
          set(yyval, ID_code);
          stack_type(yyval).add(ID_parameters);
          stack_type(yyval).subtype()=typet(ID_abstract);
        }
#line 7258 "ansi_c_y.tab.cpp"
    break;

  case 575: /* $@14: %empty  */
#line 3164 "parser.y"
          {
            // Use last declarator (i.e., function name) to name
            // the scope.
            PARSER.new_scope(
              id2string(PARSER.current_scope().last_declarator)+"::");
          }
#line 7269 "ansi_c_y.tab.cpp"
    break;

  case 576: /* parameter_postfixing_abstract_declarator: '(' $@14 parameter_type_list ')' KnR_parameter_header_opt  */
#line 3172 "parser.y"
        {
          yyval=yyvsp[-4];
          set(yyval, ID_code);
          stack_type(yyval).subtype()=typet(ID_abstract);
          stack_type(yyval).add(ID_parameters).get_sub().
            swap((irept::subt &)(stack_type(yyvsp[-2]).subtypes()));
          PARSER.pop_scope();

          if(stack(yyvsp[0]).is_not_nil())
          {
            adjust_KnR_parameters(stack(yyval).add(ID_parameters), stack(yyvsp[0]));
            stack(yyval).set(ID_C_KnR, true);
          }
        }
#line 7288 "ansi_c_y.tab.cpp"
    break;

  case 577: /* array_abstract_declarator: '[' ']'  */
#line 3190 "parser.y"
        {
          yyval=yyvsp[-1];
          set(yyval, ID_array);
          stack_type(yyval).subtype()=typet(ID_abstract);
          stack_type(yyval).add(ID_size).make_nil();
        }
#line 7299 "ansi_c_y.tab.cpp"
    break;

  case 578: /* array_abstract_declarator: '[' attribute_type_qualifier_storage_class_list ']'  */
#line 3197 "parser.y"
        {
          // this is C99: e.g., restrict, const, etc
          // The type qualifier belongs to the array, not the
          // contents of the array, nor the size.
          set(yyvsp[-2], ID_array);
          stack_type(yyvsp[-2]).subtype()=typet(ID_abstract);
          stack_type(yyvsp[-2]).add(ID_size).make_nil();
          yyval=merge(yyvsp[-1], yyvsp[-2]);
        }
#line 7313 "ansi_c_y.tab.cpp"
    break;

  case 579: /* array_abstract_declarator: '[' '*' ']'  */
#line 3207 "parser.y"
        {
          // these should be allowed in prototypes only
          yyval=yyvsp[-2];
          set(yyval, ID_array);
          stack_type(yyval).subtype()=typet(ID_abstract);
          stack_type(yyval).add(ID_size).make_nil();
        }
#line 7325 "ansi_c_y.tab.cpp"
    break;

  case 580: /* array_abstract_declarator: '[' constant_expression ']'  */
#line 3215 "parser.y"
        {
          yyval=yyvsp[-2];
          set(yyval, ID_array);
          stack_type(yyval).add(ID_size).swap(stack(yyvsp[-1]));
          stack_type(yyval).subtype()=typet(ID_abstract);
        }
#line 7336 "ansi_c_y.tab.cpp"
    break;

  case 581: /* array_abstract_declarator: '[' attribute_type_qualifier_storage_class_list constant_expression ']'  */
#line 3222 "parser.y"
        {
          // The type qualifier belongs to the array, not the
          // contents of the array, nor the size.
          set(yyvsp[-3], ID_array);
          stack_type(yyvsp[-3]).add(ID_size).swap(stack(yyvsp[-1]));
          stack_type(yyvsp[-3]).subtype()=typet(ID_abstract);
          yyval=merge(yyvsp[-2], yyvsp[-3]); // dest=$2
        }
#line 7349 "ansi_c_y.tab.cpp"
    break;

  case 582: /* array_abstract_declarator: array_abstract_declarator '[' constant_expression ']'  */
#line 3231 "parser.y"
        {
          // we need to push this down
          yyval=yyvsp[-3];
          set(yyvsp[-2], ID_array);
          stack_type(yyvsp[-2]).add(ID_size).swap(stack(yyvsp[-1]));
          stack_type(yyvsp[-2]).subtype()=typet(ID_abstract);
          make_subtype(yyvsp[-3], yyvsp[-2]);
        }
#line 7362 "ansi_c_y.tab.cpp"
    break;

  case 583: /* array_abstract_declarator: array_abstract_declarator '[' '*' ']'  */
#line 3240 "parser.y"
        {
          // these should be allowed in prototypes only
          // we need to push this down
          yyval=yyvsp[-3];
          set(yyvsp[-2], ID_array);
          stack_type(yyvsp[-2]).add(ID_size).make_nil();
          stack_type(yyvsp[-2]).subtype()=typet(ID_abstract);
          make_subtype(yyvsp[-3], yyvsp[-2]);
        }
#line 7376 "ansi_c_y.tab.cpp"
    break;

  case 584: /* unary_abstract_declarator: '*'  */
#line 3253 "parser.y"
        {
          yyval=yyvsp[0];
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type(yyval).id(ID_frontend_pointer);
          stack_type(yyval).subtype()=typet(ID_abstract);
        }
#line 7388 "ansi_c_y.tab.cpp"
    break;

  case 585: /* unary_abstract_declarator: '*' attribute_type_qualifier_list  */
#line 3261 "parser.y"
        {
          // The type_qualifier_list belongs to the pointer,
          // not to the (missing) abstract declarator.
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type(yyvsp[-1]).id(ID_frontend_pointer);
          stack_type(yyvsp[-1]).subtype()=typet(ID_abstract);
          yyval=merge(yyvsp[0], yyvsp[-1]);
        }
#line 7402 "ansi_c_y.tab.cpp"
    break;

  case 586: /* unary_abstract_declarator: '*' abstract_declarator  */
#line 3271 "parser.y"
        {
          yyval=yyvsp[0];
          do_pointer(yyvsp[-1], yyvsp[0]);
        }
#line 7411 "ansi_c_y.tab.cpp"
    break;

  case 587: /* unary_abstract_declarator: '*' attribute_type_qualifier_list abstract_declarator  */
#line 3276 "parser.y"
        {
          // The type_qualifier_list belongs to the pointer,
          // not to the abstract declarator.
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type(yyvsp[-2]).id(ID_frontend_pointer);
          stack_type(yyvsp[-2]).subtype()=typet(ID_abstract);
          yyvsp[-1]=merge(yyvsp[-1], yyvsp[-2]); // dest=$2
          make_subtype(yyvsp[0], yyvsp[-1]); // dest=$3
          yyval=yyvsp[0];
        }
#line 7427 "ansi_c_y.tab.cpp"
    break;

  case 588: /* unary_abstract_declarator: '^'  */
#line 3288 "parser.y"
        {
          // This is an Apple extension to C/C++/Objective C.
          // http://en.wikipedia.org/wiki/Blocks_(C_language_extension)
          yyval=yyvsp[0];
          set(yyval, ID_block_pointer);
          stack_type(yyval).subtype()=typet(ID_abstract);
        }
#line 7439 "ansi_c_y.tab.cpp"
    break;

  case 589: /* parameter_unary_abstract_declarator: '*'  */
#line 3299 "parser.y"
        {
          yyval=yyvsp[0];
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type(yyval).id(ID_frontend_pointer);
          stack_type(yyval).subtype()=typet(ID_abstract);
        }
#line 7451 "ansi_c_y.tab.cpp"
    break;

  case 590: /* parameter_unary_abstract_declarator: '*' attribute_type_qualifier_list  */
#line 3307 "parser.y"
        {
          // The type_qualifier_list belongs to the pointer,
          // not to the (missing) abstract declarator.
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type(yyvsp[-1]).id(ID_frontend_pointer);
          stack_type(yyvsp[-1]).subtype()=typet(ID_abstract);
          yyval=merge(yyvsp[0], yyvsp[-1]);
        }
#line 7465 "ansi_c_y.tab.cpp"
    break;

  case 591: /* parameter_unary_abstract_declarator: '*' parameter_abstract_declarator  */
#line 3317 "parser.y"
        {
          yyval=yyvsp[0];
          do_pointer(yyvsp[-1], yyvsp[0]);
        }
#line 7474 "ansi_c_y.tab.cpp"
    break;

  case 592: /* parameter_unary_abstract_declarator: '*' attribute_type_qualifier_list parameter_abstract_declarator  */
#line 3322 "parser.y"
        {
          // The type_qualifier_list belongs to the pointer,
          // not to the (missing) abstract declarator.
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type(yyvsp[-2]).id(ID_frontend_pointer);
          stack_type(yyvsp[-2]).subtype()=typet(ID_abstract);
          yyvsp[-1]=merge(yyvsp[-1], yyvsp[-2]); // dest=$2
          make_subtype(yyvsp[0], yyvsp[-1]); // dest=$3
          yyval=yyvsp[0];
        }
#line 7490 "ansi_c_y.tab.cpp"
    break;

  case 593: /* parameter_unary_abstract_declarator: '^'  */
#line 3334 "parser.y"
        {
          // This is an Apple extension to C/C++/Objective C.
          // http://en.wikipedia.org/wiki/Blocks_(C_language_extension)
          yyval=yyvsp[0];
          set(yyval, ID_block_pointer);
          stack_type(yyval).subtype()=typet(ID_abstract);
        }
#line 7502 "ansi_c_y.tab.cpp"
    break;

  case 594: /* postfix_abstract_declarator: '(' unary_abstract_declarator ')'  */
#line 3345 "parser.y"
        { yyval = yyvsp[-1]; }
#line 7508 "ansi_c_y.tab.cpp"
    break;

  case 595: /* postfix_abstract_declarator: '(' postfix_abstract_declarator ')'  */
#line 3347 "parser.y"
        { yyval = yyvsp[-1]; }
#line 7514 "ansi_c_y.tab.cpp"
    break;

  case 596: /* postfix_abstract_declarator: '(' postfixing_abstract_declarator ')'  */
#line 3349 "parser.y"
        { yyval = yyvsp[-1]; }
#line 7520 "ansi_c_y.tab.cpp"
    break;

  case 597: /* postfix_abstract_declarator: '(' postfix_abstract_declarator ')' postfixing_abstract_declarator  */
#line 3351 "parser.y"
        {
          /* note: this is a pointer ($2) to a function or array ($4) */
          yyval=yyvsp[-2];
          make_subtype(yyval, yyvsp[0]);
        }
#line 7530 "ansi_c_y.tab.cpp"
    break;

  case 598: /* postfix_abstract_declarator: '(' unary_abstract_declarator ')' postfixing_abstract_declarator  */
#line 3357 "parser.y"
        {
          /* note: this is a pointer ($2) to a function or array ($4) */
          yyval=yyvsp[-2];
          make_subtype(yyval, yyvsp[0]);
        }
#line 7540 "ansi_c_y.tab.cpp"
    break;

  case 599: /* parameter_postfix_abstract_declarator: '(' parameter_unary_abstract_declarator ')'  */
#line 3366 "parser.y"
        { yyval = yyvsp[-1]; }
#line 7546 "ansi_c_y.tab.cpp"
    break;

  case 600: /* parameter_postfix_abstract_declarator: '(' parameter_postfix_abstract_declarator ')'  */
#line 3368 "parser.y"
        { yyval = yyvsp[-1]; }
#line 7552 "ansi_c_y.tab.cpp"
    break;

  case 602: /* parameter_postfix_abstract_declarator: '(' parameter_unary_abstract_declarator ')' parameter_postfixing_abstract_declarator  */
#line 3371 "parser.y"
        {
          /* note: this is a pointer ($2) to a function ($4) */
          yyval=yyvsp[-2];
          make_subtype(yyval, yyvsp[0]);
        }
#line 7562 "ansi_c_y.tab.cpp"
    break;


#line 7566 "ansi_c_y.tab.cpp"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 3378 "parser.y"

