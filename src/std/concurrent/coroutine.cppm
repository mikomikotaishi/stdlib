/**
 * @file coroutine.cppm
 * @module std.concurrent.coroutine
 * @brief Module file for standard library coroutine operations.
 *
 * This file contains the implementation of the coroutine operations in the standard library.
 */

module;

#include <coroutine>

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.concurrent.coroutine;
#else
export module stdlib.concurrent.coroutine;
#endif

/**
 * @namespace std::concurrent
 * @brief Wrapper namespace for standard library concurrency operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::concurrent {
#else 
export namespace stdlib::concurrent {
#endif
    // template <typename R, typename... Args>
    // using CoroutineTraits = ::std::coroutine_traits<R(Args...)>;

    template <typename Signature>
    using CoroutineTraits = ::std::coroutine_traits<Signature>;

    // template <typename R, typename... Args>
    // using CoroutineHandle = ::std::coroutine_handle<R(Args...)>;

    template <typename Signature>
    using CoroutineHandle = ::std::coroutine_handle<Signature>;

    using NoopCoroutinePromise = ::std::noop_coroutine_promise;
    using NoopCoroutineHandle = ::std::noop_coroutine_handle;
    using SuspendNever = ::std::suspend_never;
    using SuspendAlways = ::std::suspend_always;

    using ::std::noop_coroutine;

    using ::std::hash;
}
