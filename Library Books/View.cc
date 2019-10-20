#include <iostream>
using namespace std;
#include <string>

#include "View.h"

View::View(){
  
}

void View::getInput(int& id, string& title, string& author, int& year, string& call){
      cout << "id:  ";
      cin  >> id;
      cout << "title:   ";
      cin.ignore();
      getline(cin, title);
      cout << "author: ";
      getline(cin, author);
      cout << "year:  ";
      cin  >> year;
      cout << "Call #: ";
      cin.ignore();
      getline(cin, call);
}

int View::readBookType(){
    int selection = 0;
    cout << "(1) fiction or (2) non-fiction: ";
    cin >> selection;
    if(selection == 1 || selection == 2)
      return selection;
    else 
      return 1;
}

int View::mainMenu()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) Add book" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;
}

void View::printLib(Library &library){
  if (library.NumOfBooks() > 0){
     //cout << "LIBRARY: " << endl << endl;
     library.printList();
   }

}