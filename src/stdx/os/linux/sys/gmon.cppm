/**
 * @file gmon.cppm
 * @module stdx.os.linux.sys.gmon
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries,
 * located in <sys/gmon.h>.
 */

module;

#ifdef __linux__
#include <sys/gmon.h>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.linux.sys.gmon;
#else
export module stdlibx.os.linux.sys.gmon;
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
    using ToStruct = ::tostruct;
    using RawArc = ::rawarc;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using GmonParam = ::gmonparam;
    #endif

    using GmonParameter = ::gmonparam;

    using ::monstartup;
    using ::_mcleanup;
    #endif
}
