#include "ColorPair_PairNumberMap.h"
#include "ColorPair.h"

using namespace TelCoColorCoder;

ColorPair ColorPair_PairNumberMap::GetColorFromPairNumber(int pairNumber)
{
    int zeroBasedPairNumber = pairNumber - 1;
    auto majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    auto minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return ColorPair(majorColor, minorColor);
}

int ColorPair_PairNumberMap::GetPairNumberFromColor(MajorColor major, MinorColor minor)
{
    return major * numberOfMinorColors + minor + 1;
}
