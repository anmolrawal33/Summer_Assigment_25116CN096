// Program to implement the selection sort:
#include<iostream>
#include<vector>
using namespace std;
int SelectionSort(vector<int> &arr,int n){
    for(int i =0 ; i<(n-1) ; i++) {
        int smallestindx = i; // We have assumed the first element of the unsorted array as minm;
        for(int j = i+1 ; j<n ; j++){
            if(arr[j] < arr[smallestindx]) {
                j = smallestindx;
            }
        }
        swap(arr[i],arr[smallestindx]);
    }
    return 0;
}
int Printarr(vector<int> &arr){
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return -1;
}
int main() {
    vector<int> arr1 = {4,1,5,2,3};
    int n = 5;
SelectionSort(arr1,5);
cout << "The final array will be" << Printarr(arr1);
return 0;
}