/**
 * @file stacktrace.cppm
 * @module std.meta.stacktrace
 * @brief Module file for standard library stacktrace operations.
 *
 * This file contains the implementation of the stack trace operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.meta.stacktrace;
#else
export module stdlib.meta.stacktrace;
#endif

import core.meta.stacktrace;

/**
 * @namespace std::meta
 * @brief Wrapper namespace for standard library metaprogramming operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::meta {
#else 
export namespace stdlib::meta {
#endif
    using core::meta::StackTraceEntry;
    using core::meta::BasicStackTrace;
    using core::meta::StackTrace;
    
    /**
     * @namespace pmr
     * @brief Namespace for operations on polymorphic memory resources.
     */
    namespace pmr {
        using core::meta::pmr::StackTrace;
    }

    using core::meta::hash;
    using core::meta::formatter;
    using core::meta::swap;

    using core::meta::to_string;
    using core::meta::operator<<;
}
