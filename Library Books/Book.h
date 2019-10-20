 #ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
  public:
    Book(int=0, string="Unknown", string="Unknown", int=0, string="Unknown");
    virtual ~Book();
    void print();
    virtual int lessThan(Book* ) = 0;
    string getAuthor();
    string getCallNum();

  protected:
    int    id;
    string title;
    string author;
    int    year;
    string callNum;
};

#endif

