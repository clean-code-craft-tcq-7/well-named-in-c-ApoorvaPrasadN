#include "Test.h"
#include <stdio.h>
#include <assert.h>
#include "Test2.h"

/*This function returns the Color pairs numbers for corresponding pair numbers(given)*/ 
ColorPair Get_ColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (MajorColor_List)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (MinorColor_List)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

/*This function returns the pair numbers for corresponding Color pairs(given)*/ 
int Get_PairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

void Mapping_ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames_Array[colorPair->majorColor],
        MinorColorNames_Array[colorPair->minorColor]);
}
void Mapping_StringToColorPair(char* buffer,const ColorPair* colorPair) {
    sprintf(MajorColorNames_Array[colorPair->majorColor],MinorColorNames_Array[colorPair->minorColor], "%s",buffer);
}
