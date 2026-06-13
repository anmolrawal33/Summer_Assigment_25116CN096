// Program to count even and odd numbers in the array:
// Steps:
// Step 1: Declare an array and take its size as input.
// Step 2: Input all array elements from the user.
// Step 3: Traverse the array using a loop.
// Step 4: Check each element for even or odd.
// Step 5: Increase the respective counter.
// Step 6: Display the count of even and odd numbers.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    int n, even = 0, odd = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << "Even Numbers = " << even << endl;
    cout << "Odd Numbers = " << odd;

    return 0;
}

/*
Output:
Enter size of array: 5
Enter array elements: 10 15 20 25 30
Even Numbers = 3
Odd Numbers = 2
*/