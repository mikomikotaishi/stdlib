/**
 * @file set.cppm
 * @module std.collections.set
 * @brief Module file for standard library set operations.
 *
 * This file contains the implementation of the set operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.collections.set;
#else
export module stdlib.collections.set;
#endif

import alloc.collections.set;

/**
 * @namespace std::collections
 * @brief Wrapper namespace for standard library collection operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::collections {
#else 
export namespace stdlib::collections {
#endif
    using alloc::collections::TreeSet;
    using alloc::collections::TreeMultiset;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using alloc::collections::Set;
    using alloc::collections::Multiset;
    #endif

    /**
     * @namespace pmr
     * @brief Namespace for operations on polymorphic memory resources.
     */
    namespace pmr {
        using alloc::collections::pmr::TreeSet;
        using alloc::collections::pmr::TreeMultiset;

        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        using alloc::collections::pmr::Set;
        using alloc::collections::pmr::Multiset;
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
