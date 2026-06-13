// Program to input and display array:
// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: Use a loop to display the array elements.
// Step 4: Print the elements on the screen.
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

    cout << "Array elements are: ";
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
Array elements are: 10 20 30 40 50
*/