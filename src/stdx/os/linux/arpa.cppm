/**
 * @file arpa.cppm
 * @module stdx.os.linux.arpa
 * @brief Module file for Unix ARPA operations.
 *
 * This file contains the implementation of the Unix ARPA operations from the POSIX libraries,
 * located in all <arpa/*.h> files.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.linux.arpa;
#else
export module stdlibx.os.linux.arpa;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.os.linux.arpa.ftp;
export import stdx.os.linux.arpa.nameser;
export import stdx.os.linux.arpa.telnet;
export import stdx.os.linux.arpa.tftp;
#else
export import stdlibx.os.linux.arpa.ftp;
export import stdlibx.os.linux.arpa.nameser;
export import stdlibx.os.linux.arpa.telnet;
export import stdlibx.os.linux.arpa.tftp;
#endif
