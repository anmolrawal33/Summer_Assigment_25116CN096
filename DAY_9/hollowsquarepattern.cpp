// Program to print out hollow square pattern:
// Program to print hollow square pattern
// Step 1. Take size of square from user
// Step 2. Use outer loop for rows
// Step 3. Use inner loop for columns
// Step 4. Print * on borders and space inside
// Step 5. Move to next line after each row
// The outer loop controls the rows and the inner loop controls the columns.
// Time complexity is O(n²) because two loops are used.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}

// Output
// Enter size of square: 5
// * * * * *
// *       *
// *       *
// *       *
// * * * * *