/**
 * @file net.cppm
 * @module stdx.os.linux.net
 * @brief Module file for Unix networking operations.
 *
 * This file contains the implementation of the Unix networking operations from the POSIX libraries,
 * located in all <net/*.h> files.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.linux.net;
#else
export module stdlibx.os.linux.net;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.os.linux.net.ethernet;
export import stdx.os.linux.net.if_arp;
export import stdx.os.linux.net.if_packet;
export import stdx.os.linux.net.if_ppp;
export import stdx.os.linux.net.if_shaper;
export import stdx.os.linux.net.ppp_defs;
export import stdx.os.linux.net.route;
#else
export import stdlibx.os.linux.net.ethernet;
export import stdlibx.os.linux.net.if_arp;
export import stdlibx.os.linux.net.if_packet;
export import stdlibx.os.linux.net.if_ppp;
export import stdlibx.os.linux.net.if_shaper;
export import stdlibx.os.linux.net.ppp_defs;
export import stdlibx.os.linux.net.route;
#endif
