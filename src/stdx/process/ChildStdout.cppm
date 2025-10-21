/**
 * @file ChildStdout.cppm
 * @module stdx.process.ChildStdout
 * @brief Implementation of the ChildStdout class.
 *
 * This file contains the implementation of the ChildStdout class, which is used to
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.process.ChildStdout;

import std.core;
import stdx.os;
#else
export module stdlibx.process.ChildStdout;

import stdlib.core;
import stdlibx.os;
#endif

#ifdef STDLIB_NO_RESERVED_STD_NAMESPACE
using namespace stdx::os;
#else
using namespace stdlib::os;
#endif

/**
 * @namespace stdx::process
 * @brief Wrapper namespace for standard library extension process operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::process {
#else
export namespace stdlibx::process {
#endif

}
