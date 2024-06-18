#pragma once
#include <string>


enum DreamKind {
    none = 0,
    normal,
    half_lucid,
    lucid,
    nightmare
};


/// @brief Convert DreamKind enum to std::string
/// @return Converted string
std::string dk_to_s(DreamKind dk) {
    switch (dk) {
        case none:          return "none";
        case normal:        return "normal";
        case half_lucid:    return "half-lucid";
        case lucid:         return "lucid";
        case nightmare:     return "nightmare";
        default:            return "na";
    }
}
