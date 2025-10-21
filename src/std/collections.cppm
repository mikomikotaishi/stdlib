/**
 * @file collections.cppm
 * @module std.collections
 * @brief Module file for standard library collection operations.
 *
 * This file contains the imports for the collection operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.collections;
#else
export module stdlib.collections;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.collections.bitset;
export import std.collections.deque;
export import std.collections.forward_list;
export import std.collections.list;
export import std.collections.map;
export import std.collections.queue;
export import std.collections.set;
export import std.collections.stack;
export import std.collections.unordered_map;
export import std.collections.unordered_set;
export import std.collections.valarray;
export import std.collections.vector;
#else
export import stdlib.collections.bitset;
export import stdlib.collections.deque;
export import stdlib.collections.forward_list;
export import stdlib.collections.list;
export import stdlib.collections.map;
export import stdlib.collections.queue;
export import stdlib.collections.set;
export import stdlib.collections.stack;
export import stdlib.collections.unordered_map;
export import stdlib.collections.unordered_set;
export import stdlib.collections.valarray;
export import stdlib.collections.vector;
#endif
