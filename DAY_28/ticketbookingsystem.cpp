// Program to create the ticket booking system:
// Steps:
// Step 1: Create a structure to store ticket details.
// Step 2: Take passenger name, ticket number, destination and fare as input.
// Step 3: Store the ticket information.
// Step 4: Display the booked ticket details.
// Step 5: Exit the program.
// Time Complexity: O(1)

#include <iostream>
using namespace std;

struct Ticket
{
    int ticketNo;
    string passengerName;
    string destination;
    float fare;
};

int main()
{
    Ticket t;

    cout << "Enter Ticket Number: ";
    cin >> t.ticketNo;

    cout << "Enter Passenger Name: ";
    cin >> t.passengerName;

    cout << "Enter Destination: ";
    cin >> t.destination;

    cout << "Enter Ticket Fare: ";
    cin >> t.fare;

    cout << "\n----- Ticket Details -----\n";
    cout << "Ticket Number  : " << t.ticketNo << endl;
    cout << "Passenger Name : " << t.passengerName << endl;
    cout << "Destination    : " << t.destination << endl;
    cout << "Ticket Fare    : " << t.fare << endl;

    return 0;
}

/*
Output:

Enter Ticket Number: 1001
Enter Passenger Name: Anmol
Enter Destination: Delhi
Enter Ticket Fare: 450

----- Ticket Details -----
Ticket Number  : 1001
Passenger Name : Anmol
Destination    : Delhi
Ticket Fare    : 450
*/