#ifndef COLORSMAJORMINOR_H
#define COLORSMAJORMINOR_H

namespace TelCoColorCoder 
{
    enum MajorColor : int
    {
    WHITE = 0, 
    RED = 1,
    BLACK = 2,
    YELLOW = 3,
    VIOLET = 4
    };
    enum MinorColor : int
    {
    BLUE = 0,
    ORANGE = 1,
    GREEN = 2,
    BROWN = 3,
    SLATE = 4
    };

    const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    const int numberOfMajorColors{5};
    const int numberOfMinorColors{5};
}

#endif
