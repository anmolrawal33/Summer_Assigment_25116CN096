// Program to create the menu driven array operation:
// Steps:
// Step 1: Create an array and take its size and elements as input.
// Step 2: Display a menu for different array operations.
// Step 3: Perform the selected operation using a switch statement.
// Step 4: Display the result of the chosen operation.
// Step 5: Exit the program.

// Logic:
// Store array elements.
// Use a menu to perform operations like Display, Sum, Maximum and Minimum.
// Execute the selected operation using a switch statement.

// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, sum = 0;

    cout << "Enter Size of Array: ";
    cin >> n;

    cout << "Enter Array Elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\n----- Menu -----\n";
    cout << "1. Display Array\n";
    cout << "2. Find Sum\n";
    cout << "3. Find Maximum\n";
    cout << "4. Find Minimum\n";
    cout << "Enter Your Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Array Elements: ";
            for(int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 2:
            for(int i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            cout << "Sum = " << sum << endl;
            break;

        case 3:
        {
            int max = arr[0];
            for(int i = 1; i < n; i++)
            {
                if(arr[i] > max)
                    max = arr[i];
            }
            cout << "Maximum Element = " << max << endl;
            break;
        }

        case 4:
        {
            int min = arr[0];
            for(int i = 1; i < n; i++)
            {
                if(arr[i] < min)
                    min = arr[i];
            }
            cout << "Minimum Element = " << min << endl;
            break;
        }

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}

/*
Output:

Enter Size of Array: 5
Enter Array Elements:
10
20
30
40
50

----- Menu -----
1. Display Array
2. Find Sum
3. Find Maximum
4. Find Minimum
Enter Your Choice: 2

Sum = 150
*/