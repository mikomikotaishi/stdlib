/**
 * @file scoped_allocator.cppm
 * @module std.mem.scoped_allocator
 * @brief Module file for standard library scoped allocator operations.
 *
 * This file contains the implementation of the scoped allocator operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.mem.scoped_allocator;
#else
export module stdlib.mem.scoped_allocator;
#endif

import alloc.mem.scoped_allocator;

/**
 * @namespace std::mem
 * @brief Wrapper namespace for standard library memory operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::mem {
#else 
export namespace stdlib::mem {
#endif
    using alloc::mem::ScopedAllocatorAdaptor;
}
