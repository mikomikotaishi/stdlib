/**
 * @file process.cppm
 * @module stdx.process
 * @brief Import of process handling modules.
 *
 * This file imports the modules for the process handling system.
 */

module;

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export module stdx.process;
#else
export module stdlibx.process;
#endif

#ifdef STDLIBX_NO_RESERVED_STD_MODULE
export import stdx.process.Child;
export import stdx.process.ChildStderr;
export import stdx.process.ChildStdin;
export import stdx.process.ChildStdout;
export import stdx.process.Command;
export import stdx.process.CommandArgs;
export import stdx.process.CommandEnvs;
export import stdx.process.ExitCode;
export import stdx.process.ExitStatus;
export import stdx.process.ExitStatusError;
export import stdx.process.Output;
export import stdx.process.Stdio;
#else
export import stdlibx.process.Child;
export import stdlibx.process.ChildStderr;
export import stdlibx.process.ChildStdin;
export import stdlibx.process.ChildStdout;
export import stdlibx.process.Command;
export import stdlibx.process.CommandArgs;
export import stdlibx.process.CommandEnvs;
export import stdlibx.process.ExitCode;
export import stdlibx.process.ExitStatus;
export import stdlibx.process.ExitStatusError;
export import stdlibx.process.Output;
export import stdlibx.process.Stdio;
#endif
