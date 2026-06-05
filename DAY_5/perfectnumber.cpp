//program to Check perfect number.
// Step 1 . take a number from the user
// Step 2. initialize a variable to store the sum of proper divisors
// Step 3. use a for loop to iterate from 1 to the number-1 and check if the number is a divisor of the given number
// Step 4. if it is a divisor, add it to the sum variable
// Step 5. after the loop, compare the sum with the original number and print whether it is a perfect number or not
#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i; // add the divisor to the sum
        }
    }
    if (sum == num)
        cout << num << " is a perfect number.";
    else
        cout << num << " is not a perfect number.";
    return 0;
}
//output
//Enter a number: 28
//28 is a perfect number.