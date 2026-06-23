// Program to find first repeating character:
// Steps:
// Step 1: Input a string from the user.
// Step 2: Traverse each character of the string.
// Step 3: For every character, check whether it appears again.
// Step 4: Find the first character that repeats.
// Step 5: Display the first repeating character.
// Step 6: If no repeating character exists, display an appropriate message.
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
        for(int j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                cout << "First Repeating Character = " << str[i];
                found = true;
                break;
            }
        }

        if(found)
        {
            break;
        }
    }

    if(!found)
    {
        cout << "No Repeating Character Found";
    }

    return 0;
}

/*
Output 1:
Enter a string: swiss

First Repeating Character = s

Output 2:
Enter a string: abcde

No Repeating Character Found
*/