/**
 * @file filesystem.cppm
 * @module std.fs.filesystem
 * @brief Module file for standard library file system operations.
 *
 * This file contains the implementation of the file system operations in the standard library.
 */

module;

#include <filesystem>

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.fs.filesystem;
#else
export module stdlib.fs.filesystem;
#endif

import core.system_error;
import core.meta.type_traits;

using core::ErrorCode;
using core::meta::UnderlyingTypeType;

/**
 * @namespace std::fs
 * @brief Wrapper namespace for standard library file system operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::fs {
#else 
export namespace stdlib::fs {
#endif
    using Path = std::filesystem::path;
    using DirectoryEntry = std::filesystem::directory_entry;
    using DirectoryIterator = std::filesystem::directory_iterator;
    using RecursiveDirectoryIterator = std::filesystem::recursive_directory_iterator;
    using SpaceInfo = std::filesystem::space_info;

    enum class FileType: signed char {
        None = static_cast<signed char>(std::filesystem::file_type::none),
        NotFound = static_cast<signed char>(std::filesystem::file_type::not_found),
        Regular = static_cast<signed char>(std::filesystem::file_type::regular),
        Directory = static_cast<signed char>(std::filesystem::file_type::directory),
        Symlink = static_cast<signed char>(std::filesystem::file_type::symlink),
        Block = static_cast<signed char>(std::filesystem::file_type::block),
        Character = static_cast<signed char>(std::filesystem::file_type::character),
        FIFO = static_cast<signed char>(std::filesystem::file_type::fifo),
        Socket = static_cast<signed char>(std::filesystem::file_type::socket),
        Unknown = static_cast<signed char>(std::filesystem::file_type::unknown)
    };

    enum class CopyOptions: unsigned short {
        None = static_cast<unsigned short>(std::filesystem::copy_options::none),
        SkipExisting = static_cast<unsigned short>(std::filesystem::copy_options::skip_existing),
        OverwriteExisting = static_cast<unsigned short>(std::filesystem::copy_options::overwrite_existing),
        UpdateExisting = static_cast<unsigned short>(std::filesystem::copy_options::update_existing),
        Recursive = static_cast<unsigned short>(std::filesystem::copy_options::recursive),
        CopySymlinks = static_cast<unsigned short>(std::filesystem::copy_options::copy_symlinks),
        SkipSymlinks = static_cast<unsigned short>(std::filesystem::copy_options::skip_symlinks),
        DirectoriesOnly = static_cast<unsigned short>(std::filesystem::copy_options::directories_only),
        CreateSymlinks = static_cast<unsigned short>(std::filesystem::copy_options::create_symlinks),
        CreateHardLinks = static_cast<unsigned short>(std::filesystem::copy_options::create_hard_links)
    };

    [[nodiscard]]
    constexpr CopyOptions operator&(CopyOptions x, CopyOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::copy_options>;
        return static_cast<CopyOptions>(
            static_cast<Underlying>(x) & static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr CopyOptions operator|(CopyOptions x, CopyOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::copy_options>;
        return static_cast<CopyOptions>(
            static_cast<Underlying>(x) | static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr CopyOptions operator^(CopyOptions x, CopyOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::copy_options>;
        return static_cast<CopyOptions>(
            static_cast<Underlying>(x) ^ static_cast<Underlying>(y)
        );
    }
    
    [[nodiscard]]
    constexpr CopyOptions operator~(CopyOptions x) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::copy_options>;
        return static_cast<CopyOptions>(~static_cast<Underlying>(x));
    }

    [[nodiscard]]
    constexpr CopyOptions& operator&=(CopyOptions x, CopyOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::copy_options>;
        return x = static_cast<CopyOptions>(
            static_cast<Underlying>(x) & static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr CopyOptions& operator|=(CopyOptions x, CopyOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::copy_options>;
        return x = static_cast<CopyOptions>(
            static_cast<Underlying>(x) | static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr CopyOptions& operator^=(CopyOptions x, CopyOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::copy_options>;
        return x = static_cast<CopyOptions>(
            static_cast<Underlying>(x) ^ static_cast<Underlying>(y)
        );
    }

    enum class Permissions: unsigned {
        None = static_cast<unsigned>(std::filesystem::perms::none),
        OwnerRead = static_cast<unsigned>(std::filesystem::perms::owner_read),
        OwnerWrite = static_cast<unsigned>(std::filesystem::perms::owner_write),
        OwnerExec = static_cast<unsigned>(std::filesystem::perms::owner_exec),
        OwnerAll = static_cast<unsigned>(std::filesystem::perms::owner_all),
        GroupRead = static_cast<unsigned>(std::filesystem::perms::group_read),
        GroupWrite = static_cast<unsigned>(std::filesystem::perms::group_write),
        GroupExec = static_cast<unsigned>(std::filesystem::perms::group_exec),
        GroupAll = static_cast<unsigned>(std::filesystem::perms::group_all),
        OthersRead = static_cast<unsigned>(std::filesystem::perms::others_read),
        OthersWrite = static_cast<unsigned>(std::filesystem::perms::others_write),
        OthersExec = static_cast<unsigned>(std::filesystem::perms::others_exec),
        OthersAll = static_cast<unsigned>(std::filesystem::perms::others_all),
        All = static_cast<unsigned>(std::filesystem::perms::all),
        SetUID = static_cast<unsigned>(std::filesystem::perms::set_uid),
        SetGID = static_cast<unsigned>(std::filesystem::perms::set_gid),
        StickyBit = static_cast<unsigned>(std::filesystem::perms::sticky_bit),
        Mask = static_cast<unsigned>(std::filesystem::perms::mask),
        Unknown = static_cast<unsigned>(std::filesystem::perms::unknown)
    };

    [[nodiscard]]
    constexpr Permissions operator&(Permissions x, Permissions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perms>;
        return static_cast<Permissions>(
            static_cast<Underlying>(x) & static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr Permissions operator|(Permissions x, Permissions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perms>;
        return static_cast<Permissions>(
            static_cast<Underlying>(x) | static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr Permissions operator^(Permissions x, Permissions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perms>;
        return static_cast<Permissions>(
            static_cast<Underlying>(x) ^ static_cast<Underlying>(y)
        );
    }
    
    [[nodiscard]]
    constexpr Permissions operator~(Permissions x) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perms>;
        return static_cast<Permissions>(~static_cast<Underlying>(x));
    }

    [[nodiscard]]
    constexpr Permissions& operator&=(Permissions x, Permissions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perms>;
        return x = static_cast<Permissions>(
            static_cast<Underlying>(x) & static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr Permissions& operator|=(Permissions x, Permissions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perms>;
        return x = static_cast<Permissions>(
            static_cast<Underlying>(x) | static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr Permissions& operator^=(Permissions x, Permissions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perms>;
        return x = static_cast<Permissions>(
            static_cast<Underlying>(x) ^ static_cast<Underlying>(y)
        );
    }

    enum class PermissionOptions: unsigned {
        Replace = static_cast<unsigned>(std::filesystem::perm_options::replace),
        Add = static_cast<unsigned>(std::filesystem::perm_options::add),
        Remove = static_cast<unsigned>(std::filesystem::perm_options::remove),
        NoFollow = static_cast<unsigned>(std::filesystem::perm_options::nofollow)
    };

    [[nodiscard]]
    constexpr PermissionOptions operator&(PermissionOptions x, PermissionOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perm_options>;
        return static_cast<PermissionOptions>(
            static_cast<Underlying>(x) & static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr PermissionOptions operator|(PermissionOptions x, PermissionOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perm_options>;
        return static_cast<PermissionOptions>(
            static_cast<Underlying>(x) | static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr PermissionOptions operator^(PermissionOptions x, PermissionOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perm_options>;
        return static_cast<PermissionOptions>(
            static_cast<Underlying>(x) ^ static_cast<Underlying>(y)
        );
    }
    
    [[nodiscard]]
    constexpr PermissionOptions operator~(PermissionOptions x) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perm_options>;
        return static_cast<PermissionOptions>(~static_cast<Underlying>(x));
    }

    [[nodiscard]]
    constexpr PermissionOptions& operator&=(PermissionOptions x, PermissionOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perm_options>;
        return x = static_cast<PermissionOptions>(
            static_cast<Underlying>(x) & static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr PermissionOptions& operator|=(PermissionOptions x, PermissionOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perm_options>;
        return x = static_cast<PermissionOptions>(
            static_cast<Underlying>(x) | static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr PermissionOptions& operator^=(PermissionOptions x, PermissionOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::perm_options>;
        return x = static_cast<PermissionOptions>(
            static_cast<Underlying>(x) ^ static_cast<Underlying>(y)
        );
    }

    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using Perms = Permissions;
    using PermOptions = PermissionsOptions;
    #endif

    class FileStatus: public std::filesystem::file_status {
    public:
        explicit FileStatus(FileType ft, Permissions perms = Permissions::Unknown) noexcept:
            std::filesystem::file_status(static_cast<std::filesystem::file_type>(ft), static_cast<std::filesystem::perms>(perms)) {}

        FileType type() const noexcept {
            return static_cast<FileType>(std::filesystem::file_status::type());
        }

        Permissions permissions() const noexcept {
            return static_cast<Permissions>(std::filesystem::file_status::permissions());
        }

        void type(FileType ft) noexcept {
            std::filesystem::file_status::type(static_cast<std::filesystem::file_type>(ft));
        }

        void permissions(Permissions perms) noexcept {
            std::filesystem::file_status::permissions(static_cast<std::filesystem::perms>(perms));
        }
    };

    enum class DirectoryOptions: unsigned char {
        None = static_cast<unsigned char>(std::filesystem::directory_options::none),
        FollowDirectorySymlink = static_cast<unsigned char>(std::filesystem::directory_options::follow_directory_symlink),
        SkipPermissionDenied = static_cast<unsigned char>(std::filesystem::directory_options::skip_permission_denied)
    };

    [[nodiscard]]
    constexpr DirectoryOptions operator&(DirectoryOptions x, DirectoryOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::directory_options>;
        return static_cast<DirectoryOptions>(
            static_cast<Underlying>(x) & static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr DirectoryOptions operator|(DirectoryOptions x, DirectoryOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::directory_options>;
        return static_cast<DirectoryOptions>(
            static_cast<Underlying>(x) | static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr DirectoryOptions operator^(DirectoryOptions x, DirectoryOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::directory_options>;
        return static_cast<DirectoryOptions>(
            static_cast<Underlying>(x) ^ static_cast<Underlying>(y)
        );
    }
    
    [[nodiscard]]
    constexpr DirectoryOptions operator~(DirectoryOptions x) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::directory_options>;
        return static_cast<DirectoryOptions>(~static_cast<Underlying>(x));
    }

    [[nodiscard]]
    constexpr DirectoryOptions& operator&=(DirectoryOptions x, DirectoryOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::directory_options>;
        return x = static_cast<DirectoryOptions>(
            static_cast<Underlying>(x) & static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr DirectoryOptions& operator|=(DirectoryOptions x, DirectoryOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::directory_options>;
        return x = static_cast<DirectoryOptions>(
            static_cast<Underlying>(x) | static_cast<Underlying>(y)
        );
    }

    [[nodiscard]]
    constexpr DirectoryOptions& operator^=(DirectoryOptions x, DirectoryOptions y) noexcept {
        using Underlying = UnderlyingTypeType<std::filesystem::directory_options>;
        return x = static_cast<DirectoryOptions>(
            static_cast<Underlying>(x) ^ static_cast<Underlying>(y)
        );
    }

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

    inline bool copy_file(const Path& from, const Path& to, CopyOptions options) {
        return copy_file(from, to, static_cast<std::filesystem::copy_options>(options));
    }
    
    inline bool copy_file(const Path& from, const Path& to, CopyOptions options, ErrorCode& ec) {
        return copy_file(from, to, static_cast<std::filesystem::copy_options>(options), ec);
    }

    inline bool exists(FileStatus s) noexcept {
        return exists(static_cast<std::filesystem::file_status>(s));
    }

    inline void permissions(const Path& path, Permissions perms, PermissionOptions opts = PermissionOptions::Replace) {
        permissions(path, static_cast<std::filesystem::perms>(perms), static_cast<std::filesystem::perm_options>(opts));
    }

    inline void permissions(const Path& path, Permissions perms, ErrorCode& ec) noexcept {
        permissions(path, static_cast<std::filesystem::perms>(perms), ec);
    }

    inline void permissions(const Path& path, Permissions perms, PermissionOptions opts, ErrorCode& ec) {
        permissions(path, static_cast<std::filesystem::perms>(perms), static_cast<std::filesystem::perm_options>(opts), ec);
    }

    [[nodiscard]]
    inline bool is_block_file(FileStatus s) noexcept {
        return is_block_file(static_cast<std::filesystem::file_status>(s));
    }

    [[nodiscard]]
    inline bool is_character_file(FileStatus s) noexcept {
        return is_character_file(static_cast<std::filesystem::file_status>(s));
    }

    [[nodiscard]]
    inline bool is_directory(FileStatus s) noexcept {
        return is_directory(static_cast<std::filesystem::file_status>(s));
    }

    [[nodiscard]]
    inline bool is_fifo(FileStatus s) noexcept {
        return is_fifo(static_cast<std::filesystem::file_status>(s));
    }

    [[nodiscard]]
    inline bool is_other(FileStatus s) noexcept {
        return is_other(static_cast<std::filesystem::file_status>(s));
    }

    [[nodiscard]]
    inline bool is_regular_file(FileStatus s) noexcept {
        return is_regular_file(static_cast<std::filesystem::file_status>(s));
    }

    [[nodiscard]]
    inline bool is_socket(FileStatus s) noexcept {
        return is_socket(static_cast<std::filesystem::file_status>(s));
    }

    [[nodiscard]]
    inline bool is_symlink(FileStatus s) noexcept {
        return is_symlink(static_cast<std::filesystem::file_status>(s));
    }

    [[nodiscard]]
    inline bool status_known(FileStatus s) noexcept {
        return status_known(static_cast<std::filesystem::file_status>(s));
    }

    using std::hash;
    using std::swap;
}
