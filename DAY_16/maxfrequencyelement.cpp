// P// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: For each element, count its occurrences in the array.
// Step 4: Keep track of the element with the highest frequency.
// Step 5: Display the maximum frequency element and its frequency.
// Time Complexity: O(n²)

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

    int maxFreq = 0;
    int maxElement = arr[0];

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxFreq)
        {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "Maximum Frequency Element = " << maxElement << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}

/*
Output:
Enter size of array: 7
Enter array elements: 10 20 10 30 10 20 40
Maximum Frequency Element = 10
Frequency = 3
*/