#include "Test.h"
#include <stdio.h>
#include <assert.h>
const int MAX_COLORPAIR_NAME_CHAR = 16;
void Test_ColorPairToPairNumber(MajorColor_List major,MinorColor_List minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = Get_PairNumberFromColor(&colorPair);
    char colorPairNames[MAX_COLORPAIR_NAME_CHAR];
    Mapping_StringToColorPair(colorPairNames,&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);  
}
