/**
 * @file initializer_list.cppm
 * @module std.core.initializer_list
 * @brief Module file for importing the InitializerList class from the standard library.
 * 
 * This file exports the InitializerList class operations in the standard library.
 */

module;

#include "Macros.hpp"

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.core.initializer_list;
#else
export module stdlib.core.initializer_list;
#endif

import core.initializer_list;

/**
 * @namespace std::core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::core {
#else 
export namespace stdlib::core {
#endif
    using ::core::InitializerList;

    using ::core::begin;
    using ::core::end;
}

#if !defined(STDLIB_NO_STD) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_STD_MODULE_EXPORT_CORE();
#endif
