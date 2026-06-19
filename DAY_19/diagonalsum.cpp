
// Program to find out sum of diagonal of matrix:
#include<iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) {
        return 0;
    }

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][i];
    }

    cout << sum;
    return 0;
}
