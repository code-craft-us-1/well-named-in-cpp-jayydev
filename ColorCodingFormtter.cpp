#include "ColorCodingFormtter.h"
#include "ColorTypes.h"
#include "ColorPair_PairNumberMap.h"

using namespace TelCoColorCoder;

std::string ColorCodingFormtter::getFormattedColorCodes() const
{
    std::string colorCoding;
    colorCoding += "Major | Minor | Pair Number \n";
    colorCoding += "----------------------------\n";

    for(auto majorType : MajorColorMap)
    {
        for(auto minorType : MinorColorMap)
        {
            int pairNumber = ColorPair_PairNumberMap::GetPairNumberFromColor(majorType.first, minorType.first);
            colorCoding.append(majorType.second).append(" | ").append(minorType.second).append(" | ").append(std::to_string(pairNumber)).append("\n");
        }
    }
    
    return colorCoding;
}