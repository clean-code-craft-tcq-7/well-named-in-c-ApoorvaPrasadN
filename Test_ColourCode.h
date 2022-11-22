/*Function Declaration*/
extern void Test_PairNumberToColorPair(int pairNumber,enum MajorColor_List expectedMajor,enum MinorColor_List expectedMinor);
extern void Test_ColorPairToPairNumber(enum MajorColor_List major,enum MinorColor_List minor,int expectedPairNumber);
extern ColorPair Get_ColorFromPairNumber(int pairNumber);
extern int Get_PairNumberFromColor(const ColorPair* colorPair);
extern void Mapping_ColorPairToString(const ColorPair* colorPair, char* buffer);
extern void Mapping_StringToColorPair(char* buffer,const ColorPair* colorPair);
  
/*variable Declaration*/
enum MajorColor_List {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor_List {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColor_Array[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors =
    sizeof(MajorColor_Array) / sizeof(MajorColor_Array[0]);
int numberOfMinorColors =
    sizeof(MajorColor_Array) / sizeof(MajorColor_Array[0]);

const int MAX_COLORPAIR_NAME_CHARS = 16;

typedef struct {
    enum MajorColor_List majorColor;
    enum MinorColor_List minorColor;
} ColorPair;

