// program to Find nth Fibonacci term.
//step 1 .initialise the variable fixed term 1 as t1 and term2 as t2 and next term as 0.
//step 2. ask the user to enter the number of terms and store it in variable
//step 3 print the first two terms of series as it is
//step 4 now calculate the next term by adding the previous two terms and store it in next term variable
//step 5 now update the value of t1 and t2 by assigning t2 to t1
#include <iostream>
using namespace std;
int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Enter the term number: ";
    cin >> n;
    if(n == 1) {
        cout << "The " << n << "start term of Fibonacci series is: " << t1;
        return 0;
    }
    if(n == 2) {
        cout << "The " << n << "end term of Fibonacci series is: " << t2;
        return 0;
    }
    for (int i = 3; i <= n; ++i) { //the loop will strt frm 3 here not 1 or 2 because it is included before
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << "The " << n << "rd term of Fibonacci series is: " << nextTerm;
    return 0;
}
//output
//Enter the term number: 10
//The 10rd term of Fibonacci series is: 34
