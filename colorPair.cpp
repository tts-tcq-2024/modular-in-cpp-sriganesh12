#include "colorPair.h"

namespace TelCoColorCoder 
{
    ColorPair::ColorPair(MajorColor major, MinorColor minor) :
        majorColor(major), minorColor(minor) {}

    MajorColor ColorPair::getMajor() 
    {
        return majorColor;
    }

    MinorColor ColorPair::getMinor() 
    {
        return minorColor;
    }

}
