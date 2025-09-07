/**
 * @file mount.cppm
 * @module stdx.os.unix.sys.mount
 * @brief Module file for Unix filesystem mounting/unmounting operations.
 *
 * This file contains the implementation of the Unix filesystem mounting/unmounting operations from the POSIX libraries,
 * located in <sys/mount.h>.
 */

module;

#ifdef __unix__
#include <sys/mount.h>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.unix.sys.mount;
#else
export module stdlibx.os.unix.sys.mount;
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
    using MountAttr = ::mount_attr;
    using FsConfigCommand = ::fsconfig_command;
    #endif

    using MountAttribute = ::mount_attr;
    using FileSystemConfigCommand = ::fsconfig_command;

    using ::mount;
    using ::umount;
    using ::umount2;
    using ::fsopen;
    using ::fsmount;
    using ::move_mount;
    using ::fsconfig;
    using ::fspick;
    using ::open_tree;
    using ::mount_setattr;
    #endif
}
