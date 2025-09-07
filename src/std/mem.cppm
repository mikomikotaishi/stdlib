/**
 * @file mem.cppm
 * @module std.mem
 * @brief Module file for standard library memory operations.
 *
 * This file contains the imports for the memory operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.mem;
#else
export module stdlib.mem;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.mem.cstdlib;
export import std.mem.memory;
export import std.mem.memory_resource;
export import std.mem.new_header;
export import std.mem.scoped_allocator;
#else
export import stdlib.mem.cstdlib;
export import stdlib.mem.memory;
export import stdlib.mem.memory_resource;
export import stdlib.mem.new_header;
export import stdlib.mem.scoped_allocator;
#endif
