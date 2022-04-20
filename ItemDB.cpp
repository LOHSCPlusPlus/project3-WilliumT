#include <iostream>
#include "ItemDB.h"
#include "ReadUtils.h"
#include <cstring>
using namespace std;

birdsDB::birdsDB(){
  numBirds = 0;
  readBirdz();
}
void birdsDB::printArrayToScreen() {
    for (int index = 0; index < numBirds; index++) {
        cout << "Index " << index << ": ";
        bird[index].printBirds(cout);
    }
}
void birdsDB::printArrayToFile(const char fileName[]) {
    ofstream outFile(fileName);
    for (int index = 0; index < numBirds; index++) {
        bird[index].printBirds(outFile);
    }
}

int birdsDB::readBirdz(){
    ifstream birdFile("birds.txt");
     numBirds = 0;
    while(birdFile.peek() != EOF && numBirds < MAX_BIRDS) {
        bird[numBirds].readBird(birdFile);
        numBirds++;
    }
    return numBirds;
}

void birdsDB::AddBird(){
  bird [numBirds].AddBird();
  numBirds++;
}

void birdsDB::insert(){

        int insertIndex = readInt("What index would you like to insert?: ");
        for (int index = numBirds; index > insertIndex; index--) {
            bird[index] = bird[index - 1];
        }
        bird[insertIndex].AddBird();
        numBirds++;
    
}

void birdsDB::removeBird(){
  int Index = 0;
  cout << "What Index would you like to remove?: ";
  cin >> Index;
  for (int x = Index; x < MAX_BIRDS; x++){
    bird[x] = bird[x+1];
  }
}

void birdsDB::PrintBirdByChoice (){
char Input [20];
cout << "What bird color do you want? ";
cin >> Input;
for (int index = 0; index < numBirds +1; index++){

if (bird[index].isSameColor(Input)){
cout << "Index " << index << ": ";
bird[index].printBirds(cout);
cout << endl;
}
}
}

