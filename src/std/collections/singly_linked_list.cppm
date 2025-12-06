/**
 * @file singly_linked_list.cppm
 * @module std.collections.singly_linked_list
 * @brief Module file for standard library singly-linked list operations.
 *
 * This file contains the implementation of the singly-linked list operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.collections.singly_linked_list;
#else
export module stdlib.collections.singly_linked_list;
#endif

import alloc.collections.singly_linked_list;

/**
 * @namespace std::collections
 * @brief Wrapper namespace for standard library collection operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::collections {
#else 
export namespace stdlib::collections {
#endif
    using alloc::collections::SinglyLinkedList;
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using alloc::collections::ForwardList;
    #endif

    /**
     * @namespace pmr
     * @brief Namespace for operations on polymorphic memory resources.
     */
    namespace pmr {
        using alloc::collections::pmr::SinglyLinkedList;

        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        using alloc::collections::pmr::ForwardList;
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
