/**
 * @file net.cppm
 * @module std.net
 * @brief Module file for standard library networking operations.
 *
 * This file contains the imports for the networking operations in the standard library.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module std.net;
#else
export module stdlib.net;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import std.net.buffer;
export import std.net.executor;
export import std.net.internet;
export import std.net.io_context;
export import std.net.socket;
export import std.net.timer;
#else
export import stdlib.net.buffer;
export import stdlib.net.executor;
export import stdlib.net.internet;
export import stdlib.net.io_context;
export import stdlib.net.socket;
export import stdlib.net.timer;
#endif
