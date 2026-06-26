// Program to create a voting eligiblity system:
// Steps:
// Step 1: Input the user's name and age.
// Step 2: Check whether the age is 18 or above.
// Step 3: If age is 18 or above, the user is eligible to vote.
// Step 4: Otherwise, the user is not eligible to vote.
// Step 5: Display the result.
// Time Complexity: O(1)

#include <iostream>
using namespace std;

int main()
{
    char name[100];
    int age;

    cout << "Enter your name: ";
    cin.getline(name, 100);

    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18)
    {
        cout << "\nHello " << name << "!" << endl;
        cout << "You are Eligible to Vote.";
    }
    else
    {
        cout << "\nHello " << name << "!" << endl;
        cout << "You are Not Eligible to Vote.";
    }

    return 0;
}

/*
Output 1:
Enter your name: Anmol
Enter your age: 20

Hello Anmol!
You are Eligible to Vote.

Output 2:
Enter your name: Rahul
Enter your age: 16

Hello Rahul!
You are Not Eligible to Vote.
*/