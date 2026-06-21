// Program to reverse a string:
// Steps:
// Step 1: Input a string from the user.
// Step 2: Find the length of the string.
// Step 3: Traverse the string from the last character to the first.
// Step 4: Print each character in reverse order.
// Step 5: Display the reversed string.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while(str[length] != '\0')
    {
        length++;
    }

    cout << "Reversed string: ";

    for(int i = length - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}

/*
Output:
Enter a string: Hello World
Reversed string: dlroW olleH
*/