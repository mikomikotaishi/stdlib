/**
 * @file wait.cppm
 * @module stdx.os.unix.sys.wait
 * @brief Module file for Unix wait operations.
 *
 * This file contains the implementation of the Unix wait operations from the POSIX libraries,
 * located in <sys/wait.h>.
 */

module;

#ifdef __unix__
#include <sys/wait.h>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.unix.sys.wait;
#else
export module stdlibx.os.unix.sys.wait;
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
    using ::wait;
    using ::waitpid;
    using ::waitid;
    using ::wait3;
    using ::wait4;
    #endif
}
