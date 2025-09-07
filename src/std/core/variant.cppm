/**
 * @file variant.cppm
 * @module std.core.variant
 * @brief Module file for importing the Variant class from the standard library.
 * 
 * This file exports the Variant class operations in the standard library.
 */

module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.core.variant;
#else
export module stdlib.core.variant;
#endif

import core.variant;

/**
 * @namespace std::core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
#else 
export namespace stdlib::core {
#endif
    using ::core::Variant;
    using ::core::Monostate;
    using ::core::VariantSize;
    using ::core::VariantAlternative;
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using ::core::VariantAlternative_t;
    #endif
    using ::core::VariantAlternativeType;
    using ::core::BadVariantAccessException;

    using ::core::hash;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using ::core::VariantNPos;
    #endif

    using ::core::VariantNoPosition;

    using ::core::visit;
    using ::core::holds_alternative;
    using ::core::get;
    using ::core::get_if;
    using ::core::swap;
}

#if !defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_STD_MODULE_EXPORT_CORE();
#endif
