#include <iostream>
#include <string>
using namespace std;
#include "List.h"

List::List(){
	size = 0;
}
List::~List(){
	Node* currNode = head;
	Node* nextNode;

	while (currNode != NULL) {
		nextNode = currNode->next;
		delete currNode->data;
		delete currNode;
		currNode = nextNode;
	}
	
}



void List::add(Book* b){
	Node *curr;
	Node *prev;
	Node *tmp;

	tmp = new Node();
	tmp->data = b;
	tmp->next = NULL;
	tmp->prev = NULL;

	prev = NULL;
	curr = head;

	

	while(curr != NULL){
		if(b->lessThan(curr->data))
			break;
		prev = curr;
		curr = curr->next;
	}
	if(prev == NULL){
		head = tmp;
	}
	else{
		prev->next = tmp;
	}
	if(curr != NULL)
		curr->prev = tmp;

	tmp->next = curr;
	tmp->prev = prev;
	size++;						// increase the size
}



void List::printList()
{
  Node* currNode = head;
  cout << "FULL LIST (Ascending Order): " << endl;
  //head->data->print();
  // cout << "________________________________________________________________________________________________" << endl;
  // cout << "FULL LIST (Ascending Order): " << endl;
  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }

  //printReverse();

}

void List::printReverse(){
	cout << endl << "________________________________________________________________________________________________" << endl;
	cout << "FULL LIST (Descending Order): " << endl;
	Node* curr = head;
	Node* prev = NULL;
	while(curr != NULL){
		prev = curr;
		curr = curr->next;
	}

	while(prev != NULL){
		prev->data->print();
		prev = prev->prev;
	}
}




int List::getNumOfBooks(){
	return size;
}

