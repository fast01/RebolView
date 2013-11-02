/***********************************************************************
**
**  REBOL [R3] Language Interpreter and Run-time Environment
**  Copyright 2012 REBOL Technologies
**  REBOL is a trademark of REBOL Technologies
**  Licensed under the Apache License, Version 2.0
**  This is a code-generated file.
**
************************************************************************
**
**  Title: Error Structure and Constants
**  Build: A0
**  Date:  2-Nov-2013
**  File:  errnums.h
**
**  AUTO-GENERATED FILE - Do not modify. (From: make-boot.r)
**
***********************************************************************/


#ifdef VAL_TYPE
/***********************************************************************
**
*/	typedef struct REBOL_Error_Obj
/*
***********************************************************************/
{
    REBVAL self;
    REBVAL code;
    REBVAL type;
    REBVAL id;
    REBVAL arg1;
    REBVAL arg2;
    REBVAL arg3;
    REBVAL nearest;
    REBVAL where;
} ERROR_OBJ;
#endif

/***********************************************************************
**
*/	enum REBOL_Errors
/*
***********************************************************************/
{
    RE_BREAK = 0,			// 0 "no loop to break"
    RE_RETURN,				// 1 "return or exit not in function"
    RE_THROW,				// 2 ["no catch for throw:" :arg1]
    RE_CONTINUE,			// 3 "no loop to continue"
    RE_HALT,				// 4 ["halted by user or script"]
    RE_QUIT,				// 5 ["user script quit"]
    RE_THROW_MAX,

    RE_NO_LOAD = 100,		// 100 ["cannot load: " :arg1]
    RE_EXITED,				// 101 ["exit occurred"]
    RE_DEPRECATED,			// 102 "deprecated function not allowed"
    RE_ELSE_GONE,			// 103 "ELSE is obsolete - use the EITHER function"
    RE_NOTE_MAX,

    RE_INVALID = 200,		// 200 ["invalid" :arg1 "--" :arg2]
    RE_MISSING,				// 201 ["missing" :arg2 "at" :arg1]
    RE_NO_HEADER,			// 202 ["script is missing a REBOL header:" :arg1]
    RE_BAD_HEADER,			// 203 ["script header is not valid:" :arg1]
    RE_BAD_CHECKSUM,		// 204 ["script checksum failed:" :arg1]
    RE_MALCONSTRUCT,		// 205 ["invalid construction spec:" :arg1]
    RE_BAD_CHAR,			// 206 ["invalid character in:" :arg1]
    RE_NEEDS,				// 207 ["this script needs" :arg1 :arg2 "or better to run correctly"]
    RE_SYNTAX_MAX,

    RE_NO_VALUE = 300,		// 300 [:arg1 "has no value"]
    RE_NEED_VALUE,			// 301 [:arg1 "needs a value"]
    RE_NOT_DEFINED,			// 302 [:arg1 "word is not bound to a context"]
    RE_NOT_IN_CONTEXT,		// 303 [:arg1 "is not in the specified context"]
    RE_NO_ARG,				// 304 [:arg1 "is missing its" :arg2 "argument"]
    RE_EXPECT_ARG,			// 305 [:arg1 "does not allow" :arg3 "for its" :arg2 "argument"]
    RE_EXPECT_VAL,			// 306 ["expected" :arg1 "not" :arg2]
    RE_EXPECT_TYPE,			// 307 [:arg1 :arg2 "field must be of type" :arg3]
    RE_CANNOT_USE,			// 308 ["cannot use" :arg1 "on" :arg2 "value"]
    RE_INVALID_ARG,			// 309 ["invalid argument:" :arg1]
    RE_INVALID_TYPE,		// 310 [:arg1 "type is not allowed here"]
    RE_INVALID_OP,			// 311 ["invalid operator:" :arg1]
    RE_NO_OP_ARG,			// 312 [:arg1 "operator is missing an argument"]
    RE_INVALID_DATA,		// 313 ["data not in correct format:" :arg1]
    RE_NOT_SAME_TYPE,		// 314 "values must be of the same type"
    RE_NOT_RELATED,			// 315 ["incompatible argument for" :arg1 "of" :arg2]
    RE_BAD_FUNC_DEF,		// 316 ["invalid function definition:" :arg1]
    RE_BAD_FUNC_ARG,		// 317 ["function argument" :arg1 "is not valid"]
    RE_NO_REFINE,			// 318 [:arg1 "has no refinement called" :arg2]
    RE_BAD_REFINES,			// 319 "incompatible or invalid refinements"
    RE_BAD_REFINE,			// 320 ["incompatible refinement:" :arg1]
    RE_INVALID_PATH,		// 321 ["cannot access" :arg2 "in path" :arg1]
    RE_BAD_PATH_TYPE,		// 322 ["path" :arg1 "is not valid for" :arg2 "type"]
    RE_BAD_PATH_SET,		// 323 ["cannot set" :arg2 "in path" :arg1]
    RE_BAD_FIELD_SET,		// 324 ["cannot set" :arg1 "field to" :arg2 "datatype"]
    RE_DUP_VARS,			// 325 ["duplicate variable specified:" :arg1]
    RE_PAST_END,			// 326 "out of range or past end"
    RE_MISSING_ARG,			// 327 "missing a required argument or refinement"
    RE_OUT_OF_RANGE,		// 328 ["value out of range:" :arg1]
    RE_TOO_SHORT,			// 329 "content too short (or just whitespace)"
    RE_TOO_LONG,			// 330 "content too long"
    RE_INVALID_CHARS,		// 331 "contains invalid characters"
    RE_INVALID_COMPARE,		// 332 ["cannot compare" :arg1 "with" :arg2]
    RE_ASSERT_FAILED,		// 333 ["assertion failed for:" :arg1]
    RE_WRONG_TYPE,			// 334 ["datatype assertion failed for:" :arg1]
    RE_INVALID_PART,		// 335 ["invalid /part count:" :arg1]
    RE_TYPE_LIMIT,			// 336 [:arg1 "overflow/underflow"]
    RE_SIZE_LIMIT,			// 337 ["maximum limit reached:" :arg1]
    RE_NO_RETURN,			// 338 "block did not return a value"
    RE_BLOCK_LINES,			// 339 "expected block of lines"
    RE_THROW_USAGE,			// 340 "invalid use of a thrown error value"
    RE_LOCKED_WORD,			// 341 ["protected variable - cannot modify:" :arg1]
    RE_PROTECTED,			// 342 "protected value or series - cannot modify"
    RE_HIDDEN,				// 343 "not allowed - would expose or modify hidden values"
    RE_SELF_PROTECTED,		// 344 "cannot set/unset self - it is protected"
    RE_BAD_BAD,				// 345 [:arg1 "error:" :arg2]
    RE_BAD_MAKE_ARG,		// 346 ["cannot MAKE/TO" :arg1 "from:" :arg2]
    RE_BAD_DECODE,			// 347 "missing or unsupported encoding marker"
    RE_ALREADY_USED,		// 348 ["alias word is already in use:" :arg1]
    RE_WRONG_DENOM,			// 349 [:arg1 "not same denomination as" :arg2]
    RE_BAD_PRESS,			// 350 ["invalid compressed data - problem:" :arg1]
    RE_DIALECT,				// 351 ["incorrect" :arg1 "dialect usage at:" :arg2]
    RE_BAD_COMMAND,			// 352 "invalid command format (extension function)"
    RE_PARSE_RULE,			// 353 ["PARSE - invalid rule or usage of rule:" :arg1]
    RE_PARSE_END,			// 354 ["PARSE - unexpected end of rule after:" :arg1]
    RE_PARSE_VARIABLE,		// 355 ["PARSE - expected a variable, not:" :arg1]
    RE_PARSE_COMMAND,		// 356 ["PARSE - command cannot be used as variable:" :arg1]
    RE_PARSE_SERIES,		// 357 ["PARSE - input must be a series:" :arg1]
    RE_SCRIPT_MAX,

    RE_ZERO_DIVIDE = 400,	// 400 "attempt to divide by zero"
    RE_OVERFLOW,			// 401 "math or number overflow"
    RE_POSITIVE,			// 402 "positive number required"
    RE_MATH_MAX,

    RE_CANNOT_OPEN = 500,	// 500 ["cannot open:" :arg1 "reason:" :arg2]
    RE_NOT_OPEN,			// 501 ["port is not open:" :arg1]
    RE_ALREADY_OPEN,		// 502 ["port is already open:" :arg1]
    RE_NO_CONNECT,			// 503 ["cannot connect:" :arg1 "reason:" :arg2]
    RE_NOT_CONNECTED,		// 504 ["port is not connected:" :arg1]
    RE_NO_SCRIPT,			// 505 ["script not found:" :arg1]
    RE_NO_SCHEME_NAME,		// 506 ["new scheme must have a name:" :arg1]
    RE_NO_SCHEME,			// 507 ["missing port scheme:" :arg1]
    RE_INVALID_SPEC,		// 508 ["invalid spec or options:" :arg1]
    RE_INVALID_PORT,		// 509 ["invalid port object (invalid field values)"]
    RE_INVALID_ACTOR,		// 510 ["invalid port actor (must be native or object)"]
    RE_INVALID_PORT_ARG,	// 511 ["invalid port argument:" arg1]
    RE_NO_PORT_ACTION,		// 512 ["this port does not support:" :arg1]
    RE_PROTOCOL,			// 513 ["protocol error:" :arg1]
    RE_INVALID_CHECK,		// 514 ["invalid checksum (tampered file):" :arg1]
    RE_WRITE_ERROR,			// 515 ["write failed:" :arg1 "reason:" :arg2]
    RE_READ_ERROR,			// 516 ["read failed:" :arg1 "reason:" :arg2]
    RE_READ_ONLY,			// 517 ["read-only - write not allowed:" :arg1]
    RE_NO_BUFFER,			// 518 ["port has no data buffer:" :arg1]
    RE_TIMEOUT,				// 519 ["port action timed out:" :arg1]
    RE_NO_CREATE,			// 520 ["cannot create:" :arg1]
    RE_NO_DELETE,			// 521 ["cannot delete:" :arg1]
    RE_NO_RENAME,			// 522 ["cannot rename:" :arg1]
    RE_BAD_FILE_PATH,		// 523 ["bad file path:" :arg1]
    RE_BAD_FILE_MODE,		// 524 ["bad file mode:" :arg1]
    RE_SECURITY,			// 525 ["security violation:" :arg1 " (refer to SECURE function)"]
    RE_SECURITY_LEVEL,		// 526 ["attempt to lower security to" :arg1]
    RE_SECURITY_ERROR,		// 527 ["invalid" :arg1 "security policy:" :arg2]
    RE_NO_CODEC,			// 528 ["cannot decode or encode (no codec):" :arg1]
    RE_BAD_MEDIA,			// 529 ["bad media data (corrupt image, sound, video)"]
    RE_NO_EXTENSION,		// 530 ["cannot open extension:" :arg1]
    RE_BAD_EXTENSION,		// 531 ["invalid extension format:" :arg1]
    RE_EXTENSION_INIT,		// 532 ["extension cannot be initialized (check version):" :arg1]
    RE_CALL_FAIL,			// 533 ["external process failed:" :arg1]
    RE_ACCESS_MAX,

    RE_COMMAND_MAX,

    RE_RESV700_MAX,

    RE_MESSAGE = 800,		// 800 [:arg1]
    RE_USER_MAX,

    RE_BAD_PATH = 900,		// 900 ["bad path:" arg1]
    RE_NOT_HERE,			// 901 [arg1 "not supported on your system"]
    RE_NO_MEMORY,			// 902 "not enough memory"
    RE_STACK_OVERFLOW,		// 903 "stack overflow"
    RE_GLOBALS_FULL,		// 904 "no more global variable space"
    RE_MAX_NATIVES,			// 905 "too many natives"
    RE_BAD_SERIES,			// 906 "invalid series"
    RE_LIMIT_HIT,			// 907 ["internal limit reached:" :arg1]
    RE_BAD_SYS_FUNC,		// 908 ["invalid or missing system function:" :arg1]
    RE_FEATURE_NA,			// 909 "feature not available"
    RE_NOT_DONE,			// 910 "reserved for future use (or not yet implemented)"
    RE_INVALID_ERROR,		// 911 "error object or fields were not valid"
    RE_INTERNAL_MAX

};

#define RE_NOTE RE_NO_LOAD
#define RE_USER RE_MESSAGE
