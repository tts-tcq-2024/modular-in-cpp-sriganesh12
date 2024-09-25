#ifndef COLORPAIR_H
#define COLORPAIR_H

#include "colorsMajorMinor.h"

namespace TelCoColorCoder 
{
    class ColorPair 
    {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor();
        MinorColor getMinor();
        std::string ToString();
    };
}

#endif
