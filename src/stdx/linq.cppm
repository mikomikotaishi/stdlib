/**
 * @file linq.cppm
 * @module stdx.linq
 * @brief Import of LINQ modules.
 *
 * This file imports the modules for the LINQ-like query library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.linq;
#else
export module stdlibx.linq;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.linq.Query;
#else
export import stdlibx.linq.Query;
#endif
