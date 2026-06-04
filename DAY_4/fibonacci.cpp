// program to Generate Fibonacci series.
//step 1 .initialise the variable fixed term 1 as t1 and term2 as t2 and next term as 0.
//step 2. ask the user to enter the number of terms and store it in variable n
//step 3 print the first two terms of series as it is 
//step 4 now calculate the next term by adding the previous two terms and store it in next term variable
//step 5 now update the value of t1 and t2 by assigning t2 to t1
#include <iostream>
using namespace std;
int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}
//output
//Enter the number of terms: 10
//Fibonacci Series: 0, 1, 1, 2, 3
//, 5, 8, 13, 21, 34,