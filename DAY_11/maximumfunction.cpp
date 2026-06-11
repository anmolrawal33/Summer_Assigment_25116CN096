// Program to find out maximum of two numbers by function
// Steps:
// Step 1: Create a function to find the maximum of two numbers.
// Step 2: Take two numbers as input from the user.
// Step 3: Call the function and pass both numbers.
// Step 4: Display the larger number returned by the function.
// Time Complexity: O(1)

#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Maximum number = " << maximum(num1, num2);

    return 0;
}

/*
Output:
Enter two numbers: 15 20
Maximum number = 20
*/