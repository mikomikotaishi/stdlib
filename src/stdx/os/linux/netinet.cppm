#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcomment"
#endif
/**
 * @file netinet.cppm
 * @module stdx.os.linux.netinet
 * @brief Module file for Unix network internet operations.
 *
 * This file contains the implementation of the Unix network internet operations from the POSIX libraries,
 * located in all <netinet/*.h> files.
 */
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.linux.netinet;
#else
export module stdlibx.os.linux.netinet;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.os.linux.netinet.ether;
export import stdx.os.linux.netinet.icmp6;
export import stdx.os.linux.netinet.if_ether;
export import stdx.os.linux.netinet.if_fddi;
export import stdx.os.linux.netinet.if_tr;
export import stdx.os.linux.netinet.igmp;
export import stdx.os.linux.netinet.ip;
export import stdx.os.linux.netinet.ip_icmp;
export import stdx.os.linux.netinet.ip6;
export import stdx.os.linux.netinet.udp;
#else
export import stdlibx.os.linux.netinet.ether;
export import stdlibx.os.linux.netinet.icmp6;
export import stdlibx.os.linux.netinet.if_ether;
export import stdlibx.os.linux.netinet.if_fddi;
export import stdlibx.os.linux.netinet.if_tr;
export import stdlibx.os.linux.netinet.igmp;
export import stdlibx.os.linux.netinet.ip;
export import stdlibx.os.linux.netinet.ip_icmp;
export import stdlibx.os.linux.netinet.ip6;
export import stdlibx.os.linux.netinet.udp;
#endif
