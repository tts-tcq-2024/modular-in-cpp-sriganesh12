#include <iostream>
#include <assert.h>
#include "ColorCoder.h"

void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor) 
{
    TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
    std::cout << "Got pair " << TelCoColorCoder::MajorColorNames[colorPair.getMajor()] << "  " << TelCoColorCoder::MinorColorNames[colorPair.getMinor()] << std::endl;
}

void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber) 
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    assert(pairNumber == expectedPairNumber);
    std::cout << "Got pair number " << pairNumber << std::endl;
}

int main() 
{
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}
