// Program to print out number pyramid:
// Steps:
// Step 1: Run the outer loop to print each row.
// Step 2: Print spaces before numbers.
// Step 3: Print numbers in increasing order.
// Step 4: Print numbers in decreasing order.
// Step 5: Move to the next line after each row.

// Logic:
// Outer loop controls the rows.
// First inner loop prints spaces.
// Second inner loop prints numbers in ascending order.
// Third inner loop prints numbers in descending order.
// This creates a full number pyramid.

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

        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for(int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

/*
Output:
    1
   121
  12321
 1234321
123454321
*/