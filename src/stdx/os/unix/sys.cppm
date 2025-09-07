#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcomment"
#endif
/**
 * @file sys.cppm
 * @module stdx.os.unix.sys
 * @brief Module file for Unix system operations.
 *
 * This file contains the implementation of the Unix system operations from the POSIX libraries,
 * located in all <sys/*.h> files.
 */
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.unix.sys;
#else
export module stdlibx.os.unix.sys;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.os.unix.sys.ioctl;
export import stdx.os.unix.sys.ipc;
export import stdx.os.unix.sys.mman;
export import stdx.os.unix.sys.mount;
export import stdx.os.unix.sys.msg;
export import stdx.os.unix.sys.resource;
export import stdx.os.unix.sys.select;
export import stdx.os.unix.sys.sem;
export import stdx.os.unix.sys.shm;
export import stdx.os.unix.sys.socket;
export import stdx.os.unix.sys.stat;
export import stdx.os.unix.sys.statvfs;
export import stdx.os.unix.sys.time;
export import stdx.os.unix.sys.times;
export import stdx.os.unix.sys.ttydefaults;
export import stdx.os.unix.sys.uio;
export import stdx.os.unix.sys.un;
export import stdx.os.unix.sys.utsname;
export import stdx.os.unix.sys.wait;
#else
export import stdlibx.os.unix.sys.ioctl;
export import stdlibx.os.unix.sys.ipc;
export import stdlibx.os.unix.sys.mman;
export import stdlibx.os.unix.sys.mount;
export import stdlibx.os.unix.sys.msg;
export import stdlibx.os.unix.sys.resource;
export import stdlibx.os.unix.sys.select;
export import stdlibx.os.unix.sys.sem;
export import stdlibx.os.unix.sys.shm;
export import stdlibx.os.unix.sys.socket;
export import stdlibx.os.unix.sys.stat;
export import stdlibx.os.unix.sys.statvfs;
export import stdlibx.os.unix.sys.time;
export import stdlibx.os.unix.sys.times;
export import stdlibx.os.unix.sys.ttydefaults;
export import stdlibx.os.unix.sys.uio;
export import stdlibx.os.unix.sys.un;
export import stdlibx.os.unix.sys.utsname;
export import stdlibx.os.unix.sys.wait;
#endif
