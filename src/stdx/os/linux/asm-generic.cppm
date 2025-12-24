/**
 * @file asm-generic.cppm
 * @module stdx.os.linux.asmgeneric
 * @brief Module file for Unix asm-generic operations.
 *
 * This file contains the implementation of the Unix asm-generic operations from the POSIX libraries,
 * located in all <asm-generic/*.h> files.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module stdx.os.linux.asmgeneric;
#else
export module stdlibx.os.linux.asmgeneric;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import stdx.os.linux.asmgeneric.errno;
#else
export import stdlibx.os.linux.asmgeneric.errno;
#endif
