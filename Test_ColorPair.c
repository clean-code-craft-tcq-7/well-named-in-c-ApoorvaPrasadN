#include "Test.h"
#include <stdio.h>
#include <assert.h>

void Test_ColorPairToPairNumber(MajorColor_List major,MinorColor_List minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);  
}
