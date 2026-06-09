// Program to print out repeated character pattern:
// Program to print repeated character pattern
// Step 1. Take number of rows from user
// Step 2. Use outer loop for rows
// Step 3. Print the same character in each row
// Step 4. Print character i times in row i
// Step 5. Move to next line after each row
// Time complexity is O(n²) because two loops are used.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        char ch = 'A' + i - 1;

        for (int j = 1; j <= i; j++) {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}

// Output
// Enter number of rows: 5
// A
// BB
// CCC
// DDDD
// EEEEE