/**
 * @file clang.cppm
 * @module stdx.compiler.clang
 * @brief Module file for Clang operations.
 *
 * This file contains the imports for the Clang operations,
 * located in all <clang/*.h> files.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.compiler.clang;
#else
export module stdlibx.compiler.clang;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.compiler.clang.api_notes;
#else
export import stdlibx.compiler.clang.api_notes;
#endif
