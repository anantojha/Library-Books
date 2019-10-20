#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H
using namespace std;

#include "Book.h"


class FictionBook : public Book {

  public:
    FictionBook(int=0, string="Unknown", string="Unknown", int=0, string="Unknown");
    virtual ~FictionBook();
    virtual int lessThan(Book *);
};



#endif