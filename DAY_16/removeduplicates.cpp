// Program to remove the duplicates from array:
// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: Take the target sum as input.
// Step 4: Compare every pair of elements in the array.
// Step 5: If the sum of a pair equals the target sum, print the pair.
// Step 6: Display all such pairs.
// Time Complexity: O(n²)

#include <iostream>
using namespace std;

int main()
{
    int n, sum;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter required sum: ";
    cin >> sum;

    cout << "Pairs with given sum are: " << endl;

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }

    if(!found)
    {
        cout << "No pair found";
    }

    return 0;
}

/*
Output:
Enter size of array: 5
Enter array elements: 1 2 3 4 5
Enter required sum: 5
Pairs with given sum are:
(1, 4)
(2, 3)
*/