/**
 * @file tuple.cppm
 * @module std.core.tuple
 * @brief Module file for standard library tuple operations.
 *
 * This file contains the implementation of the tuple operations in the standard library.
 */

module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.core.tuple;
#else
export module stdlib.core.tuple;
#endif

import core.tuple;

/**
 * @namespace std::core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
#else 
export namespace stdlib::core {
#endif
    using ::core::Tuple;
    using ::core::TupleSize;
    using ::core::TupleSizeValue;
    using ::core::TupleElement;
    using ::core::TupleElementType;
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using ::core::TupleElement_t;
    #endif

    using ::core::operator==;
    using ::core::operator<=>;

    using ::core::make_tuple;
    using ::core::tie;
    using ::core::forward_as_tuple;
    using ::core::tuple_cat;
    using ::core::get;
    using ::core::apply;
    using ::core::make_from_tuple;

    using ::core::swap;
}

#if !defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_STD_MODULE_EXPORT_CORE();
#endif
