#include "Book.h"

Book::Book()
{
   state = 1 ;
}
Book::Book(int id , string name , string author)
{
    this->id = id ;
    this->name = name ;
    this->author = author ;
    state = 1 ;
}
void Book::print()
{
    cout << "ID : " << id << "\n";
    cout << "Name : " << name << "\n";
    cout << "Author : " << author << "\n";
    ( state ) ? cout << "Available\n" : cout << "Borrowed\n";
    cout << "---------------------------\n";
}
void Book::setName(string name)
{
    this->name = name ;
}
void Book::setAuthor(string author)
{
    this->author = author ;
}
void Book::setState(bool flag)
{
    this->state = flag ;
}
bool Book::getState()
{
    return this->state ;
}
