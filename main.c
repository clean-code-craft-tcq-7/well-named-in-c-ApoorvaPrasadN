/*This function is used to decode the pairnumber into wirecolours and vice-versa*/
#include <stdio.h>
#include <assert.h>

int main() {
    Test_PairNumberToColorPair(4, WHITE, BROWN);
    Test_PairNumberToColorPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
