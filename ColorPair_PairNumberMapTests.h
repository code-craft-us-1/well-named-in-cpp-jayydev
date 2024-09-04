#pragma once

#include "ColorPair.h"

namespace TelCoColorCoder
{
    class ColorPair_PairNumberMapTests
    {
        public:
        ColorPair_PairNumberMapTests() = default;
        ~ColorPair_PairNumberMapTests() = default;
        void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor);
        void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber);
    };
}