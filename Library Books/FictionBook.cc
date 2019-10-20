#include <string>
#include "FictionBook.h"



FictionBook::FictionBook(int i, string t, string a, int y, string c) : Book(i,t,a,y,c) {}

FictionBook::~FictionBook(){
	
}

int FictionBook::lessThan(Book* b) {
  if(b->getAuthor() >= author){
    return 1;
  }
  else{
    return 0;
  }
  
}