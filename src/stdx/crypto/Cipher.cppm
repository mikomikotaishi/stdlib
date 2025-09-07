/**
 * @file Cipher.cppm
 * @module stdx.crypto.Cipher
 * @brief Implementation of the Cipher class.
 *
 * This file contains the implementation of the Cipher class.
 */

module;

#include <Poco/Crypto/Cipher.h>

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.crypto.Cipher;
#else
export module stdlibx.crypto.Cipher;
#endif

/**
 * @namespace stdx::crypto
 * @brief Wrapper namespace for standard library extension cryptography operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::crypto {
#else
export namespace stdlibx::crypto {
#endif
    using Poco::Crypto::Cipher;
}
