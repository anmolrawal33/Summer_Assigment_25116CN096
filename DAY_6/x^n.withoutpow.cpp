// To valculate x^n without using pow function
// Step 1\. Take input from user
// Step 2\. Initialize variables
// Step 3\. Loop through the exponent and calculate the result
// The program also handles negative exponents by taking the reciprocal of the result
// The final result will be stored in the variable 'result' and printed to the user
// Only a single loop is used to calculate the power, so that it takes only the linear time complexity whhich is too good

#include <iostream>
using namespace std;
int main() {
    double x, result = 1.0;
    int n;
    cout << "Enter a number (x): ";
    cin >> x;
    cout << "Enter an exponent (n): ";
    cin >> n;
    for (int i = 0; i < abs(n); i++) {
        result *= x;
    }
    if (n < 0) {
        result = 1.0 / result;
    }
    cout << "Result: " << result << endl;
    return 0;
}
//output
// Enter a number (x): 2
// Enter an exponent (n): 3
