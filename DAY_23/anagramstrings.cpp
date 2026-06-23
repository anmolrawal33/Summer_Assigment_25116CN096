// // Steps:
// Step 1: Input two strings from the user.
// Step 2: Find the length of both strings.
// Step 3: If lengths are different, strings are not anagrams.
// Step 4: Count the frequency of each character in both strings.
// Step 5: Compare the frequency counts.
// Step 6: If all frequencies match, strings are anagrams.
// Step 7: Display the result.
// Time Complexity: O(n²)

#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;
    bool isAnagram = true;

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    if(len1 != len2)
    {
        isAnagram = false;
    }
    else
    {
        for(int i = 0; i < len1; i++)
        {
            int count1 = 0, count2 = 0;

            for(int j = 0; j < len1; j++)
            {
                if(str1[i] == str1[j])
                    count1++;

                if(str1[i] == str2[j])
                    count2++;
            }

            if(count1 != count2)
            {
                isAnagram = false;
                break;
            }
        }
    }

    if(isAnagram)
    {
        cout << "Strings are Anagrams";
    }
    else
    {
        cout << "Strings are Not Anagrams";
    }

    return 0;
}

/*
Output 1:
Enter first string: listen
Enter second string: silent

Strings are Anagrams

Output 2:
Enter first string: hello
Enter second string: world

Strings are Not Anagrams
*/