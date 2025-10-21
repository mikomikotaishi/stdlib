/**
 * @file map.cppm
 * @module std.collections.map
 * @brief Module file for standard library map operations.
 *
 * This file contains the implementation of the map operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.collections.map;
#else
export module stdlib.collections.map;
#endif

import alloc.collections.map;

/**
 * @namespace std::collections
 * @brief Wrapper namespace for standard library collection operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::collections {
#else 
export namespace stdlib::collections {
#endif
    using alloc::collections::TreeMap;
    using alloc::collections::TreeMultimap;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using alloc::collections::Map;
    using alloc::collections::Multimap;
    #endif

    /**
     * @namespace pmr
     * @brief Namespace for operations on polymorphic memory resources.
     */
    namespace pmr {
        using alloc::collections::pmr::TreeMap;
        using alloc::collections::pmr::TreeMultimap;

        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        using alloc::collections::pmr::Map;
        using alloc::collections::pmr::Multimap;
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

    using alloc::collections::swap;
}
