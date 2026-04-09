#include "BookStore.h"

BookStore::BookStore()
{

}
int BookStore::static_key()
{
    static int key = 10 ;
    return ++key ;
}
void BookStore::initBooks()
{
    library.emplace(1, Book(1, "C++ Basics", "Stroustrup"));
    library.emplace(2, Book(2, "Data Structures", "Weiss"));
    library.emplace(3, Book(3, "Algorithms", "CLRS"));
    library.emplace(4, Book(4, "OOP Concepts", "Booch"));
    library.emplace(5, Book(5, "Operating Systems", "Silberschatz"));
    library.emplace(6, Book(6, "Computer Networks", "Tanenbaum"));
    library.emplace(7, Book(7, "Database Systems", "Ramakrishnan"));
    library.emplace(8, Book(8, "Clean Code", "Robert C. Martin"));
    library.emplace(9, Book(9, "Design Patterns", "GoF"));
    library.emplace(10, Book(10, "Competitive Programming", "Halim"));
}
void BookStore::remove_book(int id)
{
    if(library.count(id))
    {
        library.erase(id);
        cout << "Book deleted\n";
    }else cout << "No book with this id\n";
}
void BookStore::displaying_books()
{
   for(auto &i : library)
   {
       i.second.print();
   }
}
void BookStore::add_book(string name , string author)
{
    int id = static_key();
    library.emplace(id, Book(id, name , author));
    cout << "Book added\n";
}
void BookStore::display_book(int id)
{
    if(library.count(id))
    {
        Book &b = library[id];
        b.print();
    }else cout << "No book with this id\n";
}
void BookStore::update_book(int id , string name , string author)
{
    if(library.count(id))
    {
        Book &b = library[id];
        b.setName(name);
        b.setAuthor(author);
        cout << "Book updated\n";
    }else cout << "No book with this id\n";
}
void BookStore::borrow_book(int id)
{
    if(library.count(id))
    {
        Book &b = library[id];
        if(b.getState())
        {
            b.setState(0);
            cout << "You can borrow it\n";
        }else cout << "Borrowed\n";
    }else cout << "No book with this id\n";
}
void BookStore::return_book(int id)
{
    if(library.count(id))
    {
        Book &b = library[id];
        if(!b.getState())
        {
            b.setState(1);
            cout << "Returned successfully\n";
        }else cout << "Book not borrowed\n";
    }else cout << "No book with this id\n";
}
