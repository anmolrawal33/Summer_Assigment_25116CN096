// Program to check if a number is a strong number or not
// Step 1. take a number from the user
// Step 2. initialize a variable to store the sum of the factorial of digits
// Step 3. use a while loop to extract each digit from the number and calculate its factorial
// Step 4. add the factorial of each digit to the sum variable
// Step 5. after the loop, compare the sum with the original number and print whether it is a strong number or not
#include <iostream>
using namespace std;
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int num, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num; // store the original number in a temporary variable
    while (temp > 0) {
        int digit = temp % 10; // extract the last digit
        sum += factorial(digit); // add the factorial of the digit to the sum
        temp /= 10; // remove the last digit
    }
    if (sum == num)
        cout << num << " is a strong number.";
    else
        cout << num << " is not a strong number.";
    return 0;
}   
//output
//Enter a number: 145
//145 is a strong number.