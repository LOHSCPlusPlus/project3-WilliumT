#include <iostream>
#include "ReadUtils.h"
#include "ItemDB.h"
using namespace std;

int DisplayMenu(int choice, birdsDB&Var){
 if (choice == 1){
    Var.readBirdz();
 }else if (choice == 2){
   Var.printArrayToScreen();
 }else if (choice == 3){
   Var.AddBird(); 
 }else if (choice == 4){
   Var.removeBird();
 }else if (choice == 5){
   Var.PrintBirdByChoice();
 }else if (choice == 6){
   Var.printArrayToFile("birds.txt");
 }else if (choice == 7){
   Var.insert(); 
 }else if (choice == -1){
  cout << endl;
  cin.ignore(100,'\n');
}else{
 cout << "Invalid input.";

}
  return 0;
}


int main() {
birdsDB name;
  int choice = 0;
while(choice != -1){
  cout << "Which option would you like?: " << endl;
  cout << "1.Reload database from the file" << endl;
  cout << "2.Print database" << endl;
  cout << "3.Add new entry" << endl;
  cout << "4.Remove entry "<< endl;
  cout << "5.Print all Birds of your color choice" << endl; 
  cout << "6.Save database to the file" << endl;
  cout << "7.Enter -1 to Quit" << endl;
  cout << "Enter your choice: ";
  choice = readInt("");
  DisplayMenu(choice, name);

}
  return 0;
}
