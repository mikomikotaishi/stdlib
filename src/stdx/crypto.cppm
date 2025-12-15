/**
 * @file crypto.cppm
 * @module stdx.crypto
 * @brief Import of cryptography modules.
 *
 * This file imports the modules for the cryptography library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.crypto;
#else
export module stdlibx.crypto;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.crypto.Cipher;
#else
export import stdlibx.crypto.Cipher;
#endif
