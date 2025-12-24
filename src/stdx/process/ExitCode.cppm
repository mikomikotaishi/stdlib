/**
 * @file ExitCode.cppm
 * @module stdx.process.ExitCode
 * @brief Implementation of the ExitCode class.
 *
 * This file contains the implementation of the ExitCode class, which is used to
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module stdx.process.ExitCode;

import std;
import stdx.os;
#else
export module stdlibx.process.ExitCode;

import stdlib;
import stdlibx.os;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_NAMESPACE
using namespace stdx::os;
#else
using namespace stdlibx::os;
#endif

/**
 * @namespace stdx::process
 * @brief Wrapper namespace for standard library extension process operations.
 */
#if defined(STDLIBX_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::process {
#else
export namespace stdlibx::process {
#endif

class ExitCode {
private:
    i32 exitCode;
public:
    explicit ExitCode(i32 exitCode):
        exitCode{exitCode} {}

    i32 code() const {
        return exitCode;
    }

    
};

}
