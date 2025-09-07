/**
 * @file glob.cppm
 * @module stdx.os.linux.sys.inotify:constants
 * @brief Module file for Unix globbing operations.
 *
 * This file contains the implementation of the constants used 
 * in <glob.h>.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.linux.sys.inotify:constants;
#else
export module stdlibx.os.linux.sys.inotify:constants;
#endif

/**
 * @namespace stdx::os::inotify
 * @brief Wrapper namespace for Unix POSIX operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::os::inotify {
#else 
export namespace stdlibx::os::inotify {
#endif
    inline constexpr int IN_CLOEXEC = 02000000;
    inline constexpr int IN_NONBLOCK = 00004000;
}
