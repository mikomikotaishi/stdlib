/**
 * @file concurrent.cppm
 * @module std.concurrent
 * @brief Module file for standard library concurrency operations.
 *
 * This file contains the imports for the concurrency operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.concurrent;
#else
export module stdlib.concurrent;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.concurrent.coroutine;
export import std.concurrent.future;
export import std.concurrent.stop_token;
export import std.concurrent.thread;
#else
export import stdlib.concurrent.coroutine;
export import stdlib.concurrent.future;
export import stdlib.concurrent.stop_token;
export import stdlib.concurrent.thread;
#endif
