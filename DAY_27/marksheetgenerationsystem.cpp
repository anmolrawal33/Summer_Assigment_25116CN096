// Program to create the marksheet generation system:
// Steps:
// Step 1: Create a structure to store student details and marks.
// Step 2: Take student's name, roll number and marks of 5 subjects as input.
// Step 3: Calculate total marks, percentage and grade.
// Step 4: Display the complete marksheet.
// Step 5: Exit the program.
// Time Complexity: O(1)

#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main()
{
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Student Name: ";
    cin >> s.name;

    s.total = 0;

    cout << "Enter marks of 5 subjects:\n";

    for(int i = 0; i < 5; i++)
    {
        cin >> s.marks[i];
        s.total += s.marks[i];
    }

    s.percentage = s.total / 5.0;

    if(s.percentage >= 90)
        s.grade = 'A';
    else if(s.percentage >= 75)
        s.grade = 'B';
    else if(s.percentage >= 60)
        s.grade = 'C';
    else if(s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    cout << "\n----- Marksheet -----\n";
    cout << "Roll Number : " << s.rollNo << endl;
    cout << "Name        : " << s.name << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " Marks : " << s.marks[i] << endl;
    }

    cout << "Total Marks : " << s.total << endl;
    cout << "Percentage  : " << s.percentage << "%" << endl;
    cout << "Grade       : " << s.grade << endl;

    return 0;
}

/*
Output:

Enter Roll Number: 101
Enter Student Name: Anmol
Enter marks of 5 subjects:
90
85
78
88
95

----- Marksheet -----
Roll Number : 101
Name        : Anmol
Subject 1 Marks : 90
Subject 2 Marks : 85
Subject 3 Marks : 78
Subject 4 Marks : 88
Subject 5 Marks : 95
Total Marks : 436
Percentage  : 87.2%
Grade       : B
*/