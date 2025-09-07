/**
 * @file integer_sequence.cppm
 * @module std.core.integer_sequence
 * @brief Module file for standard library integer sequence operations.
 *
 * This file contains the implementation of the integer sequence operations in the standard library.
 */

module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.core.integer_sequence;
#else
export module stdlib.core.integer_sequence;
#endif

import alloc.integer_sequence;

/**
 * @namespace std::core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
#else 
export namespace stdlib::core {
#endif

    using alloc::IntegerSequence;

    using alloc::begin;
    using alloc::end;
    using alloc::swap;
}

#if !defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_STD_MODULE_EXPORT_CORE();
#endif
