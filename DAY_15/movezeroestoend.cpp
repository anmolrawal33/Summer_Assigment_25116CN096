// Program to move zeroes to end in an aray:
// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: Traverse the array and place all non-zero elements at the beginning.
// Step 4: Fill the remaining positions with zeroes.
// Step 5: Display the modified array.
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

    int index = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    while(index < n)
    {
        arr[index] = 0;
        index++;
    }

    cout << "Array after moving zeroes to end: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Output:
Enter size of array: 7
Enter array elements: 1 0 2 0 3 4 0
Array after moving zeroes to end: 1 2 3 4 0 0 0
*/