/*This function is used to decode the pairnumber into wirecolours and vice-versa*/
#include <stdio.h>
#include <assert.h>
#include "Test.h"
MajorColor_List MajorColor1= WHITE;
MajorColor_List MajorColor2= BLACK;
MajorColor_List MajorColor3= VIOLET;

MinorColor_List MajorColor4= BROWN;
MinorColor_List MajorColor5= SLATE;
MinorColor_List MajorColor6= ORANGE;

int main() {
    
    Test_PairNumberToColorPair(Color1);
    return 0;
}

void Test_PairNumberToColorPair(MajorColor_List expectedMajor)
{
    printf("%d",expectedMajor);
}
