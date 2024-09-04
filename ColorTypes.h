#pragma once

#include "ColorNames.h"
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
        WHITE_COLOR_NAME, RED_COLOR_NAME, BLACK_COLOR_NAME, YELLOW_COLOR_NAME, VIOLET_COLOR_NAME};

    const unsigned numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    const char * const MinorColorNames[] = {
        BLUE_COLOR_NAME, ORANGE_COLOR_NAME, GREEN_COLOR_NAME, BROWN_COLOR_NAME, SLATE_COLOR_NAME};

    const unsigned numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    const std::map<MajorColor, const char*> MajorColorMap = {
        {WHITE, WHITE_COLOR_NAME},
        {RED, RED_COLOR_NAME},
        {BLACK, BLACK_COLOR_NAME},
        {YELLOW, YELLOW_COLOR_NAME},
        {VIOLET, VIOLET_COLOR_NAME}
    };

    const std::map<MinorColor, const char*> MinorColorMap = {
        {BLUE, BLUE_COLOR_NAME},
        {ORANGE, ORANGE_COLOR_NAME},
        {GREEN, GREEN_COLOR_NAME},
        {BROWN, BROWN_COLOR_NAME},
        {SLATE, SLATE_COLOR_NAME}
    };
}