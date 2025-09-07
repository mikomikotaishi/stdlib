/**
 * @file list.cppm
 * @module alloc.collections.list
 * @brief Module file for standard library list operations.
 *
 * This file contains the implementation of the list operations in the standard library.
 */

module;

#include <list>

export module alloc.collections.list;

import core.meta.type_traits;

import alloc.mem.memory;

#ifdef STDLIB_ALTERNATE_USING_SYNTAX
using core::meta::{IsSameValue, RemoveConstVolatile};

using alloc::mem::Allocator;
#else
using core::meta::IsSameValue;
using core::meta::RemoveConstVolatile;

using alloc::mem::Allocator;
#endif

/**
 * @namespace alloc::collections
 * @brief Wrapper namespace for standard library collection operations.
 */
export namespace alloc::collections {
    template <typename T, typename Alloc = Allocator<T>>
        requires 
            IsSameValue<typename RemoveConstVolatile<T>::type, T> &&
            IsSameValue<typename Alloc::value_type, T>
    using LinkedList = std::list<T, Alloc>;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    template <typename T, typename Alloc = Allocator<T>>
    using List = LinkedList<T, Alloc>;
    #endif

    /**
     * @namespace pmr
     * @brief Namespace for operations on polymorphic memory resources.
     */
    namespace pmr {
        template <typename T>
        using LinkedList = std::pmr::list<T>;

        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        template <typename T>
        using List = LinkedList<T>;
        #endif
    }

    using std::erase;
    using std::erase_if;

    using std::operator==;
    using std::operator<=>;

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
    
    using std::swap;
}
