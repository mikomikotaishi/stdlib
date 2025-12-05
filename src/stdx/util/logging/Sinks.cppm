/**
 * @file Sinks.cppm
 * @module stdx.util.logging.Sinks
 * @brief Definition of log sink interfaces and implementations.
 *
 * This file contains the base ILogSink interface and concrete implementations
 * for different output targets (file, console, etc.).
 */

module;

#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export module stdx.util.logging.Sinks;

export import stdx.util.logging.Level;

import std;

using std::fs::Path;
using std::io::IOException;
using std::io::IOS;
using std::io::OpenMode;
using std::io::OutputFileStream;
using std::io::Stderr;
using std::io::Stdout;
using std::mem::UniquePointer;
using std::sync::Mutex;
using std::sync::ScopedLock;

namespace io = std::io;
namespace fs = std::fs;
namespace mem = std::mem;
#else
export module stdlibx.util.logging.Sinks;

export import stdlibx.util.logging.Level;

import stdlib;

using stdlib::fs::Path;
using stdlib::io::IOException;
using stdlib::io::IOS;
using stdlib::io::OpenMode;
using stdlib::io::OutputFileStream;
using stdlib::io::Stderr;
using stdlib::io::Stdout;
using stdlib::mem::UniquePointer;
using stdlib::sync::Mutex;
using stdlib::sync::ScopedLock;

namespace io = stdlib::io;
namespace fs = stdlib::fs;
namespace mem = stdlib::mem;
#endif

/**
 * @namespace stdx::util::logging
 * @brief Wrapper namespace for standard library extension utility operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::util::logging {
#else
export namespace stdlibx::util::logging {
#endif

/**
 * @interface LogSink
 * @brief Abstract base class for log output destinations.
 */
class ILogSink {
public:
    virtual ~ILogSink() = default;

    /**
     * @brief Write a formatted log message to the sink.
     * 
     * @param timestamp The timestamp string
     * @param level The log level
     * @param loggerName The name of the logger
     * @param message The formatted message
     */
    virtual void write(StringView timestamp, Level level, StringView loggerName, StringView message) = 0;

    /**
     * @brief Flush any buffered output.
     */
    virtual void flush() = 0;
};

/**
 * @class FileSink
 * @brief Log sink that writes to a file.
 *
 * @implements ILogSink
 */
class FileSink final: public ILogSink {
private:
    UniquePointer<OutputFileStream> file;
    mutable Mutex mutex;
public:
    /**
     * @brief Constructor that opens a file for logging.
     * 
     * @param path Path to the log file
     * @param mode Open mode (default: APPEND)
     */
    explicit FileSink(StringView path, OpenMode::InternalOpenMode mode = OpenMode::APPEND) {
        file = mem::make_unique<OutputFileStream>(Path(path), mode);
        if (!file->is_open()) {
            throw IOException("Failed to open log file");
        }
    }

    void write(StringView timestamp, Level level, StringView loggerName, StringView message) override {
        ScopedLock<Mutex> lock(mutex);
        io::println(*file, "[{}] {} [{}]: {}", timestamp, level, loggerName, message);
    }

    void flush() override {
        ScopedLock<Mutex> lock(mutex);
        file->flush();
    }
};

/**
 * @class ConsoleSink
 * @brief Log sink that writes to console (stdout/stderr).
 *
 * @implements ILogSink
 */
class ConsoleSink final: public ILogSink {
private:
    bool useStderr;
    mutable Mutex mutex;
public:
    /**
     * @brief Constructor.
     * 
     * @param toStderr If true, write to stderr; otherwise stdout
     */
    explicit ConsoleSink(bool toStderr = true):
        useStderr{toStderr} {}

    void write(StringView timestamp, Level level, StringView loggerName, StringView message) override {
        ScopedLock<Mutex> lock(mutex);
        if (useStderr) {
            io::println(Stderr, "[{}] {} [{}]: {}", timestamp, level, loggerName, message);
        } else {
            io::println(Stdout, "[{}] {} [{}]: {}", timestamp, level, loggerName, message);
        }
    }

    void flush() override {
        ScopedLock<Mutex> lock(mutex);
        if (useStderr) {
            io::fflush(Stderr);
        } else {
            io::fflush(Stdout);
        }
    }
};

}
