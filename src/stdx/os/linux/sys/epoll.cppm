/**
 * @file epoll.cppm
 * @module stdx.os.linux.sys.epoll
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries,
 * located in <sys/epoll.h>.
 */

module;

#ifdef __linux__
#include <sys/epoll.h>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.linux.sys.epoll;
#else
export module stdlibx.os.linux.sys.epoll;
#endif

/**
 * @namespace stdx::os::linux::sys
 * @brief Wrapper namespace for Unix POSIX operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::os::linux::sys {
#else 
export namespace stdlibx::os::linux::sys {
#endif
    #ifdef __linux__
    enum class EpollEvents : uint32_t {
        In = 0x001,
        Pri = 0x002,
        Out = 0x004,
        RdNorm = 0x040,
        RdBand = 0x080,
        WrNorm = 0x100,
        WrBand = 0x200,
        Msg = 0x400,
        Err = 0x008,
        Hup = 0x010,
        RdHup = 0x2000,
        Exclusive = 1u << 28,
        Wakeup = 1u << 29,
        OneShot = 1u << 30,
        EdgeTriggered = 1u << 31
    };

    using EpollData = ::epoll_data;
    using EpollData_t = ::epoll_data_t;
    using EpollEvent = ::epoll_event;
    using EpollParams = ::epoll_params;

    using ::epoll_create;
    using ::epoll_create1;
    using ::epoll_ctl;
    using ::epoll_wait;
    using ::epoll_pwait;
    using ::epoll_pwait2;
    #endif
}
