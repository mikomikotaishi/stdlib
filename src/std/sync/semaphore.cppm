/**
 * @file semaphore.cppm
 * @module std.sync.semaphore
 * @brief Module file for standard library semaphore operations.
 *
 * This file contains the implementation of the semaphore operations in the standard library.
 */

module;

#include <semaphore>

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.sync.semaphore;
#else
export module stdlib.sync.semaphore;
#endif

/**
 * @namespace std::sync
 * @brief Wrapper namespace for standard library synchronisation operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::sync {
#else 
export namespace stdlib::sync {
#endif
    using CountingSemaphore = std::counting_semaphore<>;

    using BinarySemaphore = std::binary_semaphore;
}
