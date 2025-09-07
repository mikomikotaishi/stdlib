/**
 * @file limits.cppm
 * @module core.limits
 * @brief Module file for standard library limit operations.
 *
 * This file contains the implementation of the limit operations in the standard library.
 */

module;

#include <limits>

#include "Macros.hpp"

export module core.limits;

/**
 * @namespace core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
export namespace core {
    template <typename T>
    using NumericLimits = std::numeric_limits<T>;

    using FloatRoundStyle = std::float_round_style;
    using FloatDenormStyle = std::float_denorm_style;
}

#if (defined(STDLIB_NO_STD) || defined(STDLIB_NO_ALLOC)) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_CORE_MODULE_EXPORT_CORE();
#endif
