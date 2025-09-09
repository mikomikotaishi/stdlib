/**
 * @file contracts.cppm
 * @module core.contracts
 * @brief Module file for (experimental) standard library contract operations.
 *
 * This file contains the implementation of the (experimental) contract operations in the standard library.
 */


module;

#ifdef STDLIB_EXPERIMENTAL_STD
#include <experimental/contract>
#endif

#include "Macros.hpp"

export module core.contracts;

/**
 * @namespace core
 * @brief Wrapper namespace for (experimental) standard library networking operations.
 */
export namespace core {
    #ifdef STDLIB_EXPERIMENTAL_STD
    enum class ContractViolationContinuationMode {
        NEVER_CONTINUE = static_cast<int>(std::experimental::contract_violation_continuation_mode::never_continue),
        MAYBE_CONTINUE = static_cast<int>(std::experimental::contract_violation_continuation_mode::maybe_continue)
    };

    using ContractViolation = std::experimental::contract_violation;
    #endif
}

#if (defined(STDLIB_NO_STD) || defined(STDLIB_NO_ALLOC)) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_CORE_MODULE_EXPORT_CORE();
#endif

