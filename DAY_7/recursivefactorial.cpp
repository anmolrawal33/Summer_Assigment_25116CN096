// Program to find factorial of a number using recursion
// Step 1. Take input from user
// Step 2. Create a recursive function factorial() // means recursion happen here
// Step 3. Create a condition that gives output: if n is 0 or 1, return 1
// Step 4. Give the main logic: return n * factorial(n - 1)
// Step 5. Call the function and display the result
// The final result will be stored in the variable 'result' and printed to the user.
// Only linear time complexity is there which makes the program efficient and easy to understand.

#include <iostream>
using namespace std;

long long factorial(int n) {  // Here long long is used so that the value will not exceed integer limit
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long result = factorial(n);

    cout << "Factorial: " << result << endl;

    return 0;
}

// Output
// Enter a number: 5
// Factorial: 120