// Program to find out the sum and average of an array:
// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: Find the sum of all elements using a loop.
// Step 4: Calculate the average by dividing sum by number of elements.
// Step 5: Display the sum and average.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    float average;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    return 0;
}

/*
Output:
Enter size of array: 5
Enter array elements: 10 20 30 40 50
Sum = 150
Average = 30
*/