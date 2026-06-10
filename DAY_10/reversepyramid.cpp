// Program to print reverse pyramid:
// Steps:
// Step 1: Run the outer loop from n to 1.
// Step 2: Print spaces before stars.
// Step 3: Print stars using the formula (2*i - 1).
// Step 4: Move to the next line after each row.

// Logic:
// Outer loop controls the rows from bottom to top.
// First inner loop prints spaces.
// Second inner loop prints stars.
// Number of stars decreases by 2 in every row.

// Time Complexity: O(n²)

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for(int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

/*
Output:
*********
 *******
  *****
   ***
    *
*/