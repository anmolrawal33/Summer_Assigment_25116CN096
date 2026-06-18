// code to run out the binary search:
#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int> arr , int tar) {
    int st = 0 , end = arr.size() - 1;
    while(st<=end) {
       int mid = (st + (end-st)) / 2;
       if ( tar > arr[mid]) {
        st = mid + 1; }
    else if ( tar < arr[mid]){
        end = mid - 1;
    }   
else {
return mid;
    }
    }
    return -1;
}
int main() {
    vector<int> arr1 = {9,10,13,14,16,19,20};
    vector<int> arr2 = {-1,0,3,5,9,12};
    int tar2 = 0;
    int target = 20;
     int pos = BinarySearch( arr2 , tar2);
    cout << "The element founded at the above position"  << " "<< pos << endl;
    return 0;

}