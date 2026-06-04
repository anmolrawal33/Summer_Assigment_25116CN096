//program to Print Armstrong numbers in a range.
// step 1. take the lower and upper limit of the range from the user
// step 2. use a for loop to iterate through the numbers in the range
// step 3. for each number, initialize a variable to store the sum of cubes of digits and a variable to store the original number
// step 4. use a while loop to extract each digit of the number and calculate the cube of the digit and add it to the sum variable
// step 5. after the loop, compare the sum with the original number and print the number if it is an Armstrong number
#include <iostream>
using namespace std;
int main() {
    int lower, upper;
    cout << "Enter the lower and upper limit: ";
    cin >> lower >> upper;
    cout << "Armstrong numbers between " << lower << " and " << upper << " are: ";
    for (int num = lower; num <= upper; ++num) {
        int originalNum = num, remainder, result = 0;
        while (originalNum != 0) {
            remainder = originalNum % 10; // extract the last digit
            result += remainder * remainder * remainder; // add the cube of the digit to the result
            originalNum /= 10; // remove the last digit
        }
        if (result == num)
            cout << num << " ";
    }
    return 0;
}
//output
//Enter the lower and upper limit: 100 500
//Armstrong numbers between 100 and 500 are: 153 370 371
