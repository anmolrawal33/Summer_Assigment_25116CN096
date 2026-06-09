// Program to find out sum of digits using recursion:
// Program to find sum of digits using recursion
// Step 1. Take input from user
// Step 2. Make a recursive function for sum of digits
// Step 3. If number becomes 0 return 0
// Step 4. Add last digit with sumDigits(n/10)
// Step 5. Print the answer


#include <iostream>
using namespace std;

int SumOfDigits(int n) {
    if (n == 0)
        return 0;

    return (n % 10) + SumOfDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = SumOfDigits(n);

    cout << "Sum of digits: " << result << endl;

    return 0;
}

// Output
// Enter a number: 1234
// Sum of digits: 10