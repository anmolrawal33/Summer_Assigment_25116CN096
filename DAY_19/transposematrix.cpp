// Program to find out transpose of a matrix:
// Steps:
// Step 1: Take the number of rows and columns as input.
// Step 2: Input all matrix elements.
// Step 3: Create another matrix for the transpose.
// Step 4: Interchange rows and columns.
// Step 5: Store matrix[i][j] at transpose[j][i].
// Step 6: Display the transpose matrix.

// Logic:
// In a transpose, rows become columns and columns become rows.
// Copy each element matrix[i][j] to transpose[j][i].
// Then print the transpose matrix.

// Time Complexity: O(rows × columns)

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols];
    int transpose[cols][rows];

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose Matrix:\n";

    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Output:
Enter number of rows and columns: 2 3

Enter matrix elements:
1 2 3
4 5 6

Transpose Matrix:
1 4
2 5
3 6
*/