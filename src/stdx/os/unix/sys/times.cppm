/**
 * @file times.cppm
 * @module stdx.os.unix.sys.times
 * @brief Module file for Unix file access/modification times operations.
 *
 * This file contains the implementation of the Unix file access/modification times operations from the POSIX libraries,
 * located in <sys/times.h>.
 */

module;

#ifdef __unix__
#include <sys/times.h>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.unix.sys.times;
#else
export module stdlibx.os.unix.sys.times;
#endif

/**
 * @namespace stdx::os::unix::sys
 * @brief Wrapper namespace for Unix POSIX operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::os::unix::sys {
#else 
export namespace stdlibx::os::unix::sys {
#endif
    #ifdef __unix__
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using Tms = ::tms;
    #endif

    using Times = ::tms;

    using ::times;
    #endif
}
