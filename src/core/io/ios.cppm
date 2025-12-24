/**
 * @file ios.cppm
 * @module core.io.ios
 * @brief Module file for standard library base input/output operations.
 *
 * This file contains the implementation of the base input/output operations in the standard library.
 */

module;

#include <ios>

export module core.io.ios;

import core.system_error;
import core.meta.type_traits;

using core::meta::TrueType;

export {
    using std::operator|;
    using std::operator&;
    using std::operator^;
    using std::operator~;
    using std::operator|=;
    using std::operator&=;
    using std::operator^=;
}

/**
 * @namespace core::io
 * @brief Wrapper namespace for standard library IO operations.
 */
export namespace core::io {
    using IOSBase = std::ios_base;
    using IOS = std::ios;

    class OpenMode {
    public:
        using InternalOpenMode = std::ios::openmode;

        OpenMode() = delete;

        static constexpr InternalOpenMode APPEND = std::ios::app;
        static constexpr InternalOpenMode BINARY = std::ios::binary;
        static constexpr InternalOpenMode IN = std::ios::in;
        static constexpr InternalOpenMode READ = std::ios::in;
        static constexpr InternalOpenMode OUT = std::ios::out;
        static constexpr InternalOpenMode WRITE = std::ios::out;
        static constexpr InternalOpenMode TRUNCATE = std::ios::trunc;
        static constexpr InternalOpenMode AT_END = std::ios::ate;
        static constexpr InternalOpenMode NO_REPLACE = std::ios::noreplace;
    };

    class FormatFlags {
    public:
        using InternalFormatFlags = std::ios::fmtflags;

        FormatFlags() = delete;

        static constexpr InternalFormatFlags DECIMAL = std::ios::dec;
        static constexpr InternalFormatFlags OCTAL = std::ios::oct;
        static constexpr InternalFormatFlags HEXADECIMAL = std::ios::hex;
        static constexpr InternalFormatFlags BASE_FIELD = std::ios::basefield;
        static constexpr InternalFormatFlags LEFT = std::ios::left;
        static constexpr InternalFormatFlags RIGHT = std::ios::right;
        static constexpr InternalFormatFlags INTERNAL = std::ios::internal;
        static constexpr InternalFormatFlags ADJUST_FIELD = std::ios::adjustfield;
        static constexpr InternalFormatFlags SCIENTIFIC = std::ios::scientific;
        static constexpr InternalFormatFlags FIXED = std::ios::fixed;
        static constexpr InternalFormatFlags FLOAT_FIELD = std::ios::floatfield;
        static constexpr InternalFormatFlags BOOL_ALPHA = std::ios::boolalpha;
        static constexpr InternalFormatFlags SHOW_BASE = std::ios::showbase;
        static constexpr InternalFormatFlags SHOW_DECIMAL = std::ios::showpoint;
        static constexpr InternalFormatFlags SHOW_POLARITY = std::ios::showpos;
        static constexpr InternalFormatFlags SKIP_WHITESPACE = std::ios::skipws;
        static constexpr InternalFormatFlags UNIT_BUFFER = std::ios::unitbuf;
        static constexpr InternalFormatFlags UPPERCASE = std::ios::uppercase;
    };

    class IOState {
    public:
        using InternalIOState = std::ios::iostate;

        IOState() = delete;

        static constexpr InternalIOState GOOD_BIT = std::ios::goodbit;
        static constexpr InternalIOState BAD_BIT = std::ios::badbit;
        static constexpr InternalIOState FAIL_BIT = std::ios::failbit;
        static constexpr InternalIOState EOF_BIT = std::ios::eofbit;
        static constexpr InternalIOState NO_ERROR = std::ios::goodbit;
        static constexpr InternalIOState STREAM_ERROR = std::ios::badbit;
        static constexpr InternalIOState IO_OPERATION_FAIL = std::ios::failbit;
        static constexpr InternalIOState END_OF_FILE = std::ios::eofbit;
    };

    class SeekingDirection {
    public:
        using InternalSeekingDirection = std::ios::seekdir;

        SeekingDirection() = delete;

        static constexpr InternalSeekingDirection BEGINNING = std::ios::beg;
        static constexpr InternalSeekingDirection ENDING = std::ios::end;
        static constexpr InternalSeekingDirection CURRENT = std::ios::cur;
    };

    class IOEvent {
    public:
        using InternalIOEvent = std::ios::event;

        IOEvent() = delete;

        static constexpr InternalIOEvent ERASE_EVENT = std::ios::event::erase_event;
        static constexpr InternalIOEvent IMBUE_EVENT = std::ios::event::imbue_event;
        static constexpr InternalIOEvent COPY_FORMAT_EVENT = std::ios::event::copyfmt_event;
    };
    
    using IOEventCallback = std::ios::event_callback;

    using std::operator&;
    using std::operator|;
    using std::operator^;
    using std::operator~;
    using std::operator|=;
    using std::operator&=;
    using std::operator^=;

    #ifdef STDLIBX_ENABLE_COMPAT_NAMES
    using WIOS = std::wios;

    template <typename StateT>
    using FPos = std::fpos<StateT>;
    #endif

    using WideIOS = std::wios;

    template <typename StateT>
    using FilePosition = std::fpos<StateT>;

    class IOErrc {
    public:
        using InternalIOErrc = std::io_errc;

        IOErrc() = delete;

        static constexpr InternalIOErrc STREAM = std::io_errc::stream;
    };

    template <typename T>
    using IsErrorCodeEnum = std::is_error_code_enum<T>;

    #ifdef STDLIBX_ENABLE_COMPAT_NAMES
    using StreamOff = std::streamoff;
    #endif

    using StreamOffset = std::streamoff;
    using StreamSize = std::streamsize;

    #ifdef STDLIBX_ENABLE_COMPAT_NAMES
    using IOSBaseException = std::ios_base::failure;
    #endif

    using IOException = std::ios_base::failure;

    using std::iostream_category;
    using std::make_error_code;
    using std::make_error_condition;
    using std::boolalpha;
    using std::noboolalpha;
    using std::showbase;
    using std::noshowbase;
    using std::showpoint;
    using std::noshowpoint;
    using std::showpos;
    using std::noshowpos;
    using std::skipws;
    using std::noskipws;
    using std::uppercase;
    using std::nouppercase;
    using std::unitbuf;
    using std::nounitbuf;
    using std::internal;
    using std::left;
    using std::right;
    using std::dec;
    using std::hex;
    using std::oct;
    using std::fixed;
    using std::scientific;
    using std::hexfloat;
    using std::defaultfloat;
}

/**
 * @namespace core
 * @brief Wrapper namespace for standard library core operations.
 */
export namespace core {
    using core::io::IOErrc;
}
