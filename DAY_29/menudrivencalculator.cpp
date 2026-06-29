// Program to create the menu driven calculator:
// Steps:
// Step 1: Take two numbers as input.
// Step 2: Display a menu for arithmetic operations.
// Step 3: Take the user's choice.
// Step 4: Perform the selected operation using a switch statement.
// Step 5: Display the result and exit the program.
// Time Complexity: O(1)

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    int choice;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    cout << "\n----- Calculator Menu -----\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter Your Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            result = num1 + num2;
            cout << "Result = " << result << endl;
            break;

        case 2:
            result = num1 - num2;
            cout << "Result = " << result << endl;
            break;

        case 3:
            result = num1 * num2;
            cout << "Result = " << result << endl;
            break;

        case 4:
            if(num2 != 0)
            {
                result = num1 / num2;
                cout << "Result = " << result << endl;
            }
            else
            {
                cout << "Division by zero is not possible." << endl;
            }
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}

/*
Output:

Enter First Number: 20
Enter Second Number: 5

----- Calculator Menu -----
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter Your Choice: 3

Result = 100
*/