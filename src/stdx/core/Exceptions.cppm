/**
 * @file Exceptions.cppm
 * @module stdx:core.Exceptions
 * @brief Import of all exception modules.
 *
 * This file imports the modules for exceptions.
 */

module;

#if defined(STDLIBX_NO_RESERVED_STD_MODULE) || defined(DOXYGEN)
export module stdx:core.Exceptions;
#else
export module stdlibx:core.Exceptions;
#endif

export import :core.Exceptions.ArithmeticException;
export import :core.Exceptions.InvalidOperationException;
export import :core.Exceptions.NotImplementedException;
export import :core.Exceptions.NullPointerException;
export import :core.Exceptions.UnsupportedOperationException;
