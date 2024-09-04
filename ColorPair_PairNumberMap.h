#pragma once

#include "ColorTypes.h"


namespace TelCoColorCoder
{
  class ColorPair;  

  class ColorPair_PairNumberMap
  {
  public:
    static ColorPair GetColorFromPairNumber(int pairNumber);
    static int GetPairNumberFromColor(MajorColor major, MinorColor minor);
  };
}