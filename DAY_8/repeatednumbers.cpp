// Program to print out repeated numbers
// Program to print repeated-number pattern
// Step 1. Take number of rows from user
// Step 2. Use outer loop for rows
// Step 3. Use inner loop to print the row number
// Step 4. Print the number i, i times
// Step 5. Move to next line after each row
// Time complexity is O(n²) because two loops are used.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}

// Output
// Enter number of rows: 5
// 1
// 22
// 333
// 4444
// 55555