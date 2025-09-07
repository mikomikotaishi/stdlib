/**
 * @file cstdlib.cppm
 * @module std.mem.cstdlib
 * @brief Module file for standard library C-style memory operations.
 *
 * This file contains the implementation of the C-style memory operations in the standard library.
 */

module;

#include <cstdlib>

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.mem.cstdlib;
#else
export module stdlib.mem.cstdlib;
#endif

/**
 * @namespace std::mem
 * @brief Wrapper namespace for standard library memory operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::mem {
#else 
export namespace stdlib::mem {
#endif
    using std::malloc;
    using std::aligned_alloc;
    using std::calloc;
    using std::realloc;
    using std::free;
}
