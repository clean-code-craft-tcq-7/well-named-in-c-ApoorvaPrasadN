#include <stdio.h>
#include <assert.h>
#include "Test.h"
const int MAX_COLORPAIR_NAME_CHARS = 16;
void Test_PairNumberToColorPair(int pairNumber,MajorColor_List expectedMajor,MinorColor_List expectedMinor)
{
    ColorPair colorPair = Get_ColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    Mapping_ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor); 
}
