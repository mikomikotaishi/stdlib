/**
 * @file unordered_map.cppm
 * @module alloc.collections.unordered_map
 * @brief Module file for standard library unordered map operations.
 *
 * This file contains the implementation of the unordered map operations in the standard library.
 */

module;

#include <unordered_map>

export module alloc.collections.unordered_map;

import core.functional;
import core.pair;

import alloc.mem.memory;

#ifdef STDLIB_ALTERNATE_USING_SYNTAX
using core::{EqualTo, Hash, Pair};

using alloc::mem::Allocator;
#else
using core::EqualTo;
using core::Hash;
using core::Pair;

using alloc::mem::Allocator;
#endif

/**
 * @namespace alloc::collections
 * @brief Wrapper namespace for standard library collection operations.
 */
export namespace alloc::collections {
    template <typename Key, typename Value, typename HashFn = Hash<Key>, typename Predicate = EqualTo<Key>, typename Alloc = Allocator<Pair<const Key, Value>>>
    using HashMap = std::unordered_map<Key, Value, HashFn, Predicate, Alloc>;

    template <typename Key, typename Value, typename HashFn = Hash<Key>, typename Predicate = EqualTo<Key>, typename Alloc = Allocator<Pair<const Key, Value>>>
    using HashMultimap = std::unordered_multimap<Key, Value, HashFn, Predicate, Alloc>;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    template <typename Key, typename Value, typename HashFn = Hash<Key>, typename Predicate = EqualTo<Key>, typename Alloc = Allocator<Pair<const Key, Value>>>
    using UnorderedMap = HashMap<Key, Value, HashFn, Predicate, Alloc>;

    template <typename Key, typename Value, typename HashFn = Hash<Key>, typename Predicate = EqualTo<Key>, typename Alloc = Allocator<Pair<const Key, Value>>>
    using UnorderedMultimap = HashMultimap<Key, Value, HashFn, Predicate, Alloc>;
    #endif

    /**
     * @namespace pmr
     * @brief Namespace for operations on polymorphic memory resources.
     */
    namespace pmr {
        template <typename Key, typename Value, typename HashFn = Hash<Key>, typename Predicate = EqualTo<Key>>
        using HashMap = std::pmr::unordered_map<Key, Value, HashFn, Predicate>;

        template <typename Key, typename Value, typename HashFn = Hash<Key>, typename Predicate = EqualTo<Key>>
        using HashMultimap = std::pmr::unordered_multimap<Key, Value, HashFn, Predicate>;

        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        template <typename Key, typename Value, typename HashFn = Hash<Key>, typename Predicate = EqualTo<Key>>
        using UnorderedMap = HashMap<Key, Value, HashFn, Predicate>;

        template <typename Key, typename Value, typename HashFn = Hash<Key>, typename Predicate = EqualTo<Key>>
        using UnorderedMultimap = HashMultimap<Key, Value, HashFn, Predicate>;
        #endif
    }

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

    using std::hash;
    using std::swap;
}
