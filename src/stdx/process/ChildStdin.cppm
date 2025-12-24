/**
 * @file ChildStdin.cppm
 * @module stdx.process.ChildStdin
 * @brief Implementation of the ChildStdin class.
 *
 * This file contains the implementation of the ChildStdin class, which is used to
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module stdx.process.ChildStdin;

import std;
import stdx.os;
#else
export module stdlibx.process.ChildStdin;

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

}
