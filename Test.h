/*Variable declaration*/
typedef enum {WHITE=0, RED, BLACK,YELLOW, VIOLET}MajorColor_List;
typedef enum {BLUE=0 ORANGE, GREEN, BROWN, SLATE}MinorColor_List;

const char* MajorColorNames_Array[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
const char* MinorColorNames_Array[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors =
    sizeof(MajorColorNames_Array) / sizeof(MajorColorNames_Array[0]);
int numberOfMinorColors =
    sizeof(MinorColorNames_Array) / sizeof(MinorColorNames_Array[0]);

const int MAX_COLORPAIR_NAME_CHARS = 16;

typedef struct {
    MajorColor_List majorColor;
    MinorColor_List minorColor;
} ColorPair;

void Test_PairNumberToColorPair(int pairNumber,MajorColor_List expectedMajor,MinorColor_List expectedMinor);
void Test_ColorPairToPairNumber(MajorColor_List major,MinorColor_List minor,int expectedPairNumber);

