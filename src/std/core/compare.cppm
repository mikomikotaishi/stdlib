/**
 * @file compare.cppm
 * @module std.core.compare
 * @brief Module file for standard library comparison operations.
 *
 * This file contains the implementation of the comparison operations in the standard library.
 */

module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.core.compare;
#else
export module stdlib.core.compare;
#endif

import core.compare;

/**
 * @namespace std::core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
#else 
export namespace stdlib::core {
#endif
    using ::core::ThreeWayComparable;
    using ::core::ThreeWayComparableWith;

    using ::core::PartialOrdering;
    using ::core::WeakOrdering;
    using ::core::StrongOrdering;

    using ::core::CommonComparisonCategory;
    using ::core::CompareThreeWayResult;

    using ::core::CompareThreeWay;
    
    using ::core::StrongFallback;
    using ::core::WeakFallback;
    using ::core::PartialFallback;

    inline namespace comparison {
        using ::core::comparison::StrongOrder;
        using ::core::comparison::WeakOrder;
        using ::core::comparison::PartialOrder;
        using ::core::comparison::CompareStrongOrderFallback;
        using ::core::comparison::CompareWeakOrderFallback;
        using ::core::comparison::ComparePartialOrderFallback;
    }

    using ::core::is_eq;
    using ::core::is_neq;
    using ::core::is_lt;
    using ::core::is_lteq;
    using ::core::is_gt;
    using ::core::is_gteq;
}

#if !defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_STD_MODULE_EXPORT_CORE();
#endif
