// Program to create the contact management system:
// Steps:
// Step 1: Create a structure to store contact details.
// Step 2: Take contact name and phone number as input.
// Step 3: Store the contact information.
// Step 4: Display the saved contact details.
// Step 5: Exit the program.
// Time Complexity: O(1)

#include <iostream>
using namespace std;

struct Contact
{
    string name;
    string phone;
};

int main()
{
    Contact c;

    cout << "Enter Contact Name: ";
    cin >> c.name;

    cout << "Enter Phone Number: ";
    cin >> c.phone;

    cout << "\n----- Contact Details -----\n";
    cout << "Name         : " << c.name << endl;
    cout << "Phone Number : " << c.phone << endl;

    return 0;
}

/*
Output:

Enter Contact Name: Anmol
Enter Phone Number: 9876543210

----- Contact Details -----
Name         : Anmol
Phone Number : 9876543210
*/