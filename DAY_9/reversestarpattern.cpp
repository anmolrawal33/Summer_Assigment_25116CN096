// Program to print out reverse star pattern
// Program to print reverse star pattern
// Step 1. Take number of rows from user
// Step 2. Use outer loop for rows in reverse order
// Step 3. Use inner loop to print stars
// Step 4. Print fewer stars in each row
// Step 5. Move to next line after each row
// Time complexity is O(n²) because two loops are used.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// Output
// Enter number of rows: 5
// *****
// ****
// ***
// **
// *