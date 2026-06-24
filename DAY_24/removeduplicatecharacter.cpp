// Program to remove the duplicate characters:
// Steps:
// Step 1: Input a string from the user.
// Step 2: Traverse each character of the string.
// Step 3: Check whether the character has already appeared before.
// Step 4: If it is not a duplicate, store it in a new string.
// Step 5: Ignore duplicate characters.
// Step 6: Display the string after removing duplicates.
// Time Complexity: O(n²)

#include <iostream>
using namespace std;

int main()
{
    char str[100], result[100];
    int k = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        bool duplicate = false;

        for(int j = 0; j < i; j++)
        {
            if(str[i] == str[j])
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
        {
            result[k] = str[i];
            k++;
        }
    }

    result[k] = '\0';

    cout << "String after removing duplicate characters: "
         << result;

    return 0;
}

/*
Output:
Enter a string: programming

String after removing duplicate characters: progamin
*/