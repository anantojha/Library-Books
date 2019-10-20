#ifndef NONFICTIONBOOK_H
#define NONFICTIONBOOK_H
using namespace std;

#include "Book.h"


class NonFictionBook : public Book {

  public:
    NonFictionBook(int=0, string="Unknown", string="Unknown", int=0, string="Unknown");
    virtual ~NonFictionBook();
    virtual int lessThan(Book* b);

};



#endif