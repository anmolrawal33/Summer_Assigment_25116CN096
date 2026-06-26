// P// Steps:
// Step 1: Initialize the account balance and PIN.
// Step 2: Ask the user to enter the PIN.
// Step 3: If the PIN is incorrect, display an error message and exit.
// Step 4: Display the ATM menu.
// Step 5: Perform the selected operation (Balance, Deposit, Withdraw, Exit).
// Step 6: Update the balance accordingly.
// Step 7: Display the result.
// Time Complexity: O(1)

#include <iostream>
using namespace std;

int main()
{
    int pin, choice;
    int correctPin = 1234;
    float balance = 10000, amount;

    cout << "Enter ATM PIN: ";
    cin >> pin;

    if(pin != correctPin)
    {
        cout << "Invalid PIN";
        return 0;
    }

    cout << "\n----- ATM MENU -----\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Available Balance = " << balance;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Deposit Successful\n";
            cout << "Updated Balance = " << balance;
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if(amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawal Successful\n";
                cout << "Remaining Balance = " << balance;
            }
            else
            {
                cout << "Insufficient Balance";
            }
            break;

        case 4:
            cout << "Thank You for Using ATM";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}

/*
Output:
Enter ATM PIN: 1234

----- ATM MENU -----
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit

Enter your choice: 3
Enter amount to withdraw: 2500

Withdrawal Successful
Remaining Balance = 7500
*/
