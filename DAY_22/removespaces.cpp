// Program to remove spaces from the string:
// Steps:
// Step 1: Input a string from the user.
// Step 2: Traverse the string character by character.
// Step 3: Copy only non-space characters to a new position.
// Step 4: Ignore all space characters.
// Step 5: Add the null character '\0' at the end.
// Step 6: Display the modified string.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int j = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    cout << "String after removing spaces: " << str;

    return 0;
}

/*
Output:
Enter a string: Welcome To C Plus Plus

String after removing spaces: WelcomeToCPlusPlus
*/