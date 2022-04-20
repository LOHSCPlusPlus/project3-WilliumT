#include "ItemClass.h"
using namespace std;
class birdsDB{
public:
birdsDB();
void printArrayToScreen();
void printArrayToFile(const char fileName[]);
int readBirdz();
void AddBird();
void removeBird();
void PrintBirdByChoice ();
void insert();
private:
enum {MAX_BIRDS = 100};
Birds bird[MAX_BIRDS];
int numBirds;
};