#ifndef LIST_H
#define LIST_H
#define MAX_ARR_SIZE 128
#include "Book.h"
#include "FictionBook.h"
#include "NonFictionBook.h"

class List
{
	class Node
	{
		friend class List;
		private:
			Book* data;
			Node* prev;
			Node* next;
	};
	public:
		List();
		~List();
		void add(Book*);
		void printList();
		void printReverse();
		int getNumOfBooks();
		

	private:
		Node* head;
		int size;
};

#endif