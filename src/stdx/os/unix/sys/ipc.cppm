/**
 * @file ipc.cppm
 * @module stdx.os.unix.sys.ipc
 * @brief Module file for Unix inter-process communication operations.
 *
 * This file contains the implementation of the Unix inter-process communication operations from the POSIX libraries,
 * located in <sys/ipc.h>.
 */

module;

#ifdef __unix__
#include <sys/ipc.h>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.unix.sys.ipc;
#else
export module stdlibx.os.unix.sys.ipc;
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
    using ::ftok;
    #endif
}
