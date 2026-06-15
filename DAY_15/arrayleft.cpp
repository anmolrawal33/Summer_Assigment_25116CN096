// Program to rotate an array left:
// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: Store the first element in a temporary variable.
// Step 4: Shift all elements one position to the left.
// Step 5: Place the first element at the last position.
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

    int temp = arr[0];

    for(int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;

    cout << "Array after left rotation: ";

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
Array after left rotation: 20 30 40 50 10
*/