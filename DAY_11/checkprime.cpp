// Program to check if a number is prime or not by function
// Steps:
// Step 1: Create a function to check whether a number is prime.
// Step 2: Take a number as input from the user.
// Step 3: Call the function and pass the number.
// Step 4: If the function returns true, print Prime.
// Step 5: Otherwise, print Not Prime.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1)
        return false;

    for(int i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(isPrime(num))
        cout << "Prime Number";
    else
        cout << "Not Prime Number";

    return 0;
}

/*
Output:
Enter a number: 13
Prime Number
*/