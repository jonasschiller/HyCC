/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YYANSI_C_ANSI_C_Y_TAB_HPP_INCLUDED
# define YY_YYANSI_C_ANSI_C_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yyansi_cdebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOK_AUTO = 258,                /* "auto"  */
    TOK_BOOL = 259,                /* "bool"  */
    TOK_COMPLEX = 260,             /* "complex"  */
    TOK_BREAK = 261,               /* "break"  */
    TOK_CASE = 262,                /* "case"  */
    TOK_CHAR = 263,                /* "char"  */
    TOK_CONST = 264,               /* "const"  */
    TOK_CONTINUE = 265,            /* "continue"  */
    TOK_DEFAULT = 266,             /* "default"  */
    TOK_DO = 267,                  /* "do"  */
    TOK_DOUBLE = 268,              /* "double"  */
    TOK_ELSE = 269,                /* "else"  */
    TOK_ENUM = 270,                /* "enum"  */
    TOK_EXTERN = 271,              /* "extern"  */
    TOK_FLOAT = 272,               /* "float"  */
    TOK_FOR = 273,                 /* "for"  */
    TOK_GOTO = 274,                /* "goto"  */
    TOK_IF = 275,                  /* "if"  */
    TOK_INLINE = 276,              /* "inline"  */
    TOK_INT = 277,                 /* "int"  */
    TOK_LONG = 278,                /* "long"  */
    TOK_REGISTER = 279,            /* "register"  */
    TOK_RESTRICT = 280,            /* "restrict"  */
    TOK_RETURN = 281,              /* "return"  */
    TOK_SHORT = 282,               /* "short"  */
    TOK_SIGNED = 283,              /* "signed"  */
    TOK_SIZEOF = 284,              /* "sizeof"  */
    TOK_STATIC = 285,              /* "static"  */
    TOK_STRUCT = 286,              /* "struct"  */
    TOK_SWITCH = 287,              /* "switch"  */
    TOK_TYPEDEF = 288,             /* "typedef"  */
    TOK_UNION = 289,               /* "union"  */
    TOK_UNSIGNED = 290,            /* "unsigned"  */
    TOK_VOID = 291,                /* "void"  */
    TOK_VOLATILE = 292,            /* "volatile"  */
    TOK_WCHAR_T = 293,             /* "wchar_t"  */
    TOK_WHILE = 294,               /* "while"  */
    TOK_ARROW = 295,               /* "->"  */
    TOK_INCR = 296,                /* "++"  */
    TOK_DECR = 297,                /* "--"  */
    TOK_SHIFTLEFT = 298,           /* "<<"  */
    TOK_SHIFTRIGHT = 299,          /* ">>"  */
    TOK_LE = 300,                  /* "<="  */
    TOK_GE = 301,                  /* ">="  */
    TOK_EQ = 302,                  /* "=="  */
    TOK_NE = 303,                  /* "!="  */
    TOK_ANDAND = 304,              /* "&&"  */
    TOK_OROR = 305,                /* "||"  */
    TOK_ELLIPSIS = 306,            /* "..."  */
    TOK_MULTASSIGN = 307,          /* "*="  */
    TOK_DIVASSIGN = 308,           /* "/="  */
    TOK_MODASSIGN = 309,           /* "%="  */
    TOK_PLUSASSIGN = 310,          /* "+="  */
    TOK_MINUSASSIGN = 311,         /* "-="  */
    TOK_SHLASSIGN = 312,           /* "<<="  */
    TOK_SHRASSIGN = 313,           /* ">>="  */
    TOK_ANDASSIGN = 314,           /* "&="  */
    TOK_XORASSIGN = 315,           /* "^="  */
    TOK_ORASSIGN = 316,            /* "|="  */
    TOK_IDENTIFIER = 317,          /* TOK_IDENTIFIER  */
    TOK_TYPEDEFNAME = 318,         /* TOK_TYPEDEFNAME  */
    TOK_INTEGER = 319,             /* TOK_INTEGER  */
    TOK_FLOATING = 320,            /* TOK_FLOATING  */
    TOK_CHARACTER = 321,           /* TOK_CHARACTER  */
    TOK_STRING = 322,              /* TOK_STRING  */
    TOK_ASM_STRING = 323,          /* TOK_ASM_STRING  */
    TOK_INT8 = 324,                /* "__int8"  */
    TOK_INT16 = 325,               /* "__int16"  */
    TOK_INT32 = 326,               /* "__int32"  */
    TOK_INT64 = 327,               /* "__int64"  */
    TOK_PTR32 = 328,               /* "__ptr32"  */
    TOK_PTR64 = 329,               /* "__ptr64"  */
    TOK_TYPEOF = 330,              /* "typeof"  */
    TOK_GCC_AUTO_TYPE = 331,       /* "__auto_type"  */
    TOK_GCC_FLOAT80 = 332,         /* "__float80"  */
    TOK_GCC_FLOAT128 = 333,        /* "__float128"  */
    TOK_GCC_INT128 = 334,          /* "__int128"  */
    TOK_GCC_DECIMAL32 = 335,       /* "_Decimal32"  */
    TOK_GCC_DECIMAL64 = 336,       /* "_Decimal64"  */
    TOK_GCC_DECIMAL128 = 337,      /* "_Decimal128"  */
    TOK_GCC_ASM = 338,             /* "__asm__"  */
    TOK_GCC_ASM_PAREN = 339,       /* "__asm__ (with parentheses)"  */
    TOK_GCC_ATTRIBUTE = 340,       /* "__attribute__"  */
    TOK_GCC_ATTRIBUTE_ALIGNED = 341, /* "aligned"  */
    TOK_GCC_ATTRIBUTE_TRANSPARENT_UNION = 342, /* "transparent_union"  */
    TOK_GCC_ATTRIBUTE_PACKED = 343, /* "packed"  */
    TOK_GCC_ATTRIBUTE_VECTOR_SIZE = 344, /* "vector_size"  */
    TOK_GCC_ATTRIBUTE_MODE = 345,  /* "mode"  */
    TOK_GCC_ATTRIBUTE_GNU_INLINE = 346, /* "__gnu_inline__"  */
    TOK_GCC_ATTRIBUTE_WEAK = 347,  /* "weak"  */
    TOK_GCC_ATTRIBUTE_ALIAS = 348, /* "alias"  */
    TOK_GCC_ATTRIBUTE_SECTION = 349, /* "section"  */
    TOK_GCC_ATTRIBUTE_NORETURN = 350, /* "noreturn"  */
    TOK_GCC_ATTRIBUTE_CONSTRUCTOR = 351, /* "constructor"  */
    TOK_GCC_ATTRIBUTE_DESTRUCTOR = 352, /* "destructor"  */
    TOK_GCC_LABEL = 353,           /* "__label__"  */
    TOK_MSC_ASM = 354,             /* "__asm"  */
    TOK_MSC_BASED = 355,           /* "__based"  */
    TOK_CW_VAR_ARG_TYPEOF = 356,   /* "_var_arg_typeof"  */
    TOK_BUILTIN_VA_ARG = 357,      /* "__builtin_va_arg"  */
    TOK_GCC_BUILTIN_TYPES_COMPATIBLE_P = 358, /* "__builtin_types_compatible_p"  */
    TOK_CLANG_BUILTIN_CONVERTVECTOR = 359, /* "__builtin_convertvector"  */
    TOK_OFFSETOF = 360,            /* "__offsetof"  */
    TOK_ALIGNOF = 361,             /* "__alignof__"  */
    TOK_MSC_TRY = 362,             /* "__try"  */
    TOK_MSC_FINALLY = 363,         /* "__finally"  */
    TOK_MSC_EXCEPT = 364,          /* "__except"  */
    TOK_MSC_LEAVE = 365,           /* "__leave"  */
    TOK_MSC_DECLSPEC = 366,        /* "__declspec"  */
    TOK_INTERFACE = 367,           /* "__interface"  */
    TOK_CDECL = 368,               /* "__cdecl"  */
    TOK_STDCALL = 369,             /* "__stdcall"  */
    TOK_FASTCALL = 370,            /* "__fastcall"  */
    TOK_CLRCALL = 371,             /* "__clrcall"  */
    TOK_FORALL = 372,              /* "forall"  */
    TOK_EXISTS = 373,              /* "exists"  */
    TOK_ACSL_FORALL = 374,         /* "\\forall"  */
    TOK_ACSL_EXISTS = 375,         /* "\\exists"  */
    TOK_ARRAY_OF = 376,            /* "array_of"  */
    TOK_CPROVER_BITVECTOR = 377,   /* "__CPROVER_bitvector"  */
    TOK_CPROVER_FLOATBV = 378,     /* "__CPROVER_floatbv"  */
    TOK_CPROVER_FIXEDBV = 379,     /* "__CPROVER_fixedbv"  */
    TOK_CPROVER_ATOMIC = 380,      /* "__CPROVER_atomic"  */
    TOK_CPROVER_BOOL = 381,        /* "__CPROVER_bool"  */
    TOK_CPROVER_THROW = 382,       /* "__CPROVER_throw"  */
    TOK_CPROVER_CATCH = 383,       /* "__CPROVER_catch"  */
    TOK_CPROVER_TRY = 384,         /* "__CPROVER_try"  */
    TOK_CPROVER_FINALLY = 385,     /* "__CPROVER_finally"  */
    TOK_CPROVER_ID = 386,          /* "__CPROVER_ID"  */
    TOK_CPROVER_LOOP_INVARIANT = 387, /* "__CPROVER_loop_invariant"  */
    TOK_CPROVER_REQUIRES = 388,    /* "__CPROVER_requires"  */
    TOK_CPROVER_ENSURES = 389,     /* "__CPROVER_ensures"  */
    TOK_IMPLIES = 390,             /* "==>"  */
    TOK_EQUIVALENT = 391,          /* "<==>"  */
    TOK_TRUE = 392,                /* "TRUE"  */
    TOK_FALSE = 393,               /* "FALSE"  */
    TOK_REAL = 394,                /* "__real__"  */
    TOK_IMAG = 395,                /* "__imag__"  */
    TOK_ALIGNAS = 396,             /* "_Alignas"  */
    TOK_ATOMIC_TYPE_QUALIFIER = 397, /* "_Atomic"  */
    TOK_ATOMIC_TYPE_SPECIFIER = 398, /* "_Atomic()"  */
    TOK_GENERIC = 399,             /* "_Generic"  */
    TOK_IMAGINARY = 400,           /* "_Imaginary"  */
    TOK_NORETURN = 401,            /* "_Noreturn"  */
    TOK_STATIC_ASSERT = 402,       /* "_Static_assert"  */
    TOK_THREAD_LOCAL = 403,        /* "_Thread_local"  */
    TOK_NULLPTR = 404,             /* "nullptr"  */
    TOK_CONSTEXPR = 405,           /* "constexpr"  */
    TOK_SCANNER_ERROR = 406,       /* TOK_SCANNER_ERROR  */
    TOK_SCANNER_EOF = 407,         /* TOK_SCANNER_EOF  */
    TOK_CATCH = 408,               /* "catch"  */
    TOK_CHAR16_T = 409,            /* "char16_t"  */
    TOK_CHAR32_T = 410,            /* "char32_t"  */
    TOK_CLASS = 411,               /* "class"  */
    TOK_DELETE = 412,              /* "delete"  */
    TOK_DECLTYPE = 413,            /* "decltype"  */
    TOK_EXPLICIT = 414,            /* "explicit"  */
    TOK_FRIEND = 415,              /* "friend"  */
    TOK_MUTABLE = 416,             /* "mutable"  */
    TOK_NAMESPACE = 417,           /* "namespace"  */
    TOK_NEW = 418,                 /* "new"  */
    TOK_NOEXCEPT = 419,            /* "noexcept"  */
    TOK_OPERATOR = 420,            /* "operator"  */
    TOK_PRIVATE = 421,             /* "private"  */
    TOK_PROTECTED = 422,           /* "protected"  */
    TOK_PUBLIC = 423,              /* "public"  */
    TOK_TEMPLATE = 424,            /* "template"  */
    TOK_THIS = 425,                /* "this"  */
    TOK_THROW = 426,               /* "throw"  */
    TOK_TYPEID = 427,              /* "typeid"  */
    TOK_TYPENAME = 428,            /* "typename"  */
    TOK_TRY = 429,                 /* "try"  */
    TOK_USING = 430,               /* "using"  */
    TOK_VIRTUAL = 431,             /* "virtual"  */
    TOK_SCOPE = 432,               /* "::"  */
    TOK_DOTPM = 433,               /* ".*"  */
    TOK_ARROWPM = 434,             /* "->*"  */
    TOK_UNARY_TYPE_PREDICATE = 435, /* TOK_UNARY_TYPE_PREDICATE  */
    TOK_BINARY_TYPE_PREDICATE = 436, /* TOK_BINARY_TYPE_PREDICATE  */
    TOK_MSC_UUIDOF = 437,          /* "__uuidof"  */
    TOK_MSC_IF_EXISTS = 438,       /* "__if_exists"  */
    TOK_MSC_IF_NOT_EXISTS = 439,   /* "__if_not_exists"  */
    TOK_UNDERLYING_TYPE = 440      /* "__underlying_type"  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define TOK_AUTO 258
#define TOK_BOOL 259
#define TOK_COMPLEX 260
#define TOK_BREAK 261
#define TOK_CASE 262
#define TOK_CHAR 263
#define TOK_CONST 264
#define TOK_CONTINUE 265
#define TOK_DEFAULT 266
#define TOK_DO 267
#define TOK_DOUBLE 268
#define TOK_ELSE 269
#define TOK_ENUM 270
#define TOK_EXTERN 271
#define TOK_FLOAT 272
#define TOK_FOR 273
#define TOK_GOTO 274
#define TOK_IF 275
#define TOK_INLINE 276
#define TOK_INT 277
#define TOK_LONG 278
#define TOK_REGISTER 279
#define TOK_RESTRICT 280
#define TOK_RETURN 281
#define TOK_SHORT 282
#define TOK_SIGNED 283
#define TOK_SIZEOF 284
#define TOK_STATIC 285
#define TOK_STRUCT 286
#define TOK_SWITCH 287
#define TOK_TYPEDEF 288
#define TOK_UNION 289
#define TOK_UNSIGNED 290
#define TOK_VOID 291
#define TOK_VOLATILE 292
#define TOK_WCHAR_T 293
#define TOK_WHILE 294
#define TOK_ARROW 295
#define TOK_INCR 296
#define TOK_DECR 297
#define TOK_SHIFTLEFT 298
#define TOK_SHIFTRIGHT 299
#define TOK_LE 300
#define TOK_GE 301
#define TOK_EQ 302
#define TOK_NE 303
#define TOK_ANDAND 304
#define TOK_OROR 305
#define TOK_ELLIPSIS 306
#define TOK_MULTASSIGN 307
#define TOK_DIVASSIGN 308
#define TOK_MODASSIGN 309
#define TOK_PLUSASSIGN 310
#define TOK_MINUSASSIGN 311
#define TOK_SHLASSIGN 312
#define TOK_SHRASSIGN 313
#define TOK_ANDASSIGN 314
#define TOK_XORASSIGN 315
#define TOK_ORASSIGN 316
#define TOK_IDENTIFIER 317
#define TOK_TYPEDEFNAME 318
#define TOK_INTEGER 319
#define TOK_FLOATING 320
#define TOK_CHARACTER 321
#define TOK_STRING 322
#define TOK_ASM_STRING 323
#define TOK_INT8 324
#define TOK_INT16 325
#define TOK_INT32 326
#define TOK_INT64 327
#define TOK_PTR32 328
#define TOK_PTR64 329
#define TOK_TYPEOF 330
#define TOK_GCC_AUTO_TYPE 331
#define TOK_GCC_FLOAT80 332
#define TOK_GCC_FLOAT128 333
#define TOK_GCC_INT128 334
#define TOK_GCC_DECIMAL32 335
#define TOK_GCC_DECIMAL64 336
#define TOK_GCC_DECIMAL128 337
#define TOK_GCC_ASM 338
#define TOK_GCC_ASM_PAREN 339
#define TOK_GCC_ATTRIBUTE 340
#define TOK_GCC_ATTRIBUTE_ALIGNED 341
#define TOK_GCC_ATTRIBUTE_TRANSPARENT_UNION 342
#define TOK_GCC_ATTRIBUTE_PACKED 343
#define TOK_GCC_ATTRIBUTE_VECTOR_SIZE 344
#define TOK_GCC_ATTRIBUTE_MODE 345
#define TOK_GCC_ATTRIBUTE_GNU_INLINE 346
#define TOK_GCC_ATTRIBUTE_WEAK 347
#define TOK_GCC_ATTRIBUTE_ALIAS 348
#define TOK_GCC_ATTRIBUTE_SECTION 349
#define TOK_GCC_ATTRIBUTE_NORETURN 350
#define TOK_GCC_ATTRIBUTE_CONSTRUCTOR 351
#define TOK_GCC_ATTRIBUTE_DESTRUCTOR 352
#define TOK_GCC_LABEL 353
#define TOK_MSC_ASM 354
#define TOK_MSC_BASED 355
#define TOK_CW_VAR_ARG_TYPEOF 356
#define TOK_BUILTIN_VA_ARG 357
#define TOK_GCC_BUILTIN_TYPES_COMPATIBLE_P 358
#define TOK_CLANG_BUILTIN_CONVERTVECTOR 359
#define TOK_OFFSETOF 360
#define TOK_ALIGNOF 361
#define TOK_MSC_TRY 362
#define TOK_MSC_FINALLY 363
#define TOK_MSC_EXCEPT 364
#define TOK_MSC_LEAVE 365
#define TOK_MSC_DECLSPEC 366
#define TOK_INTERFACE 367
#define TOK_CDECL 368
#define TOK_STDCALL 369
#define TOK_FASTCALL 370
#define TOK_CLRCALL 371
#define TOK_FORALL 372
#define TOK_EXISTS 373
#define TOK_ACSL_FORALL 374
#define TOK_ACSL_EXISTS 375
#define TOK_ARRAY_OF 376
#define TOK_CPROVER_BITVECTOR 377
#define TOK_CPROVER_FLOATBV 378
#define TOK_CPROVER_FIXEDBV 379
#define TOK_CPROVER_ATOMIC 380
#define TOK_CPROVER_BOOL 381
#define TOK_CPROVER_THROW 382
#define TOK_CPROVER_CATCH 383
#define TOK_CPROVER_TRY 384
#define TOK_CPROVER_FINALLY 385
#define TOK_CPROVER_ID 386
#define TOK_CPROVER_LOOP_INVARIANT 387
#define TOK_CPROVER_REQUIRES 388
#define TOK_CPROVER_ENSURES 389
#define TOK_IMPLIES 390
#define TOK_EQUIVALENT 391
#define TOK_TRUE 392
#define TOK_FALSE 393
#define TOK_REAL 394
#define TOK_IMAG 395
#define TOK_ALIGNAS 396
#define TOK_ATOMIC_TYPE_QUALIFIER 397
#define TOK_ATOMIC_TYPE_SPECIFIER 398
#define TOK_GENERIC 399
#define TOK_IMAGINARY 400
#define TOK_NORETURN 401
#define TOK_STATIC_ASSERT 402
#define TOK_THREAD_LOCAL 403
#define TOK_NULLPTR 404
#define TOK_CONSTEXPR 405
#define TOK_SCANNER_ERROR 406
#define TOK_SCANNER_EOF 407
#define TOK_CATCH 408
#define TOK_CHAR16_T 409
#define TOK_CHAR32_T 410
#define TOK_CLASS 411
#define TOK_DELETE 412
#define TOK_DECLTYPE 413
#define TOK_EXPLICIT 414
#define TOK_FRIEND 415
#define TOK_MUTABLE 416
#define TOK_NAMESPACE 417
#define TOK_NEW 418
#define TOK_NOEXCEPT 419
#define TOK_OPERATOR 420
#define TOK_PRIVATE 421
#define TOK_PROTECTED 422
#define TOK_PUBLIC 423
#define TOK_TEMPLATE 424
#define TOK_THIS 425
#define TOK_THROW 426
#define TOK_TYPEID 427
#define TOK_TYPENAME 428
#define TOK_TRY 429
#define TOK_USING 430
#define TOK_VIRTUAL 431
#define TOK_SCOPE 432
#define TOK_DOTPM 433
#define TOK_ARROWPM 434
#define TOK_UNARY_TYPE_PREDICATE 435
#define TOK_BINARY_TYPE_PREDICATE 436
#define TOK_MSC_UUIDOF 437
#define TOK_MSC_IF_EXISTS 438
#define TOK_MSC_IF_NOT_EXISTS 439
#define TOK_UNDERLYING_TYPE 440

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yyansi_clval;


int yyansi_cparse (void);


#endif /* !YY_YYANSI_C_ANSI_C_Y_TAB_HPP_INCLUDED  */
