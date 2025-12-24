/**
 * @file iterator.cppm
 * @module std.ranges.iterator
 * @brief Module file for standard library iterator operations.
 *
 * This file contains the implementation of the iterator operations in the standard library.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module std.ranges.iterator;
#else
export module stdlib.ranges.iterator;
#endif

import core.ranges.iterator;

/**
 * @namespace std::ranges
 * @brief Wrapper namespace for standard library ranges operations.
 */
#if defined(STDLIBX_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::ranges {
#else 
export namespace stdlib::ranges {
#endif
    using core::ranges::advance;
    using core::ranges::distance;
    using core::ranges::next;
    using core::ranges::prev;

    using core::ranges::iter_move;
    using core::ranges::iter_swap;
}
