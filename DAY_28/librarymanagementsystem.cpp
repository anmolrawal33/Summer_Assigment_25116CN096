// Program to create library management system:
// Steps:
// Step 1: Create a structure to store book details.
// Step 2: Take book ID, book name, author name and availability status as input.
// Step 3: Store the book information.
// Step 4: Display the complete book details.
// Step 5: Exit the program.
// Time Complexity: O(1)

#include <iostream>
using namespace std;

struct Book
{
    int bookID;
    string bookName;
    string authorName;
    bool available;
};

int main()
{
    Book b;

    cout << "Enter Book ID: ";
    cin >> b.bookID;

    cout << "Enter Book Name: ";
    cin >> b.bookName;

    cout << "Enter Author Name: ";
    cin >> b.authorName;

    cout << "Is Book Available? (1 for Yes, 0 for No): ";
    cin >> b.available;

    cout << "\n----- Library Details -----\n";
    cout << "Book ID      : " << b.bookID << endl;
    cout << "Book Name    : " << b.bookName << endl;
    cout << "Author Name  : " << b.authorName << endl;

    if(b.available)
        cout << "Availability : Available" << endl;
    else
        cout << "Availability : Not Available" << endl;

    return 0;
}

/*
Output:

Enter Book ID: 101
Enter Book Name: CPP
Enter Author Name: Bjarne
Is Book Available? (1 for Yes, 0 for No): 1

----- Library Details -----
Book ID      : 101
Book Name    : CPP
Author Name  : Bjarne
Availability : Available
*/