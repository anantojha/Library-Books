#include <iostream>
#include <string>
#include "Control.h"


void Control::launch(){
	string title, author, call;
	int    id, year;
	int    menuSelection;
	int    bookSelection;
	while(1){
		menuSelection = views.mainMenu();
		if (menuSelection == 0) 
      		break;
    	else if (menuSelection == 1) {

    		bookSelection = views.readBookType();
    		if(bookSelection == 1){
    			views.getInput(id, title, author, year, call);
	    		FictionBook* ptr = new FictionBook(id, title, author, year, call);
			    //ptr->setBook();
			    lounge.addBook(ptr);
    		}
    		else{
    			views.getInput(id, title, author, year, call);
	    		NonFictionBook* ptr = new NonFictionBook(id, title, author, year, call);
			    //ptr->setBook();
			    SCS.addBook(ptr);
    		}

    	}
	}
	cout << endl << endl << endl << "Lounge library: Fiction Books "<< endl;
	views.printLib(lounge);

	cout<< endl <<endl;

	cout << "SCS library: Non-Fiction Books "<< endl;
	views.printLib(SCS);
	
}


