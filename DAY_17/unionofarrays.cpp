// Program to find out the union of te arrays:
// Steps:
// Step 1: Declare two arrays and take their sizes as input.
// Step 2: Input elements of both arrays.
// Step 3: Store all unique elements of the first array in a union array.
// Step 4: Check each element of the second array.
// Step 5: If an element is not already present, add it to the union array.
// Step 6: Display the union of the arrays.

// Logic:
// Union contains all distinct elements from both arrays.
// First add unique elements from the first array.
// Then add only those elements from the second array
// which are not already present in the union array.

// Time Complexity: O((n + m)²)

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

    int uni[n + m];
    int k = 0;

    for(int i = 0; i < n; i++)
    {
        bool found = false;

        for(int j = 0; j < k; j++)
        {
            if(arr1[i] == uni[j])
            {
                found = true;
                break;
            }
        }

        if(!found)
        {
            uni[k++] = arr1[i];
        }
    }

    for(int i = 0; i < m; i++)
    {
        bool found = false;

        for(int j = 0; j < k; j++)
        {
            if(arr2[i] == uni[j])
            {
                found = true;
                break;
            }
        }

        if(!found)
        {
            uni[k++] = arr2[i];
        }
    }

    cout << "Union of Arrays: ";

    for(int i = 0; i < k; i++)
    {
        cout << uni[i] << " ";
    }

    return 0;
}

/*
Output:
Enter size of first array: 5
Enter elements of first array: 1 2 3 4 4
Enter size of second array: 5
Enter elements of second array: 3 4 5 6 6
Union of Arrays: 1 2 3 4 5 6
*/