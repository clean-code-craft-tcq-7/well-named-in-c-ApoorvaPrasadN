#include "Test.h"
#include <stdio.h>
#include <assert.h>

void Test_PairNumberToColorPair(int pairNumber,MajorColor_List expectedMajor,MinorColor_List expectedMinor)
{
    ColorPair colorPair = (ColorPair)(GetColorFromPairNumber(pairNumber));
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    Mapping_ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor); 
}
