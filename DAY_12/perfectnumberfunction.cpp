// Program of defining a perfect number using function:
// Steps:
// Step 1: Create a function to check whether a number is perfect.
// Step 2: Take a number as input from the user.
// Step 3: Find the sum of all proper divisors of the number.
// Step 4: Compare the sum with the original number.
// Step 5: Return true if both are equal, otherwise return false.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

bool isPerfect(int num)
{
    int sum = 0;

    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }

    return (sum == num);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(isPerfect(num))
        cout << "Perfect Number";
    else
        cout << "Not a Perfect Number";

    return 0;
}

/*
Output:
Enter a number: 28
Perfect Number
*/