/**
 * @file utility.cppm
 * @module std.sys.utility
 * @brief Module file for standard library utility system operations.
 *
 * This file contains the implementation of the utility system operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.sys.utility;
#else
export module stdlib.sys.utility;
#endif

import core.sys.utility;

/**
 * @namespace std::sys
 * @brief Wrapper namespace for standard library system operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::sys {
#else 
export namespace stdlib::sys {
#endif
    using core::sys::unreachable;
}
