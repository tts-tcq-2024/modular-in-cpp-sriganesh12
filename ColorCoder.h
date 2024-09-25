#ifndef COLORCODER_H
#define COLORCODER_H

#include "colorPair.h"

namespace TelCoColorCoder 
{
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void PrintColorManual();
}

#endif
