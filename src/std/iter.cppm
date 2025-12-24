/**
 * @file iter.cppm
 * @module std.iter
 * @brief Module file for standard library iterator operations.
 *
 * This file contains the imports for the iterator operations in the standard library.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module std.iter;
#else
export module stdlib.iter;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import std.iter.iterator;
#else
export import stdlib.iter.iterator;
#endif
