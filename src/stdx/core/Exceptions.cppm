/**
 * @file Exceptions.cppm
 * @module stdx.core.Exceptions
 * @brief Import of all exception modules.
 *
 * This file imports the modules for exceptions.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module stdx.core.Exceptions;
#else
export module stdlibx.core.Exceptions;
#endif

export import :ArithmeticException;
export import :InvalidOperationException;
export import :NotImplementedException;
export import :NullPointerException;
export import :UnsupportedOperationException;
