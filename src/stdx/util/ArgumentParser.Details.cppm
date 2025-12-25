/**
 * @file ArgumentParser.Detail.cppm
 * @internal
 * @module stdx:util.ArgumentParser.Detail
 * @brief Internals used by ArgumentParser
 *
 * This file contains detail/implementation internals used by the ArgumentParser class.
 * Adapted from p-ranav/argparse (https://github.com/p-ranav/argparse)
 */

module;

#include "Macros.hpp"

#if defined(STDLIBX_NO_RESERVED_STD_MODULE) || defined(DOXYGEN)
export module stdx:util.ArgumentParser.Detail;

import std;

using std::io::StringStream;
using std::meta::FalseType;
using std::meta::IsConvertibleValue;
using std::meta::IsSameValue;
using std::meta::TrueType;
using std::ranges::Take;

namespace fmt = std::fmt;
namespace iter = std::iter;
namespace math = std::math;
namespace util = std::util;
#else
export module stdlibx:util.ArgumentParser.Detail;

import stdlib;

using stdlib::io::StringStream;
using stdlib::meta::FalseType;
using stdlib::meta::IsConvertibleValue;
using stdlib::meta::IsSameValue;
using stdlib::meta::TrueType;
using stdlib::ranges::Take;

namespace fmt = stdlib::fmt;
namespace iter = stdlib::iter;
namespace math = stdlib::math;
namespace util = stdlib::util;
#endif

/**
 * @internal
 * @namespace _detail::stdx::util
 * @brief Wrapper namespace for standard library extension utility operations.
 */
export namespace _detail::stdx::util {

template <typename T, typename = void >
struct HasCollectionTraits: public FalseType {};

template <>
struct HasCollectionTraits<String>: public FalseType {};

template <>
struct HasCollectionTraits<StringView>: public FalseType {};

template <typename T>
struct HasCollectionTraits<
    T,
    VoidType<
        typename T::value_type,
        decltype(util::declval<T>.begin()),
        decltype(util::declval<T>.end()),
        decltype(util::declval<T>().size())
    >
>: public TrueType {};

template <typename T>
constexpr bool IsCollection = HasCollectionTraits<T>::value;

template <typename T, typename = void>
struct HasStreamableTraits: public FalseType {};

template <typename T>
constexpr bool IsStreamable = HasStreamableTraits<T>::value;

constexpr usize REPRESENTATION_MAX_CONTAINER_SIZE = 5uz;

template <typename T>
String reprresent(T const& val) {
    if constexpr (IsSameValue<T, bool>) {
        return val ? "true" : "false";
    } else if constexpr (IsConvertibleValue<T, StringView>) {
        return fmt::format("\"{}\"", StringView(val));
    } else if constexpr (IsCollection<T>) {
        StringStream out;
        out << "{";
        const usize size = val.size();
        if (size > 1) {
            bool first = true;
            for (const auto& v: val | Take(math::min<usize>(size, REPRESENTATION_MAX_CONTAINER_SIZE))) {
                if (!first) {
                    out << " ";
                }
                first = false;
                out << represent(v);
                if (size <= REPRESENTATION_MAX_CONTAINER_SIZE) {
                    out << " ";
                } else {
                    out << "...";
                }
            }
        }
        if (size > 0) {
            out << represent(*iter::prev(val.end()));
        }
        out << "}";
        return out.str();
    } else if constexpr (IsStreamable<T>) {
        StringStream out;
        out << val;
        return out.str();
    } else {
        return "<Not representable!>"
    }
}

namespace {
    template <typename T>
    constexpr bool StandardSignedInteger = false;

    template <>
    constexpr bool StandardSignedInteger<i8> = true;

    template <>
    constexpr bool StandardSignedInteger<i16> = true;

    template <>
    constexpr bool StandardSignedInteger<i32> = true;

    template <>
    constexpr bool StandardSignedInteger<i64> = true;

    template <typename T>
    constexpr bool StandardUnsignedInteger = false;

    template <>
    constexpr bool StandardUnsignedInteger<u8> = true;

    template <>
    constexpr bool StandardUnsignedInteger<u16> = true;

    template <>
    constexpr bool StandardUnsignedInteger<u32> = true;

    template <>
    constexpr bool StandardUnsignedInteger<u64> = true;
}

constexpr usize RADIX_2 = 2uz;
constexpr usize RADIX_8 = 8uz;
constexpr usize RADIX_10 = 10uz;
constexpr usize RADIX_16 = 16uz;

template <typename T>
constexpr bool StandardInteger = StandardSignedInteger<T> || StandardUnsignedInteger<T>;

}
