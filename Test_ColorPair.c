#include "Test.h"
#include <stdio.h>
#include <assert.h>
const int MAX_COLORPAIR_NAME_CHAR = 16;
void Test_ColorPairToPairNumber(MajorColor_List major,MinorColor_List minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    char colorPairNames[MAX_COLORPAIR_NAME_CHAR];
    int pairNumber = Get_PairNumberFromColor(&colorPair);
    Mapping_StringToColorPair(&colorPairNames,pairNumber);
    printf("Got pair number %d\n",colorPair);
    assert(pairNumber == expectedPairNumber);  
}
