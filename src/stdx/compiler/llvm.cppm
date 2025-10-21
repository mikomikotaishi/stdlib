/**
 * @file llvm.cppm
 * @module stdx.compiler.llvm
 * @brief Module file for LLVM operations.
 *
 * This file contains the imports for the LLVM operations,
 * located in all <llvm/*.h> files.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.compiler.llvm;
#else
export module stdlibx.compiler.llvm;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.compiler.llvm.Pass;
#else
export import stdlibx.compiler.llvm.Pass;
#endif
