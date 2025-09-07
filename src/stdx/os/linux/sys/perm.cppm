/**
 * @file perm.cppm
 * @module stdx.os.linux.sys.perm
 * @brief Module file for Unix I/O privilege permission modifications.
 *
 * This file contains the implementation of the Unix operations on I/O privilege permissions,
 * located in <sys/perm.h>.
 */

module;

#ifdef __linux__
#include <sys/perm.h>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.linux.sys.perm;
#else
export module stdlibx.os.linux.sys.perm;
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
    using ::ioperm;
    using ::iopl;
    #endif
}
