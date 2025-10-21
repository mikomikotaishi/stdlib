/**
 * @file streambuf.cppm
 * @module std.io.streambuf
 * @brief Module file for standard library stream buffer operations.
 *
 * This file contains the implementation of the stream buffer operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.io.streambuf;
#else
export module stdlib.io.streambuf;
#endif

import core.io.streambuf;

/**
 * @namespace std::io
 * @brief Wrapper namespace for standard library input/output operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::io {
#else 
export namespace stdlib::io {
#endif
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using core::io::BasicStreamBuf;
    using core::io::StreamBuf;
    using core::io::WStreamBuf;
    #endif

    using core::io::BasicStreamBuffer;
    using core::io::StreamBuffer;
    using core::io::WideStreamBuffer;

    using core::io::swap;
}
