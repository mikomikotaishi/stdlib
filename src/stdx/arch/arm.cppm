/**
 * @file arm.cppm
 * @module stdx.arch.arm
 * @brief Module file for arm operations.
 *
 * This file contains the implementation of all arm header modules
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.arch.arm;
#else
export module stdlibx.arch.arm;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.arch.arm.arm_neon;
#else
export import stdlibx.arch.arm.arm_neon;
#endif
