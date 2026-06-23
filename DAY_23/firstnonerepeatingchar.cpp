// Program to find first non repeating character:
// Steps:
// Step 1: Input a string from the user.
// Step 2: Traverse each character of the string.
// Step 3: For every character, count its occurrences in the string.
// Step 4: Find the first character whose frequency is 1.
// Step 5: Display the first non-repeating character.
// Step 6: If no such character exists, display an appropriate message.
// Time Complexity: O(n²)

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    bool found = false;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;

        for(int j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            cout << "First Non-Repeating Character = " << str[i];
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "No Non-Repeating Character Found";
    }

    return 0;
}

/*
Output 1:
Enter a string: swiss

First Non-Repeating Character = w

Output 2:
Enter a string: aabbcc

No Non-Repeating Character Found
*/
