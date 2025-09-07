# `stdlib`

> **WARNING:** As this library is still under development, many features do not yet work, or requires inelegant workarounds or even inclusion of headers to resolve. These issues will only be resolved as development continues.

## Overview
This is a project that re-exports the entire C++ standard library as modules. The motivation for creating this was that at the time, support for `import std;` was very poor, a personal dislike of ISO C++'s usage of snake_case for class names, and a dislike of the flat `std::` namespace.

The main features of this repackaging of the standard library are:
- Symbols follow Rust naming conventions (object type names in PascalCase, constants in UPPER_SNAKE_CASE, variables and methods in snake_case)
    - While I personally would have preferred methods to be in camelCase (like in Java), this would have been too much work to rename existing functions and methods, for very little gain
- Splitting the standard library into sub-namespaces (in constrast to the ISO C++ `std::` namespace which is largely flat). 
    - The divisions try to follow the Rust standard library modules, but also take inspiration from the Java standard library.
- Option to toggle between using `std::*`/`std.*` names for symbols/modules (disabled by default as `std` is a reserved name by ISO C++ and library implementations)
- Option to use only `core.*` and `alloc.*` modules instead of the full standard library, similar to Rust
- Standard library extensions - features that (in my opinion) ought to be part of the C++ standard library, but are not. Currently largely unimplemented.

Requires a minimum of C++23. 

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)

## Libraries
The `stdlib` library offers the following namespaces/modules:

### Core library (module `core.*`, namespace `core::*`)
Core modules of the standard library, not requiring any memory allocation. Provides the most fundamental and low-level features of the C++ standard library. 

### Allocation library (module `alloc.*`, namespace `alloc::*`)
Allocation modules of the standard library, providing heap allocation and non-trivial data structures.

Disabled when `STDLIB_NO_ALLOC` is enabled.

### Standard library (module `std.*`, namespace `std::*`)
The full C++ standard library, containing everything provided by `core.*` and `alloc.*`, as well as additional functionality depending on operating system and runtime.

Disabled when `STDLIB_NO_STD` (or `STDLIB_NO_ALLOC`) are enabled.

### Extensions library (module `stdx.*`, namespace `stdx::*`)
Technically not "standard library" in the sense of the ISO C++ standard library, but contains features that (in my opinion) ought to be part of the C++ standard library, and are offered by standard libraries of other languages.

Disabled by default - enabled when `STDLIB_EXTENSIONS` is enabled. 

> **NOTE:** Some parts of this library may be third-party or re-exports of existing libraries, and thus not entirely original code. Code that originates from third party will be adequately attributed, but if there are any issues or concerns, please do not hesitate to contact me.
Some third-party libraries used here include:
* POCO C++ libraries
