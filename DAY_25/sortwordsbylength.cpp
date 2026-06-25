// Program to sort words by length:
// Steps:
// Step 1: Input a sentence from the user.
// Step 2: Traverse the sentence word by word.
// Step 3: Calculate the length of each word.
// Step 4: Keep track of the longest word and its length.
// Step 5: Update the longest word whenever a longer word is found.
// Step 6: Display the longest word and its length.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int maxLen = 0, currLen = 0;
    int start = 0, maxStart = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    for(int i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            currLen++;
        }
        else
        {
            if(currLen > maxLen)
            {
                maxLen = currLen;
                maxStart = start;
            }

            currLen = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    cout << "Longest Word = ";

    for(int i = maxStart; i < maxStart + maxLen; i++)
    {
        cout << str[i];
    }

    cout << endl;
    cout << "Length = " << maxLen;

    return 0;
}

/*
Output:
Enter a sentence: Welcome to C Plus Plus Programming

Longest Word = Programming
Length = 11
*/