// To find out the length of the string without using strlen():
// Steps:
// Step 1: Input a string from the user.
// Step 2: Initialize a counter variable length = 0.
// Step 3: Traverse the string character by character.
// Step 4: Increment length until the null character '\0' is reached.
// Step 5: Display the length of the string.
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

    cout << "Length of the string = " << length;

    return 0;
}

/*
Output:
Enter a string: Hello World
Length of the string = 11
*/