#include "ItemClass.h"
#include <iostream>
#include <cstring>
using namespace std;

Birds::Birds(){
  for (int index = 0; index < MAX_CHAR_ARRAY_SIZE; index++) {
      name[index] = '\0';
      ScientificName[index] = '\0';
      ConservationStatus[index] = '\0';
      PrimaryColor[index] = '\0';
      Diet[index] = '\0';
    }
}

void Birds::printBirds(ostream &out){
    out << name << ";";
    out << ScientificName << ";";
    out << ConservationStatus << ";";
    out << PrimaryColor << ";";
    out << Diet << endl;
}

void Birds::readBird(ifstream &inFile){
inFile.get(name,Birds::MAX_CHAR_ARRAY_SIZE, ';');
    inFile.ignore(100,';');
    inFile.get(ScientificName,Birds::MAX_CHAR_ARRAY_SIZE,';');
    inFile.ignore(100,';');
  inFile.get(ConservationStatus,Birds::MAX_CHAR_ARRAY_SIZE,';');
    inFile.ignore(100,';');
  inFile.get(PrimaryColor,Birds::MAX_CHAR_ARRAY_SIZE, ';');
    inFile.ignore(100,';');
  inFile.get(Diet,Birds::MAX_CHAR_ARRAY_SIZE);
    inFile.ignore(100,'\n');
    // If we reached the end of the file while reading, then the entry is not valid
    
}
void Birds::AddBird(){
  
cin.ignore(100,'\n');
cout << "Enter Bird name: ";
cin.getline(name, Birds::MAX_CHAR_ARRAY_SIZE);
cout << "Enter Bird Scientific name: ";
cin.getline(ScientificName, Birds::MAX_CHAR_ARRAY_SIZE);
cout << "Enter BirdConservation status: ";
cin.getline(ConservationStatus, Birds::MAX_CHAR_ARRAY_SIZE);
cout << "Enter Bird Primary Color: ";
cin.getline(PrimaryColor, Birds::MAX_CHAR_ARRAY_SIZE);
cout << "Enter Bird Diet: ";
cin.getline(Diet, Birds::MAX_CHAR_ARRAY_SIZE);

}

bool Birds::isSameColor(const char word[]){
  if(strcmp(PrimaryColor, word)== 0){
    return true;
  }return false;
  }