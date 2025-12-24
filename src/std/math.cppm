/**
 * @file math.cppm
 * @module std.math
 * @brief Module file for standard library mathematical operations.
 *
 * This file contains the imports for the mathematical operations in the standard library.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module std.math;
#else
export module stdlib.math;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import std.math.algorithm;
export import std.math.bit;
export import std.math.cmath;
export import std.math.complex;
export import std.math.cstddef;
export import std.math.numbers;
export import std.math.numeric;
export import std.math.random;
export import std.math.ratio;
#else
export import stdlib.math.algorithm;
export import stdlib.math.bit;
export import stdlib.math.cmath;
export import stdlib.math.complex;
export import stdlib.math.cstddef;
export import stdlib.math.numbers;
export import stdlib.math.numeric;
export import stdlib.math.random;
export import stdlib.math.ratio;
#endif
