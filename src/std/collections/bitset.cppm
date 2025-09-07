/**
 * @file bitset.cppm
 * @module std.collections.bitset
 * @brief Module file for standard library bitset operations.
 *
 * This file contains the implementation of the bitset operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.collections.bitset;
#else
export module stdlib.collections.bitset;
#endif

import core.collections.bitset;

/**
 * @namespace std::collections
 * @brief Wrapper namespace for standard library collection operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::collections {
#else 
export namespace stdlib::collections {
#endif
    using core::collections::BitSet;

    using core::collections::operator&;
    using core::collections::operator|;
    using core::collections::operator^;
    using core::collections::operator<<;
    using core::collections::operator>>;

    using core::collections::hash;
    using core::collections::swap;
}
