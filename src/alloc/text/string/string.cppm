/**
 * @file string.cppm
 * @module alloc.text.string.string
 * @brief Module file for standard library string operations.
 *
 * This file contains the implementation of the string operations in the standard library.
 */

module;

#include <string>

#include "Macros.hpp"

export module alloc.text.string.string;

import core.functional;
import alloc.mem.memory;

using alloc::mem::Allocator;

/**
 * @namespace alloc::text
 * @brief Wrapper namespace for standard library text operations.
 */
export namespace alloc::text {
    /**
     * @namespace string
     * @brief Wrapper namespace for standard library string operations.
     */
    inline namespace string {
        using String = std::string;

        template <typename CharT>
        using CharTraits = std::char_traits<CharT>;

        template <typename CharT, typename Traits = CharTraits<CharT>, typename Alloc = Allocator<CharT>>
        using BasicString = std::basic_string<CharT, Traits, Alloc>;

        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        using U8String = std::u8string;
        using U16String = std::u16string;
        using U32String = std::u32string;
        #endif
        using Utf8String = std::u8string;
        using Utf16String = std::u16string;
        using Utf32String = std::u32string;

        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        using WString = std::wstring;
        #endif

        using WideString = std::wstring;

        /**
         * @namespace pmr
         * @brief Namespace for operations on polymorphic memory resources.
         */
        namespace pmr {
            template <typename CharT, typename Traits = CharTraits<CharT>>
            using BasicString = std::pmr::basic_string<CharT, Traits>;

            using String = std::pmr::string;

            #ifdef STDLIB_ENABLE_COMPAT_NAMES
            using U8String = std::pmr::u8string;
            using U16String = std::pmr::u16string;
            using U32String = std::pmr::u32string;
            #endif
            using Utf8String = std::pmr::u8string;
            using Utf16String = std::pmr::u16string;
            using Utf32String = std::pmr::u32string;

            #ifdef STDLIB_ENABLE_COMPAT_NAMES
            using WString = std::pmr::wstring;
            #endif

            using WideString = std::pmr::wstring;
        }

        using std::stoi;
        using std::stol;
        using std::stoll;
        using std::stoul;
        using std::stoull;
        using std::stof;
        using std::stod;
        using std::stold;
        using std::to_string;
        using std::to_wstring;

        using std::operator+;
        using std::operator==;
        using std::operator<=>;
        inline namespace literals {
            inline namespace string_literals {
                using std::operator""s;
            }
        }
        using std::erase;
        using std::erase_if;

        using std::begin;
        using std::cbegin;
        using std::end;
        using std::cend;
        using std::rbegin;
        using std::crbegin;
        using std::rend;
        using std::crend;
        using std::size;
        using std::ssize;
        using std::empty;
        using std::data;

        using std::hash;
        using std::swap;
    }
}
