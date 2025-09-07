#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcomment"
#endif
/**
 * @file sys.cppm
 * @module stdx.os.linux.sys
 * @brief Module file for Unix system operations.
 *
 * This file contains the implementation of the Unix system operations from the POSIX libraries,
 * located in all <sys/*.h> files.
 */
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.os.linux.sys;
#else
export module stdlibx.os.linux.sys;
#endif

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export import stdx.os.linux.sys.acct;
export import stdx.os.linux.sys.acl;
export import stdx.os.linux.sys.auxv;
export import stdx.os.linux.sys.capability;
export import stdx.os.linux.sys.epoll;
export import stdx.os.linux.sys.eventfd;
export import stdx.os.linux.sys.fanotify;
export import stdx.os.linux.sys.file;
export import stdx.os.linux.sys.fsuid;
export import stdx.os.linux.sys.gmon;
export import stdx.os.linux.sys.gmon_out;
export import stdx.os.linux.sys.inotify;
export import stdx.os.linux.sys.io;
export import stdx.os.linux.sys.klog;
export import stdx.os.linux.sys.mtio;
export import stdx.os.linux.sys.perm;
export import stdx.os.linux.sys.personality;
export import stdx.os.linux.sys.pidfd;
export import stdx.os.linux.sys.poll;
export import stdx.os.linux.sys.prctl;
export import stdx.os.linux.sys.procfs;
export import stdx.os.linux.sys.profil;
export import stdx.os.linux.sys.psx_syscall;
export import stdx.os.linux.sys.ptrace;
export import stdx.os.linux.sys.quota;
export import stdx.os.linux.sys.random;
export import stdx.os.linux.sys.raw;
export import stdx.os.linux.sys.reboot;
export import stdx.os.linux.sys.rseq;
export import stdx.os.linux.sys.sendfile;
export import stdx.os.linux.sys.signalfd;
export import stdx.os.linux.sys.single_threaded;
export import stdx.os.linux.sys.statfs;
export import stdx.os.linux.sys.swap;
export import stdx.os.linux.sys.sysinfo;
export import stdx.os.linux.sys.syslog;
export import stdx.os.linux.sys.timeb;
export import stdx.os.linux.sys.timerfd;
export import stdx.os.linux.sys.timex;
export import stdx.os.linux.sys.ttychars;
export import stdx.os.linux.sys.ucontext;
export import stdx.os.linux.sys.user;
export import stdx.os.linux.sys.vlimit;
export import stdx.os.linux.sys.xattr;
export import stdx.os.linux.sys.platform.x86;
#else
export import stdlibx.os.linux.sys.acct;
export import stdlibx.os.linux.sys.acl;
export import stdlibx.os.linux.sys.auxv;
export import stdlibx.os.linux.sys.capability;
export import stdlibx.os.linux.sys.epoll;
export import stdlibx.os.linux.sys.eventfd;
export import stdlibx.os.linux.sys.fanotify;
export import stdlibx.os.linux.sys.file;
export import stdlibx.os.linux.sys.fsuid;
export import stdlibx.os.linux.sys.gmon;
export import stdlibx.os.linux.sys.gmon_out;
export import stdlibx.os.linux.sys.inotify;
export import stdlibx.os.linux.sys.io;
export import stdlibx.os.linux.sys.klog;
export import stdlibx.os.linux.sys.mtio;
export import stdlibx.os.linux.sys.perm;
export import stdlibx.os.linux.sys.personality;
export import stdlibx.os.linux.sys.pidfd;
export import stdlibx.os.linux.sys.poll;
export import stdlibx.os.linux.sys.prctl;
export import stdlibx.os.linux.sys.procfs;
export import stdlibx.os.linux.sys.profil;
export import stdlibx.os.linux.sys.psx_syscall;
export import stdlibx.os.linux.sys.ptrace;
export import stdlibx.os.linux.sys.quota;
export import stdlibx.os.linux.sys.random;
export import stdlibx.os.linux.sys.raw;
export import stdlibx.os.linux.sys.reboot;
export import stdlibx.os.linux.sys.rseq;
export import stdlibx.os.linux.sys.sendfile;
export import stdlibx.os.linux.sys.signalfd;
export import stdlibx.os.linux.sys.single_threaded;
export import stdlibx.os.linux.sys.statfs;
export import stdlibx.os.linux.sys.swap;
export import stdlibx.os.linux.sys.sysinfo;
export import stdlibx.os.linux.sys.syslog;
export import stdlibx.os.linux.sys.timeb;
export import stdlibx.os.linux.sys.timerfd;
export import stdlibx.os.linux.sys.timex;
export import stdlibx.os.linux.sys.ttychars;
export import stdlibx.os.linux.sys.ucontext;
export import stdlibx.os.linux.sys.user;
export import stdlibx.os.linux.sys.vlimit;
export import stdlibx.os.linux.sys.xattr;
export import stdlibx.os.linux.sys.platform.x86;
#endif
