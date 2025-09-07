#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcomment"
#endif
/**
 * @file clang.cppm
 * @module stdx.compiler.clang
 * @brief Module file for Clang operations.
 *
 * This file contains the imports for the Clang operations,
 * located in all <clang/*.h> files.
 */
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif

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
