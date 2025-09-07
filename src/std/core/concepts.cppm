/**
 * @file concepts.cppm
 * @module std.core.concepts
 * @brief Module file for standard library concept operations.
 *
 * This file contains the implementation of the concept operations in the standard library.
 */

module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.core.concepts;
#else
export module stdlib.core.concepts;
#endif

import core.concepts;

/**
 * @namespace std::core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
#else 
export namespace stdlib::core {
#endif
    using ::core::SameAs;
    using ::core::DerivedFrom;
    using ::core::ConvertibleTo;
    using ::core::CommonReferenceWith;
    using ::core::CommonWith;
    using ::core::Integral;
    using ::core::SignedIntegral;
    using ::core::UnsignedIntegral;
    using ::core::FloatingPoint;
    using ::core::AssignableFrom;
    using ::core::Swappable;
    using ::core::SwappableWith;
    using ::core::Destructible;
    using ::core::ConstructibleFrom;
    using ::core::DefaultInitializable;
    using ::core::MoveConstructible;
    using ::core::CopyConstructible;
    using ::core::EqualityComparable;
    using ::core::EqualityComparableWith;
    using ::core::TotallyOrdered;
    using ::core::TotallyOrderedWith;
    using ::core::Movable;
    using ::core::Copyable;
    using ::core::Semiregular;
    using ::core::Regular;
    using ::core::Invocable;
    using ::core::RegularInvocable;
    using ::core::Predicate;
    using ::core::Relation;
    using ::core::EquivalenceRelation;
    using ::core::StrictWeakOrder;
}

#if !defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_STD_MODULE_EXPORT_CORE();
#endif
