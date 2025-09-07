/**
 * @file mutex.cppm
 * @module std.sync.mutex
 * @brief Module file for standard library mutex operations.
 *
 * This file contains the implementation of the mutex operations in the standard library.
 */

module;

#include <mutex>

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.sync.mutex;
#else
export module stdlib.sync.mutex;
#endif

/**
 * @namespace std::sync
 * @brief Wrapper namespace for standard library synchronisation operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::sync {
#else 
export namespace stdlib::sync {
#endif
    using Mutex = std::mutex;
    using TimedMutex = std::timed_mutex;
    using RecursiveMutex = std::recursive_mutex;
    using RecursiveTimedMutex = std::recursive_timed_mutex;

    template <typename _Mutex>
    using LockGuard = std::lock_guard<_Mutex>;

    template <typename _Mutex>
    using UniqueLock = std::unique_lock<_Mutex>;

    template <typename... _MutexTypes>
    using ScopedLock = std::scoped_lock<_MutexTypes...>;

    using OnceFlag = std::once_flag;
    
    using std::try_lock;
    using std::lock;
    using std::call_once;
    using std::swap;

    using DeferLockTag = std::defer_lock_t;
    using TryToLockTag = std::try_to_lock_t;
    using AdoptLockTag = std::adopt_lock_t;
    inline constexpr DeferLockTag DeferLock = std::defer_lock;
    inline constexpr TryToLockTag TryToLock = std::try_to_lock;
    inline constexpr AdoptLockTag AdoptLock = std::adopt_lock;
}
