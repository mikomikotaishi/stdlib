/**
 * @file Node.cppm
 * @module stdx.xml.Node
 * @brief Implementation of the Node class.
 *
 * This file contains the implementation of the Node class, which is used to represent
 * an XML node.
 * Adapted from tinyxml2 (https://github.com/leethomason/tinyxml2)
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.xml.Node;

import std;
#else
export module stdlibx.xml.Node;

import stdlib;
#endif

/**
 * @namespace stdx::xml
 * @brief Wrapper namespace for standard library extension XML operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::xml {
#else
export namespace stdlibx::xml {
#endif

class Node {
    
};

}
