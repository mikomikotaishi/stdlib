/**
 * @file Command.cppm
 * @module stdx.process.Command
 * @brief Implementation of the Command class.
 *
 * This file contains the implementation of the Command class, which is used to
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.process.Command;

import std.core;
import stdx.os;
#else
export module stdlibx.process.Command;

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
