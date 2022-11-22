/*Variable declaration*/
typedef enum {WHITE=0, RED, BLACK,YELLOW, VIOLET}MajorColor_List;
typedef enum {BLUE=0,ORANGE, GREEN, BROWN, SLATE}MinorColor_List;

typedef struct {
    MajorColor_List majorColor;
    MinorColor_List minorColor;
} ColorPair;

void Test_PairNumberToColorPair(int pairNumber,MajorColor_List expectedMajor,MinorColor_List expectedMinor);
void Test_ColorPairToPairNumber(MajorColor_List major,MinorColor_List minor,int expectedPairNumber);
ColorPair Get_ColorFromPairNumber(int pairNumber);
int Get_PairNumberFromColor(const ColorPair* colorPair);
void Mapping_ColorPairToString(const ColorPair* colorPair, char* buffer);
void Mapping_StringToColorPair(char* buffer,const ColorPair* colorPair);

