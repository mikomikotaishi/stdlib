/**
 * @file Pass.cppm
 * @module stdx.compiler.llvm.Pass
 * @brief LLVM header file
 */

module;

#if defined(__clang__) && defined(STDLIB_EXTENSIONS_COMPILE_COMPILER_LIBRARY)
#include <llvm/Pass.h>
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.compiler.llvm.Pass;
#else
export module stdlibx.compiler.llvm.Pass;
#endif

#ifdef STDLIB_EXTENSIONS_COMPILE_COMPILER_LIBRARY

#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::compiler::llvm {
#else 
export namespace stdlibx::compiler::llvm {
#endif
    using ::llvm::AnalysisID;
    using ::llvm::PassManagerType;
    using ::llvm::PassKind;
    using ::llvm::ThinOrFullLTOPhase;
    using ::llvm::Pass;
    using ::llvm::ModulePass;
    using ::llvm::ImmutablePass;
    using ::llvm::FunctionPass;
    using ::llvm::TimePassesIsEnabled;
    using ::llvm::TimePassesPerRun;
}

#endif
