// Program to convert lowercase to uppercase:
// Steps:
// Step 1: Input a string from the user.
// Step 2: Traverse the string character by character.
// Step 3: Check if a character is lowercase.
// Step 4: Convert lowercase character to uppercase.
// Step 5: Display the modified string.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    cout << "String in Uppercase: " << str;

    return 0;
}

/*
Output:
Enter a string: Hello World

String in Uppercase: HELLO WORLD
*/