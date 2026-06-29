// Program to create the menu driven string operations:
// Steps:
// Step 1: Take a string as input.
// Step 2: Display a menu for different string operations.
// Step 3: Take the user's choice.
// Step 4: Perform the selected operation using a switch statement.
// Step 5: Display the result and exit the program.
// Time Complexity: O(n)

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    int choice;

    cout << "Enter a String: ";
    cin >> str;

    cout << "\n----- String Operations Menu -----\n";
    cout << "1. Find Length\n";
    cout << "2. Reverse String\n";
    cout << "3. Convert to Uppercase\n";
    cout << "4. Convert to Lowercase\n";
    cout << "Enter Your Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Length = " << str.length() << endl;
            break;

        case 2:
            reverse(str.begin(), str.end());
            cout << "Reversed String = " << str << endl;
            break;

        case 3:
            for(int i = 0; i < str.length(); i++)
            {
                str[i] = toupper(str[i]);
            }
            cout << "Uppercase String = " << str << endl;
            break;

        case 4:
            for(int i = 0; i < str.length(); i++)
            {
                str[i] = tolower(str[i]);
            }
            cout << "Lowercase String = " << str << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}

/*
Output:

Enter a String: Hello

----- String Operations Menu -----
1. Find Length
2. Reverse String
3. Convert to Uppercase
4. Convert to Lowercase
Enter Your Choice: 2

Reversed String = olleH
*/