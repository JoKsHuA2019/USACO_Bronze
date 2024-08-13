#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    int k = 1;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n/2; i++) {
        for (int j = i; j < n-i; j++) {
            arr[i][j] = k;
        }
        for (int j = i; j < n-i; j++) {
            arr[j][n-i-1] = k;
        }
        for (int j = i; j < n-i; j++) {
            arr[n-i-1][j] = k;
        }
        for (int j = i; j < n-i; j++) {
            arr[j][i] = k;
        }
        k++;
    }
    if (n%2 != 0) {
        arr[n/2][n/2] = k;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(2) << left << arr[i][j] << " ";
        }
        cout << endl;
    }
}