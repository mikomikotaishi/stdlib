/**
 * @file cctype.cppm
 * @module std.text.cctype
 * @brief Module file for standard library character type operations.
 *
 * This file contains the imports for the character type operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.text.cctype;
#else
export module stdlib.text.cctype;
#endif

import core.text.cctype;

/**
 * @namespace std::text
 * @brief Wrapper namespace for standard library text operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::text {
#else 
export namespace stdlib::text {
#endif
    using core::text::isalnum;
    using core::text::isalpha;
    using core::text::islower;
    using core::text::isupper;
    using core::text::isdigit;
    using core::text::isxdigit;
    using core::text::iscntrl;
    using core::text::isgraph;
    using core::text::isspace;
    using core::text::isblank;
    using core::text::isprint;
    using core::text::ispunct;
    using core::text::tolower;
    using core::text::toupper;
}
