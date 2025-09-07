/**
 * @file exceptions.cppm
 * @module core.exception
 * @brief Module file for importing exceptions from the standard library.
 *
 * This file contains the implementation of the exception operations in the standard library.
 */

module;

#include <exception>
#include <stdexcept>

#include "Macros.hpp"

export module core.exception;

/**
 * @namespace core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
export namespace core {
    using Exception = std::exception;
    using NestedException = std::nested_exception;

    /// @extends Exception
    using BadExceptionException = std::bad_exception;
    using LogicException = std::logic_error;
    using RuntimeException = std::runtime_error;

    /// @extends LogicException
    using DomainException = std::domain_error;
    using InvalidArgumentException = std::invalid_argument;
    using LengthException = std::length_error;
    using OutOfRangeException = std::out_of_range;

    /// @extends RuntimeException
    using OverflowException = std::overflow_error;
    using UnderflowException = std::underflow_error;
    
    using TerminateHandler = std::terminate_handler;

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using ExceptionPtr = std::exception_ptr;
    #endif

    using ExceptionPointer = std::exception_ptr;

    using std::uncaught_exceptions;
    using std::make_exception_ptr;
    using std::current_exception;
    using std::rethrow_exception;
    using std::throw_with_nested;
    using std::rethrow_if_nested;
    using std::terminate;
    using std::get_terminate;
    using std::set_terminate;
}
#if (defined(STDLIB_NO_STD) || defined(STDLIB_NO_ALLOC)) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_CORE_MODULE_EXPORT_CORE();
#endif

