/**
 * @file csignal.cppm
 * @module core.sys.csignal
 * @brief Module file for standard library C-style signal operations.
 *
 * This file contains the implementation of the C-style signal operations in the standard library.
 */

module;

#include <csignal>

export module core.sys.csignal;

export import :constants;

/**
 * @namespace core::sys
 * @brief Wrapper namespace for standard library system operations.
 */
export namespace core::sys {
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using SigAtomic = std::sig_atomic_t;
    using SigAtomic_t = std::sig_atomic_t;
    using SignalAtomic_t = std::sig_atomic_t;
    #endif 
    
    using SignalAtomic = std::sig_atomic_t;

    using std::signal;
    using std::raise;
}
