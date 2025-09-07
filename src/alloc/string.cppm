/**
 * @file string.cppm
 * @module alloc.string
 * @brief Module file for importing the String class from the standard library.
 * 
 * This file exports the String class operations in the standard library.
 */

module;

#include "Macros.hpp"

export module alloc.string;

import alloc.text.string.string;

/**
 * @namespace alloc
 * @brief Wrapper namespace for the core objects of the standard library.
 */
export namespace alloc {
    using ::alloc::text::string::String;
    using ::alloc::text::string::CharTraits;
    using ::alloc::text::string::BasicString;
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using ::alloc::text::string::U8String;
    using ::alloc::text::string::U16String;
    using ::alloc::text::string::U32String;
    using ::alloc::text::string::WString;
    #endif
    using ::alloc::text::string::Utf8String;
    using ::alloc::text::string::Utf16String;
    using ::alloc::text::string::Utf32String;
    using ::alloc::text::string::WideString;

    /**
     * @namespace pmr
     * @brief Namespace for operations on polymorphic memory resources.
     */
    namespace pmr {
        using ::alloc::text::string::pmr::BasicString;
        using ::alloc::text::string::pmr::String;
        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        using ::alloc::text::string::pmr::U8String;
        using ::alloc::text::string::pmr::U16String;
        using ::alloc::text::string::pmr::U32String;
        using ::alloc::text::string::pmr::WString;
        #endif
        using ::alloc::text::string::pmr::Utf8String;
        using ::alloc::text::string::pmr::Utf16String;
        using ::alloc::text::string::pmr::Utf32String;
        using ::alloc::text::string::pmr::WideString;
    }
    using ::alloc::text::string::stoi;
    using ::alloc::text::string::stol;
    using ::alloc::text::string::stoll;
    using ::alloc::text::string::stoul;
    using ::alloc::text::string::stoull;
    using ::alloc::text::string::stof;
    using ::alloc::text::string::stod;
    using ::alloc::text::string::stold;
    using ::alloc::text::string::to_string;
    using ::alloc::text::string::to_wstring;
    using ::alloc::text::string::operator+;
    using ::alloc::text::string::operator==;
    using ::alloc::text::string::operator<=>;
    inline namespace literals {
        inline namespace string_literals {
            using ::alloc::text::string::operator""s;
        }
    }
    using ::alloc::text::string::erase;
    using ::alloc::text::string::erase_if;
    using ::alloc::text::string::begin;
    using ::alloc::text::string::cbegin;
    using ::alloc::text::string::end;
    using ::alloc::text::string::cend;
    using ::alloc::text::string::rbegin;
    using ::alloc::text::string::crbegin;
    using ::alloc::text::string::rend;
    using ::alloc::text::string::crend;
    using ::alloc::text::string::size;
    using ::alloc::text::string::ssize;
    using ::alloc::text::string::empty;
    using ::alloc::text::string::data;

    using ::alloc::text::string::hash;
    using ::alloc::text::string::swap;
}

#if defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_ALLOC_MODULE_EXPORT_CORE();
#endif
