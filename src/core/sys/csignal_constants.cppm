/**
 * @file csignal_constants.cppm
 * @module core.sys.csignal:constants
 * @brief Module file for constants of the standard library C-style signal operations.
 *
 * This file contains the implementation of the constants of the C-style signal operations in the standard library.
 */

module;

#include <csignal>

export module core.sys.csignal:constants;

/**
 * @internal
 * @namespace _detail::core::sys
 * @brief Wrapper namespace for standard library system operations.
 * Detail namespace - not to be exported for external use
 */
export namespace _detail::core::sys {
    using Handler = void (*)(int);
    
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using SigAtomic = std::sig_atomic_t;
    using SigAtomic_t = std::sig_atomic_t;
    using SignalAtomic_t = std::sig_atomic_t;
    #endif 
    
    using SignalAtomic = std::sig_atomic_t;

    using std::signal;
    using std::raise;

    constexpr int C_SIGHUP = SIGHUP; ///< Hangup.
    constexpr int C_SIGINT = SIGINT; ///< Interactive attention signal.
    constexpr int C_SIGQUIT = SIGQUIT; ///< Quit.
    constexpr int C_SIGILL = SIGILL; ///< Illegal instruction.
    constexpr int C_SIGTRAP = SIGTRAP; ///< Trace/breakpoint trap.
    constexpr int C_SIGABRT = SIGABRT; ///< Abnormal termination.
    constexpr int C_SIGBUS = SIGBUS; ///< Bus error.
    constexpr int C_SIGFPE = SIGFPE; ///< Erroneous arithmetic operation.
    constexpr int C_SIGKILL = SIGKILL; ///< Killed.
    constexpr int C_SIGUSR1 = SIGUSR1; ///< User-defined signal 1.
    constexpr int C_SIGSEGV = SIGSEGV; ///< Invalid access to storage.
    constexpr int C_SIGUSR2 = SIGUSR2; ///< User-defined signal 2.
    constexpr int C_SIGPIPE = SIGPIPE; ///< Broken pipe.
    constexpr int C_SIGALRM = SIGALRM; ///< Alarm clock.
    constexpr int C_SIGTERM = SIGTERM; ///< Termination request.
    constexpr int C_SIGSTKFLT = SIGSTKFLT; ///< Stack fault (obsolete).
    constexpr int C_SIGCHLD = SIGCHLD; ///< Child terminated or stopped.
    constexpr int C_SIGCONT = SIGCONT; ///< Continue.
    constexpr int C_SIGSTOP = SIGSTOP; ///< Stop, unblockable.
    constexpr int C_SIGTSTP = SIGTSTP; ///< Keyboard stop.
    constexpr int C_SIGTTIN = SIGTTIN; ///< Background read from control terminal.
    constexpr int C_SIGTTOU = SIGTTOU; ///< Background write to control terminal.
    constexpr int C_SIGURG = SIGURG; ///< Urgent data is available at a socket.
    constexpr int C_SIGXCPU = SIGXCPU; ///< CPU time limit exceeded.
    constexpr int C_SIGXFSZ = SIGXFSZ; ///< File size limit exceeded.
    constexpr int C_SIGVTALRM = SIGVTALRM; ///< Virtual timer expired.
    constexpr int C_SIGPROF = SIGPROF; ///< Profiling timer expired.
    constexpr int C_SIGWINCH = SIGWINCH; ///< Window size change (4.3 BSD, Sun).
    constexpr int C_SIGPOLL = SIGPOLL; ///< Pollable event occurred (System V).
    constexpr int C_SIGPWR = SIGPWR; ///< Power failure imminent.
    constexpr int C_SIGSYS = SIGSYS; ///< Bad system call.

    /* Historical signals and archaic names for compatibility */
    constexpr int C_SIGIO = SIGIO; ///< I/O now possible (4.2 BSD).
    constexpr int C_SIGIOT = SIGIOT; ///< IOT instruction, abort() on a PDP-11.
    constexpr int C_SIGCLD = SIGCLD; ///< Old System V name for SIGCHLD.

    inline const Handler C_SIG_DFL = SIG_DFL; ///< Default signal handler.
    inline const Handler C_SIG_IGN = SIG_IGN; ///< Ignore signal handler.
    inline const Handler C_SIG_ERR = SIG_ERR; ///< Error return value.
}
