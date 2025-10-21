/**
 * @file ranges.cppm
 * @module std.ranges
 * @brief Module file for standard library ranges operations.
 *
 * This file contains the imports for the ranges operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.ranges;
#else
export module stdlib.ranges;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.ranges.algorithm;
export import std.ranges.functional;
export import std.ranges.generator;
export import std.ranges.iterator;
export import std.ranges.memory;
export import std.ranges.ranges;
#else
export import stdlib.ranges.algorithm;
export import stdlib.ranges.functional;
export import stdlib.ranges.generator;
export import stdlib.ranges.iterator;
export import stdlib.ranges.memory;
export import stdlib.ranges.ranges;
#endif
