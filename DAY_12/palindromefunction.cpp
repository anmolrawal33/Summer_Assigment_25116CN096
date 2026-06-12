// function to check palindrome or not:
// Steps:
// Step 1: Create a function to check whether a number is palindrome.
// Step 2: Take a number as input from the user.
// Step 3: Reverse the number inside the function.
// Step 4: Compare the reversed number with the original number.
// Step 5: Return true if both are equal, otherwise return false.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int original = num;
    int reverse = 0;

    while(num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    return (original == reverse);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(isPalindrome(num))
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}

/*
Output:
Enter a number: 121
Palindrome Number
*/