// Program to sort the names alphaetically:
// Steps:
// Step 1: Input the number of names.
// Step 2: Input all names into an array.
// Step 3: Compare each name with the others.
// Step 4: Swap names if they are not in alphabetical order.
// Step 5: Repeat until all names are sorted.
// Step 6: Display the sorted list of names.
// Time Complexity: O(n²)

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    char names[50][100], temp[100];

    cout << "Enter number of names: ";
    cin >> n;
    cin.ignore();

    cout << "Enter names:\n";

    for(int i = 0; i < n; i++)
    {
        cin.getline(names[i], 100);
    }

    // Bubble Sort
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    cout << "Names in Alphabetical Order:\n";

    for(int i = 0; i < n; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}

/*
Output:
Enter number of names: 5

Enter names:
Rahul
Anmol
Vikas
Aman
Rohit

Names in Alphabetical Order:
Aman
Anmol
Rahul
Rohit
Vikas
*/