/**
 * @file cstddef.cppm
 * @module core.cstddef
 * @brief Module file for importing the byte type from the standard library.
 * 
 * This file exports the byte type in the standard library.
 */

module;

#include <cinttypes>
#include <complex>
#include <cstddef>
#include <cstdint>
#include <cstdlib>

#ifdef __GNUC__
#include <stdfloat>
#endif

#include "Macros.hpp"

export module core.cstddef;

/**
 * @internal
 * @namespace _detail::core
 * @brief Wrapper namespace for standard library core operations.
 * Detail namespace - not to be exported for external use
 */
namespace _detail::core {
    constexpr auto ExitSuccess = EXIT_SUCCESS;
    constexpr auto ExitFailure = EXIT_FAILURE;
    const auto MultibyteCurrentMax = MB_CUR_MAX;
    constexpr auto Null = NULL;
    constexpr auto RandMax = RAND_MAX;
}

#undef EXIT_SUCCESS
#undef EXIT_FAILURE
#undef MB_CUR_MAX
#undef NULL
#undef RAND_MAX

/**
 * @namespace core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
export namespace core {
    using i8 = std::int8_t;
    using i16 = std::int16_t;
    using i32 = std::int32_t;
    using i64 = std::int64_t;
    using u8 = std::uint8_t;
    using u16 = std::uint16_t;
    using u32 = std::uint32_t;
    using u64 = std::uint64_t;
    // using f16 = std::float16_t;
    // using f32 = std::float32_t;
    // using f64 = std::float64_t;
    // using f128 = std::float128_t;
    // using bf16 = std::bfloat16_t;
    using f32 = float;
    using f64 = double;
    using f128 = long double;
    using usize = std::size_t;
    using isize = std::intptr_t;

    using char8 = char8_t;
    using char16 = char16_t;
    using char32 = char32_t;

    using c32 = std::complex<float>;
    using c64 = std::complex<double>;
    using c128 = std::complex<long double>;

    using byte = std::byte;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using NullPtr = std::nullptr_t;
    using NullPtr_t = std::nullptr_t;
    using NullPointer_t = std::nullptr_t;
    #endif

    using NullPointer = std::nullptr_t;

    using Void = void;
    using Boolean = bool;
    using Short = short;
    using Integer = int;
    using Long = long;
    using LongLong = long long;
    using UnsignedShort = unsigned short;
    using UnsignedInteger = unsigned int;
    using UnsignedLong = unsigned long;
    using UnsignedLongLong = unsigned long long;
    using Integer8 = std::int8_t;
    using Integer16 = std::int16_t;
    using Integer32 = std::int32_t;
    using Integer64 = std::int64_t;
    using UnsignedInteger8 = std::uint8_t;
    using UnsignedInteger16 = std::uint16_t;
    using UnsignedInteger32 = std::uint32_t;
    using UnsignedInteger64 = std::uint64_t;
    using Byte = std::byte;
    using SignedSize = std::intptr_t;
    using UnsignedSize = std::size_t;
    using Character = char;
    using UnsignedCharacter = unsigned char;
    using Character8 = char8_t;
    using Character16 = char16_t;
    using Character32 = char32_t;
    using WideCharacter = wchar_t;
    using Float = float;
    using Double = double;
    using LongDouble = long double;
    using Float32 = float;
    using Float64 = double;
    using Float128 = long double;
    // using Float16 = std::float16;
    // using Float32 = std::float32;
    // using Float64 = std::float64;
    // using Float128 = std::float128;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using Div_t = std::div_t;
    using LDiv_t = std::ldiv_t;
    using LLDiv_t = std::lldiv_t;
    using LDiv = std::ldiv_t;
    using LLDiv = std::lldiv_t;
    using LongDiv_t = std::ldiv_t;
    using LongLongDiv_t = std::lldiv_t;
    using IntegerMaxDiv_t = std::imaxdiv_t;
    #endif
    using Div = std::div_t;
    using LongDiv = std::ldiv_t;
    using LongLongDiv = std::lldiv_t;
    using IntegerMaxDiv = std::imaxdiv_t;

    constexpr auto EXIT_SUCCESS = _detail::core::ExitSuccess;
    constexpr auto EXIT_FAILURE = _detail::core::ExitFailure;
    const auto MB_CUR_MAX = _detail::core::MultibyteCurrentMax;
    constexpr auto NULL = _detail::core::Null;
    constexpr auto RAND_MAX = _detail::core::RandMax;
}

#if (defined(STDLIB_NO_STD) || defined(STDLIB_NO_ALLOC)) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_CORE_MODULE_EXPORT_CORE();
#endif
