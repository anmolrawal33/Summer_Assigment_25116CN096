// Program to print out number triangle:
// Program to print number triangle pattern
// Step 1. Take number of rows from user
// Step 2. Use outer loop for rows
// Step 3. Use inner loop to print numbers from 1 to row number
// Step 4. Move to next line after each row
// Step 5. Print the pattern
// The program uses nested loops to print a number triangle.
// The outer loop controls the rows and the inner loop prints the numbers.
// Time complexity is O(n²) because two loops are used.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

// Output
// Enter number of rows: 5
// 1
// 12
// 123
// 1234
// 12345