/**
 * @file xml.cppm
 * @module stdx.xml
 * @brief Import of XML modules.
 *
 * This file imports the modules for the XML handling library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.xml;
#else
export module stdlibx.xml;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.xml.Document;
export import stdx.xml.Node;
#else
export import stdlibx.xml.Document;
export import stdlibx.xml.Node;
#endif
