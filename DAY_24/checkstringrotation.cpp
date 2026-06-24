// Program to check the string rotation:
// Steps:
// Step 1: Input two strings from the user.
// Step 2: Find the lengths of both strings.
// Step 3: If lengths are different, strings cannot be rotations.
// Step 4: Concatenate the first string with itself.
// Step 5: Check whether the second string is present in the concatenated string.
// Step 6: If present, the second string is a rotation of the first.
// Step 7: Display the result.
// Time Complexity: O(n²)

#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100], temp[200];
    int len1 = 0, len2 = 0;
    bool isRotation = false;

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    if(len1 == len2)
    {
        // Copy str1 twice into temp
        int k = 0;

        for(int i = 0; i < len1; i++)
            temp[k++] = str1[i];

        for(int i = 0; i < len1; i++)
            temp[k++] = str1[i];

        temp[k] = '\0';

        // Check if str2 is a substring of temp
        for(int i = 0; temp[i] != '\0'; i++)
        {
            int j;

            for(j = 0; str2[j] != '\0'; j++)
            {
                if(temp[i + j] != str2[j])
                    break;
            }

            if(str2[j] == '\0')
            {
                isRotation = true;
                break;
            }
        }
    }

    if(isRotation)
    {
        cout << "String is a Rotation";
    }
    else
    {
        cout << "String is Not a Rotation";
    }

    return 0;
}

/*
Output 1:
Enter first string: abcd
Enter second string: cdab

String is a Rotation

Output 2:
Enter first string: abcd
Enter second string: acbd

String is Not a Rotation
*/