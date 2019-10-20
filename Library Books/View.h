#ifndef VIEW_H
#define VIEW_H
#include "Library.h"


class View
{
	public:
		View();
		int mainMenu();
		void getInput(int& id, string& title, string& author, int& year, string& call);
		int readBookType();
		void printLib(Library &l);
	private:

	/* data */
};

#endif