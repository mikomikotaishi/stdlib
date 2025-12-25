/**
 * @file cctype.cppm
 * @module std:text.cctype
 * @brief Module file for standard library C-style wide string manipulation operations.
 *
 * This file contains the imports for the C-style wide string manipulation operations in the standard library.
 */

module;

#if defined(STDLIBX_NO_RESERVED_STD_MODULE) || defined(DOXYGEN)
export module std:text.cstdlib;
#else
export module stdlib:text.cstdlib;
#endif

import core;

/**
 * @namespace std::text
 * @brief Wrapper namespace for standard library text operations.
 */
#if defined(STDLIBX_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::text {
#else 
export namespace stdlib::text {
#endif
    using core::text::mblen;
    using core::text::mbtowc;
    using core::text::wctomb;
    using core::text::mbstowcs;
    using core::text::wcstombs;
}
