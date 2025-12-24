/**
 * @file socket.cppm
 * @module std.net.socket
 * @brief Module file for (experimental) standard library networking socket operations.
 *
 * This file contains the implementation of the (experimental) networking socket operations in the standard library.
 */


module;

#ifdef STDLIBX_EXPERIMENTAL_STD
#include <experimental/socket>
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module std.net.socket;
#else
export module stdlib.net.socket;
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
    using SocketBase = std::experimental::net::socket_base;

    template <typename Protocol>
    using BasicSocket = std::experimental::net::basic_socket<Protocol>;

    template <typename Protocol>
    using BasicDatagramSocket = std::experimental::net::basic_datagram_socket<Protocol>;

    template <typename Protocol>
    using BasicStreamSocket = std::experimental::net::basic_stream_socket<Protocol>;

    template <typename Protocol>
    using BasicSocketAcceptor = std::experimental::net::basic_socket_acceptor<Protocol>;

    #ifdef STDLIBX_ENABLE_COMPAT_NAMES
    template <typename Protocol>
    using BasicSocketStreamBuf = std::experimental::net::basic_socket_streambuf<Protocol>;
    #endif

    template <typename Protocol>
    using BasicSocketStreamBuffer = std::experimental::net::basic_socket_streambuf<Protocol>;

    template <typename Protocol>
    using BasicSocketIOStream = std::experimental::net::basic_socket_iostream<Protocol>;
    #endif
}
