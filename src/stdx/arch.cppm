/**
 * @file arch.cppm
 * @module stdx.arch
 * @brief Module file for architecture-specific intrinsic operations.
 *
 * This file contains the imports for the architecture-specific intrinsic operations.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.arch;
#else
export module stdlibx.arch;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.arch.arm;
export import stdx.arch.x86;
#else
export import stdlibx.arch.arm;
export import stdlibx.arch.x86;
#endif
