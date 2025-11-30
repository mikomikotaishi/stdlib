/**
 * @file print.cppm
 * @module std.io.print
 * @brief Module file for standard library print operations.
 *
 * This file contains the implementation of the print operations in the standard library.
 */

module;

#if __has_include(<print>)
#include <print>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.io.print;

export import std.io.cstdio;
#else
export module stdlib.io.print;

export import stdlib.io.cstdio;
#endif

/**
 * @namespace std::io
 * @brief Wrapper namespace for standard library input/output operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::io {
#else 
export namespace stdlib::io {
#endif
    #if __has_include(<print>)
    using std::print;
    using std::println;
    using std::vprint_unicode;
    using std::vprint_nonunicode;
    #endif
}
