/**
 * @file integer_sequence.cppm
 * @module alloc.integer_sequence
 * @brief Module file for standard library integer sequence operations.
 *
 * This file contains the implementation of the integer sequence operations in the standard library.
 */

module;

#include <utility>

export module alloc.integer_sequence;

/**
 * @namespace alloc
 * @brief Wrapper namespace for the core objects of the standard library.
 */
export namespace alloc {
    template <typename T, T... Elements>
    using IntegerSequence = std::integer_sequence<T>;

    using std::begin;
    using std::end;

    using std::swap;
}

#if defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_ALLOC_MODULE_EXPORT_CORE();
#endif
