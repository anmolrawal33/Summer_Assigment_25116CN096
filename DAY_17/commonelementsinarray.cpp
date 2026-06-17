// Program to find out the common element in the array:
// Steps:
// Step 1: Declare two arrays and take their sizes as input.
// Step 2: Input elements of both arrays.
// Step 3: Compare each element of the first array with every element of the second array.
// Step 4: If a common element is found, print it.
// Step 5: Display all common elements.
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

    cout << "Common Elements: ";

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                found = true;
                break;
            }
        }
    }

    if(!found)
    {
        cout << "No common element found";
    }

    return 0;
}

/*
Output:
Enter size of first array: 4
Enter elements of first array: 1 2 3 4
Enter size of second array: 4
Enter elements of second array: 3 4 5 6
Common Elements: 3 4
*/