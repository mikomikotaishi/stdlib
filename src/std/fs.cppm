/**
 * @file fs.cppm
 * @module std.fs
 * @brief Module file for standard library file system operations.
 *
 * This file contains the imports for the file system operations in the standard library.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module std.fs;
#else
export module stdlib.fs;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import std.fs.filesystem;
export import std.fs.glob;
#else
export import stdlib.fs.filesystem;
export import stdlib.fs.glob;
#endif
