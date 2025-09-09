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
        ADDRESS_FAMILY_NOT_SUPPORTED = static_cast<int>(std::errc::address_family_not_supported),
        ADDRESS_IN_USE = static_cast<int>(std::errc::address_in_use),
        ADDRESS_NOT_AVAILABLE = static_cast<int>(std::errc::address_not_available),
        ALREADY_CONNECTED = static_cast<int>(std::errc::already_connected),
        ARGUMENT_LIST_TOO_LONG = static_cast<int>(std::errc::argument_list_too_long),
        ARGUMENT_OUT_OF_DOMAIN = static_cast<int>(std::errc::argument_out_of_domain),
        BAD_ADDRESS = static_cast<int>(std::errc::bad_address),
        BAD_FILE_DESCRIPTOR = static_cast<int>(std::errc::bad_file_descriptor),
        BROKEN_PIPE = static_cast<int>(std::errc::broken_pipe),
        CONNECTION_ABORTED = static_cast<int>(std::errc::connection_aborted),
        CONNECTION_ALREADY_IN_PROGRESS = static_cast<int>(std::errc::connection_already_in_progress),
        CONNECTION_REFUSED = static_cast<int>(std::errc::connection_refused),
        CONNECTION_RESET = static_cast<int>(std::errc::connection_reset),
        CROSS_DEVICE_LINK = static_cast<int>(std::errc::cross_device_link),
        DESTINATION_ADDRESS_REQUIRED = static_cast<int>(std::errc::destination_address_required),
        DEVICE_OR_RESOURCE_BUSY = static_cast<int>(std::errc::device_or_resource_busy),
        DIRECTORY_NOT_EMPTY = static_cast<int>(std::errc::directory_not_empty),
        EXECUTABLE_FORMAT_ERROR = static_cast<int>(std::errc::executable_format_error),
        FILE_EXISTS = static_cast<int>(std::errc::file_exists),
        FILE_TOO_LARGE = static_cast<int>(std::errc::file_too_large),
        FILENAME_TOO_LONG = static_cast<int>(std::errc::filename_too_long),
        FUNCTION_NOT_SUPPORTED = static_cast<int>(std::errc::function_not_supported),
        HOST_UNREACHABLE = static_cast<int>(std::errc::host_unreachable),
        ILLEGAL_BYTE_SEQUENCE = static_cast<int>(std::errc::illegal_byte_sequence),
        INAPPROPRIATE_IO_CONTROL_OPERATION = static_cast<int>(std::errc::inappropriate_io_control_operation),
        INTERRUPTED = static_cast<int>(std::errc::interrupted),
        INVALID_ARGUMENT = static_cast<int>(std::errc::invalid_argument),
        INVALID_SEEK = static_cast<int>(std::errc::invalid_seek),
        IOERROR = static_cast<int>(std::errc::io_error),
        IS_ADIRECTORY = static_cast<int>(std::errc::is_a_directory),
        MESSAGE_SIZE = static_cast<int>(std::errc::message_size),
        NETWORK_DOWN = static_cast<int>(std::errc::network_down),
        NETWORK_RESET = static_cast<int>(std::errc::network_reset),
        NETWORK_UNREACHABLE = static_cast<int>(std::errc::network_unreachable),
        NO_BUFFER_SPACE = static_cast<int>(std::errc::no_buffer_space),
        NO_CHILD_PROCESS = static_cast<int>(std::errc::no_child_process),
        NO_LOCK_AVAILABLE = static_cast<int>(std::errc::no_lock_available),
        NO_MESSAGE = static_cast<int>(std::errc::no_message),
        NO_PROTOCOL_OPTION = static_cast<int>(std::errc::no_protocol_option),
        NO_SPACE_ON_DEVICE = static_cast<int>(std::errc::no_space_on_device),
        NO_SUCH_DEVICE_OR_ADDRESS = static_cast<int>(std::errc::no_such_device_or_address),
        NO_SUCH_DEVICE = static_cast<int>(std::errc::no_such_device),
        NO_SUCH_FILE_OR_DIRECTORY = static_cast<int>(std::errc::no_such_file_or_directory),
        NO_SUCH_PROCESS = static_cast<int>(std::errc::no_such_process),
        NOT_ADIRECTORY = static_cast<int>(std::errc::not_a_directory),
        NOT_ASOCKET = static_cast<int>(std::errc::not_a_socket),
        NOT_CONNECTED = static_cast<int>(std::errc::not_connected),
        NOT_ENOUGH_MEMORY = static_cast<int>(std::errc::not_enough_memory),
        NOT_SUPPORTED = static_cast<int>(std::errc::not_supported),
        OPERATION_CANCELED = static_cast<int>(std::errc::operation_canceled),
        OPERATION_IN_PROGRESS = static_cast<int>(std::errc::operation_in_progress),
        OPERATION_NOT_PERMITTED = static_cast<int>(std::errc::operation_not_permitted),
        OPERATION_NOT_SUPPORTED = static_cast<int>(std::errc::operation_not_supported),
        OPERATION_WOULD_BLOCK = static_cast<int>(std::errc::operation_would_block),
        PERMISSION_DENIED = static_cast<int>(std::errc::permission_denied),
        PROTOCOL_NOT_SUPPORTED = static_cast<int>(std::errc::protocol_not_supported),
        READ_ONLY_FILE_SYSTEM = static_cast<int>(std::errc::read_only_file_system),
        RESOURCE_DEADLOCK_WOULD_OCCUR = static_cast<int>(std::errc::resource_deadlock_would_occur),
        RESOURCE_UNAVAILABLE_TRY_AGAIN = static_cast<int>(std::errc::resource_unavailable_try_again),
        RESULT_OUT_OF_RANGE = static_cast<int>(std::errc::result_out_of_range),
        TIMED_OUT = static_cast<int>(std::errc::timed_out),
        TOO_MANY_FILES_OPEN_IN_SYSTEM = static_cast<int>(std::errc::too_many_files_open_in_system),
        TOO_MANY_FILES_OPEN = static_cast<int>(std::errc::too_many_files_open),
        TOO_MANY_LINKS = static_cast<int>(std::errc::too_many_links),
        TOO_MANY_SYMBOLIC_LINK_LEVELS = static_cast<int>(std::errc::too_many_symbolic_link_levels),
        VALUE_TOO_LARGE = static_cast<int>(std::errc::value_too_large),
        WRONG_PROTOCOL_TYPE = static_cast<int>(std::errc::wrong_protocol_type)
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
