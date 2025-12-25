/**
 * @file charconv.cppm
 * @module core:text.charconv
 * @brief Module file for standard library character conversion operations.
 *
 * This file contains the imports for the character conversion operations in the standard library.
 */

module;

#include <charconv>

#define TO_CHARS_TYPE(Type) \
    [[nodiscard]] \
    ToCharsResult to_chars(char* first, char* last, Type value, CharsFormat fmt) { \
        return std::to_chars(first, last, value, static_cast<std::chars_format>(fmt)); \
    } \
    \
    [[nodiscard]] \
    ToCharsResult to_chars(char* first, char* last, Type value, CharsFormat fmt, int precision) { \
        return std::to_chars(first, last, value, static_cast<std::chars_format>(fmt), precision); \
    }

#define FROM_CHARS_TYPE(Type) \
    [[nodiscard]] \
    FromCharsResult from_chars(const char* first, const char* last, Type& value, CharsFormat fmt = CharsFormat::GENERAL) { \
        return std::from_chars(first, last, value, static_cast<std::chars_format>(fmt)); \
    }

export module core:text.charconv;

/**
 * @namespace core::text
 * @brief Wrapper namespace for standard library text operations.
 */
export namespace core::text {
    enum class CharsFormat {
        SCIENTIFIC = static_cast<int>(std::chars_format::scientific),
        FIXED = static_cast<int>(std::chars_format::fixed),
        HEX = static_cast<int>(std::chars_format::hex),
        GENERAL = static_cast<int>(std::chars_format::general)
    };

    [[nodiscard]]
    constexpr CharsFormat operator|(CharsFormat a, CharsFormat b) noexcept {
        return static_cast<CharsFormat>(static_cast<std::chars_format>(a) | static_cast<std::chars_format>(b));
    }

    [[nodiscard]]
    constexpr CharsFormat operator&(CharsFormat a, CharsFormat b) noexcept {
        return static_cast<CharsFormat>(static_cast<std::chars_format>(a) & static_cast<std::chars_format>(b));
    }

    [[nodiscard]]
    constexpr CharsFormat operator^(CharsFormat a, CharsFormat b) noexcept {
        return static_cast<CharsFormat>(static_cast<std::chars_format>(a) ^ static_cast<std::chars_format>(b));
    }

    [[nodiscard]]
    constexpr CharsFormat operator~(CharsFormat a) noexcept {
        return static_cast<CharsFormat>(~static_cast<std::chars_format>(a));
    }

    [[nodiscard]]
    constexpr CharsFormat operator|=(CharsFormat& a, CharsFormat b) noexcept {
        return a = a | b;
    }

    [[nodiscard]]
    constexpr CharsFormat operator&=(CharsFormat& a, CharsFormat b) noexcept {
        return a = a & b;
    }

    [[nodiscard]]
    constexpr CharsFormat operator^=(CharsFormat& a, CharsFormat b) noexcept {
        return a = a ^ b;
    }

    using FromCharsResult = std::from_chars_result;
    using ToCharsResult = std::to_chars_result;

    using std::from_chars;
    using std::to_chars;

    TO_CHARS_TYPE(float);
    TO_CHARS_TYPE(double);
    TO_CHARS_TYPE(long double);
    FROM_CHARS_TYPE(float);
    FROM_CHARS_TYPE(double);
    FROM_CHARS_TYPE(long double);
}
