//Program to subtract two matrices:
// Steps:
// Step 1: Take the number of rows and columns as input.
// Step 2: Input elements of the first matrix.
// Step 3: Input elements of the second matrix.
// Step 4: Subtract corresponding elements of the second matrix from the first matrix.
// Step 5: Store the result in a third matrix.
// Step 6: Display the resultant matrix.

// Logic:
// Two matrices can be subtracted only if they have the same dimensions.
// Subtract elements at the same position in both matrices.
// Store the difference in the result matrix and print it.

// Time Complexity: O(rows × columns)

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int A[rows][cols], B[rows][cols], C[rows][cols];

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Difference of Matrices:\n";

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Output:
Enter number of rows and columns: 2 2

Enter elements of first matrix:
5 6
7 8

Enter elements of second matrix:
1 2
3 4

Difference of Matrices:
4 4
4 4
*/