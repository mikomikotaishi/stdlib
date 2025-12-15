/**
 * @file stdx.cppm
 * @module stdx
 * @brief Module file for standard library extensions.
 *
 * This file imports all the standard library extension modules.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx;
#else
export module stdlibx;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.core;
export module stdx.arch;
export import stdx.compiler;
export import stdx.crypto;
export import stdx.csv;
export import stdx.ffi;
export import stdx.json;
export import stdx.linq;
export import stdx.math;
export import stdx.net;
export import stdx.os;
export import stdx.process;
export import stdx.sql;
export import stdx.xml;
export import stdx.util;
export import stdx.zip;
#else
export import stdlibx.core;
export module stdlibx.arch;
export import stdlibx.compiler;
export import stdlibx.crypto;
export import stdlibx.csv;
export import stdlibx.ffi;
export import stdlibx.json;
export import stdlibx.linq;
export import stdlibx.math;
export import stdlibx.net;
export import stdlibx.os;
export import stdlibx.process;
export import stdlibx.sql;
export import stdlibx.util;
export import stdlibx.xml;
export import stdlibx.zip;
#endif
