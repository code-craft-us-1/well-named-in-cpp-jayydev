#pragma once


namespace TelCoColorCoder
{
  class ColorPair;
  enum MajorColor;
  enum MinorColor;

  class ColorPair_PairNumberMap
  {
  public:
    static ColorPair GetColorFromPairNumber(int pairNumber);
    static int GetPairNumberFromColor(MajorColor major, MinorColor minor);
  };
}