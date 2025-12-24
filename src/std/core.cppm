/**
 * @file core.cppm
 * @module std.core
 * @brief Module file for standard library core operations.
 *
 * This file contains the imports for the core operations in the standard library.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module std.core;
#else
export module stdlib.core;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import std.core.any;
export import std.core.array;
export import std.core.compare;
export import std.core.concepts;
export import std.core.contracts;
export import std.core.cstddef;
export import std.core.exceptions;
export import std.core.expected;
export import std.core.functional;
export import std.core.initializer_list;
export import std.core.limits;
export import std.core.optional;
export import std.core.pair;
export import std.core.sequence;
export import std.core.span;
export import std.core.string;
export import std.core.string_view;
export import std.core.system_error;
export import std.core.tags;
export import std.core.tuple;
export import std.core.variant;
#else
export import stdlib.core.any;
export import stdlib.core.array;
export import stdlib.core.compare;
export import stdlib.core.concepts;
export import stdlib.core.contracts;
export import stdlib.core.cstddef;
export import stdlib.core.exceptions;
export import stdlib.core.expected;
export import stdlib.core.functional;
export import stdlib.core.initializer_list;
export import stdlib.core.integer_sequence;
export import stdlib.core.limits;
export import stdlib.core.optional;
export import stdlib.core.pair;
export import stdlib.core.span;
export import stdlib.core.string;
export import stdlib.core.string_view;
export import stdlib.core.system_error;
export import stdlib.core.tags;
export import stdlib.core.tuple;
export import stdlib.core.variant;
#endif
