// Program to generate mini project using arrays,strings.
// Steps:
// Step 1: Declare arrays to store student names and roll numbers.
// Step 2: Take the number of students as input.
// Step 3: Input student details.
// Step 4: Display all student details in HTML-like format.
// Step 5: Exit the program.
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    string name[n];
    string rollNo[n];

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter Name: ";
        cin >> name[i];

        cout << "Enter Roll Number: ";
        cin >> rollNo[i];
    }

    cout << "\n\n<html>\n";
    cout << "<head>\n";
    cout << "<title>Student Webpage</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";

    cout << "<h1>Student Details</h1>\n";

    for(int i = 0; i < n; i++)
    {
        cout << "<hr>\n";
        cout << "<p><b>Name:</b> " << name[i] << "</p>\n";
        cout << "<p><b>Roll No:</b> " << rollNo[i] << "</p>\n";
    }

    cout << "</body>\n";
    cout << "</html>\n";

    return 0;
}

/*
Output:

Enter number of students: 2

Enter Name: Anmol
Enter Roll Number: 25116CN096

Enter Name: Rahul
Enter Roll Number: 25116CN097

<html>
<head>
<title>Student Webpage</title>
</head>
<body>
<h1>Student Details</h1>

<hr>
<p><b>Name:</b> Anmol</p>
<p><b>Roll No:</b> 25116CN096</p>

<hr>
<p><b>Name:</b> Rahul</p>
<p><b>Roll No:</b> 25116CN097</p>

</body>
</html>
*/