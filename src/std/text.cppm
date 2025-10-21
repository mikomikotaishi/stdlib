/**
 * @file text.cppm
 * @module std.text
 * @brief Module file for standard library text manipulation operations.
 *
 * This file contains the imports for the text manipulation operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.text;
#else
export module stdlib.text;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.text.cctype;
export import std.text.charconv;
export import std.text.cstdlib;
export import std.text.regex;
export import std.text.string;
#else
export import stdlib.text.cctype;
export import stdlib.text.charconv;
export import stdlib.text.cstdlib;
export import stdlib.text.regex;
export import stdlib.text.string;
#endif
