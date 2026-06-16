 // Program to Find pair with given sum.
 // Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: Take the required sum as input.
// Step 4: Compare every pair of elements in the array.
// Step 5: If the sum of a pair is equal to the required sum, print the pair.
// Step 6: Display all pairs having the given sum.
// Time Complexity: O(n²)

#include <iostream>
using namespace std;

int main()
{
    int n, targetSum;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter required sum: ";
    cin >> targetSum;

    bool found = false;

    cout << "Pairs with given sum are:" << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == targetSum)
            {
                cout << arr[i] << " + " << arr[j]
                     << " = " << targetSum << endl;
                found = true;
            }
        }
    }

    if(found == false)
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
1 + 4 = 5
2 + 3 = 5
*/