/**
 * @file tags.cppm
 * @module std.core.tags
 * @brief Module file for standard library tags aggregation class.
 *
 * This file contains the implementation of the tags aggregation class in the standard library.
 */

module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.core.tags;

import std.concurrent.stop_token;
import std.sync.mutex;
import std.time.chrono;
#else
export module stdlib.core.tags;

import stdlib.concurrent.stop_token;
import stdlib.sync.mutex;
import stdlib.time.chrono;
#endif

import core.cstddef;
import core.expected;
import core.ranges.ranges;
import core.util.utility;

import alloc.collections.flat_map; // also repeated in <flat_set>
import alloc.mem.memory;
import alloc.mem.new_header;

using core::Unexpect;
using core::ranges::FromRange;
using core::util::InPlace;
using core::util::InPlaceIndex;
using core::util::InPlaceType;
using core::util::PiecewiseConstruct;

using alloc::collections::SortedEquivalent;
using alloc::collections::SortedUnique;
using alloc::mem::AllocatorArgument;
using alloc::mem::DestroyingDelete;
using alloc::mem::NoThrow;

#ifdef STDLIB_NO_RESERVED_STD_NAMESPACE
using std::concurrent::NoStopState;
using std::sync::AdoptLock;
using std::sync::DeferLock;
using std::sync::TryToLock;
using std::time::chrono::Last;
#else
using stdlib::concurrent::NoStopState;
using stdlib::sync::AdoptLock;
using stdlib::sync::DeferLock;
using stdlib::sync::TryToLock;
using stdlib::time::chrono::Last;
#endif

/**
 * @namespace std::core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
#else 
export namespace stdlib::core {
#endif
    /**
     * @class Tags
     * @brief A utility class containing standard library tags.
     */
    class Tags {
    private:
        using usize = ::core::usize;
    public:
        Tags() = delete;

        using UnexpectTag = ::core::UnexpectTag;
        using FromRangeTag = ::core::ranges::FromRangeTag;
        template <usize I>
        using InPlaceIndexTag = ::core::util::InPlaceIndexTag<I>;
        using InPlaceTag = ::core::util::InPlaceTag;
        template <typename T>
        using InPlaceTypeTag = ::core::util::InPlaceTypeTag<T>;
        using PiecewiseConstructTag = ::core::util::PiecewiseConstructTag;
        using SortedEquivalentTag = ::alloc::collections::SortedEquivalentTag;
        using SortedUniqueTag = ::alloc::collections::SortedUniqueTag;
        using AllocatorArgumentTag = ::alloc::mem::AllocatorArgumentTag;
        using DestroyingDeleteTag = ::alloc::mem::DestroyingDeleteTag;
        using NoThrowTag = ::alloc::mem::NoThrowTag;
        #ifdef STDLIB_NO_RESERVED_STD_MODULE
        using NoStopStateTag = ::std::concurrent::NoStopStateTag;
        using AdoptLockTag = ::std::sync::AdoptLockTag;
        using DeferLockTag = ::std::sync::DeferLockTag;
        using TryToLockTag = ::std::sync::TryToLockTag;
        using LastSpecifier = ::std::time::chrono::LastSpecifier;
        #else
        using NoStopStateTag = ::stdlib::concurrent::NoStopStateTag;
        using AdoptLockTag = ::stdlib::sync::AdoptLockTag;
        using DeferLockTag = ::stdlib::sync::DeferLockTag;
        using TryToLockTag = ::stdlib::sync::TryToLockTag;
        using LastSpecifier = ::stdlib::time::chrono::LastSpecifier;
        #endif

        static constexpr UnexpectTag UNEXPECT = Unexpect;
        static constexpr FromRangeTag FROM_RANGE = FromRange;
        static constexpr InPlaceTag IN_PLACE = InPlace;
        template <usize I>
        static constexpr InPlaceIndexTag<I> IN_PLACE_INDEX = InPlaceIndex<I>;
        template <typename T>
        static constexpr InPlaceTypeTag<T> IN_PLACE_TYPE = InPlaceType<T>;
        static constexpr PiecewiseConstructTag PIECEWISE_CONSTRUCT = PiecewiseConstruct;
        static constexpr AllocatorArgumentTag ALLOCATOR_ARGUMENT = AllocatorArgument;
        static constexpr DestroyingDeleteTag DESTROYING_DELETE = DestroyingDelete;
        static constexpr NoThrowTag NO_THROW = NoThrow;
        static constexpr NoStopStateTag NO_STOP_STATE = NoStopState;
        static constexpr AdoptLockTag ADOPT_LOCK = AdoptLock;
        static constexpr DeferLockTag DEFER_LOCK = DeferLock;
        static constexpr TryToLockTag TRY_TO_LOCK = TryToLock;
        static constexpr LastSpecifier LAST = Last;
    };
}

#if !defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_STD_MODULE_EXPORT_CORE();
#endif
