/**
 * @file Output.cppm
 * @module stdx.process.Output
 * @brief Implementation of the Output class.
 *
 * This file contains the implementation of the Output class, which is used to
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.process.Output;

import std.core;
import stdx.os;
#else
export module stdlibx.process.Output;

import stdlib.core;
import stdlibx.os;
#endif

#ifdef STDLIB_NO_RESERVED_STD_NAMESPACE
using namespace stdx::os;
#else
using namespace stdlibx::os;
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
