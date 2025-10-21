/**
 * @file fmt.cppm
 * @module std.fmt
 * @brief Module file for standard library format and regex operations.
 *
 * This file contains the imports for the text formatting operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.fmt;
#else
export module stdlib.fmt;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.fmt.charconv;
export import std.fmt.cinttypes;
export import std.fmt.format;
#else
export import stdlib.fmt.charconv;
export import stdlib.fmt.cinttypes;
export import stdlib.fmt.format;
#endif
