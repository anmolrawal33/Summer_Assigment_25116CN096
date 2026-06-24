// Program to compress a string:
// Steps:
// Step 1: Input a string from the user.
// Step 2: Traverse the string character by character.
// Step 3: Count consecutive occurrences of the same character.
// Step 4: Print the character followed by its count.
// Step 5: Continue until the end of the string.
// Step 6: Display the compressed string.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Compressed String: ";

    for(int i = 0; str[i] != '\0'; )
    {
        int count = 1;
        char ch = str[i];

        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        cout << ch << count;
        i++;
    }

    return 0;
}

/*
Output:
Enter a string: aaabbccccdd

Compressed String: a3b2c4d2
*/