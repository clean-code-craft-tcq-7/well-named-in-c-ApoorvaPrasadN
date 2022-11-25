#include "Test.h"
#include <stdio.h>
#include <assert.h>
void Test_ColorPairToPairNumber(MajorColor_List major,MinorColor_List minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = Get_PairNumberFromColor(&colorPair);
    Mapping_StringToColorPair(&colorPairNames,colorPair);
    printf("Got pair number %d\n", colorPair);
    assert(pairNumber == expectedPairNumber);  
}
