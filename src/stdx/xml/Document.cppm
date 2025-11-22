/**
 * @file Document.cppm
 * @module stdx.xml.Document
 * @brief Implementation of the Document class.
 *
 * This file contains the implementation of the Document class, which is used to represent
 * an XML document.
 * Adapted from tinyxml2 (https://github.com/leethomason/tinyxml2)
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.xml.Document;

import std;

import stdx.xml.Node;
#else
export module stdlibx.xml.Document;

import stdlib;

import stdlibx.xml.Node;
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

class Document: public Node {

};

}
