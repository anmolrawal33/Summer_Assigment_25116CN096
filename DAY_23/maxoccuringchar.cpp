// Program to find out maximum occuring character:
// Steps:
// Step 1: Input a string from the user.
// Step 2: Traverse each character of the string.
// Step 3: Count the frequency of every character.
// Step 4: Keep track of the character with maximum frequency.
// Step 5: Update maximum frequency whenever a higher count is found.
// Step 6: Display the maximum occurring character and its frequency.
// Time Complexity: O(n²)

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char maxChar;
    int maxCount = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;

        for(int j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }

    cout << "Maximum Occurring Character = " << maxChar << endl;
    cout << "Frequency = " << maxCount;

    return 0;
}

/*
Output:
Enter a string: programming

Maximum Occurring Character = r
Frequency = 2
*/