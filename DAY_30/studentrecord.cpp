// Program to Create student record system using arrays and strings.
// Steps:
// Step 1: Declare arrays to store student names, roll numbers and marks.
// Step 2: Take the number of students as input.
// Step 3: Input the details of each student.
// Step 4: Display all student records using arrays.
// Step 5: Exit the program.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int rollNo[n];
    string name[n];
    float marks[n];

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> rollNo[i];

        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    cout << "\n------ Student Records ------\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number : " << rollNo[i] << endl;
        cout << "Name        : " << name[i] << endl;
        cout << "Marks       : " << marks[i] << endl;
    }

    return 0;
}

/*
Output:

Enter number of students: 2

Enter details of Student 1
Enter Roll Number: 101
Enter Name: Anmol
Enter Marks: 91.5

Enter details of Student 2
Enter Roll Number: 102
Enter Name: Rahul
Enter Marks: 87

------ Student Records ------

Student 1
Roll Number : 101
Name        : Anmol
Marks       : 91.5

Student 2
Roll Number : 102
Name        : Rahul
Marks       : 87
*/