// Program to find out the missing numbers in the array:
// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements in sorted order.
// Step 3: Traverse the array and check the difference between consecutive elements.
// Step 4: If the difference is greater than 1, print the missing numbers.
// Step 5: Display all missing numbers in the array..
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Missing Numbers: ";

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = arr[i] + 1; j < arr[i + 1]; j++)
        {
            cout << j << " ";
        }
    }

    return 0;
}

/*
Output:
Enter size of array: 5
Enter sorted array elements: 1 2 4 7 10
Missing Numbers: 3 5 6 8 9
*/