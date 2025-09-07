/**
 * @file csetjmp.cppm
 * @module std.sys.csetjmp
 * @brief Module file for standard library C-style jumping operations.
 *
 * This file contains the implementation of the C-style jumping operations in the standard library.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.sys.csetjmp;
#else
export module stdlib.sys.csetjmp;
#endif

import core.sys.csetjmp;

/**
 * @namespace std::sys
 * @brief Wrapper namespace for standard library system operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::sys {
#else 
export namespace stdlib::sys {
#endif
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using core::sys::JmpBuf;
    #endif

    using core::sys::JumpBuffer;
    
    using core::sys::longjmp;
}
