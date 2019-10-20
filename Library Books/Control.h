#ifndef CONTROL_H
#define CONTROL_H

#include "View.h"
#include "Library.h"
#include "Book.h"
#include "FictionBook.h"
#include "NonFictionBook.h"


class Control
{
	public:
		void launch();
	private:
		Library SCS;
		Library lounge;
		View views;
};






#endif