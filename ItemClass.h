#include <fstream>
using namespace std;
 
class Birds{

public:
void printBirds(ostream &out);
 Birds();
void readBird(ifstream &inFile);
void AddBird();
  bool isSameColor(const char word[]);

private:
  enum {MAX_CHAR_ARRAY_SIZE = 100};
  char name[MAX_CHAR_ARRAY_SIZE];
  char ScientificName[MAX_CHAR_ARRAY_SIZE];
  char ConservationStatus[MAX_CHAR_ARRAY_SIZE];
  char PrimaryColor[MAX_CHAR_ARRAY_SIZE];
  char Diet[MAX_CHAR_ARRAY_SIZE];
};
