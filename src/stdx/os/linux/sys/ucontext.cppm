/**
 * @file ucontext.cppm
 * @module stdx.os.linux.sys.ucontext
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries,
 * located in <sys/ucontext.h>.
 */

module;

#ifdef __linux__
#include <sys/ucontext.h>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.linux.sys.ucontext;
#else
export module stdlibx.os.linux.sys.ucontext;
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
    using UContext_t = ::ucontext_t;
    using UserlevelContext_t = ::ucontext_t;
    #endif

    using UserlevelContext = ::ucontext_t;
    #endif
}
