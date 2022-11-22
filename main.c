/*This function is used to decode the pairnumber into wirecolours and vice-versa*/
#include <stdio.h>
#include <assert.h>
#include "Test_ColourCode.h"

enum MajorColor_List {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor_List {BLUE, ORANGE, GREEN, BROWN, SLATE};

int main() {
    Test_PairNumberToColorPair(4, WHITE, BROWN);
    Test_PairNumberToColorPair(5, WHITE, SLATE);

    Test_ColorPairToPairNumber(BLACK, ORANGE, 12);
    Test_ColorPairToPairNumber(VIOLET, SLATE, 25);

    return 0;
}
