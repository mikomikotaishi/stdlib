/**
 * @file CommandArgs.cppm
 * @module stdx.process.CommandArgs
 * @brief Implementation of the CommandArgs class.
 *
 * This file contains the implementation of the CommandArgs class, which is used to
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module stdx.process.CommandArgs;

import std;
import stdx.os;
#else
export module stdlibx.process.CommandArgs;

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
