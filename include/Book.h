#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std ;

class Book
{
   private :
       int id ;
       string name ;
       string author ;
       bool state ;
   public :
       Book();
       Book(int id , string name , string author);
       void print();
       void setName(string name);
       void setAuthor(string author);
       bool getState();
       void setState(bool flag);
};

#endif // BOOK_H
