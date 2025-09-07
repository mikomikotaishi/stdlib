/**
 * @file source_location.cppm
 * @module core.meta.source_location
 * @brief Module file for standard library source code location operations.
 *
 * This file contains the implementation of the source code location operations in the standard library.
 */

module;

#include <source_location>

export module core.meta.source_location;

/**
 * @namespace core::meta
 * @brief Wrapper namespace for standard library metaprogramming operations.
 */
export namespace core::meta {
    using SourceLocation = std::source_location;
}
