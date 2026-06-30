// Program to create the mini employee management system:
// Steps:
// Step 1: Create a structure to store employee details.
// Step 2: Display a menu with Add, Display and Exit options.
// Step 3: Take employee details and store them in an array.
// Step 4: Display all employee records.
// Step 5: Exit the program.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

struct Employee
{
    int empId;
    string name;
    string department;
    float salary;
};

int main()
{
    Employee emp[100];
    int choice, n = 0;

    do
    {
        cout << "\n----- Mini Employee Management System -----\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
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

                cout << "Enter Department: ";
                cin >> emp[n].department;

                cout << "Enter Salary: ";
                cin >> emp[n].salary;

                n++;
                cout << "Employee Added Successfully.\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Employee Records Found.\n";
                }
                else
                {
                    cout << "\n----- Employee Records -----\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nEmployee " << i + 1 << endl;
                        cout << "Employee ID : " << emp[i].empId << endl;
                        cout << "Name        : " << emp[i].name << endl;
                        cout << "Department  : " << emp[i].department << endl;
                        cout << "Salary      : " << emp[i].salary << endl;
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

----- Mini Employee Management System -----
1. Add Employee
2. Display Employees
3. Exit
Enter your choice: 1

Enter Employee ID: 101
Enter Employee Name: Rahul
Enter Department: IT
Enter Salary: 50000
Employee Added Successfully.

----- Mini Employee Management System -----
1. Add Employee
2. Display Employees
3. Exit
Enter your choice: 2

----- Employee Records -----

Employee 1
Employee ID : 101
Name        : Rahul
Department  : IT
Salary      : 50000
*/
