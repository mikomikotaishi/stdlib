/**
 * @file string.cppm
 * @module std.text.string
 * @brief Module file for standard library string operations.
 *
 * This file contains the imports for the string operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.text.string;
#else
export module stdlib.text.string;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.text.string.cstring;
export import std.text.string.string;
export import std.text.string.string_view;
#else
export import stdlib.text.string.cstring;
export import stdlib.text.string.string;
export import stdlib.text.string.string_view;
#endif
