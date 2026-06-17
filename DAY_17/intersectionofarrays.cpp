// Program to find out the intersection of the arrays:  
// Steps:
// Step 1: Declare two arrays and take their sizes as input.
// Step 2: Input elements of both arrays.
// Step 3: Compare each element of the first array with every element of the second array.
// Step 4: If a common element is found, print it.
// Step 5: Display all common elements present in both arrays.

// Logic:
// Intersection contains only the common elements of both arrays.
// Use two loops to compare elements of both arrays.
// If two elements are equal, print that element.

// Time Complexity: O(n × m)

#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    int arr1[n];

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    int arr2[m];

    cout << "Enter elements of second array: ";
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    cout << "Intersection of Arrays: ";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}

/*
Output:
Enter size of first array: 4
Enter elements of first array: 1 2 3 4
Enter size of second array: 4
Enter elements of second array: 3 4 5 6
Intersection of Arrays: 3 4
*/