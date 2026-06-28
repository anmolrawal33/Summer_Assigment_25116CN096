// Program to create bank account management system:
// Steps:
// Step 1: Create a structure to store bank account details.
// Step 2: Take account number, account holder name and initial balance as input.
// Step 3: Display a menu for Deposit, Withdraw and Balance Inquiry.
// Step 4: Perform the selected operation and update the balance.
// Step 5: Display the updated account details and exit the program.
// Time Complexity: O(1)

#include <iostream>
using namespace std;

struct BankAccount
{
    int accountNo;
    string name;
    float balance;
};

int main()
{
    BankAccount b;
    int choice;
    float amount;

    cout << "Enter Account Number: ";
    cin >> b.accountNo;

    cout << "Enter Account Holder Name: ";
    cin >> b.name;

    cout << "Enter Initial Balance: ";
    cin >> b.balance;

    cout << "\n----- Bank Menu -----\n";
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Balance Inquiry\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            b.balance += amount;
            cout << "Amount Deposited Successfully.\n";
            break;

        case 2:
            cout << "Enter Withdrawal Amount: ";
            cin >> amount;

            if(amount <= b.balance)
            {
                b.balance -= amount;
                cout << "Amount Withdrawn Successfully.\n";
            }
            else
            {
                cout << "Insufficient Balance.\n";
            }
            break;

        case 3:
            cout << "Current Balance: " << b.balance << endl;
            break;

        default:
            cout << "Invalid Choice.\n";
    }

    cout << "\n----- Account Details -----\n";
    cout << "Account Number : " << b.accountNo << endl;
    cout << "Account Holder : " << b.name << endl;
    cout << "Balance        : " << b.balance << endl;

    return 0;
}

/*
Output:

Enter Account Number: 1001
Enter Account Holder Name: Anmol
Enter Initial Balance: 5000

----- Bank Menu -----
1. Deposit
2. Withdraw
3. Balance Inquiry
Enter your choice: 1
Enter Deposit Amount: 2000
Amount Deposited Successfully.

----- Account Details -----
Account Number : 1001
Account Holder : Anmol
Balance        : 7000
*/