#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << arr[i-j][j-1] << " ";
        }
        cout << endl;
    }
    int counter = 0;
    for (int i = n-1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << arr[n-j][j+counter] << " ";
        }
        counter++;
        cout << endl;
    }
}