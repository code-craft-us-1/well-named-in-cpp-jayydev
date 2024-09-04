#include "ColorPair_PairNumberMapTests.h"
#include "ColorCodingFormtter.h"
#include <iostream>

using namespace TelCoColorCoder;

int main() {
    ColorPair_PairNumberMapTests tester;
    tester.testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    tester.testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    tester.testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    tester.testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
   
    
    std::cout << std::endl << "Print color coding form" << std::endl;
    ColorCodingFormtter colorCodingFormtter;
    std::cout << "----------------------------\n";
    std::cout << colorCodingFormtter.getFormattedColorCodes() << std::endl;

    return 0;
}
