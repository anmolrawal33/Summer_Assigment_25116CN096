// Program to find out the largest and smallest number in an array:
// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: Assume the first element is both largest and smallest.
// Step 4: Traverse the array and compare each element.
// Step 5: Update largest and smallest whenever required.
// Step 6: Display the largest and smallest elements.
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
    int smallest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }

        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "Largest Element = " << largest << endl;
    cout << "Smallest Element = " << smallest;

    return 0;
}

/*
Output:
Enter size of array: 5
Enter array elements: 10 45 20 5 30
Largest Element = 45
Smallest Element = 5
*/