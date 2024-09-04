#pragma once

#include "ColorPair.h"
#include "ColorPair_PairNumberMapTests.h"
#include "ColorPair_PairNumberMap.h"
#include <iostream>
#include <assert.h>

namespace TelCoColorCoder
{
    class ColorPair_PairNumberMapTests
    {
    public:
        ColorPair_PairNumberMapTests() = default;
        ~ColorPair_PairNumberMapTests() = default;

        static void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor)
        {
            auto colorPair = TelCoColorCoder::ColorPair_PairNumberMap::GetColorFromPairNumber(pairNumber);
            std::cout << "Got pair " << colorPair.ToString() << std::endl;
            assert(colorPair.getMajor() == expectedMajor);
            assert(colorPair.getMinor() == expectedMinor);
        }

        static void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber)
        {
            int pairNumber = TelCoColorCoder::ColorPair_PairNumberMap::GetPairNumberFromColor(major, minor);
            std::cout << "Got pair number " << pairNumber << std::endl;
            assert(pairNumber == expectedPairNumber);
        }
    };
}