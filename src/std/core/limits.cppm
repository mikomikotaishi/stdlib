/**
 * @file limits.cppm
 * @module std.core.limits
 * @brief Module file for standard library limit operations.
 *
 * This file contains the implementation of the limit operations in the standard library.
 */

module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.core.limits;
#else
export module stdlib.core.limits;
#endif

import core.limits;

/**
 * @namespace std::core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
#else 
export namespace stdlib::core {
#endif
    using ::core::NumericLimits;
    using ::core::FloatRoundStyle;
    using ::core::FloatDenormStyle;
}

#if !defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_STD_MODULE_EXPORT_CORE();
#endif
