// Program to implement the linear search
// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: Take the element to be searched.
// Step 4: Traverse the array one by one.
// Step 5: Compare each element with the search element.
// Step 6: If found, display its position; otherwise display not found.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    int n, key;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int found = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element found at position " << i + 1;
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        cout << "Element not found";
    }

    return 0;
}

/*
Output:
Enter size of array: 5
Enter array elements: 10 20 30 40 50
Enter element to search: 30
Element found at position 3
*/