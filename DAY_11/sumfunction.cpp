// function to process sum of two numbers:
// Steps:
// Step 1: Create a function to add two numbers.
// Step 2: Take two numbers as input from the user.
// Step 3: Call the function and pass both numbers.
// Step 4: Display the sum returned by the function.

// Time Complexity: O(1)

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum = " << sum(num1, num2);

    return 0;
}

/*
Output:
Enter two numbers: 10 20
Sum = 30
*/