// Program to print out character triangle:
// Program to print character triangle pattern
// Step 1. Take number of rows from user
// Step 2. Use outer loop for rows
// Step 3. Use inner loop to print characters from A onwards
// Step 4. Move to next line after each row
// Step 5. Print the pattern
// TIme complexity is O(n²) because two loops are used.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}

// Output
// Enter number of rows: 5
// A
// AB
// ABC
// ABCD
// ABCDE
