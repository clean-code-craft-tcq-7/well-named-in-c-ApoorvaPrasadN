/*This function is used to decode the pairnumber into wirecolours and vice-versa*/
#include <stdio.h>
#include <assert.h>
#include "Test_ColourCode.h"

int main() {
    Test_PairNumberToColorPair(4, (MajorColor_List)WHITE, (MinorColor_List)BROWN);
    Test_PairNumberToColorPair(5, WHITE, SLATE);

    Test_ColorPairToPairNumber(BLACK, ORANGE, 12);
    Test_ColorPairToPairNumber(VIOLET, SLATE, 25);

    return 0;
}
