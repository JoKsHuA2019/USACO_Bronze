#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            //cout << "i: " << i << ", j: " << j << ", n-1-i: " << n-1-i << ", n-1-j: " << n-1-j << endl;
            if (arr[i][j] == arr[n-1-i][n-1-j]) {
                ans++;
            }
        }
    }
    cout << ans/2 << endl;
}