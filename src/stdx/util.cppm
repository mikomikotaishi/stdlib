/**
 * @file util.cppm
 * @module stdx.util
 * @brief Import of utility modules.
 *
 * This file imports the modules for the utility library.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module stdx.util;
#else
export module stdlibx.util;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import stdx.util.Argument;
export import stdx.util.ArgumentParser;
export import stdx.util.ParsedArguments;
export import stdx.util.logging;
#else
export import stdlibx.util.Argument;
export import stdlibx.util.ArgumentParser;
export import stdlibx.util.ParsedArguments;
export import stdlibx.util.logging;
#endif
