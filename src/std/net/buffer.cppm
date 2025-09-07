/**
 * @file buffer.cppm
 * @module std.net.buffer
 * @brief Module file for (experimental) standard library networking buffer operations.
 *
 * This file contains the implementation of the (experimental) networking buffer operations in the standard library.
 */

module;

#ifdef STDLIB_EXPERIMENTAL_STD
#include <experimental/buffer>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.net.buffer;
#else
export module stdlib.net.buffer;
#endif

/**
 * @namespace std::net
 * @brief Wrapper namespace for (experimental) standard library networking operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::net {
#else 
export namespace stdlib::net {
#endif
    #ifdef STDLIB_EXPERIMENTAL_STD
    using ConstBuffer = std::experimental::net::const_buffer;
    using MutableBuffer = std::experimental::net::mutable_buffer;

    template <typename T, typename Allocator>
    using DynamicVectorBuffer = std::experimental::net::dynamic_vector_buffer<T, Allocator>;

    template <typename CharT, typename Traits, typename Allocator>
    using DynamicStringBuffer = std::experimental::net::dynamic_string_buffer<CharT, Traits, Allocator>;

    using TransferAll = std::experimental::net::transfer_all;
    using TransferAtLeast = std::experimental::net::transfer_at_least;
    using TransferExactly = std::experimental::net::transfer_exactly;
    #endif
}
