#ifndef LIBRARY_H
#define LIBRARY_H
#include "List.h"
#include "Book.h"
#define MAX_ARR_SIZE 128

using namespace std;


class Library
{
	public:
		Library();
		~Library();
		void printList();
		void addBook(Book*);
		int NumOfBooks();
		
		

	private:
		List library;
	
};

#endif