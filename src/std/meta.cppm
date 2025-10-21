/**
 * @file meta.cppm
 * @module std.meta
 * @brief Module file for standard library metaprogramming operations.
 *
 * This file contains the imports for the metaprogramming operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.meta;
#else
export module stdlib.meta;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.meta.source_location;
export import std.meta.stacktrace;
export import std.meta.type_traits;
export import std.meta.typeindex;
export import std.meta.typeinfo;
#else
export import stdlib.meta.source_location;
export import stdlib.meta.stacktrace;
export import stdlib.meta.type_traits;
export import stdlib.meta.typeindex;
export import stdlib.meta.typeinfo;
#endif
