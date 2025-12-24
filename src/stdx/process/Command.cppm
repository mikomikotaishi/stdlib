/**
 * @file Command.cppm
 * @module stdx.process.Command
 * @brief Implementation of the Command class.
 *
 * This file contains the implementation of the Command class, which is used to
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module stdx.process.Command;

import std;
import stdx.os;
#else
export module stdlibx.process.Command;

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
