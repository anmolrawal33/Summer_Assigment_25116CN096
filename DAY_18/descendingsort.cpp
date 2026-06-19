// Program to implement the bubble sort:
#include<iostream>
#include<vector>
using namespace std;
int BubbleSort (vector<int> &arr) {
    int n = arr.size();
    for( int i =0 ; i < (n-1); i++){
        for(int j =0 ; j<n-i-1; j++) {
            if (arr[j]<arr[j+1]){ // Ascending and descending sort can be controlledfrom here:
                swap(arr[j],arr[j+1]);
            }
        }
    }