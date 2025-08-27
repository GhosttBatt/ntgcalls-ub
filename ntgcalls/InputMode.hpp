#ifndef INPUTMODE_HPP
#define INPUTMODE_HPP

#include <string>

namespace ntgcalls {

    // Enum class for input modes (example for audio calls)
    enum class InputMode {
        Microphone,   // Use live microphone input
        File,         // Stream audio from file
        Stream,       // Stream audio data from memory/pipe
        Unknown       // Fallback/invalid mode
    };

    // Helper: convert enum to string
    std::string toString(InputMode mode);

    // Helper: parse string back to enum
    InputMode fromString(const std::string& str);

} // namespace ntgcalls

#endif // INPUTMODE_HPP
