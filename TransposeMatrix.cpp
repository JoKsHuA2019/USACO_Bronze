#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int tArr[m][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tArr[j][i];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << tArr[i][j] << " ";
        }
        cout << endl;
    }
}