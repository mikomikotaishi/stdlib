/**
 * @file fnmatch.cppm
 * @module stdx.os.unix.fnmatch
 * @brief Module file for Unix filename matching operations.
 *
 * This file contains the implementation of the Unix filename matching operations from the POSIX libraries,
 * located in <fnmatch.h>.
 */

module;

#ifdef __unix__
#include <fnmatch.h>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.unix.fnmatch;
#else
export module stdlibx.os.unix.fnmatch;
#endif

/**
 * @namespace stdx::os::unix
 * @brief Wrapper namespace for Unix POSIX operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::os::unix {
#else 
export namespace stdlibx::os::unix {
#endif
    #ifdef __unix__
    using ::fnmatch;
    #endif
}
