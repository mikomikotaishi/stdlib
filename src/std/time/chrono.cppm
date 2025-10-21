/**
 * @file chrono.cppm
 * @module std.time.chrono
 * @brief Module file for standard library time operations.
 *
 * This file contains the implementation of the time operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.time.chrono;
#else
export module stdlib.time.chrono;
#endif

import :detail;

/**
 * @namespace std::time
 * @brief Wrapper namespace for standard library time operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::time {
#else 
export namespace stdlib::time {
#endif
    using _detail::std::time::Duration;
    using _detail::std::time::TreatAsFloatingPoint;
    using _detail::std::time::DurationValues;
    using _detail::std::time::TimePoint;
    using _detail::std::time::LocalTime;
    using _detail::std::time::ClockTimeConversion;
    using _detail::std::time::IsClock;
    using _detail::std::time::SystemClock;
    using _detail::std::time::SteadyClock;
    using _detail::std::time::HighResolutionClock;
    using _detail::std::time::UTCClock;
    using _detail::std::time::TAIClock;
    using _detail::std::time::GPSClock;
    using _detail::std::time::FileClock;
    using _detail::std::time::Local;

    using _detail::std::time::Day;
    using _detail::std::time::Month;
    using _detail::std::time::Year;
    using _detail::std::time::Weekday;
    using _detail::std::time::MonthDay;
    using _detail::std::time::YearMonth;
    using _detail::std::time::YearMonthDay;

    inline namespace literals {
        inline namespace chrono_literals {
            using _detail::std::time::literals::chrono_literals::operator""d;
            using _detail::std::time::literals::chrono_literals::operator""h;
            using _detail::std::time::literals::chrono_literals::operator""min;
            using _detail::std::time::literals::chrono_literals::operator""ms;
            using _detail::std::time::literals::chrono_literals::operator""s;
            using _detail::std::time::literals::chrono_literals::operator""us;
            using _detail::std::time::literals::chrono_literals::operator""y; 
        }
    }

    using _detail::std::time::January;
    using _detail::std::time::February;
    using _detail::std::time::March;
    using _detail::std::time::April;
    using _detail::std::time::May;
    using _detail::std::time::June;
    using _detail::std::time::July;
    using _detail::std::time::August;
    using _detail::std::time::September;
    using _detail::std::time::October;
    using _detail::std::time::November;
    using _detail::std::time::December;

    using _detail::std::time::Sunday;
    using _detail::std::time::Monday;
    using _detail::std::time::Tuesday;
    using _detail::std::time::Wednesday;
    using _detail::std::time::Thursday;
    using _detail::std::time::Friday;
    using _detail::std::time::Saturday;

    using _detail::std::time::JANUARY;
    using _detail::std::time::FEBRUARY;
    using _detail::std::time::MARCH;
    using _detail::std::time::APRIL;
    using _detail::std::time::MAY;
    using _detail::std::time::JUNE;
    using _detail::std::time::JULY;
    using _detail::std::time::AUGUST;
    using _detail::std::time::SEPTEMBER;
    using _detail::std::time::OCTOBER;
    using _detail::std::time::NOVEMBER;
    using _detail::std::time::DECEMBER;
    
    using _detail::std::time::SUNDAY;
    using _detail::std::time::MONDAY;
    using _detail::std::time::TUESDAY;
    using _detail::std::time::WEDNESDAY;
    using _detail::std::time::THURSDAY;
    using _detail::std::time::FRIDAY;
    using _detail::std::time::SATURDAY;

    using _detail::std::time::TimeZoneDatabase;
    using _detail::std::time::TimeZoneDatabaseList;
    using _detail::std::time::TimeZone;
    #ifdef STDLIB_ENABLE_COMPAT_NAMES
    using _detail::std::time::SysInfo;
    #endif
    using _detail::std::time::SystemInfo;
    using _detail::std::time::LocalInfo;

    using _detail::std::time::LeapSecond;
    using _detail::std::time::LeapSecondInfo;

    using _detail::std::time::AmbiguousLocalTimeException;
    using _detail::std::time::NonexistentLocalTimeException;

    using _detail::std::time::duration_cast;
    using _detail::std::time::time_point_cast;
    using _detail::std::time::floor;

    using _detail::std::time::get_tzdb;
    using _detail::std::time::get_tzdb_list;
    using _detail::std::time::reload_tzdb;
    using _detail::std::time::remote_version;
    using _detail::std::time::locate_zone;
    using _detail::std::time::current_zone;

    using _detail::std::time::get_leap_second_info;

    using _detail::std::time::hash;
    using _detail::std::time::formatter;

    /**
     * @namespace chrono
     * @brief Wrapper namespace for standard library chronological operations
     */
    namespace chrono {
        using _detail::std::time::chrono::LastSpec;
        using _detail::std::time::chrono::WeekdayIndexed;
        using _detail::std::time::chrono::WeekdayLast;
        using _detail::std::time::chrono::MonthDayLast;
        using _detail::std::time::chrono::MonthWeekday;
        using _detail::std::time::chrono::MonthWeekdayLast;
        using _detail::std::time::chrono::YearMonthDayLast;
        using _detail::std::time::chrono::YearMonthWeekday;
        using _detail::std::time::chrono::YearMonthWeekdayLast;
        
        using _detail::std::time::chrono::Choose;
    }

    /**
     * @namespace fmt
     * @brief Wrapper namespace for standard library time formatting operations
     */
    namespace fmt {
        using _detail::std::time::fmt::is_am;
        using _detail::std::time::fmt::is_pm;
        using _detail::std::time::fmt::make12;
        using _detail::std::time::fmt::make24;

        using _detail::std::time::fmt::HHMMSS;

        using _detail::std::time::fmt::from_stream;
        using _detail::std::time::fmt::parse;
    }

    /**
     * @namespace temporal
     * @brief Wrapper namespace for standard library time temporal unit operations
     */
    namespace temporal {
        using _detail::std::time::temporal::Nanoseconds;
        using _detail::std::time::temporal::Microseconds;
        using _detail::std::time::temporal::Milliseconds;
        using _detail::std::time::temporal::Seconds;
        using _detail::std::time::temporal::Minutes;
        using _detail::std::time::temporal::Hours;
        using _detail::std::time::temporal::Days;
        using _detail::std::time::temporal::Weeks;
        using _detail::std::time::temporal::Months;
        using _detail::std::time::temporal::Years;
    }

    /**
     * @namespace zone
     * @brief Wrapper namespace for standard library time zone operations
     */
    namespace zone {
        using _detail::std::time::zone::ZonedTraits;
        using _detail::std::time::zone::ZonedTime;
        using _detail::std::time::zone::TimeZoneLink;
    }
}
