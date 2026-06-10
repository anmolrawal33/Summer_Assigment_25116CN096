// Program to print out character pyramid:
// Steps:
// Step 1: Run the outer loop to print each row.
// Step 2: Print spaces before characters.
// Step 3: Print characters in increasing order from A.
// Step 4: Print characters in decreasing order.
// Step 5: Move to the next line after each row.

// Logic:
// Outer loop controls the rows.
// First inner loop prints spaces.
// Second inner loop prints characters in ascending order.
// Third inner loop prints characters in descending order.
// This creates a full character pyramid.

// Time Complexity: O(n²)

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for(char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch;
        }

        for(char ch = 'A' + i - 2; ch >= 'A'; ch--)
        {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}

/*
Output:
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/