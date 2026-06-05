// a program to Print factors of a number.
// Step 1. take a number from the user
// Step 2. use a for loop to iterate from 1 to the number and check if the number is a divisor of the given number
// Step 3. if it is a divisor, print it as a factor of the number
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " "; // print the factor
        }
    }
    return 0;
}
//output
//Enter a number: 12
//Factors of 12 are: 1 2 3 4 6 12
