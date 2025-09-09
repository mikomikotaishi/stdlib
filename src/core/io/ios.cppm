/**
 * @file ios.cppm
 * @module core.io.ios
 * @brief Module file for standard library base input/output operations.
 *
 * This file contains the implementation of the base input/output operations in the standard library.
 */

module;

#include <ios>

export module core.io.ios;

import core.system_error;
import core.meta.type_traits;

using core::meta::TrueType;

/**
 * @namespace core::io
 * @brief Wrapper namespace for standard library IO operations.
 */
export namespace core::io {
    using IOSBase = std::ios_base;
    using IOS = std::ios;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using WIOS = std::wios;

    template <typename StateT>
    using FPos = std::fpos<StateT>;
    #endif

    using WideIOS = std::wios;

    template <typename StateT>
    using FilePosition = std::fpos<StateT>;

    enum class IOErrc {
        STREAM = static_cast<int>(std::io_errc::stream)
    };

    template <typename T>
    using IsErrorCodeEnum = std::is_error_code_enum<T>;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using StreamOff = std::streamoff;
    #endif

    using StreamOffset = std::streamoff;
    using StreamSize = std::streamsize;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using IOSBaseException = std::ios_base::failure;
    #endif

    using IOException = std::ios_base::failure;

    using std::iostream_category;
    using std::make_error_code;
    using std::make_error_condition;
    using std::boolalpha;
    using std::noboolalpha;
    using std::showbase;
    using std::noshowbase;
    using std::showpoint;
    using std::noshowpoint;
    using std::showpos;
    using std::noshowpos;
    using std::skipws;
    using std::noskipws;
    using std::uppercase;
    using std::nouppercase;
    using std::unitbuf;
    using std::nounitbuf;
    using std::internal;
    using std::left;
    using std::right;
    using std::dec;
    using std::hex;
    using std::oct;
    using std::fixed;
    using std::scientific;
    using std::hexfloat;
    using std::defaultfloat;

    [[nodiscard]]
    inline ErrorCode make_error_code(IOErrc e) noexcept {
        return std::make_error_code(static_cast<std::io_errc>(e));
    }

    [[nodiscard]]
    inline ErrorCondition make_error_condition(IOErrc e) noexcept {
        return std::make_error_condition(static_cast<std::io_errc>(e));
    }
}

using core::io::IOErrc;
using core::io::IsErrorCodeEnum;

template <>
struct std::is_error_code_enum<IOErrc>: TrueType {};

/**
 * @namespace core
 * @brief Wrapper namespace for standard library core operations.
 */
export namespace core {
    using core::io::IOErrc;
    
    [[nodiscard]]
    inline ErrorCode make_error_code(IOErrc e) noexcept {
        return ::core::io::make_error_code(e);
    }

    [[nodiscard]]
    inline ErrorCondition make_error_condition(IOErrc e) noexcept {
        return ::core::io::make_error_condition(e);
    }
}
