/**
 * @file charconv.cppm
 * @module std.text.charconv
 * @brief Module file for standard library character conversion operations.
 *
 * This file contains the imports for the character conversion operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.text.charconv;
#else
export module stdlib.text.charconv;
#endif

import core.text.charconv;

/**
 * @namespace std::text
 * @brief Wrapper namespace for standard library text operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::text {
#else 
export namespace stdlib::text {
#endif
    using core::text::CharsFormat;
    using core::text::operator|;
    using core::text::operator&;
    using core::text::operator^;
    using core::text::operator~;
    using core::text::operator|=;
    using core::text::operator&=;
    using core::text::operator^=;
    using core::text::FromCharsResult;
    using core::text::ToCharsResult;
    using core::text::from_chars;
    using core::text::to_chars;
}
