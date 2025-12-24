/**
 * @file os.cppm
 * @module stdx.os
 * @brief Module file for operating system operations.
 *
 * This file contains the imports for the operating system operations.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module stdx.os;
#else
export module stdlibx.os;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import stdx.os.linux;
export import stdx.os.unix;
export import stdx.os.win32;
#else
export import stdlibx.os.linux;
export import stdlibx.os.unix;
export import stdlibx.os.win32;
#endif
