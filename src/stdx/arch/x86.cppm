/**
 * @file x86.cppm
 * @module stdx.arch.x86
 * @brief Module file for x86 operations.
 *
 * This file contains the implementation of all x86 header modules
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.arch.x86;
#else
export module stdlibx.arch.x86;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.arch.x86.immintrin;
export import stdx.arch.x86.x86intrin;
#else
export import stdlibx.arch.x86.immintrin;
export import stdlibx.arch.x86.x86intrin;
#endif
