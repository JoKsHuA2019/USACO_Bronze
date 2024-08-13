#include <iostream>
using namespace std;

int main() {
    int n, m, ans = 0, num;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num;
            arr[i][j] = num;
            if (j > 0) {
                if (num == arr[i][j-1]) {
                    ans++;
                }
            }
            if (i > 0) {
                if (num == arr[i-1][j]) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}