/**
 * @file csignal_constants.cppm
 * @module core.sys.csignal:constants
 * @brief Module file for constants of the standard library C-style signal operations.
 *
 * This file contains the implementation of the constants of the C-style signal operations in the standard library.
 */

export module core.sys.csignal:constants;

/**
 * @namespace core::sys
 * @brief Wrapper namespace for standard library system operations.
 */
export namespace core::sys {
    constexpr int SIGHUP = 1; ///< Hangup.
    constexpr int SIGINT = 2; ///< Interactive attention signal.
    constexpr int SIGQUIT = 3; ///< Quit.
    constexpr int SIGILL = 4; ///< Illegal instruction.
    constexpr int SIGTRAP = 5; ///< Trace/breakpoint trap.
    constexpr int SIGABRT = 6; ///< Abnormal termination.
    constexpr int SIGBUS = 7; ///< Bus error.
    constexpr int SIGFPE = 8; ///< Erroneous arithmetic operation.
    constexpr int SIGKILL = 9; ///< Killed.
    constexpr int SIGUSR1 = 10; ///< User-defined signal 1.
    constexpr int SIGSEGV = 11; ///< Invalid access to storage.
    constexpr int SIGUSR2 = 12; ///< User-defined signal 2.
    constexpr int SIGPIPE = 13; ///< Broken pipe.
    constexpr int SIGALRM = 14; ///< Alarm clock.
    constexpr int SIGTERM = 15; ///< Termination request.
    constexpr int SIGSTKFLT = 16; ///< Stack fault (obsolete).
    constexpr int SIGCHLD = 17; ///< Child terminated or stopped.
    constexpr int SIGCONT = 18; ///< Continue.
    constexpr int SIGSTOP = 19; ///< Stop, unblockable.
    constexpr int SIGTSTP = 20; ///< Keyboard stop.
    constexpr int SIGTTIN = 21; ///< Background read from control terminal.
    constexpr int SIGTTOU = 22; ///< Background write to control terminal.
    constexpr int SIGURG = 23; ///< Urgent data is available at a socket.
    constexpr int SIGXCPU = 24; ///< CPU time limit exceeded.
    constexpr int SIGXFSZ = 25; ///< File size limit exceeded.
    constexpr int SIGVTALRM = 26; ///< Virtual timer expired.
    constexpr int SIGPROF = 27; ///< Profiling timer expired.
    constexpr int SIGWINCH = 28; ///< Window size change (4.3 BSD, Sun).
    constexpr int SIGPOLL = 29; ///< Pollable event occurred (System V).
    constexpr int SIGPWR = 30; ///< Power failure imminent.
    constexpr int SIGSYS = 31; ///< Bad system call.

    /* Historical signals and archaic names for compatibility */
    constexpr int SIGIO = SIGPOLL; ///< I/O now possible (4.2 BSD).
    constexpr int SIGIOT = SIGABRT; ///< IOT instruction, abort() on a PDP-11.
    constexpr int SIGCLD = SIGCHLD; ///< Old System V name for SIGCHLD.
}
