/**
 * @file string_view.cppm
 * @module core.text.string.string_view
 * @brief Module file for standard library string view operations.
 *
 * This file contains the implementation of the string view operations in the standard library.
 */

module;

#include <string_view>

export module core.text.string.string_view;

/**
 * @namespace core::text
 * @brief Wrapper namespace for standard library text operations.
 */
export namespace core::text {
    /**
     * @namespace string
     * @brief Wrapper namespace for standard library string operations.
     */
    inline namespace string {
        template <typename CharT>
        using CharTraits = std::char_traits<CharT>;

        template <typename CharT, typename Traits = CharTraits<CharT>>
        using BasicStringView = std::basic_string_view<CharT>;

        using StringView = std::string_view;

        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        using U8StringView = std::u8string_view;
        using U16StringView = std::u16string_view;
        using U32StringView = std::u32string_view;
        #endif
        using Utf8StringView = std::u8string_view;
        using Utf16StringView = std::u16string_view;
        using Utf32StringView = std::u32string_view;

        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        using WStringView = std::wstring_view;
        #endif

        using WideStringView = std::wstring_view;

        using std::operator==;
        using std::operator<=>;
        using std::operator<<;
        using std::swap;
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

        inline namespace literals {
            inline namespace string_view_literals {
                using std::literals::string_view_literals::operator""sv;
            }
        }
    }
}
