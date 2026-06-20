// Program to find rowwise sum:
// Steps:
// Step 1: Take the number of rows and columns as input.
// Step 2: Input all matrix elements.
// Step 3: Traverse each row of the matrix.
// Step 4: Calculate the sum of elements in each row.
// Step 5: Display the row-wise sums.

// Logic:
// For every row i, initialize sum = 0.
// Traverse all columns j and add matrix[i][j] to sum.
// Print the sum for each row separately.

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

    cout << "Row-wise sums are:\n";

    for(int i = 0; i < rows; i++)
    {
        int sum = 0;

        for(int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }

        cout << "Sum of Row " << i + 1 << " = " << sum << endl;
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

Row-wise sums are:
Sum of Row 1 = 6
Sum of Row 2 = 15
Sum of Row 3 = 24
*/