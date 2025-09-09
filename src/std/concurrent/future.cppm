/**
 * @file future.cppm
 * @module std.concurrent.future
 * @brief Module file for standard library future operations.
 *
 * This file contains the implementation of the future operations in the standard library.
 */

module;

#include <future>

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.concurrent.future;
#else
export module stdlib.concurrent.future;
#endif

import core.system_error;

using core::ErrorCode;
using core::ErrorCondition;

/**
 * @namespace std::concurrent
 * @brief Wrapper namespace for standard library concurrency operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::concurrent {
#else 
export namespace stdlib::concurrent {
#endif
    template <typename T>
    using Promise = ::std::promise<T>;

    template <typename T>
    using PackagedTask = ::std::packaged_task<T>;

    template <typename T>
    using Future = ::std::future<T>;

    template <typename T>
    using SharedFuture = ::std::shared_future<T>;

    enum class Launch {
        ASYNC = static_cast<int>(::std::launch::async),
        DEFERRED = static_cast<int>(::std::launch::deferred)
    };

    enum class FutureStatus {
        READY = static_cast<int>(::std::future_status::ready),
        TIMEOUT = static_cast<int>(::std::future_status::timeout),
        DEFERRED = static_cast<int>(::std::future_status::deferred)
    };

    enum class FutureErrc {
        FUTURE_ALREADY_RETRIEVED = static_cast<int>(::std::future_errc::future_already_retrieved),
        PROMISE_ALREADY_SATISFIED = static_cast<int>(::std::future_errc::promise_already_satisfied),
        NO_STATE = static_cast<int>(::std::future_errc::no_state),
        BROKEN_PROMISE = static_cast<int>(::std::future_errc::broken_promise)
    };

    class FutureException: public ::std::future_error {
    public:
        explicit FutureException(FutureErrc errc): 
            ::std::future_error(static_cast<::std::future_errc>(errc)) {}
    };

    template <typename T>
    struct IsErrorCodeEnum: ::std::false_type { };

    template <>
    struct IsErrorCodeEnum<FutureErrc>: public ::std::true_type { };

    using ::std::future_category;
    using ::std::make_error_code;
    using ::std::make_error_condition;

    [[nodiscard]]
    inline ErrorCode make_error_code(FutureErrc errc) noexcept { 
        return ErrorCode(static_cast<int>(errc), future_category()); 
    }

    [[nodiscard]]
    inline ErrorCondition make_error_condition(FutureErrc errc) noexcept { 
        return ErrorCondition(static_cast<int>(errc), future_category()); 
    }

    using ::std::async;
    using ::std::swap;
}

/**
 * @namespace std::core
 * @brief Wrapper namespace for standard library core operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
    using std::concurrent::FutureErrc;

    using std::concurrent::future_category;
    using std::concurrent::make_error_code;
    using std::concurrent::make_error_condition;
}
#else 
export namespace stdlib::core {
    using stdlib::concurrent::FutureErrc;

    using stdlib::concurrent::future_category;
    using stdlib::concurrent::make_error_code;
    using stdlib::concurrent::make_error_condition;
}
#endif

#ifndef STDLIB_NO_STD
STDLIB_STD_MODULE_EXPORT_CORE();
#endif
