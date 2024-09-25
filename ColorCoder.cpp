#include <iostream>
#include "ColorCoder.h"

namespace TelCoColorCoder 
{
    ColorPair GetColorFromPairNumber(int pairNumber) 
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = MajorColorNames[(zeroBasedPairNumber / numberOfMinorColors)];
        MinorColor minorColor = MinorColorNames[(zeroBasedPairNumber % numberOfMinorColors)];
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) 
    {
        return major * numberOfMinorColors + minor + 1;
    }

    void PrintColorManual() 
    {
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) 
        {
            ColorPair colorPair = GetColorFromPairNumber(i);
            std::cout << i << ": " << MajorColorNames[colorPair.getMajor()] << "  " << MinorColorNames[colorPair.getMinor()] << std::endl;
        }
    }
}
