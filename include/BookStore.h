#ifndef BOOKSTORE_H
#define BOOKSTORE_H
#include <iostream>
#include <unordered_map>
#include "Book.h"
class BookStore
{
private:
    unordered_map<int, Book>library;
public :
    BookStore();
    int static_key();
    void initBooks();
    void add_book(string name, string author);
    void displaying_books();
    void display_book(int id);
    void remove_book(int id);
    void update_book(int id, string name, string author);
    void borrow_book(int id);
    void return_book(int id);
};

#endif // BOOKSTORE_H
