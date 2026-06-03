#include<iostream>
using namespace std;
int main() {
    // declaring the variables:
    int num;
    // asking for inputting
    cout << "enter the number to be checked:" << endl;
    cin >> num ;
    // now checkung the number is prime or not:
    bool prime = true; // initilasing the bool with true so that it can be checked further to test conditions:
    if(num<=1) {
        cout << " The number is not prime" << endl; }
        else {
        for(int i = 2; i <= num/2 ; i++) {
            if(num%i==0) {
                prime = false;
                break;
            }
            }
           if(prime) {
            cout << "The entered number is prime " << endl;
           }
           else {
            cout << "The given number is not prime" << endl;
           }
            }
        }

        
    

