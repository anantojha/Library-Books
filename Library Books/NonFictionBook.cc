#include <string>
#include "NonFictionBook.h"



NonFictionBook::NonFictionBook(int i, string t, string a, int y, string c) : Book(i,t,a,y,c) {}

NonFictionBook::~NonFictionBook(){
	
}

int NonFictionBook::lessThan(Book* b) {
  if(b->getCallNum() >= callNum){
    return 1;
  }
  else{
    return 0;
  }
  
}