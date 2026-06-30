// Program to create the mini library system:
// Steps:
// Step 1: Create a structure to store book details.
// Step 2: Display a menu with Add Book, Display Books and Exit options.
// Step 3: Take book details and store them in an array.
// Step 4: Display all book records.
// Step 5: Exit the program.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

struct Book
{
    int bookId;
    string title;
    string author;
};

int main()
{
    Book book[100];
    int choice, n = 0;

    do
    {
        cout << "\n----- Mini Library System -----\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Book ID: ";
                cin >> book[n].bookId;

                cout << "Enter Book Title: ";
                cin >> book[n].title;

                cout << "Enter Author Name: ";
                cin >> book[n].author;

                n++;
                cout << "Book Added Successfully.\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Books Available.\n";
                }
                else
                {
                    cout << "\n----- Library Books -----\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nBook " << i + 1 << endl;
                        cout << "Book ID : " << book[i].bookId << endl;
                        cout << "Title   : " << book[i].title << endl;
                        cout << "Author  : " << book[i].author << endl;
                    }
                }
                break;

            case 3:
                cout << "Exiting Program...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 3);

    return 0;
}

/*
Output:

----- Mini Library System -----
1. Add Book
2. Display Books
3. Exit
Enter your choice: 1

Enter Book ID: 101
Enter Book Title: C++
Enter Author Name: Bjarne
Book Added Successfully.

----- Mini Library System -----
1. Add Book
2. Display Books
3. Exit
Enter your choice: 2

----- Library Books -----

Book 1
Book ID : 101
Title   : C++
Author  : Bjarne
*/