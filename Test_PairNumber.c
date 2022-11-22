#include "Test_ColourCode.h"

/*This function is used to test the paired number from colour pairs*/

void Test_ColorPairToPairNumber(
    enum MajorColor_List major,
    enum MinorColor_List minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

