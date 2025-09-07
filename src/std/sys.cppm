/**
 * @file sys.cppm
 * @module std.sys
 * @brief Module file for standard library system operations.
 *
 * This file contains the imports for the system operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.sys;
#else
export module stdlib.sys;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.sys.csetjmp;
export import std.sys.csignal;
export import std.sys.cstdlib;
export import std.sys.utility;
#else
export import stdlib.sys.csetjmp;
export import stdlib.sys.csignal;
export import stdlib.sys.cstdlib;
export import stdlib.sys.utility;
#endif
