#include <iostream>
#include <string>
using namespace std;
#include "Library.h"


Library::Library(){
	
}

Library::~Library(){
	//cleanUp();
}




void Library::addBook(Book* b){
	library.add(b);
}

void Library::printList(){
	
		library.printList();
	
}

int Library::NumOfBooks(){
	return library.getNumOfBooks();
}

