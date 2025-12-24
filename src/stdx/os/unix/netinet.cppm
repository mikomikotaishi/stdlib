/**
 * @file netinet.cppm
 * @module stdx.os.unix.netinet
 * @brief Module file for Unix network internet operations.
 *
 * This file contains the implementation of the Unix network internet operations from the POSIX libraries,
 * located in all <netinet/*.h> files.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module stdx.os.unix.netinet;
#else
export module stdlibx.os.unix.netinet;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import stdx.os.unix.netinet.in;
export import stdx.os.unix.netinet.tcp;
#else
export import stdlibx.os.unix.netinet.in;
export import stdlibx.os.unix.netinet.tcp;
#endif
