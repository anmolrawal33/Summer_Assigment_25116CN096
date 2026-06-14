// Program to find out the second largest number:
// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: Assume the first element as largest and second largest.
// Step 4: Traverse the array and update largest and second largest.
// Step 5: Display the second largest element:
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

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest Element = " << secondLargest;

    return 0;
}

/*
Output:
Enter size of array: 5
Enter array elements: 10 25 40 30 20
Second Largest Element = 30
*/