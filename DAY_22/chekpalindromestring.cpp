// Program to check palindrome string:
// Steps:
// Step 1: Input a string from the user.
// Step 2: Find the length of the string.
// Step 3: Compare characters from the beginning and end.
// Step 4: If any pair of characters is different, the string is not a palindrome.
// Step 5: If all corresponding characters are equal, the string is a palindrome.
// Step 6: Display the result.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while(str[length] != '\0')
    {
        length++;
    }

    for(int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
    {
        cout << "String is Palindrome";
    }
    else
    {
        cout << "String is Not Palindrome";
    }

    return 0;
}

/*
Output 1:
Enter a string: madam

String is Palindrome

Output 2:
Enter a string: hello

String is Not Palindrome
*/