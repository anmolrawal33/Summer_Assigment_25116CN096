// Program to print half pyramid:
// Program to print half pyramid pattern
// Step 1. Take number of rows from user
// Step 2. Use outer loop for rows
// Step 3. Use inner loop to print stars
// Step 4. Print one extra star in each row
// Step 5. Move to next line after each row
// The pattern printed will be in half pyramid shape:

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

// Output
// Enter number of rows: 5
// *
// * *
// * * *
// * * * *
// * * * * *