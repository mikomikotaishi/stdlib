/**
 * @file cstdlib.cppm
 * @module std.sys.cstdlib
 * @brief Module file for standard library C-style system operations.
 *
 * This file contains the implementation of the C-style system operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.sys.cstdlib;
#else
export module stdlib.sys.cstdlib;
#endif

import core.sys.cstdlib;

/**
 * @namespace std::sys
 * @brief Wrapper namespace for standard library system operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::sys {
#else 
export namespace stdlib::sys {
#endif
    using core::sys::abort;
    using core::sys::exit;
    using core::sys::quick_exit;
    using core::sys::_Exit;
    using core::sys::atexit;
    using core::sys::at_quick_exit;
    using core::sys::system;
    using core::sys::getenv;
}
