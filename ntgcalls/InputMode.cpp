#include "inputmode.hpp"
#include <algorithm>

namespace ntgcalls {

    std::string toString(InputMode mode) {
        switch (mode) {
            case InputMode::Microphone: return "microphone";
            case InputMode::File:       return "file";
            case InputMode::Stream:     return "stream";
            default:                    return "unknown";
        }
    }

    InputMode fromString(const std::string& str) {
        std::string s = str;
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        if (s == "microphone") return InputMode::Microphone;
        if (s == "file")       return InputMode::File;
        if (s == "stream")     return InputMode::Stream;

        return InputMode::Unknown;
    }

} // namespace ntgcalls
