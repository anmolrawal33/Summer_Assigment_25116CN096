// Program to create the salary management system:
// Steps:
// Step 1: Create a structure to store employee details.
// Step 2: Take employee ID, name and basic salary as input.
// Step 3: Calculate HRA, DA and Gross Salary.
// Step 4: Display the salary details.
// Step 5: Exit the program.
// Time Complexity: O(1)

#include <iostream>
using namespace std;

struct Employee
{
    int empId;
    string name;
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main()
{
    Employee emp;

    cout << "Enter Employee ID: ";
    cin >> emp.empId;

    cout << "Enter Employee Name: ";
    cin >> emp.name;

    cout << "Enter Basic Salary: ";
    cin >> emp.basicSalary;

    emp.hra = emp.basicSalary * 0.20;
    emp.da = emp.basicSalary * 0.10;
    emp.grossSalary = emp.basicSalary + emp.hra + emp.da;

    cout << "\n----- Salary Slip -----\n";
    cout << "Employee ID   : " << emp.empId << endl;
    cout << "Employee Name : " << emp.name << endl;
    cout << "Basic Salary  : " << emp.basicSalary << endl;
    cout << "HRA           : " << emp.hra << endl;
    cout << "DA            : " << emp.da << endl;
    cout << "Gross Salary  : " << emp.grossSalary << endl;

    return 0;
}

/*
Output:

Enter Employee ID: 101
Enter Employee Name: Rahul
Enter Basic Salary: 50000

----- Salary Slip -----
Employee ID   : 101
Employee Name : Rahul
Basic Salary  : 50000
HRA           : 10000
DA            : 5000
Gross Salary  : 65000
*/