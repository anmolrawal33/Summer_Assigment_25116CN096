// program to calculate the GCD of two numbers
#include<iostream>
using namespace std;
int main() {
    // Declaring the variables:
    int num1 , num2;
    //asking the user for the input
    cout << "Enter The first number" << endl;
    cin >> num1;
    cout << "Enter the secnd number" << endl;
    cin >> num2;
    // calculating the gcd of two numbers:
    int gcd = 1; // 1 is common factor for all numbers
    for(int i = 1; i <= num1 && i <= num2 ; i++) {
        if(num1%i == 0 && num2%i == 0) {
            gcd = i;
        }
    }
    cout << "The GCD of " << num1 << "&" << "  "<< num2 << "is" << gcd;

return 0;
}
