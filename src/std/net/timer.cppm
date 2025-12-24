/**
 * @file timer.cppm
 * @module std.net.timer
 * @brief Module file for (experimental) standard library networking timer operations.
 *
 * This file contains the implementation of the (experimental) networking timer operations in the standard library.
 */


module;

#ifdef STDLIBX_EXPERIMENTAL_STD
#include <experimental/timer>
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module std.net.timer;
#else
export module stdlib.net.timer;
#endif

/**
 * @namespace std::net
 * @brief Wrapper namespace for (experimental) standard library networking operations.
 */
#if defined(STDLIBX_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::net {
#else 
export namespace stdlib::net {
#endif
    #ifdef STDLIBX_EXPERIMENTAL_STD
    template <typename Clock>
    using WaitTraits = std::experimental::net::wait_traits<Clock>;

    template <typename Clock, typename _WaitTraits>
    using BasicWaitableTimer = std::experimental::net::basic_waitable_timer<Clock, _WaitTraits>;

    using SystemTimer = std::experimental::net::system_timer;
    using SteadyTimer = std::experimental::net::steady_timer;
    using HighResolutionTimer = std::experimental::net::high_resolution_timer;
    #endif
}
