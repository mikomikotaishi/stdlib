/**
 * @file UnsupportedOperationException.cppm
 * @module stdx.core.Exceptions:UnsupportedOperationException
 * @brief Implementation of the UnsupportedOperationException class.
 *
 * This file contains the implementation of the UnsupportedOperationException class, which is used to handle unsupported operation exceptions.
 */

module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.core.Exceptions:UnsupportedOperationException;
#else
export module stdlibx.core.Exceptions:UnsupportedOperationException;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
import std.core;
#else
import stdlib.core;
#endif

/**
 * @namespace stdx::core
 * @brief Wrapper namespace for standard library extension core libraries.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::core {
#else
export namespace stdlibx::core {
#endif

/**
 * @class UnsupportedOperationException
 * @brief Exception class for invalid/unsupported operations.
 *
 * @extends RuntimeException
 * 
 * The UnsupportedOperationException class is used to handle exceptions related to invalid or unsupported operations.
 */
class UnsupportedOperationException: public RuntimeException {
public:
    /**
     * @brief Constructor that initialises the exception with a message.
     * @param msg The exception message.
     */
    explicit UnsupportedOperationException(const String& msg):
        RuntimeException(msg) {}
};

}

STDLIB_STDX_MODULE_EXPORT_CORE();
