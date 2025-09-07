/**
 * @file random.cppm
 * @module std.random
 * @brief Module file for standard library pseudorandom number generation operations.
 *
 * This file contains the imports for the pseudorandom number generation operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.random;
#else
export module stdlib.random;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import std.random.random;
#else
export import stdlib.random.random;
#endif
