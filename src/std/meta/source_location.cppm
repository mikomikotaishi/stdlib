/**
 * @file source_location.cppm
 * @module std.meta.source_location
 * @brief Module file for standard library source code location operations.
 *
 * This file contains the implementation of the source code location operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.meta.source_location;
#else
export module stdlib.meta.source_location;
#endif

import core.meta.source_location;

/**
 * @namespace std::meta
 * @brief Wrapper namespace for standard library metaprogramming operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::meta {
#else 
export namespace stdlib::meta {
#endif
    using core::meta::SourceLocation;
}
