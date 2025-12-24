/**
 * @file execution.cppm
 * @module std.execution
 * @brief Module file for standard library execution operations.
 *
 * This file contains the imports for the execution policies for standard algorithms in the standard library.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module std.execution;
#else
export module stdlib.execution;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import std.execution.execution;
#else
export import stdlib.execution.execution;
#endif
