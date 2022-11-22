/*This function is used to decode the pairnumber into wirecolours and vice-versa*/
#include <stdio.h>
#include <assert.h>

MajorColor_List{
WHITE =0, 
RED, 
BLACK,
YELLOW, 
VIOLET
};

void Test_PairNumberToColorPair(MajorColor_List expectedMajor);


int main() {
    MajorColor_List Color1= WHITE;
    Test_PairNumberToColorPair(Color1);
    return 0;
}

void Test_PairNumberToColorPair(MajorColor_List expectedMajor)
{
    printf("%d",expectedMajor);
}
