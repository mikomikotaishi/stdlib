/**
 * @file set.cppm
 * @module alloc.collections.set
 * @brief Module file for standard library set operations.
 *
 * This file contains the implementation of the set operations in the standard library.
 */

module;

#include <flat_map>

export module alloc.collections.flat_map;

import core.functional;
import core.meta.type_traits;

import alloc.collections.vector;
import alloc.mem.memory;

#ifdef STDLIB_ALTERNATE_USING_SYNTAX
using core::Less;
using core::meta::{IsNothrowSwappableValue, IsSameValue};

using alloc::mem::Allocator;
#else
using core::Less;
using core::meta::IsNothrowSwappableValue;
using core::meta::IsSameValue;

using alloc::mem::Allocator;
#endif

/**
 * @namespace alloc::collections
 * @brief Wrapper namespace for standard library collection operations.
 */
export namespace alloc::collections {
    template <typename Key, typename Value, typename Compare = Less<Key>, typename KeyContainer = Vector<Key>, typename ValueContainer = Vector<Value>>
        requires
            IsSameValue<Key, typename KeyContainer::value_type> && 
            IsSameValue<Value, typename ValueContainer::value_type> &&
            IsNothrowSwappableValue<KeyContainer> &&
            IsNothrowSwappableValue<ValueContainer>
    using FlatMap = std::flat_map<Key, Value, Compare, KeyContainer, ValueContainer>;

    template <typename Key, typename Value, typename Compare = Less<Key>, typename KeyContainer = Vector<Key>, typename ValueContainer = Vector<Value>>
        requires
            IsSameValue<Key, typename KeyContainer::value_type> && 
            IsSameValue<Value, typename ValueContainer::value_type> &&
            IsNothrowSwappableValue<KeyContainer> &&
            IsNothrowSwappableValue<ValueContainer>
    using FlatMultimap = std::flat_multimap<Key, Value, Compare, KeyContainer, ValueContainer>;

    using std::erase_if;

    using SortedUniqueTag = std::sorted_unique_t;
    inline constexpr SortedUniqueTag SortedUnique = std::sorted_unique;
    using SortedEquivalentTag = std::sorted_equivalent_t;
    inline constexpr SortedEquivalentTag SortedEquivalent = std::sorted_equivalent;
}
