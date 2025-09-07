/**
 * @file contracts.cppm
 * @module std.core.contracts
 * @brief Module file for (experimental) standard library contract operations.
 *
 * This file contains the implementation of the (experimental) contract operations in the standard library.
 */


module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.core.contracts;
#else
export module stdlib.core.contracts;
#endif

import core.contracts;

/**
 * @namespace std::core
 * @brief Wrapper namespace for (experimental) standard library networking operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
#else 
export namespace stdlib::core {
#endif
    #ifdef STDLIB_EXPERIMENTAL_STD
    using ::core::ContractViolationContinuationMode;
    using ::core::ContractViolation;
    #endif
}

#if !defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_STD_MODULE_EXPORT_CORE();
#endif
