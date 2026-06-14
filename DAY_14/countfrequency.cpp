// Program to count the frequency of an element:
// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: Take the element whose frequency is to be found.
// Step 4: Traverse the array and count occurrences of that element.
// Step 5: Display the frequency count.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    int n, element, count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to find frequency: ";
    cin >> element;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            count++;
        }
    }

    cout << "Frequency of " << element << " = " << count;

    return 0;
}

/*
Output:
Enter size of array: 6
Enter array elements: 10 20 10 30 10 40
Enter element to find frequency: 10
Frequency of 10 = 3
*/