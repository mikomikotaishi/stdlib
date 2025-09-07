/**
 * @file unix.cppm
 * @module stdx.os.unix
 * @brief Module file for Unix operations.
 *
 * This file contains the implementation of the Unix operations from the POSIX libraries.
 */

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.unix;
#else
export module stdlibx.os.unix;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.os.unix.aio;
export import stdx.os.unix.arpa;
export import stdx.os.unix.dirent;
export import stdx.os.unix.dlfcn;
export import stdx.os.unix.fcntl;
export import stdx.os.unix.fmtmsg;
export import stdx.os.unix.fnmatch;
export import stdx.os.unix.ftw;
export import stdx.os.unix.glob;
export import stdx.os.unix.grp;
export import stdx.os.unix.iconv;
export import stdx.os.unix.langinfo;
export import stdx.os.unix.libgen;
export import stdx.os.unix.monetary;
export import stdx.os.unix.mqueue;
export import stdx.os.unix.ndbm;
export import stdx.os.unix.net;
export import stdx.os.unix.netdb;
export import stdx.os.unix.netinet;
export import stdx.os.unix.nl_types;
export import stdx.os.unix.pthread;
export import stdx.os.unix.pwd;
export import stdx.os.unix.regex;
export import stdx.os.unix.sched;
export import stdx.os.unix.search;
export import stdx.os.unix.semaphore;
export import stdx.os.unix.spawn;
export import stdx.os.unix.strings;
export import stdx.os.unix.sys;
export import stdx.os.unix.termios;
export import stdx.os.unix.unistd;
export import stdx.os.unix.utime;
export import stdx.os.unix.utmpx;
export import stdx.os.unix.wordexp;
#else
export import stdlibx.os.unix.aio;
export import stdlibx.os.unix.arpa;
export import stdlibx.os.unix.dirent;
export import stdlibx.os.unix.dlfcn;
export import stdlibx.os.unix.fcntl;
export import stdlibx.os.unix.fmtmsg;
export import stdlibx.os.unix.fnmatch;
export import stdlibx.os.unix.ftw;
export import stdlibx.os.unix.glob;
export import stdlibx.os.unix.grp;
export import stdlibx.os.unix.iconv;
export import stdlibx.os.unix.langinfo;
export import stdlibx.os.unix.libgen;
export import stdlibx.os.unix.monetary;
export import stdlibx.os.unix.mqueue;
export import stdlibx.os.unix.ndbm;
export import stdlibx.os.unix.net;
export import stdlibx.os.unix.netdb;
export import stdlibx.os.unix.netinet;
export import stdlibx.os.unix.nl_types;
export import stdlibx.os.unix.pthread;
export import stdlibx.os.unix.pwd;
export import stdlibx.os.unix.regex;
export import stdlibx.os.unix.sched;
export import stdlibx.os.unix.search;
export import stdlibx.os.unix.semaphore;
export import stdlibx.os.unix.spawn;
export import stdlibx.os.unix.strings;
export import stdlibx.os.unix.sys;
export import stdlibx.os.unix.termios;
export import stdlibx.os.unix.unistd;
export import stdlibx.os.unix.utime;
export import stdlibx.os.unix.utmpx;
export import stdlibx.os.unix.wordexp;
#endif
