// Program to create the student management system:
// Steps:
// Step 1: Create a structure to store student details.
// Step 2: Take student details as input.
// Step 3: Display the entered student details.
// Step 4: Use a menu to perform input and display operations.
// Step 5: Exit the program when the user chooses.

// Logic:
// Create a structure containing student information.
// Use a menu-driven program.
// Store the details entered by the user and display them whenever required.

// Time Complexity: O(n)

#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    Student s[100];
    int choice, n = 0;

    do
    {
        cout << "\n----- Student Record Management System -----\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display Student Records\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> s[n].rollNo;

                cout << "Enter Name: ";
                cin >> s[n].name;

                cout << "Enter Marks: ";
                cin >> s[n].marks;

                n++;
                cout << "Record Added Successfully.\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Records Found.\n";
                }
                else
                {
                    cout << "\nStudent Records:\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nRoll Number: " << s[i].rollNo;
                        cout << "\nName: " << s[i].name;
                        cout << "\nMarks: " << s[i].marks << endl;
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

----- Student Record Management System -----
1. Add Student Record
2. Display Student Records
3. Exit
Enter your choice: 1

Enter Roll Number: 101
Enter Name: Anmol
Enter Marks: 92.5
Record Added Successfully.

----- Student Record Management System -----
1. Add Student Record
2. Display Student Records
3. Exit
Enter your choice: 2

Student Records:

Roll Number: 101
Name: Anmol
Marks: 92.5
*/