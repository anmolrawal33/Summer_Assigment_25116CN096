// Program to find reverse of a number using recursion:
// Program to reverse a number using recursion
// Step 1. Take input from user
// Step 2. Make a recursive function for reversing the number
// Step 3. Take the last digit and add it to the reversed number
// Step 4. Call the function again with n/10
// Step 5. Print the reversed number:

#include <iostream>
using namespace std;

int rev = 0;

void reverseNumber(int n) {
    if (n == 0)
        return;

    rev = rev * 10 + (n % 10);
    reverseNumber(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    reverseNumber(n);

    cout << "Reversed number: " << rev << endl;

    return 0;
}

// Output
// Enter a number: 1234
// Reversed number: 4321