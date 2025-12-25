/**
 * @file filesystem.cppm
 * @module std:fs.filesystem
 * @brief Module file for standard library file system operations.
 *
 * This file contains the implementation of the file system operations in the standard library.
 */

module;

#include <filesystem>

#if defined(STDLIBX_NO_RESERVED_STD_MODULE) || defined(DOXYGEN)
export module std:fs.filesystem;
#else
export module stdlib:fs.filesystem;
#endif

import core;

using core::ErrorCode;
using core::meta::UnderlyingTypeType;

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
 * @namespace std::fs
 * @brief Wrapper namespace for standard library file system operations.
 */
#if defined(STDLIBX_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::fs {
#else 
export namespace stdlib::fs {
#endif
    using Path = std::filesystem::path;
    using DirectoryEntry = std::filesystem::directory_entry;
    using DirectoryIterator = std::filesystem::directory_iterator;
    using RecursiveDirectoryIterator = std::filesystem::recursive_directory_iterator;
    using SpaceInfo = std::filesystem::space_info;

    class FileType {
    public:
        using InternalFileType = std::filesystem::file_type;

        FileType() = delete;

        static constexpr InternalFileType NONE = std::filesystem::file_type::none;
        static constexpr InternalFileType NOT_FOUND = std::filesystem::file_type::not_found;
        static constexpr InternalFileType REGULAR = std::filesystem::file_type::regular;
        static constexpr InternalFileType DIRECTORY = std::filesystem::file_type::directory;
        static constexpr InternalFileType SYMLINK = std::filesystem::file_type::symlink;
        static constexpr InternalFileType BLOCK = std::filesystem::file_type::block;
        static constexpr InternalFileType CHARACTER = std::filesystem::file_type::character;
        static constexpr InternalFileType FIFO = std::filesystem::file_type::fifo;
        static constexpr InternalFileType SOCKET = std::filesystem::file_type::socket;
        static constexpr InternalFileType UNKNOWN = std::filesystem::file_type::unknown;
    };

    class CopyOptions {
    public:
        using InternalCopyOptions = std::filesystem::copy_options;

        CopyOptions() = delete;

        static constexpr InternalCopyOptions NONE = std::filesystem::copy_options::none;
        static constexpr InternalCopyOptions SKIP_EXISTING = std::filesystem::copy_options::skip_existing;
        static constexpr InternalCopyOptions OVERWRITE_EXISTING = std::filesystem::copy_options::overwrite_existing;
        static constexpr InternalCopyOptions UPDATE_EXISTING = std::filesystem::copy_options::update_existing;
        static constexpr InternalCopyOptions RECURSIVE = std::filesystem::copy_options::recursive;
        static constexpr InternalCopyOptions COPY_SYMLINKS = std::filesystem::copy_options::copy_symlinks;
        static constexpr InternalCopyOptions SKIP_SYMLINKS = std::filesystem::copy_options::skip_symlinks;
        static constexpr InternalCopyOptions DIRECTORIES_ONLY = std::filesystem::copy_options::directories_only;
        static constexpr InternalCopyOptions CREATE_SYMLINKS = std::filesystem::copy_options::create_symlinks;
        static constexpr InternalCopyOptions CREATE_HARD_LINKS = std::filesystem::copy_options::create_hard_links;
    };

    class Permissions {
    public:
        using InternalPermissions = std::filesystem::perms;

        Permissions() = delete;

        static constexpr InternalPermissions NONE = std::filesystem::perms::none;
        static constexpr InternalPermissions OWNER_READ = std::filesystem::perms::owner_read;
        static constexpr InternalPermissions OWNER_WRITE = std::filesystem::perms::owner_write;
        static constexpr InternalPermissions OWNER_EXEC = std::filesystem::perms::owner_exec;
        static constexpr InternalPermissions OWNER_ALL = std::filesystem::perms::owner_all;
        static constexpr InternalPermissions GROUP_READ = std::filesystem::perms::group_read;
        static constexpr InternalPermissions GROUP_WRITE = std::filesystem::perms::group_write;
        static constexpr InternalPermissions GROUP_EXEC = std::filesystem::perms::group_exec;
        static constexpr InternalPermissions GROUP_ALL = std::filesystem::perms::group_all;
        static constexpr InternalPermissions OTHERS_READ = std::filesystem::perms::others_read;
        static constexpr InternalPermissions OTHERS_WRITE = std::filesystem::perms::others_write;
        static constexpr InternalPermissions OTHERS_EXEC = std::filesystem::perms::others_exec;
        static constexpr InternalPermissions OTHERS_ALL = std::filesystem::perms::others_all;
        static constexpr InternalPermissions ALL = std::filesystem::perms::all;
        static constexpr InternalPermissions SET_UID = std::filesystem::perms::set_uid;
        static constexpr InternalPermissions SET_GID = std::filesystem::perms::set_gid;
        static constexpr InternalPermissions STICKY_BIT = std::filesystem::perms::sticky_bit;
        static constexpr InternalPermissions MASK = std::filesystem::perms::mask;
        static constexpr InternalPermissions UNKNOWN = std::filesystem::perms::unknown;
    };

    class PermissionOptions {
    public:
        using InternalPermissionOptions = std::filesystem::perm_options;

        PermissionOptions() = delete;

        static constexpr InternalPermissionOptions REPLACE = std::filesystem::perm_options::replace;
        static constexpr InternalPermissionOptions ADD = std::filesystem::perm_options::add;
        static constexpr InternalPermissionOptions REMOVE = std::filesystem::perm_options::remove;
        static constexpr InternalPermissionOptions NO_FOLLOW = std::filesystem::perm_options::nofollow;
    };

    #ifdef STDLIBX_ENABLE_COMPAT_NAMES
    using Perms = Permissions;
    using PermOptions = PermissionOptions;
    #endif

    using FileStatus = std::filesystem::file_status;

    class DirectoryOptions {
    public:
        using InternalDirectoryOptions = std::filesystem::directory_options;

        DirectoryOptions() = delete;

        static constexpr InternalDirectoryOptions NONE = std::filesystem::directory_options::none;
        static constexpr InternalDirectoryOptions FOLLOW_DIRECTORY_SYMLINK = std::filesystem::directory_options::follow_directory_symlink;
        static constexpr InternalDirectoryOptions SKIP_PERMISSION_DENIED = std::filesystem::directory_options::skip_permission_denied;
    };

    using FileTimeType = std::filesystem::file_time_type;

    using FileSystemException = std::filesystem::filesystem_error;

    using std::filesystem::absolute;
    using std::filesystem::canonical;
    using std::filesystem::weakly_canonical;
    using std::filesystem::relative;
    using std::filesystem::proximate;
    using std::filesystem::copy;
    using std::filesystem::copy_file;
    using std::filesystem::copy_symlink;
    using std::filesystem::create_directory;
    using std::filesystem::create_directories;
    using std::filesystem::create_hard_link;
    using std::filesystem::create_symlink;
    using std::filesystem::create_directory_symlink;
    using std::filesystem::current_path;
    using std::filesystem::exists;
    using std::filesystem::equivalent;
    using std::filesystem::file_size;
    using std::filesystem::hard_link_count;
    using std::filesystem::last_write_time;
    using std::filesystem::permissions;
    using std::filesystem::read_symlink;
    using std::filesystem::remove;
    using std::filesystem::remove_all;
    using std::filesystem::rename;
    using std::filesystem::resize_file;
    using std::filesystem::space;
    using std::filesystem::status;
    using std::filesystem::symlink_status;
    using std::filesystem::temp_directory_path;

    using std::filesystem::is_block_file;
    using std::filesystem::is_character_file;
    using std::filesystem::is_directory;
    using std::filesystem::is_empty;
    using std::filesystem::is_fifo;
    using std::filesystem::is_other;
    using std::filesystem::is_regular_file;
    using std::filesystem::is_socket;
    using std::filesystem::is_symlink;
    using std::filesystem::status_known;

    using std::hash;
    using std::swap;
}
