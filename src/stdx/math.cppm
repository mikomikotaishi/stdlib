/**
 * @file math.cppm
 * @module stdx.math
 * @brief Import of mathematics modules.
 *
 * This file imports the modules for the mathematics library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.math;
#else
export module stdlibx.math;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.math.BigDecimal;
export import stdx.math.BigInteger;
#else
export import stdlibx.math.BigDecimal;
export import stdlibx.math.BigInteger;
#endif
