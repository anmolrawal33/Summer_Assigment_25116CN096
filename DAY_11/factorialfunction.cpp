// Program to find the factorial of a number using function 
// Steps:
// Step 1: Create a function to calculate the factorial of a number.
// Step 2: Take a number as input from the user.
// Step 3: Call the function and pass the number.
// Step 4: Calculate factorial using a loop inside the function.
// Step 5: Display the factorial returned by the function.
// Time Complexity: O(n),Single loop used:

#include <iostream>
using namespace std;

long long factorial(int n)
{
    long long fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial = " << factorial(num);

    return 0;
}

/*
Output:
Enter a number: 5
Factorial = 120
*/