/**
 * @file expected.cppm
 * @module std.core.expected
 * @brief Module file for importing the Expected class from the standard library.
 * 
 * This file exports the Expected class operations in the standard library.
 */

module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.core.expected;
#else
export module stdlib.core.expected;
#endif

import core.expected;

/**
 * @namespace std::core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
#else 
export namespace stdlib::core {
#endif
    using ::core::Expected;
    using ::core::Unexpected;
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using ::core::Unexpect_t;
    #endif
    using ::core::Unexpect;
    using ::core::BadExpectedAccessException;

    using ::core::swap;

    using ::core::Ok;
    using ::core::Err;
}

#if !defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_STD_MODULE_EXPORT_CORE();
#endif
