/**
 * @file expected.cppm
 * @module core.expected
 * @brief Module file for importing the Expected class from the standard library.
 * 
 * This file exports the Expected class operations in the standard library.
 */

module;

#include <expected>

#include "Macros.hpp"

export module core.expected;

import core.meta;
import core.string_view;
import core.util;
import core.variant;

using core::meta::DecayType;

/**
 * @namespace core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
export namespace core {
    template <typename T, typename E>
    using Expected = std::expected<T, E>;

    template <typename E>
    using Unexpected = std::unexpected<E>;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using Unexpect_t = std::unexpect_t;
    #endif

    using UnexpectTag = std::unexpect_t;
    inline constexpr UnexpectTag Unexpect = std::unexpect;
    
    template <typename E>
    using BadExpectedAccessException = std::bad_expected_access<E>;

    template <typename E>
    class Error {
    private:
        E err;
        StringView msg;
    public:
        constexpr Error(E err, StringView msg = ""):
            err{err}, msg{msg} {}
        constexpr ~Error() = default;
        constexpr Error(const Error& other) = default;
        constexpr Error(Error&& other) = default;
        constexpr Error& operator=(const Error& other) = default;
        constexpr Error& operator=(Error&& other) = default;

        [[nodiscard]]
        constexpr E error() const noexcept {
            return err;
        }

        [[nodiscard]]
        constexpr StringView message() const noexcept {
            return msg;
        }
    };

    using std::swap;

    template <typename T, typename E = void>
    [[nodiscard]]
    constexpr Expected<DecayType<T>, E> Ok(T&& value) {
        return Expected<DecayType<T>, E>(core::util::forward<T>(value));
    }

    template <typename E = void>
    [[nodiscard]]
    constexpr Expected<void, E> Ok() {
        return Expected<void, E>();
    }

    template <typename E>
    constexpr Unexpected<DecayType<E>> Err(E&& error) {
        return Unexpected<DecayType<E>>(core::util::forward<E>(error));
    }
}

#if (defined(STDLIB_NO_STD) || defined(STDLIB_NO_ALLOC)) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_CORE_MODULE_EXPORT_CORE();
#endif
