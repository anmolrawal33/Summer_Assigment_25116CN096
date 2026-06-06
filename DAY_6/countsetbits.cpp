// Program to count set bits:
// Step 1. Take input from user
// Step 2. Initialize variables
// Step 3. Loop through the binary number and count the set bits
// The program only uses a single loop which makes it more effective and the time complexity of the program is linear which is O(n) where n is the number of digits in the binary number. The program also uses a simple if condition to check if the last digit of the binary number is 1 or not, if it is 1 then it increments the count variable. The final result will be stored in the variabl
//
#include <iostream>
using namespace std;
int main() {
    long long binary, count = 0;
    cout << "Enter a binary number: ";
    cin >> binary;
    while (binary > 0) {
        if (binary % 10 == 1) {
            count++;
        }
        binary /= 10;
    }
    cout << "Number of set bits: " << count << endl;
    return 0;
}
//output
// Enter a binary number: 1011
// Number of set bits: 3
