#include "ColorPair_PairNumberMapTests.h"
#include "ColorPair_PairNumberMap.h"
#include <iostream>
#include <assert.h>

using namespace TelCoColorCoder;


void ColorPair_PairNumberMapTests::testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor)
{
    auto colorPair = TelCoColorCoder::ColorPair_PairNumberMap::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void ColorPair_PairNumberMapTests::testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::ColorPair_PairNumberMap::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}