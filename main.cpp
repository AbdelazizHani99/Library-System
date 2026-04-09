#include <iostream>
#include "BookStore.h"
using namespace std;
int main()
{
    BookStore b;
    b.initBooks();

    cout << "1- Add book\n";
    cout << "2- Search\n";
    cout << "3- Remove book\n";
    cout << "4- Update book\n";
    cout << "5- Borrow book\n";
    cout << "6- Return book\n";
    cout << "7- Displaying Books\n";
    cout << "8- Exit\n";

    bool flag = true;
    while (flag)
    {
        int choose = 0 ;
        while(choose < 1 || choose > 8)
        {
            cout << "Enter Choose : ";
            cin >> choose;
        }
        switch (choose)
        {
        case 1:
        {
            string author, name;
            cin.ignore();
            cout << "Name : ";
            getline(cin, name);
            cout << "Author : ";
            getline(cin, author);
            b.add_book(name, author);
            break;
        }
        case 2:
        {
            int id;
            cout << "Enter id : ";
            cin >> id;
            b.display_book(id);
            break;
        }
        case 3:
        {
            int id;
            cout << "Enter id : ";
            cin >> id;
            b.remove_book(id);
            break;
        }
        case 4:
        {
            int id;
            cout << "Enter id : ";
            cin >> id;
            string author, name;
            cin.ignore();
            cout << "Name : ";
            getline(cin, name);
            cout << "Author : ";
            getline(cin, author);
            b.update_book(id, name, author);
            break;
        }
        case 5:
        {
            int id;
            cout << "Enter id : ";
            cin >> id;
            b.borrow_book(id);
            break;
        }
        case 6:
        {
            int id;
            cout << "Enter id : ";
            cin >> id;
            b.return_book(id);
            break;
        }
        case 7:
        {
            b.displaying_books();
            break;
        }
        case 8:
            flag = false;
            break;
        }
    }
}
