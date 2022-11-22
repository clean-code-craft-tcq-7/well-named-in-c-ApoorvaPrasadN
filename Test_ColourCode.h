/*Function Declaration*/
extern void Test_PairNumberToColorPair(int pairNumber,enum MajorColor_List expectedMajor,enum MinorColor_List expectedMinor);
extern void Test_ColorPairToPairNumber(enum MajorColor_List major,enum MinorColor_List minor,int expectedPairNumber);
extern ColorPair Get_ColorFromPairNumber(int pairNumber);
extern int Get_PairNumberFromColor(const ColorPair* colorPair);
extern void Mapping_ColorPairToString(const ColorPair* colorPair, char* buffer);
extern void Mapping_StringToColorPair(char* buffer,const ColorPair* colorPair);
  
/*variable Declaration*/
extern enum MajorColor_List {WHITE, RED, BLACK, YELLOW, VIOLET};
extern enum MinorColor_List {BLUE, ORANGE, GREEN, BROWN, SLATE};

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
    enum MajorColor_List majorColor;
    enum MinorColor_List minorColor;
} ColorPair;

