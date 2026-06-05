// progra to print largest prime factor of a number
// Step 1. take a number from the user
// Step 2. initialize a variable to store the largest prime factor
// Step 3. use a for loop to iterate from 2 to the number and check if the number is divisible by the current number
// Step 4. if it is divisible, update the largest prime factor variable and divide the number by the current number until it is no longer divisible
#include <iostream>
using namespace std;
int main() {
    int num, largestPrimeFactor = -1;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i <= num; ++i) {
        while (num % i == 0) { // check if the number is divisible by i
            largestPrimeFactor = i; // update the largest prime factor
            num /= i; // divide the number by i
        }
    }
    if (largestPrimeFactor != -1)
        cout << "The largest prime factor is: " << largestPrimeFactor;
    else
        cout << "No prime factors found.";
    return 0;
}
//output
//Enter a number: 28
//The largest prime factor is: 7
// the largest prime factor will automatically get stored in the largestprime factor variable as the loop iterates and the value will be checked and changed again and again
