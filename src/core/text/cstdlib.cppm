/**
 * @file cstdlib.cppm
 * @module core.text.cstdlib
 * @brief Module file for standard library C-style wide string manipulation operations.
 *
 * This file contains the imports for the C-style wide string manipulation operations in the standard library.
 */

module;

#include <cstdlib>

export module core.text.cstdlib;

/**
 * @namespace core::text
 * @brief Wrapper namespace for standard library text operations.
 */
export namespace core::text {
    using std::mblen;
    using std::mbtowc;
    using std::wctomb;
    using std::mbstowcs;
    using std::wcstombs;
}
