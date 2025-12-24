/**
 * @file core.cppm
 * @module stdx.core
 * @brief Import of core functionality modules.
 *
 * This file imports the modules for core functionality.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module stdx.core;
#else
export module stdlibx.core;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import stdx.core.Exceptions;
#else
export import stdlibx.core.Exceptions;
#endif
