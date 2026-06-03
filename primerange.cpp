// program to print the range of the prime numbers
#include<iostream>
using namespace std;
int main() {
    // initialising the variables:
    int range;
    // asking the user to input the required range for the prime numbers
    cout << " Enter the range you want to get the prime numbers" << endl;
 cin >> range;
 for(int i =2 ; i<=range; i++){
    int count = 0;
        for( int j = 1 ; j<=i ;j++) {         //This loop is for condition check every number is divisible by 1 and just have to check that the number is divisivle by other no or not
        if( i%j == 0)
        count++;
    }
 
 if(count == 2) { // count 2 means the no once is divisible by 1 and itself only otherwise the count value will surely exceed by 2:
    cout << i << " "; }
 
    }
return 0;
}
