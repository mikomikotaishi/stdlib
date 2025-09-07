/**
 * @file system_error.cppm
 * @module core.system_error
 * @brief Module file for standard library system error classes.
 *
 * This file contains the implementation of error classes in the standard library.
 */

module;

#include <ios>
#include <system_error>

export module core.system_error;

/**
 * @namespace core
 * @brief Wrapper namespace for the core objects of the standard library.
 */
export namespace core {
    using ErrorCategory = std::error_category;
    using ErrorCondition = std::error_condition;
    using ErrorCode = std::error_code;

    enum class Errc {
        AddressFamilyNotSupported = static_cast<int>(std::errc::address_family_not_supported),
        AddressInUse = static_cast<int>(std::errc::address_in_use),
        AddressNotAvailable = static_cast<int>(std::errc::address_not_available),
        AlreadyConnected = static_cast<int>(std::errc::already_connected),
        ArgumentListTooLong = static_cast<int>(std::errc::argument_list_too_long),
        ArgumentOutOfDomain = static_cast<int>(std::errc::argument_out_of_domain),
        BadAddress = static_cast<int>(std::errc::bad_address),
        BadFileDescriptor = static_cast<int>(std::errc::bad_file_descriptor),
        BrokenPipe = static_cast<int>(std::errc::broken_pipe),
        ConnectionAborted = static_cast<int>(std::errc::connection_aborted),
        ConnectionAlreadyInProgress = static_cast<int>(std::errc::connection_already_in_progress),
        ConnectionRefused = static_cast<int>(std::errc::connection_refused),
        ConnectionReset = static_cast<int>(std::errc::connection_reset),
        CrossDeviceLink = static_cast<int>(std::errc::cross_device_link),
        DestinationAddressRequired = static_cast<int>(std::errc::destination_address_required),
        DeviceOrResourceBusy = static_cast<int>(std::errc::device_or_resource_busy),
        DirectoryNotEmpty = static_cast<int>(std::errc::directory_not_empty),
        ExecutableFormatError = static_cast<int>(std::errc::executable_format_error),
        FileExists = static_cast<int>(std::errc::file_exists),
        FileTooLarge = static_cast<int>(std::errc::file_too_large),
        FilenameTooLong = static_cast<int>(std::errc::filename_too_long),
        FunctionNotSupported = static_cast<int>(std::errc::function_not_supported),
        HostUnreachable = static_cast<int>(std::errc::host_unreachable),
        IllegalByteSequence = static_cast<int>(std::errc::illegal_byte_sequence),
        InappropriateIoControlOperation = static_cast<int>(std::errc::inappropriate_io_control_operation),
        Interrupted = static_cast<int>(std::errc::interrupted),
        InvalidArgument = static_cast<int>(std::errc::invalid_argument),
        InvalidSeek = static_cast<int>(std::errc::invalid_seek),
        IOError = static_cast<int>(std::errc::io_error),
        IsADirectory = static_cast<int>(std::errc::is_a_directory),
        MessageSize = static_cast<int>(std::errc::message_size),
        NetworkDown = static_cast<int>(std::errc::network_down),
        NetworkReset = static_cast<int>(std::errc::network_reset),
        NetworkUnreachable = static_cast<int>(std::errc::network_unreachable),
        NoBufferSpace = static_cast<int>(std::errc::no_buffer_space),
        NoChildProcess = static_cast<int>(std::errc::no_child_process),
        NoLockAvailable = static_cast<int>(std::errc::no_lock_available),
        NoMessage = static_cast<int>(std::errc::no_message),
        NoProtocolOption = static_cast<int>(std::errc::no_protocol_option),
        NoSpaceOnDevice = static_cast<int>(std::errc::no_space_on_device),
        NoSuchDeviceOrAddress = static_cast<int>(std::errc::no_such_device_or_address),
        NoSuchDevice = static_cast<int>(std::errc::no_such_device),
        NoSuchFileOrDirectory = static_cast<int>(std::errc::no_such_file_or_directory),
        NoSuchProcess = static_cast<int>(std::errc::no_such_process),
        NotADirectory = static_cast<int>(std::errc::not_a_directory),
        NotASocket = static_cast<int>(std::errc::not_a_socket),
        NotConnected = static_cast<int>(std::errc::not_connected),
        NotEnoughMemory = static_cast<int>(std::errc::not_enough_memory),
        NotSupported = static_cast<int>(std::errc::not_supported),
        OperationCanceled = static_cast<int>(std::errc::operation_canceled),
        OperationInProgress = static_cast<int>(std::errc::operation_in_progress),
        OperationNotPermitted = static_cast<int>(std::errc::operation_not_permitted),
        OperationNotSupported = static_cast<int>(std::errc::operation_not_supported),
        OperationWouldBlock = static_cast<int>(std::errc::operation_would_block),
        PermissionDenied = static_cast<int>(std::errc::permission_denied),
        ProtocolNotSupported = static_cast<int>(std::errc::protocol_not_supported),
        ReadOnlyFileSystem = static_cast<int>(std::errc::read_only_file_system),
        ResourceDeadlockWouldOccur = static_cast<int>(std::errc::resource_deadlock_would_occur),
        ResourceUnavailableTryAgain = static_cast<int>(std::errc::resource_unavailable_try_again),
        ResultOutOfRange = static_cast<int>(std::errc::result_out_of_range),
        TimedOut = static_cast<int>(std::errc::timed_out),
        TooManyFilesOpenInSystem = static_cast<int>(std::errc::too_many_files_open_in_system),
        TooManyFilesOpen = static_cast<int>(std::errc::too_many_files_open),
        TooManyLinks = static_cast<int>(std::errc::too_many_links),
        TooManySymbolicLinkLevels = static_cast<int>(std::errc::too_many_symbolic_link_levels),
        ValueTooLarge = static_cast<int>(std::errc::value_too_large),
        WrongProtocolType = static_cast<int>(std::errc::wrong_protocol_type)
    };

    using SystemException = std::system_error;

    template <typename T>
    using IsErrorCodeEnum = std::is_error_code_enum<T>;

    template <typename T>
    struct IsErrorConditionEnum: public std::false_type {};

    template <>
    struct IsErrorConditionEnum<Errc>: public std::true_type {};

    using std::generic_category;
    using std::system_category;
    using std::make_error_code;
    using std::make_error_condition;

    /** Create an `ErrorCode` representing a standard `Errc` condition.
     *
     * The `stdlib::sys::Errc` constants correspond to `errno` macros and so use the
     * generic category.
     *
     * @relates ErrorCode
     * @since C++11
     */
    [[nodiscard]]
    inline ErrorCode make_error_code(Errc e) noexcept {
        return {static_cast<int>(e), generic_category()};
    }

    /** Create an `ErrorCondition` representing a standard `Errc` condition.
     *
     * The `stdlib::sys::Errc` constants correspond to `errno` macros and so use the
     * generic category.
     *
     * @relates ErrorCondition
     * @since C++11
     */
    [[nodiscard]]
    inline ErrorCondition make_error_condition(Errc e) noexcept { 
        return {static_cast<int>(e), generic_category()}; 
    }

    using std::hash;
}

#if (defined(STDLIB_NO_STD) || defined(STDLIB_NO_ALLOC)) && defined(STDLIB_IMPLICIT_USING_CORE)
STDLIB_CORE_MODULE_EXPORT_CORE();
#endif
