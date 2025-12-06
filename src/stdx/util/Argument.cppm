/**
 * @file Argument.cppm
 * @module stdx.util.Argument
 * @brief Implementation of the Argument class.
 *
 * This file contains the implementation of the Argument class, which is used to represent
 * a single argument in the argument parser.
 */

module;

// Standard library headers are necessary here - there is no workaround
#include <string>

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module stdx.util.Argument;

import std;

using std::collections::Vector;
using std::meta::IsSameValue;

namespace ranges = std::ranges;
namespace fmt = std::fmt;
namespace text = std::text;
#else
export module stdlibx.util.Argument;

import stdlib;

using stdlib::collections::Vector;
using stdlib::meta::IsSameValue;

namespace fmt = stdlib::fmt;
namespace text = stdlib::text;
namespace ranges = stdlib::ranges;
#endif

/**
 * @namespace stdx::util
 * @brief Wrapper namespace for standard library extension utility operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace stdx::util {
#else
export namespace stdlibx::util {
#endif


/**
 * @enum ArgumentType
 * @brief Enumeration for argument types.
 */
enum class ArgumentType: u8 {
    Flag, ///< Boolean flag
    Value, ///< Single value
    MultiValue, ///< Multiple values
    Positional ///<  Positional arguments
};

/**
 * @class ArgumentParserException
 * @brief Exception class for argument parser errors.
 * 
 * @extends RuntimeException (std::runtime_error)
 */
class ArgumentParserException: public RuntimeException {
public:
    /**
     * @brief Construct a new ArgumentParserException object
     * 
     * @param message The message of the exception.
     */
    explicit ArgumentParserException(const String& message):
        RuntimeException(message) {}
};

/**
 * @class Argument
 * @brief Represents a single argument definition.
 */
class Argument {
private:
    String name_; ///< The name of the argument
    String shortName_; ///< The short name of the argument
    String help_; ///< The help message
    ArgumentType type_; ///< The type of the argument
    Any defaultValue_; ///< The default value of the argument
    bool required_ = false; ///< Whether the argument is necessary
    Function<Any(const String&)> converter_; ///< 
    Vector<String> choices_; ///< The list of choices
public:
    /**
     * @brief Construct a new Argument object
     * 
     * @param name The name of the argument
     * @param type The type of the argument
     */
    explicit Argument(StringView name, ArgumentType type = ArgumentType::Value):
        name_{name}, type_{type} {
        converter_ = [](const String& s) -> Any { return s; };
    }

    Argument& short_name(const String& shortName) {
        this->shortName_ = shortName;
        return *this;
    }

    Argument& help(const String& helpMessage) {
        this->help_ = helpMessage;
        return *this;
    }

    Argument& required(bool required = true) {
        this->required_ = required;
        return *this;
    }

    Argument& default_value(const Any& defaultValue) {
        this->defaultValue_ = defaultValue;
        return *this;
    }

    Argument& choices(const Vector<String>& choiceList) {
        this->choices_ = choiceList;
        return *this;
    }

    template <typename T>
    Argument& type() {
        if constexpr (IsSameValue<T, int>) {
            converter_ = [](const String& s) -> Any { return text::string::stoi(s); };
        } else if constexpr (IsSameValue<T, double>) {
            converter_ = [](const String& s) -> Any { return text::string::stod(s); };
        } else if constexpr (IsSameValue<T, float>) {
            converter_ = [](const String& s) -> Any { return text::string::stof(s); };
        } else if constexpr (IsSameValue<T, bool>) {
            converter_ = [](const String& s) -> Any {
                String lower = s;
                ranges::transform(lower, lower.begin(), text::tolower);
                return (lower == "true" || lower == "1" || lower == "yes");
            };
        }
        return *this;
    }

    const String& get_name() const noexcept {
        return name_;
    }

    const String& get_short_name() const noexcept {
        return shortName_;
    }

    const String& get_help() const noexcept {
        return help_;
    }

    ArgumentType get_type() const noexcept {
        return type_;
    }

    const Any& get_default_value() const noexcept {
        return defaultValue_;
    }

    bool is_required() const noexcept {
        return required_;
    }

    const Vector<String>& get_choices() const noexcept {
        return choices_;
    }

    Any convert(StringView value) const {
        if (!choices_.empty()) {
            if (!ranges::contains(choices_, value)) {
                throw ArgumentParserException(fmt::format("Invalid choice '{}' for argument '{}'", value, this->name_));
            }
        }
        return converter_(String(value));
    }
};


}
