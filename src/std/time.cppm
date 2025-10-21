/**
 * @file time.cppm
 * @module std.time
 * @brief Module file for standard library time operations.
 *
 * This file contains the imports for the time operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.time;
#else
export module stdlib.time;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.time.chrono;
export import std.time.ctime;
#else
export import stdlib.time.chrono;
export import stdlib.time.ctime;
#endif
