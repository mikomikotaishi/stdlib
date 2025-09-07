/**
 * @file stop_token.cppm
 * @module std.concurrent.stop_token
 * @brief Module file for standard library stop token operations.
 *
 * This file contains the implementation of the stop token operations in the standard library.
 */

module;

#include <stop_token>

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.concurrent.stop_token;
#else
export module stdlib.concurrent.stop_token;
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
    using StopToken = ::std::stop_token;
    using StopSource = ::std::stop_source;

    template <typename Callback>
    using StopCallback = ::std::stop_callback<Callback>;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using NoStopState_t = ::std::nostopstate_t;
    #endif

    using NoStopState = ::std::nostopstate_t;

    using ::std::swap;
}
