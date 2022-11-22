/*This function is used to decode the pairnumber into wirecolours and vice-versa*/
#include <stdio.h>
#include <assert.h>
#include "Test.h"
MajorColor_List MajorColor1= WHITE;
MajorColor_List MajorColor2= BLACK;
MajorColor_List MajorColor3= VIOLET;

MinorColor_List MinorColor1= BROWN;
MinorColor_List MinorColor2= SLATE;
MinorColor_List MinorColor3= ORANGE;

int main() {
    
    Test_PairNumberToColorPair(4, MajorColor1,MinorColor1);
    Test_PairNumberToColorPair(4, MajorColor1,MinorColor2);
    
    Test_ColorPairToPairNumber(MajorColor2,MinorColor3, 12);
    Test_ColorPairToPairNumber(MajorColor3,MinorColor2, 25);
    return 0;
}
