#include "Test.h"
#include <stdio.h>
#include <assert.h>

void Test_PairNumberToColorPair(int pairNumber,MajorColor_List expectedMajor,MinorColor_List expectedMinor)
{
    ColorPair colorPairs = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    Mapping_ColorPairToString(&colorPairs, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPairs.majorColor == expectedMajor);
    assert(colorPairs.minorColor == expectedMinor); 
}
