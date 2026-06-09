// Program to print out fibonacci series by recursion:
// Program to print nth Fibonacci number using recursion
// Step 1. Take input from user
// Step 2. Make a recursive function for Fibonacci
// Step 3. If n is 0 return 0 and if n is 1 return 1
// Step 4. Return fibonacci(n-1) + fibonacci(n-2)
// Step 5. Print the answer


#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the position: ";
    cin >> n;

    int result = fibonacci(n);

    cout << "Fibonacci number: " << result << endl;

    return 0;
}

// Output
// Enter the position: 6
// Fibonacci number: 8