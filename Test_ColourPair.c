#include "Test_ColourCode.h"

/*This function is used to test the colour pairs from paired number*/

void Test_PairNumberToColorPair(int pairNumber,
    MajorColor_List expectedMajor,
    MinorColor_List expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
