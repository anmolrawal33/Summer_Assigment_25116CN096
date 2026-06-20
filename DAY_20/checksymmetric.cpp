// Program to check symmetric matrix:
// Steps:
// Step 1: Take the order of the square matrix as input.
// Step 2: Input all matrix elements.
// Step 3: Compare each element with its transpose element.
// Step 4: If matrix[i][j] != matrix[j][i], the matrix is not symmetric.
// Step 5: If all corresponding elements are equal, the matrix is symmetric.
// Step 6: Display the result.

// Logic:
// A symmetric matrix is equal to its transpose.
// Check whether every element matrix[i][j] is equal to matrix[j][i].
// If any pair is different, the matrix is not symmetric.

// Time Complexity: O(n²)

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter order of matrix: ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    bool isSymmetric = true;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                isSymmetric = false;
                break;
            }
        }

        if(!isSymmetric)
        {
            break;
        }
    }

    if(isSymmetric)
    {
        cout << "Matrix is Symmetric";
    }
    else
    {
        cout << "Matrix is Not Symmetric";
    }

    return 0;
}

/*
Output 1:
Enter order of matrix: 3

Enter matrix elements:
1 2 3
2 4 5
3 5 6

Matrix is Symmetric

Output 2:
Enter order of matrix: 3

Enter matrix elements:
1 2 3
4 5 6
7 8 9

Matrix is Not Symmetric
*/