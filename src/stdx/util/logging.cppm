/**
 * @file logging.cppm
 * @module stdx.util.logging
 * @brief Module file for logging operations.
 *
 * This file contains the implementation of the logging operations.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module stdx.util.logging;
#else
export module stdlibx.util.logging;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import stdx.util.logging.Level;
export import stdx.util.logging.Logger;
export import stdx.util.logging.LoggerFactory;
export import stdx.util.logging.Sinks;
#else
export import stdlibx.util.logging.Level;
export import stdlibx.util.logging.Logger;
export import stdlibx.util.logging.LoggerFactory;
export import stdlibx.util.logging.Sinks;
#endif
