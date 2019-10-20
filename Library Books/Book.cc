#include <iostream>
#include <iomanip>
using namespace std;

#include "Book.h"

Book::Book(int i, string t, string a, int y, string c) 
{ 
  id     = i;
  title  = t;
  author = a;
  year   = y;
  callNum = c; 
};

Book::~Book(){ };

string Book::getAuthor(){
  return author;
}

string Book::getCallNum(){
  return callNum;
}


void Book::print()
{
  cout << setw(3)  << id
       <<"  Title: "   << setw(40) << title
       <<";  Author: "  << setw(20) << author
       <<";  Call #: "  << setw(8) << callNum
       <<";  Year: "    << year << endl;
}



