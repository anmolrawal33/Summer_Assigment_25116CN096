// Program to find out common character in the string:
// Steps:
// Step 1: Input two strings from the user.
// Step 2: Traverse each character of the first string.
// Step 3: Compare it with every character of the second string.
// Step 4: If a common character is found, display it.
// Step 5: Avoid printing duplicate common characters.
// Step 6: Display all common characters between the strings.
// Time Complexity: O(n²)

#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];
    bool found = false;

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    cout << "Common Characters: ";

    for(int i = 0; str1[i] != '\0'; i++)
    {
        bool alreadyPrinted = false;

        for(int k = 0; k < i; k++)
        {
            if(str1[i] == str1[k])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        for(int j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                cout << str1[i] << " ";
                found = true;
                break;
            }
        }
    }

    if(!found)
    {
        cout << "No Common Characters Found";
    }

    return 0;
}

/*
Output:
Enter first string: programming
Enter second string: gaming

Common Characters:
g a m i n
*/