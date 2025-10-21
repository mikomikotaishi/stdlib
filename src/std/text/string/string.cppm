/**
 * @file string.cppm
 * @module std.text.string.string
 * @brief Module file for standard library string operations.
 *
 * This file contains the implementation of the string operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.text.string.string;
#else
export module stdlib.text.string.string;
#endif

import alloc.text.string.string;

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
        using alloc::text::string::String;
        using alloc::text::string::CharTraits;
        using alloc::text::string::BasicString;
        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        using alloc::text::string::U8String;
        using alloc::text::string::U16String;
        using alloc::text::string::U32String;
        using alloc::text::string::WString;
        #endif
        using alloc::text::string::Utf8String;
        using alloc::text::string::Utf16String;
        using alloc::text::string::Utf32String;
        using alloc::text::string::WideString;

        using alloc::text::string::stoi;
        using alloc::text::string::stol;
        using alloc::text::string::stoll;
        using alloc::text::string::stoul;
        using alloc::text::string::stoull;
        using alloc::text::string::stof;
        using alloc::text::string::stod;
        using alloc::text::string::stold;
        using alloc::text::string::to_string;
        using alloc::text::string::to_wstring;

        using alloc::text::string::operator+;
        using alloc::text::string::operator==;
        using alloc::text::string::operator<=>;
        inline namespace literals {
            inline namespace string_literals {
                using alloc::text::string::literals::string_literals::operator""s;
            }
        }
        using alloc::text::string::erase;
        using alloc::text::string::erase_if;

        using alloc::text::string::begin;
        using alloc::text::string::cbegin;
        using alloc::text::string::end;
        using alloc::text::string::cend;
        using alloc::text::string::rbegin;
        using alloc::text::string::crbegin;
        using alloc::text::string::rend;
        using alloc::text::string::crend;
        using alloc::text::string::size;
        using alloc::text::string::ssize;
        using alloc::text::string::empty;
        using alloc::text::string::data;

        using alloc::text::string::hash;
        using alloc::text::string::swap;
    }
}
