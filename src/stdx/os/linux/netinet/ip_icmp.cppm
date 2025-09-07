/**
 * @file ip_icmp.cppm
 * @module stdx.os.linux.netinet.ip_icmp
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries,
 * located in <netinet/ip_icmp.h>.
 */

module;

#ifdef __linux__
#include <netinet/ip_icmp.h>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.linux.netinet.ip_icmp;
#else
export module stdlibx.os.linux.netinet.ip_icmp;
#endif

/**
 * @namespace stdx::os::linux::netinet
 * @brief Wrapper namespace for Unix POSIX operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::os::linux::netinet {
#else 
export namespace stdlibx::os::linux::netinet {
#endif
    #ifdef __linux__
    using ICMPHdr = ::icmphdr;
    using ICMPRAAddr = ::icmp_ra_addr;
    using ICMP = ::icmp;
    #endif
}
