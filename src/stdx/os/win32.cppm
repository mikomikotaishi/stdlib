/**
 * @file win32.cppm
 * @module stdx.os.win32
 * @brief Module file for Win32 operations.
 *
 * This file contains the implementation of the Windows operations from the Windows API libraries.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module stdx.os.win32;
#else
export module stdlibx.os.win32;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import stdx.os.win32.intrin;
export import stdx.os.win32.windows;
#else
export import stdlibx.os.win32.intrin;
export import stdlibx.os.win32.windows;
#endif
