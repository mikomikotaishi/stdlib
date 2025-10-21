/**
 * @file list.cppm
 * @module std.collections.list
 * @brief Module file for standard library list operations.
 *
 * This file contains the implementation of the list operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.collections.list;
#else
export module stdlib.collections.list;
#endif

import alloc.collections.list;

/**
 * @namespace std::collections
 * @brief Wrapper namespace for standard library collection operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::collections {
#else 
export namespace stdlib::collections {
#endif
    using alloc::collections::LinkedList;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using alloc::collections::List;
    #endif

    /**
     * @namespace pmr
     * @brief Namespace for operations on polymorphic memory resources.
     */
    namespace pmr {
        using alloc::collections::pmr::LinkedList;

        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        using alloc::collections::pmr::List;
        #endif
    }

    using alloc::collections::erase;
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
