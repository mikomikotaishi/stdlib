/**
 * @file io.cppm
 * @module std.io
 * @brief Module file for standard library input/output operations.
 *
 * This file contains the imports for the input/output operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.io;
#else
export module stdlib.io;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.io.cstdio;
export import std.io.cwchar;
export import std.io.fstream;
export import std.io.istream;
export import std.io.iomanip;
export import std.io.ios;
export import std.io.iostream;
export import std.io.ostream;
export import std.io.print;
export import std.io.spanstream;
export import std.io.sstream;
export import std.io.streambuf;
export import std.io.string;
export import std.io.syncstream;
#else
export import stdlib.io.cstdio;
export import stdlib.io.cwchar;
export import stdlib.io.fstream;
export import stdlib.io.istream;
export import stdlib.io.iomanip;
export import stdlib.io.ios;
export import stdlib.io.iostream;
export import stdlib.io.ostream;
export import stdlib.io.print;
export import stdlib.io.spanstream;
export import stdlib.io.sstream;
export import stdlib.io.streambuf;
export import stdlib.io.string;
export import stdlib.io.syncstream;
#endif
