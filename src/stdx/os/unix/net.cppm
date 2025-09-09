/**
 * @file net.cppm
 * @module stdx.os.unix.net
 * @brief Module file for Unix networking operations.
 *
 * This file contains the implementation of the Unix networking operations from the POSIX libraries,
 * located in all <net/*.h> files.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.unix.net;
#else
export module stdlibx.os.unix.net;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.os.unix.net.if_header;
#else
export import stdlibx.os.unix.net.if_header;
#endif
