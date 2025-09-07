/**
 * @file unordered_map.cppm
 * @module std.collections.unordered_map
 * @brief Module file for standard library unordered map operations.
 *
 * This file contains the implementation of the unordered map operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.collections.unordered_map;
#else
export module stdlib.collections.unordered_map;
#endif

import alloc.collections.unordered_map;

/**
 * @namespace std::collections
 * @brief Wrapper namespace for standard library collection operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::collections {
#else 
export namespace stdlib::collections {
#endif
    using alloc::collections::HashMap;
    using alloc::collections::HashMultimap;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using alloc::collections::UnorderedMap;
    using alloc::collections::UnorderedMultimap;
    #endif

    /**
     * @namespace pmr
     * @brief Namespace for operations on polymorphic memory resources.
     */
    namespace pmr {
        using alloc::collections::pmr::HashMap;
        using alloc::collections::pmr::HashMultimap;

        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        using alloc::collections::pmr::UnorderedMap;
        using alloc::collections::pmr::UnorderedMultimap;
        #endif
    }

    using alloc::collections::erase_if;

    using alloc::collections::operator==;
    using alloc::collections::operator<=>;

    using alloc::collections::begin;
    using alloc::collections::cbegin;
    using alloc::collections::end;
    using alloc::collections::cend;
    using alloc::collections::rbegin;
    using alloc::collections::crbegin;
    using alloc::collections::rend;
    using alloc::collections::crend;
    using alloc::collections::size;
    using alloc::collections::ssize;
    using alloc::collections::empty;
    using alloc::collections::data;

    using alloc::collections::hash;
    using alloc::collections::swap;
}
