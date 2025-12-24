/**
 * @file sync.cppm
 * @module std.sync
 * @brief Module file for standard library synchronisation operations.
 *
 * This file contains the imports for the synchronisation operations in the standard library.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module std.sync;
#else
export module stdlib.sync;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import std.sync.atomic;
export import std.sync.barrier;
export import std.sync.condition_variable;
export import std.sync.latch;
export import std.sync.mutex;
export import std.sync.semaphore;
export import std.sync.shared_mutex;
#else
export import stdlib.sync.atomic;
export import stdlib.sync.barrier;
export import stdlib.sync.condition_variable;
export import stdlib.sync.latch;
export import stdlib.sync.mutex;
export import stdlib.sync.semaphore;
export import stdlib.sync.shared_mutex;
#endif
