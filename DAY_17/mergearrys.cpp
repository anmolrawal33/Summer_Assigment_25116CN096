// Program to merge the arrays:
// Steps:
// Step 1: Declare two arrays and take their sizes as input.
// Step 2: Input elements of both arrays.
// Step 3: Create a third array to store merged elements.
// Step 4: Copy elements of the first array into the third array.
// Step 5: Copy elements of the second array after the first array's elements.
// Step 6: Display the merged array.
// Time Complexity: O(n + m)

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

    int merged[n + m];

    for(int i = 0; i < n; i++)
    {
        merged[i] = arr1[i];
    }

    for(int i = 0; i < m; i++)
    {
        merged[n + i] = arr2[i];
    }

    cout << "Merged Array: ";

    for(int i = 0; i < n + m; i++)
    {
        cout << merged[i] << " ";
    }

    return 0;
}

/*
Output:
Enter size of first array: 3
Enter elements of first array: 10 20 30
Enter size of second array: 3
Enter elements of second array: 40 50 60
Merged Array: 10 20 30 40 50 60
*/