// Program to count words in a string:
// Steps:
// Step 1: Input a sentence from the user.
// Step 2: Initialize word count.
// Step 3: Check if the sentence is not empty.
// Step 4: Traverse the sentence character by character.
// Step 5: Count spaces and increment word count.
// Step 6: Display the total number of words.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int words = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    if(str[0] != '\0')
    {
        words = 1;

        for(int i = 0; str[i] != '\0'; i++)
        {
            if(str[i] == ' ')
            {
                words++;
            }
        }
    }

    cout << "Number of Words = " << words;

    return 0;
}

/*
Output:
Enter a sentence: Welcome to C Plus Plus

Number of Words = 5
*/