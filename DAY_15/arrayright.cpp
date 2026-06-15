// Program to rotate an array right:
// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: Store the last element in a temporary variable.
// Step 4: Shift all elements one position to the right.
// Step 5: Place the last element at the first position.
// Step 6: Display the rotated array.
// Time Complexity: O(n)

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

    int temp = arr[n - 1];

    for(int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;

    cout << "Array after right rotation: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Output:
Enter size of array: 5
Enter array elements: 10 20 30 40 50
Array after right rotation: 50 10 20 30 40
*/