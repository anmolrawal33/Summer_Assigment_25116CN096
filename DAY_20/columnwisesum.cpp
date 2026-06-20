// Program to find colimn wise sum:
// Steps:
// Step 1: Take the number of rows and columns as input.
// Step 2: Input all matrix elements.
// Step 3: Traverse each column of the matrix.
// Step 4: Calculate the sum of elements in each column.
// Step 5: Display the column-wise sums.

// Logic:
// For every column j, initialize sum = 0.
// Traverse all rows i and add matrix[i][j] to sum.
// Print the sum for each column separately.

// Time Complexity: O(rows × columns)

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols];

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Column-wise sums are:\n";

    for(int j = 0; j < cols; j++)
    {
        int sum = 0;

        for(int i = 0; i < rows; i++)
        {
            sum += matrix[i][j];
        }

        cout << "Sum of Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}

/*
Output:
Enter number of rows and columns: 3 3

Enter matrix elements:
1 2 3
4 5 6
7 8 9

Column-wise sums are:
Sum of Column 1 = 12
Sum of Column 2 = 15
Sum of Column 3 = 18
*/