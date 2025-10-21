/**
 * @file utility.cppm
 * @module std.util.utility
 * @brief Module file for standard library utility operations.
 *
 * This file contains the implementation of the utility operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.util.utility;
#else
export module stdlib.util.utility;
#endif

import core.util.utility;

/**
 * @namespace std::util
 * @brief Wrapper namespace for standard library utility operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::util {
#else 
export namespace stdlib::util {
#endif
    using core::util::swap;
    using core::util::exchange;
    using core::util::forward;
    using core::util::forward_like;
    using core::util::move;
    using core::util::move_if_noexcept;
    using core::util::as_const;
    using core::util::declval;
    using core::util::to_underlying;
    using core::util::cmp_equal;
    using core::util::cmp_not_equal;
    using core::util::cmp_less;
    using core::util::cmp_greater;
    using core::util::cmp_less_equal;
    using core::util::cmp_greater_equal;
    using core::util::in_range;
}
