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

    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];

    extern const int numberOfMajorColors;
    extern const int numberOfMinorColors;
}

#endif
