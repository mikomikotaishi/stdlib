/**
 * @file compiler.cppm
 * @module stdx.compiler
 * @brief Module file for compiler operations.
 *
 * This file contains the imports for the compiler operations.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.compiler;
#else
export module stdlibx.compiler;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.compiler.clang;
export import stdx.compiler.llvm;
#else
export import stdlibx.compiler.clang;
export import stdlibx.compiler.llvm;
#endif
