/**
 * @file ArgumentParser.cppm
 * @module stdx:util.ArgumentParser
 * @brief Implementation of the ArgumentParser class.
 *
 * This file contains the implementation of the ArgumentParser class, which is used to represent
 * the actual argument parser.
 * Adapted from p-ranav/argparse (https://github.com/p-ranav/argparse)
 */

module;

#include "Macros.hpp"

#if defined(STDLIBX_NO_RESERVED_STD_MODULE) || defined(DOXYGEN)
export module stdx:util.ArgumentParser;

import std;
#else
export module stdlibx:util.ArgumentParser;

import stdlib;

using stdlib::io::OutputStream;
#endif

#if defined(STDLIBX_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
using std::io::OutputStream;
#else
using stdlib::io::OutputStream;
#endif

/**
 * @namespace stdx::util
 * @brief Wrapper namespace for standard library extension utility operations.
 */
#if defined(STDLIBX_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::util {
#else
export namespace stdlibx::util {
#endif

class ArgumentParser;

class Argument {
private:
    friend class ArgumentParser;
    friend OutputStream& operator<<(OutputStream& os, const ArgumentParser& parser) {

    }

    class NArgsRange {
    private:
        usize min;
        usize max;
    public:
        NArgsRange(usize min, usize max) throws (InvalidArgumentException):
            min{min}, max{max} {
            if (min > max) {
                throw InvalidArgumentException("Range of number of arguments is invalid!");
            }
        }

        [[nodiscard]]
        bool contains(usize value) const noexcept {
            return value >= min && value <= max;
        }

        [[nodiscard]]
        bool is_exact() const noexcept {
            return min == max;
        }

        [[nodiscard]]
        bool is_right_bounded() const noexcept {
            return max < NumericLimits<usize>::max();
        }

        [[nodiscard]]
        usize get_min() const noexcept {
            return min;
        }

        [[nodiscard]]
        usize get_max() const noexcept {
            return max;
        }
    }
};

}
