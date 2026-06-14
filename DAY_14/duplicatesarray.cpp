//  Program to find out the duplicates in an array:
// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: Compare each element with the remaining elements.
// Step 4: If two elements are equal, print the duplicate element.
// Step 5: Continue until all duplicates are checked.
// Time Complexity: O(n²)

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Duplicate Elements are: ";

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}

/*
Output:
Enter size of array: 7
Enter array elements: 10 20 30 20 40 10 50
Duplicate Elements are: 10 20
*/