/**
 * @file forward_list.cppm
 * @module std.collections.forward_list
 * @brief Module file for standard library forward list operations.
 *
 * This file contains the implementation of the forward list operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.collections.forward_list;
#else
export module stdlib.collections.forward_list;
#endif

import alloc.collections.forward_list;

/**
 * @namespace std::collections
 * @brief Wrapper namespace for standard library collection operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::collections {
#else 
export namespace stdlib::collections {
#endif
    using alloc::collections::ForwardList;

    /**
     * @namespace pmr
     * @brief Namespace for operations on polymorphic memory resources.
     */
    namespace pmr {
        using alloc::collections::pmr::ForwardList;
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
