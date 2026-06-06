// Program to convert binary to decimal
// Step 1. Take input from user
// Step 2. Initialize variables
// Step 3. Loop through the binary number and calculate the decimal value
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binary, decimal = 0, base = 1, remainder;
    cout << "Enter a binary number: ";
    cin >> binary;
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }
    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}
//output
// Enter a binary number: 1011
// Decimal equivalent: 11
