/**
 * @file span.cppm
 * @module core.span
 * @brief Module file for importing the Span class from the standard library.
 * 
 * This file exports the Span class operations in the standard library.
 */

module;

#include <span>

#include "Macros.hpp"

export module core.span;

/**
 * @namespace core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
export namespace core {
    inline constexpr std::size_t DYNAMIC_EXTENT = std::dynamic_extent;

    template <typename T, std::size_t Extent = DYNAMIC_EXTENT>
    using Span = std::span<T, Extent>;

    using std::as_bytes;
    using std::as_writable_bytes;

    using std::begin;
    using std::cbegin;
    using std::end;
    using std::cend;
    using std::rbegin;
    using std::crbegin;
    using std::rend;
    using std::crend;
    using std::size;
    using std::ssize;
    using std::empty;
    using std::data;
}

#if (defined(STDLIB_NO_STD) || defined(STDLIB_NO_ALLOC)) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_CORE_MODULE_EXPORT_CORE();
#endif
