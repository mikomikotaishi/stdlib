/**
 * @file util.cppm
 * @module std.util
 * @brief Module file for standard library utility operations.
 *
 * This file contains the imports for the utility operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.util;
#else
export module stdlib.util;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.util.algorithm;
export import std.util.cstdlib;
export import std.util.numeric;
export import std.util.utility;
#else
export import stdlib.util.algorithm;
export import stdlib.util.cstdlib;
export import stdlib.util.numeric;
export import stdlib.util.utility;
#endif
