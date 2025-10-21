/**
 * @file std.cppm
 * @module std
 * @brief Module file for the entire standard library.
 *
 * This file imports all the standard library modules.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std;
#else
export module stdlib;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.core;
export import std.collections;
export import std.concurrent;
export import std.fmt;
export import std.fs;
export import std.io;
export import std.iter;
export import std.math;
export import std.mem;
export import std.meta;
export import std.net;
export import std.random;
export import std.ranges;
export import std.sync;
export import std.sys;
export import std.text;
export import std.time;
export import std.util;
#else
export import stdlib.core;
export import stdlib.collections;
export import stdlib.concurrent;
export import stdlib.fmt;
export import stdlib.fs;
export import stdlib.io;
export import stdlib.iter;
export import stdlib.math;
export import stdlib.mem;
export import stdlib.meta;
export import stdlib.net;
export import stdlib.random;
export import stdlib.ranges;
export import stdlib.sync;
export import stdlib.sys;
export import stdlib.text;
export import stdlib.time;
export import stdlib.util;
#endif
