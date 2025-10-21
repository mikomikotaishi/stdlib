/**
 * @file linux.cppm
 * @module stdx.os.linux
 * @brief Module file for Linux operations.
 *
 * This file contains the implementation of the Linux operations.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.linux;
#else
export module stdlibx.os.linux;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.os.linux.arpa;
export import stdx.os.linux.net;
export import stdx.os.linux.netinet;
export import stdx.os.linux.sys;
#else
export import stdlibx.os.linux.arpa;
export import stdlibx.os.linux.net;
export import stdlibx.os.linux.netinet;
export import stdlibx.os.linux.sys;
#endif
