/**
 * @file cstdlib.cppm
 * @module std.util.cstdlib
 * @brief Module file for standard library C-style algorithm operations.
 *
 * This file contains the implementation of the C-style algorithm operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.util.cstdlib;
#else
export module stdlib.util.cstdlib;
#endif

import core.util.cstdlib;

/**
 * @namespace std::util
 * @brief Wrapper namespace for standard library utility operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::util {
#else 
export namespace stdlib::util {
#endif
    using core::util::qsort;
    using core::util::bsearch;
}

