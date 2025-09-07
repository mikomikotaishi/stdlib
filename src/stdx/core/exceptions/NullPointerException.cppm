/**
 * @file NullPointerException.cppm
 * @module stdx.core.Exceptions:NullPointerException
 * @brief Implementation of the NullPointerException class.
 *
 * This file contains the implementation of the NullPointerException class, which is used to handle 
 * errors related to passing null pointers (nullptr) in the application.
 */

module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.core.Exceptions:NullPointerException;
#else
export module stdlibx.core.Exceptions:NullPointerException;
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
 * @class NullPointerException
 * @brief Exception class for handling null pointer errors.
 *
 * @extends InvalidArgumentException
 * 
 * This class is used to represent an exception that occurs when a null pointer (nullptr) is 
 * unexpectedly encountered and dereferenced or used in a way that leads to an error. 
 * It does not extend RuntimeException (unlike in Java), as passing a null pointer where it should 
 * not be passed is an invalid argument, and does not occur at runtime.
 */
class NullPointerException: public InvalidArgumentException {
public:
    /**
     * @brief Constructor that initialises the exception with a message.
     * @param msg The exception message.
     */
    explicit NullPointerException(const String& msg):
        InvalidArgumentException(msg) {}
};

}

STDLIB_STDX_MODULE_EXPORT_CORE();
