// Program to merge two sorted arrays:
// Steps:
// Step 1: Input the size and elements of the first sorted array.
// Step 2: Input the size and elements of the second sorted array.
// Step 3: Compare elements of both arrays.
// Step 4: Insert the smaller element into the merged array.
// Step 5: Copy remaining elements of any array.
// Step 6: Display the merged sorted array.
// Time Complexity: O(n + m)

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter size of first sorted array: ";
    cin >> n1;

    int arr1[n1];

    cout << "Enter elements of first array:\n";
    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second sorted array: ";
    cin >> n2;

    int arr2[n2];

    cout << "Enter elements of second array:\n";
    for(int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int merged[n1 + n2];

    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    while(i < n1)
    {
        merged[k++] = arr1[i++];
    }

    while(j < n2)
    {
        merged[k++] = arr2[j++];
    }

    cout << "Merged Sorted Array:\n";

    for(int i = 0; i < n1 + n2; i++)
    {
        cout << merged[i] << " ";
    }

    return 0;
}

/*
Output:
Enter size of first sorted array: 5
Enter elements of first array:
1 3 5 7 9

Enter size of second sorted array: 4
Enter elements of second array:
2 4 6 8

Merged Sorted Array:
1 2 3 4 5 6 7 8 9
*/