/**
 * @file pair.cppm
 * @module std.core.pair
 * @brief Module file for standard library pair operations.
 *
 * This file contains the implementation of the pair operations in the standard library.
 */

module;

#include "Macros.hpp"

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module std.core.pair;
#else
export module stdlib.core.pair;
#endif

import core.pair;

/**
 * @namespace std::core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
#if defined(STDLIBX_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
#else 
export namespace stdlib::core {
#endif
    using ::core::Pair;

    using ::core::swap;
    using ::core::get;

    using ::core::TupleSize;
    using ::core::TupleElement;

    using ::core::operator==;
    using ::core::operator<=>;
}

#if !defined(STDLIBX_NO_STD) && defined(STDLIBX_IMPLICIT_USING_CORE)
STDLIBX_STD_MODULE_EXPORT_CORE();
#endif
