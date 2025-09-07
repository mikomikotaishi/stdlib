/**
 * @file cstddef.cppm
 * @module std.math.cstddef
 * @brief Module file for standard library C-style integer conversion operations.
 *
 * This file contains the implementation of the C-style integer conversion operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.math.cstddef;
#else
export module stdlib.math.cstddef;
#endif

import core.math.cstddef;
 
/**
 * @namespace std::math
 * @brief Wrapper namespace for standard library mathematical operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::math {
#else 
export namespace stdlib::math {
#endif
    using core::math::to_integer;
}
 