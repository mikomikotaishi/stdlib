/**
 * @file Stdio.cppm
 * @module stdx.process.Stdio
 * @brief Implementation of the Stdio class.
 *
 * This file contains the implementation of the Stdio class, which is used to
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.process.Stdio;

import std;
import stdx.os;
#else
export module stdlibx.process.Stdio;

import stdlib;
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

/**
 * @enum StdioType
 * @brief Enumeration for stdio types.
 * 
 * The StdioType enumeration defines the stdio types that can be spawned.
 */
enum class StdioType: u8 {
    Inherit, ///< Inherit stdio type.
    Pipe, ///< Pipe stdio type.
    Null, ///< Null stdio type.
};

/**
 * @class Stdio
 * @brief Class for executing Stdioes.
 *
 * The Stdio class runs a Stdio and allows communication with it.
 */
class Stdio {
private:
    StdioType stdioType; ///< The type of the Stdio

    /**
     * @brief Constructs a new Stdio object
     * 
     * @param type The type of Stdio to construct
     */
    explicit Stdio(StdioType stdioType):
        stdioType{stdioType} {
    }
public:
    static Stdio inherit() noexcept {
        return Stdio(StdioType::Inherit);
    }

    static Stdio pipe() noexcept {
        return Stdio(StdioType::Pipe);
    }

    static Stdio null() noexcept {
        return Stdio(StdioType::Null);
    }

    StdioType type() const noexcept {
        return stdioType;
    }
};

}
