/**
 * @file optional.cppm
 * @module std.core.optional
 * @brief Module file for importing the Optional class from the standard library.
 * 
 * This file exports the Optional class operations in the standard library.
 */

module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.core.optional;
#else
export module stdlib.core.optional;
#endif

import core.optional;

/**
 * @namespace std::core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
#else 
export namespace stdlib::core {
#endif
    using ::core::Optional;
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using ::core::NullOpt;
    using ::core::NullOpt_t;
    using ::core::NullOption_t;
    #endif
    using ::core::nullopt;
    using ::core::NullOption;
    using ::core::BadOptionalAccessException;

    using ::core::hash;
    using ::core::swap;

    using ::core::make_optional;
}

#if !defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_STD_MODULE_EXPORT_CORE();
#endif
