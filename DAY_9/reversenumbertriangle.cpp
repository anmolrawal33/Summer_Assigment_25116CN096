// Program to print out reverse number trinagle:
// Program to print reverse number triangle
// Step 1. Take number of rows from user
// Step 2. Use outer loop in reverse order
// Step 3. Use inner loop to print numbers from 1 to row number
// Step 4. Print fewer numbers in each row
// Step 5. Move to next line after each row.
// Time complexity is O(n²) because two loops are used.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

// Output
// Enter number of rows: 5
// 12345
// 1234
// 123
// 12
// 1
