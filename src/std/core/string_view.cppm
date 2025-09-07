/**
 * @file string_view.cppm
 * @module std.core.string_view
 * @brief Module file for importing the StringView class from the standard library.
 * 
 * This file exports the StringView class operations in the standard library.
 */

module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.core.string_view;
#else
export module stdlib.core.string_view;
#endif

import core.string_view;

/**
 * @namespace std::core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
#else 
export namespace stdlib::core {
#endif
    using ::core::BasicStringView;
    using ::core::StringView;
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using ::core::U8StringView;
    using ::core::U16StringView;
    using ::core::U32StringView;
    #endif
    using ::core::Utf8StringView;
    using ::core::Utf16StringView;
    using ::core::Utf32StringView;
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using ::core::WStringView;
    #endif
    using ::core::WideStringView;

    using ::core::operator==;
    using ::core::operator<=>;
    using ::core::operator<<;
    using ::core::operator""sv;
    inline namespace literals {
        inline namespace string_view_literals {
            using ::core::literals::string_view_literals::operator""sv;
        }
    }

    using ::core::hash;
    using ::core::swap;
    
    using ::core::begin;
    using ::core::cbegin;
    using ::core::end;
    using ::core::cend;
    using ::core::rbegin;
    using ::core::crbegin;
    using ::core::rend;
    using ::core::crend;
    using ::core::size;
    using ::core::ssize;
    using ::core::empty;
    using ::core::data;
}

#if !defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_STD_MODULE_EXPORT_CORE();
#endif
