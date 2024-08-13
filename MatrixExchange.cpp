#include <iostream>
using namespace std;

int main() {
    int n, m, q, x, y;
    cin >> n >> m >> q;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < q; i++) {
        cin >> x >> y;
        for (int i = 0; i < m; i++) {
            swap(arr[x-1][i], arr[y-1][i]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}