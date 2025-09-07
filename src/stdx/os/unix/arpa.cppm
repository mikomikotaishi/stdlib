#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcomment"
#endif
/**
 * @file arpa.cppm
 * @module stdx.os.unix.arpa
 * @brief Module file for Unix ARPA operations.
 *
 * This file contains the implementation of the Unix ARPA operations from the POSIX libraries,
 * located in all <arpa/*.h> files.
 */
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.unix.arpa;
#else
export module stdlibx.os.unix.arpa;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.os.unix.arpa.inet;
#else
export import stdlibx.os.unix.arpa.inet;
#endif
