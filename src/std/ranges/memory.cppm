/**
 * @file memory.cppm
 * @module std.ranges.memory
 * @brief Module file for standard library memory ranges operations.
 *
 * This file contains the implementation of the memory ranges operations in the standard library.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module std.ranges.memory;
#else
export module stdlib.ranges.memory;
#endif

import alloc.ranges.memory;

/**
 * @namespace std::ranges
 * @brief Wrapper namespace for standard library ranges operations.
 */
#if defined(STDLIBX_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::ranges {
#else 
export namespace stdlib::ranges {
#endif
    using alloc::ranges::uninitialized_copy;
    using alloc::ranges::uninitialized_copy_n;
    using alloc::ranges::uninitialized_fill;
    using alloc::ranges::uninitialized_fill_n;
    using alloc::ranges::uninitialized_move;
    using alloc::ranges::uninitialized_move_n;
    using alloc::ranges::uninitialized_default_construct;
    using alloc::ranges::uninitialized_default_construct_n;
    using alloc::ranges::uninitialized_value_construct;
    using alloc::ranges::uninitialized_value_construct_n;
    using alloc::ranges::destroy;
    using alloc::ranges::destroy_n;
    using alloc::ranges::destroy_at;
    using alloc::ranges::construct_at;
}
