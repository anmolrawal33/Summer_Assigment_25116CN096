// Program to print out star pyramid:
// Step 1: Run the outer loop to print each row.
// Step 2: Print spaces before stars.
// Step 3: Print stars using the formula (2*i - 1).
// Step 4: Move to the next line after each row.

// Logic:
// Outer loop controls the rows.
// First inner loop prints spaces.
// Second inner loop prints stars.
// Stars increase by 2 in every row.

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

        for(int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
// output
//    *
//   ***
//  *****
// *******
// *********