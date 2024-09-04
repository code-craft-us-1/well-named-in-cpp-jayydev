#pragma once

#include <string>
#include <map>

namespace TelCoColorCoder
{
    enum MajorColor
    {
        WHITE,
        RED,
        BLACK,
        YELLOW,
        VIOLET
    };
    enum MinorColor
    {
        BLUE,
        ORANGE,
        GREEN,
        BROWN,
        SLATE
    };

    const char * const MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"};

    const unsigned numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    const char * const MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"};

    const unsigned numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    const std::map<MajorColor, const char*> MajorColorMap = {
        {WHITE, "White"},
        {RED, "Red"},
        {BLACK, "Black"},
        {YELLOW, "Yellow"},
        {VIOLET, "Violet"}
    };

    const std::map<MinorColor, const char*> MinorColorMap = {
        {BLUE, "Blue"},
        {ORANGE, "Orange"},
        {GREEN, "Green"},
        {BROWN, "Brown"},
        {SLATE, "Slate"}
    };
}