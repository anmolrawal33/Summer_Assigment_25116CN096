// Program to Create employee management system:
// Steps:
// Step 1: Create a structure to store employee details.
// Step 2: Take employee details as input.
// Step 3: Display the entered employee details.
// Step 4: Use a menu to perform input and display operations.
// Step 5: Exit the program when the user chooses.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

struct Employee
{
    int empId;
    string name;
    float salary;
};

int main()
{
    Employee emp[100];
    int choice, n = 0;

    do
    {
        cout << "\n----- Employee Management System -----\n";
        cout << "1. Add Employee Record\n";
        cout << "2. Display Employee Records\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> emp[n].empId;

                cout << "Enter Employee Name: ";
                cin >> emp[n].name;

                cout << "Enter Salary: ";
                cin >> emp[n].salary;

                n++;
                cout << "Employee Record Added Successfully.\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Employee Records Found.\n";
                }
                else
                {
                    cout << "\nEmployee Records:\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nEmployee ID: " << emp[i].empId;
                        cout << "\nName: " << emp[i].name;
                        cout << "\nSalary: " << emp[i].salary << endl;
                    }
                }
                break;

            case 3:
                cout << "Exiting Program...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 3);

    return 0;
}

/*
Output:

----- Employee Management System -----
1. Add Employee Record
2. Display Employee Records
3. Exit
Enter your choice: 1

Enter Employee ID: 101
Enter Employee Name: Rahul
Enter Salary: 45000
Employee Record Added Successfully.

----- Employee Management System -----
1. Add Employee Record
2. Display Employee Records
3. Exit
Enter your choice: 2

Employee Records:

Employee ID: 101
Name: Rahul
Salary: 45000
*/