// Program to multiply two matrices:
// Steps:
// Step 1: Take the order of the two matrices as input.
// Step 2: Check whether multiplication is possible.
// Step 3: Input elements of both matrices.
// Step 4: Multiply the matrices using nested loops.
// Step 5: Store the result in a third matrix.
// Step 6: Display the resultant matrix.

// Logic:
// Matrix multiplication is possible only if
// number of columns of first matrix = number of rows of second matrix.
// For each element result[i][j],
// multiply corresponding elements and add their products.
//
// result[i][j] += matrix1[i][k] * matrix2[k][j]

// Time Complexity: O(r1 × c2 × c1)

#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if(c1 != r2)
    {
        cout << "Matrix multiplication is not possible";
        return 0;
    }

    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];

    cout << "Enter first matrix elements:\n";
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter second matrix elements:\n";
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    // Initialize result matrix with 0
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
        }
    }

    // Matrix Multiplication
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            for(int k = 0; k < c1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Resultant Matrix:\n";

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Output:
Enter rows and columns of first matrix: 2 2
Enter rows and columns of second matrix: 2 2

Enter first matrix elements:
1 2
3 4

Enter second matrix elements:
5 6
7 8

Resultant Matrix:
19 22
43 50
*/
