/**
 * @file string_view.cppm
 * @module std.text.string.string_view
 * @brief Module file for standard library string view operations.
 *
 * This file contains the implementation of the string view operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.text.string.string_view;
#else
export module stdlib.text.string.string_view;
#endif

import core.text.string.string_view;

/**
 * @namespace std::text
 * @brief Wrapper namespace for standard library text operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::text {
#else 
export namespace stdlib::text {
#endif
    /**
     * @namespace string
     * @brief Wrapper namespace for standard library string operations.
     */
    inline namespace string {
        using core::text::string::CharTraits;
        using core::text::string::BasicStringView;
        using core::text::string::StringView;
        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        using core::text::string::U8StringView;
        using core::text::string::U16StringView;
        using core::text::string::U32StringView;
        using core::text::string::WStringView;
        #endif
        using core::text::string::Utf8StringView;
        using core::text::string::Utf16StringView;
        using core::text::string::Utf32StringView;
        using core::text::string::WideStringView;

        using core::text::string::operator==;
        using core::text::string::operator<=>;
        using core::text::string::operator<<;
        inline namespace literals {
            inline namespace string_view_literals {
                using core::text::string::literals::string_view_literals::operator""sv;
            }
        }
        using core::text::string::swap;
        using core::text::string::begin;
        using core::text::string::cbegin;
        using core::text::string::end;
        using core::text::string::cend;
        using core::text::string::rbegin;
        using core::text::string::crbegin;
        using core::text::string::rend;
        using core::text::string::crend;
        using core::text::string::size;
        using core::text::string::ssize;
        using core::text::string::empty;
        using core::text::string::data;
    }
}
