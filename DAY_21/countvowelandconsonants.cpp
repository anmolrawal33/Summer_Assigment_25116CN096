// Program to find out number of vowel and consonants:
// Steps:
// Step 1: Input a string from the user.
// Step 2: Initialize vowel and consonant counters to 0.
// Step 3: Traverse the string character by character.
// Step 4: Check if the character is an alphabet.
// Step 5: If it is a vowel (a, e, i, o, u), increment vowel count.
// Step 6: Otherwise, increment consonant count.
// Step 7: Display the number of vowels and consonants.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
               ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    cout << "Number of Vowels = " << vowels << endl;
    cout << "Number of Consonants = " << consonants << endl;

    return 0;
}

/*
Output:
Enter a string: Hello World

Number of Vowels = 3
Number of Consonants = 7
*/