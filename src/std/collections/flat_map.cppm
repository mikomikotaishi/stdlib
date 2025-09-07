/**
 * @file flat_map.cppm
 * @module std.collections.flat_map
 * @brief Module file for standard library flat map operations.
 *
 * This file contains the implementation of the flat map operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.collections.flat_map;
#else
export module stdlib.collections.flat_map;
#endif

import alloc.collections.flat_map;

/**
 * @namespace std::collections
 * @brief Wrapper namespace for standard library collection operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::collections {
#else 
export namespace stdlib::collections {
#endif
    using alloc::collections::FlatMap;
    using alloc::collections::FlatMultimap;

    using alloc::collections::SortedUniqueTag;
    using alloc::collections::SortedUnique;
    using alloc::collections::SortedEquivalentTag;
    using alloc::collections::SortedEquivalent;

    using alloc::collections::erase_if;
}
