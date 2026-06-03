// code to find out the lcm of the two numbers
#include<iostream>
using namespace std;
int main() {
 // initialising the variables:
 int num1 , num2;
 //asking the user for the input:
 cout << "Enter the first number" << endl;
 cin>> num1;
 cout << "enter the second number" << endl;
 cin >> num2;
 // calculating the lcm of the two numbers:
for(int i=1 ; i<= num1*num2 ; i++) { // from this we will get the lcm because the loop is initialsing from 1 it will run upto the maximum of the two numbers which is represented by num1*num2 so that the lcm can be founded
    if(i%num1 == 0 && i%num2 == 0) {
        cout << "The LCM of " << num1 << " & " << num2 << " is " << i;
        break;
    }

}
return 0;
}