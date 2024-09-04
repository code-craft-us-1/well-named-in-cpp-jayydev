#pragma once

#include <string>

namespace TelCoColorCoder
{
    class ColorCodingFormtter
    {

    public:
        ColorCodingFormtter() = default;
        ~ColorCodingFormtter() = default;
        std::string getFormattedColorCodes() const;
    };
}