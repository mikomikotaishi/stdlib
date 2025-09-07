/**
 * @file timex.cppm
 * @module stdx.os.linux.sys.timex
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries,
 * located in <sys/timex.h>.
 */

module;

#ifdef __linux__
#include <sys/timex.h>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.linux.sys.timex;
#else
export module stdlibx.os.linux.sys.timex;
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
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using NtpTimeVal = ::ntptimeval;
    #endif

    using NtpTimeValue = ::ntptimeval;

    using ::adjtimex;
    using ::ntp_gettimex;
    using ::ntp_adjtime;
    #endif
}
