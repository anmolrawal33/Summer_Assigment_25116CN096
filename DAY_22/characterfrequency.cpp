// Program to count character frequency:
// Steps:
// Step 1: Input a string from the user.
// Step 2: Input the character whose frequency is to be counted.
// Step 3: Initialize frequency count to 0.
// Step 4: Traverse the string character by character.
// Step 5: Compare each character with the given character.
// Step 6: Increment count whenever a match is found.
// Step 7: Display the frequency of the character.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    char str[100], ch;
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter character to find frequency: ";
    cin >> ch;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    cout << "Frequency of '" << ch << "' = " << count;

    return 0;
}

/*
Output:
Enter a string: programming

Enter character to find frequency: g

Frequency of 'g' = 2
*/