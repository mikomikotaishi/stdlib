/**
 * @file io_context.cppm
 * @module std.net.io_context
 * @brief Module file for (experimental) standard library networking I/O context operations.
 *
 * This file contains the implementation of the (experimental) networking I/O context operations in the standard library.
 */


module;

#ifdef STDLIBX_EXPERIMENTAL_STD
#include <experimental/io_context>
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module std.net.io_context;
#else
export module stdlib.net.io_context;
#endif

/**
 * @namespace std::net
 * @brief Wrapper namespace for (experimental) standard library networking operations.
 */
#if defined(STDLIBX_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::net {
#else 
export namespace stdlib::net {
#endif
    #ifdef STDLIBX_EXPERIMENTAL_STD
    using IOContext = std::experimental::net::io_context;
    using ExecutorType = std::experimental::net::io_context::executor_type;
    #endif
}
